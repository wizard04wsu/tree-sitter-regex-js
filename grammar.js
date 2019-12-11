const quantifierRule = prefix => $ => seq(
	prefix($),
	optional(alias('?', $.lazy)),
);

const groupRule = identifier => $ => seq(
	$.group_begin,
	identifier($),
	optional(choice(
		$.pattern,
		$.disjunction,
	)),
	$.group_end,
);

module.exports = grammar({
	name: 'regex',
	
	externals: $ => [
		$.null_character,	// \0 \00  (neither followed by 1-7)  \000
	],
	
	extras: $ => [],
	
	conflicts: $ => [
		//[ $._backreference ],
		//[ $._backreference, $._invalid__backreference ],
		[ $._named_backreference, $._invalid__backreference ],
		//[ $._backreference, $._named_backreference ],
		[ $.group_name ],
		[ $.group_name, $.named_capturing_group ],
	],
	
	inline: $ => [
		$.pattern,
		$.disjunction,
		$.unit,
		$.quantifier,
		$._invalid__quantifier,
		$._backreference,
		//$._invalid__backreference,
		$._invalid__group_name,
		$.set_range_atom,
		$.set_atom,
		$.character_escape,
		$._invalid__character_escape,
		//$._invalid__in_set__character_escape,
		$._unicode_escape,
		//$._invalid__unicode_escape,
		//$._invalid__hexadecimal_escape,
		$._invalid__control_letter_escape,
		$._invalid__in_set__control_letter_escape,
	],
	
	rules: {
		regex: $ => choice(
			$.pattern,
			$.disjunction,
		),
		
		pattern: $ => repeat1(seq(
			$.unit,
			optional(choice(
				seq(
					$.quantifier,
					optional($._invalid__secondary_quantifier),
				),
				$._invalid__quantifier,
			)),
		)),
		
		disjunction: $ => seq(
			optional($.pattern),
			repeat1(
				seq(
					$.disjunction_delimiter,
					optional($.pattern),
				),
			),
		),
		disjunction_delimiter: $ => '|',
		
		unit: $ => choice(
			$.non_syntax_character,						// NOT: ^ $ \ . * + ? ( ) [ ] { } | / or newline
			$._syntax_character,
			$.any_character,							// .
			$.start_assertion,							// ^
			$.end_assertion,							// $
			$.boundary_assertion,						// \b
			$.non_boundary_assertion,					// \B
			$.character_escape,							// \f \n \r \t \v \c__ \x__ \u__ \0 \00 \000 \0__ \__
			$._invalid__character_escape,
			$.control_letter_escape,
			$._invalid__control_letter_escape,
			$.identity_escape,
			$.character_class_escape,					// \d \D \s \S \w \W
			$._backreference,							// \1 ... \9 \1__ ... \9__ \k<__>
			//alias($._invalid__backreference, $.identity_escape),
			alias($.character_set, $.character_class),	// [__] [^__]
			$.anonymous_capturing_group,				// (__)
			$.non_capturing_group,						// (?:__)
			$.named_capturing_group,					// (?<__>__)
			$.lookahead_assertion,						// (?=__)
			$.negative_lookahead_assertion,				// (?!__)
			$.lookbehind_assertion,						// (?<=__)
			$.negative_lookbehind_assertion,			// (?<!__)
		),
		
		
		//#####  quantifiers  #####
		
		
		quantifier: $ => choice(
			$.zero_or_more,		// * *?
			$.one_or_more,		// + +?
			$.optional,			// ? ??
			$.count_quantifier,	// {__} {__,} {__,__} {__}? {__,}? {__,__}?
		),
		_invalid__quantifier: $ => choice(
			/\{\}/,
			/\{,/,
			/\{[0-9]*[^0-9,}]/,
			/\{[0-9]+,[0-9]*[^0-9}]/,
		),
		_invalid__secondary_quantifier: $ => /[?*+{]/,
		
		
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
		
		
		_backreference: $ => choice(
			alias($.numeric_backreference, $.backreference),
			alias($.named_backreference, $.backreference),
			alias($.invalid__backreference, $.identity_escape),
		),
		numeric_backreference: $ => seq(
			'\\',
			/[1-9][0-9]*/
		),
		named_backreference: $ => seq(
			'\\',
			'k',
			'<',
			$.group_name,
			'>',
		),
		invalid__backreference: $ => seq(
			alias('\\', $.escape_operator),
			'k',
			optional('<'),
		),
		
		
		//#####  groups  #####
		
		
		named_capturing_group: groupRule($ => prec.right(choice(
			alias($._named_capturing_group, $.named_capturing_group_identifier),
			/*seq(
				'?<',
				optional($._invalid__group_name),
			),*/
		))),
		_named_capturing_group: $ => seq(
			'?<',
			$.group_name,
			'>',
		),
		
		//TODO: Tree-sitter doesn't support Unicode property escapes, so I can't reasonably make this match the spec.
		// https://tc39.es/proposal-regexp-named-groups/
		// http://www.unicode.org/reports/tr31/#Table_Lexical_Classes_for_Identifiers
		group_name: $ => seq(
			choice(
				///[\p{ID_Start}$_]/,
				/[a-zA-Z0-9_$]/,
				$.unicode_escape,
			),
			repeat(choice(
				///[\p{ID_Continue}$_\u200C\u200D]/,
				/[a-zA-Z0-9$_]/,
				$.unicode_escape,
			)),
		),
		_invalid__group_name: $ => choice(
			///[^\p{ID_Start}$_]/,
			/[^a-zA-Z0-9_$>]/,
			seq(
				//starting character
				choice(
					///[\p{ID_Start}$_]/,
					/[a-zA-Z0-9_$]/,
					$._unicode_escape,
				),
				//valid characters and escapes
				repeat(choice(
					///[\p{ID_Continue}$_\u200C\u200D]/,
					/[a-zA-Z0-9$_]/,
					$._unicode_escape,
				)),
				//invalid character or escape
				choice(
					///[^\p{ID_Continue}$_\u200C\u200D>]/,
					/[^a-zA-Z0-9$_>]/,
					/\\[cxufnrtv]/,
				),
			),
		),
		
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
					alias($.set_range, $.character_range),
					seq(
						$.set_atom,
						optional(alias('-', $.non_syntax_character)),	//otherwise, a hyphen at the end of the character set would be an error (e.g., `[a-]`) - TODO: why is it an error???
					),
				)),
			),
			alias(']', $.set_end),
		),
		
		set_range: $ => seq(
			$.set_range_atom,
			alias('-', $.range_delimiter),
			$.set_range_atom,
		),
		
		set_range_atom: $ => choice(
			prec(1, choice(
				$.character_escape,	
				alias('\\b', $.special_escape),
				$._invalid__in_set__character_escape,
			)),
			$.identity_escape,
			alias($.set_identity_escape, $.identity_escape),	// \-
			//alias(/[^\\\]]/, $.non_syntax_character),	// NOT: \ ]
			alias($.set_non_syntax_character, $.non_syntax_character),	// NOT: \ ]
		),
		
		set_atom: $ => choice(
			prec(1, choice(
				$.character_escape,
				alias($.set_octal_escape, $.octal_escape),	// \1 ... \7
				alias('\\b', $.special_escape),
				$._invalid__in_set__character_escape,
				$.control_letter_escape,
				$._invalid__in_set__control_letter_escape,
				$.character_class_escape,
			)),
			$.identity_escape,
			alias($.set_identity_escape, $.identity_escape),	// \8 \9
			//alias(/[^\\\]]/, $.non_syntax_character),	// NOT: \ ]
			alias($.set_non_syntax_character, $.non_syntax_character),	// NOT: \ ]
		),
		//TODO: There is an undetected conflict between $.control_letter_escape and $._invalid__in_set__control_letter_escape, where /[\ca]/ and /[\c9]/ both resolve to $._invalid__in_set__control_letter_escape (unless it's commented out). I have no clue why, but having $.set_non_syntax_character (outside of $.set_atom) and the unused rule $.__junk is the only way I've come across to resolve the conflict. $.__junk must be an exact copy of $.control_letter_escape. $.set_non_syntax_character must be below $.__junk in the code.
		__junk: $ => seq(
			'\\',
			'c',
			alias(/[a-zA-Z]/, $.control_letter_code),
		),
		set_non_syntax_character: $ => /[^\\\]]/,
		
		
		//#####  character class escapes  #####
		
		
		character_class_escape: $ => /\\[dDsSwW]/,
		
		
		//#####  character escapes  #####
		
		
		character_escape: $ => choice(
			$.null_character,
			$.special_escape,
			//$.control_letter_escape,
			$.octal_escape,
			$.hexadecimal_escape,
			$.unicode_escape,
		),
		_invalid__character_escape: $ => choice(
			//$._invalid__control_letter_escape,
			alias($._invalid__hexadecimal_escape, $.identity_escape),
			alias($._invalid__unicode_escape, $.identity_escape),
		),
		_invalid__in_set__character_escape: $ => choice(
			//$._invalid__in_set__control_letter_escape,
			$._invalid__hexadecimal_escape,
			alias($._invalid__unicode_escape, $.identity_escape),
		),
		
		//escapes that remove any special meaning of a character
		identity_escape: $ => seq(
			alias('\\', $.escape_operator),
			/[^cxudDsSwWbfnrtv0-9k]/,
		),
		set_identity_escape: $ => seq(
			alias('\\', $.escape_operator),
			/[89]/,
		),
			
		octal_escape: $ => seq(
			'\\0',
			alias(/0?[1-7]|[1-7][0-7]/, $.octal_code),
		),
		set_octal_escape: $ => seq(
			'\\',
			alias(/[1-7]/, $.octal_code),
		),
		
		unicode_escape: $ => prec(2, seq(
			'\\',
			'u',
			alias(/[a-fA-F0-9]{4}/, $.unicode_code),
		)),
		_unicode_escape: $ => prec(1, seq(
			'\\',
			'u',
			/[a-fA-F0-9]{4}/,
		)),
		_invalid__unicode_escape: $ => seq(
			alias($._invalid__unicode_escape_2, $.identity_escape),
			optional(/[a-fA-F0-9]{4}/),
		),
		_invalid__unicode_escape_2: $ => seq(
			alias('\\', $.escape_operator),
			'u',
		),
		
		hexadecimal_escape: $ => prec(2, seq(
			'\\',
			'x',
			alias(/[a-fA-F0-9]{2}/, $.hexadecimal_code),
		)),
		_invalid__hexadecimal_escape: $ => seq(
			alias($._invalid__hexadecimal_escape_2, $.identity_escape),
			optional(/[a-fA-F0-9]{2}/),
		),
		_invalid__hexadecimal_escape_2: $ => seq(
			alias('\\', $.escape_operator),
			'x',
		),
		
		control_letter_escape: $ => seq(
			'\\',
			'c',
			alias(/[a-zA-Z]/, $.control_letter_code),
		),
		_invalid__control_letter_escape: $ => seq(
			alias('\\', $.non_syntax_character),
			alias('c', $.non_syntax_character),
		),
		_invalid__in_set__control_letter_escape: $ => seq(
			alias('\\', $.non_syntax_character),
			alias('c', $.non_syntax_character),
		),
		
		special_escape: $ => /\\[fnrtv]/,
		
		
		//#####  boundary assertions  #####
		
		
		start_assertion: $ => '^',
		end_assertion: $ => '$',
		boundary_assertion: $ => '\\b',
		non_boundary_assertion: $ => '\\B',
		
		
		//#####  characters  #####
		
		
		any_character: $ => '.',
		
		//string of non-syntax characters
		non_syntax_character: $ => /[^\^$\\.*+?()\[\]{}|\/\n]/,	// NOT: ^ $ \ . * + ? ( ) [ ] { } | / or newline
		
		_syntax_character: $ => /[\^$\\.*+?()\[\]{}|\/]/,
	}
});
