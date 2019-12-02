const quantifierRule = prefix => $ => seq(
	prefix($),
	optional(alias('?', $.lazy)),
)

const groupRule = identifier => $ => seq(
	$.group_begin,
	identifier($),
	optional($.pattern),
	$.group_end,
)

const SYNTAX_CHARS = [
	...'^$\\.*+?()[]{}|'
]

const SYNTAX_CHARS_ESCAPED = SYNTAX_CHARS.map(
	char => `\\${char}`
).join('')

module.exports = grammar({
	name: 'regex',
	
	externals: $ => [
		$.null_character,	// \0 \00  (neither followed by 1-7)  \000
	],
	
	extras: $ => [],
	
	conflicts: $ => [
		[ $.unicode_escape, $._escape_operator ],
		[ $.hexadecimal_escape, $._escape_operator ],
		[ $.control_letter_escape, $._escape_operator ]
	],
	
	inline: $ => [
		$.pattern,
		$.unit,
		$.quantifier,
		$.set_atom,
		$.character_escape,
		$.unicode_escape_or_fallback,
		$.hexadecimal_escape_or_fallback,
		$.control_letter_escape_or_fallback,
	],
	
	rules: {
		regex: $ => $.pattern,
		
		pattern: $ => seq(
			repeat1(seq(
				$.unit,
				optional($.quantifier),
			)),
			optional($.disjunction),
		),
		
		disjunction: $ => seq(
			$.disjunction_delimiter,
			optional($.pattern),
		),
		disjunction_delimiter: $ => '|',
		
		unit: $ => choice(
			$.non_syntax_characters,					// NOT: ^ $ \ . * + ? ( ) [ ] { } | / or newline
			$.any_character,							// .
			$.start_assertion,							// ^
			$.end_assertion,							// $
			$.boundary_assertion,						// \b
			$.non_boundary_assertion,					// \B
			$.character_escape,							// \f \n \r \t \v \c__ \x__ \u__ \0 \00 \000 \0__ \__ or invalid escapes \c \x \u
			$.character_class_escape,					// \d \D \s \S \w \W
			$.backreference,						// \1 ... \9 \1__ ... \9__ \k<__>
			alias($.character_set, $.character_class),	// [__] [^__]
			$.anonymous_capturing_group,				// (__)
			$.non_capturing_group,						// (?:__)
			$.named_capturing_group,					// (?<__>__)
			$.lookahead_assertion,						// (?=__)
			$.negative_lookahead_assertion,				// (?!__)
			$.lookbehind_assertion,						// (?<=__)
			$.negative_lookbehind_assertion,				// (?<!__)
		),
		
		
		//#####  quantifiers  #####
		
		
		quantifier: $ => choice(
			$.zero_or_more,		// * *?
			$.one_or_more,		// + +?
			$.optional,			// ? ??
			$.count_quantifier,	// {__} {__,} {__,__} {__}? {__,}? {__,__}?
		),
		
		
		zero_or_more: quantifierRule($ => '*'),
		one_or_more: quantifierRule($ => '+'),
		optional: quantifierRule($ => '?'),
		count_quantifier: quantifierRule($ => seq(
			'{',
			seq(
				alias(/[0-9]+/, $.count_quantifier_value),
				optional(seq(
					alias(',', $.count_quantifier_delimiter),
					optional(alias(/[0-9]+/, $.count_quantifier_value)),
				)),
			),
			'}',
		)),
		
		
		//#####  lookaround assertions  #####
		
		
		lookahead_assertion: groupRule($ => alias('?=', $.lookahead_identifier)),
		negative_lookahead_assertion: groupRule($ => alias('?!', $.negative_lookahead_identifier)),
		lookbehind_assertion: groupRule($ => alias('?<=', $.lookbehind_identifier)),
		negative_lookbehind_assertion: groupRule($ => alias('?<!', $.negative_lookbehind_identifier)),
		
		
		//#####  backreferences  #####
		
		
		backreference: $ => choice(
			seq('\\', /[1-9][0-9]*/),
			seq('\\k<', $.group_name, '>'),
		),
		
		
		//#####  groups  #####
		
		
		named_capturing_group: groupRule($ => $.named_capturing_group_identifier),
		named_capturing_group_identifier: $ => seq(
			'?<',
			$.group_name,
			'>',
		),
		
		// TODO: This seems to match what Chrome allows for group names, but make this match the spec.
		// https://tc39.es/proposal-regexp-named-groups/
		// http://www.unicode.org/reports/tr31/#Table_Lexical_Classes_for_Identifiers
		group_name: $ => seq(
			choice(
				$._name_first_char,
				$.unicode_escape,
			),
			repeat(
				choice(
					$._name_additional_char,
					$.unicode_escape,
				),
			),
		),
		_name_first_char: $ => /[a-zA-Z0-9_$]/,
		_name_additional_char: $ => /[a-zA-Z0-9_$\u200C\u200D]/,
		
		non_capturing_group: groupRule($ => alias('?:', $.non_capturing_group_identifier)),
		
		anonymous_capturing_group: groupRule($ => blank()),
		
		group_begin: $ => '(',
		group_end: $ => ')',
		
		
		//#####  character sets  #####
		
		
		character_set: $ => seq(
			alias('[', $.set_begin),
			optional(alias('^', $.set_negation)),
			repeat(
				prec.right(choice(
					$.character_range,
					seq(
						$.set_atom,
						'-',
					),
					$.set_atom,
					'-',
				)),
			),
			alias(']', $.set_end),
		),
		
		character_range: $ => seq(
			choice($.set_atom, '-'),
			alias('-', $.range_delimiter),
			choice($.set_atom, '-'),
		),
		
		set_atom: $ => choice(
			alias($._non_syntax_set_characters, $.non_syntax_characters),
			$.character_escape,
			alias('\\b', $.special_escape),
			$.character_class_escape,
			alias($.set_octal_escape, $.octal_escape),
			alias($.set_identity_escape, $.identity_escape),
		),
		
		set_octal_escape: $ => seq(
			'\\',
			alias(/[1-7]/, $.octal_code),
		),
		set_identity_escape: $ => seq(
			alias($._escape_operator, $.escape_operator),
			/[89]/,
		),
		
		//string of non-syntax characters in a character set
		_non_syntax_set_characters: $ => /[^\\\]\-]+/,	// NOT: \ ] -
			
		
		//#####  character class escapes  #####
		
		
		character_class_escape: $ => /\\[dDsSwW]/,
		
		
		//#####  character escapes  #####
		
		
		character_escape: $ => choice(
			$.special_escape,
			$.control_letter_escape_or_fallback,
			$.hexadecimal_escape_or_fallback,
			$.unicode_escape_or_fallback,
			$.octal_escape,
			$.identity_escape,
			$.null_character,
		),
		
		//escapes that remove any special meaning of a character
		identity_escape: $ => seq(
			alias($._escape_operator, $.escape_operator),
			/[^cxudDsSwWbfnrtv0-9]/,
		),
		
		octal_escape: $ => seq(
			'\\0',
			alias(/0?[1-7]|[1-7][0-7]/, $.octal_code),
		),
		
		unicode_escape_or_fallback: $ => choice(
			$.unicode_escape,
			$.invalid_unicode_escape,
		),
		unicode_escape: $ => seq(
			'\\',
			'u',
			alias(/[a-fA-F0-9]{4}/, $.unicode_code),
		),
		invalid_unicode_escape: $ => seq(
			alias($._escape_operator, $.escape_operator),
			'u',
		),
		
		hexadecimal_escape_or_fallback: $ => choice(
			$.hexadecimal_escape,
			$.invalid_hexadecimal_escape,
		),
		hexadecimal_escape: $ => seq(
			'\\',
			'x',
			alias(/[a-fA-F0-9]{2}/, $.hexadecimal_code),
		),
		invalid_hexadecimal_escape: $ => seq(
			alias($._escape_operator, $.escape_operator),
			'x',
		),
		
		control_letter_escape_or_fallback: $ => choice(
			$.control_letter_escape,
			$.invalid_control_letter_escape,
		),
		control_letter_escape: $ => seq(
			'\\',
			'c',
			alias(/[a-zA-Z]/, $.control_letter_code),
		),
		invalid_control_letter_escape: $ => seq(
			$._escape_operator,	//TODO: I don't understand why just putting '\\' here makes this have priority over $.control_letter_escape when inside a character set
			'c',
		),
		
		special_escape: $ => /\\[fnrtv]/,
		
		_escape_operator: $ => '\\',
		
		
		//#####  boundary assertions  #####
		
		
		start_assertion: $ => '^',
		end_assertion: $ => '$',
		boundary_assertion: $ => '\\b',
		non_boundary_assertion: $ => '\\B',
		
		
		//#####  characters  #####
		
		
		any_character: $ => '.',
		
		//string of non-syntax characters
		non_syntax_characters: $ => /[^\^$\\.*+?()\[\]{}|\/\n]+/	// NOT: ^ $ \ . * + ? ( ) [ ] { } | / or newline
	}
})
