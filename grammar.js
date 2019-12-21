const quantifierRule = quantifier => $ => seq(
	quantifier($),
	optional(alias(/\?/, $.lazy)),
);

const groupRule = identifier => $ => prec(1, seq(
	$.group_begin,
	identifier($),
	optional(choice(
		$.$pattern,
		$.$disjunction,
	)),
	$.group_end,
));

module.exports = grammar({
	name: 'regex',
	
	externals: $ => [
		$.null_character,			// \0 \00  (neither followed by 1-7)  \000
		$._has_group_name,			// (no content) determines if a named capturing group or named backreference includes a valid group name
		$._begin_count_quantifier,	// matches the left curly brace of a count quantifier
	],
	
	extras: $ => [],
	
	conflicts: $ => [
		[ $.character_set, $.character_range, ],
		[ $.anonymous_capturing_group, ],
		[ $.$invalid_group, ],
		[ $.named_backreference, $.$nonconforming_named_backreference, ],
		[ $.optional, ],
		[ $.zero_or_more, ],
		[ $.one_or_more, ],
		[ $.count_quantifier, ],
	],
	
	inline: $ => [
		$.$disjunction,
		$.$pattern,
		$.$quantifier,
		$.$invalid_extra_quantifier,
		$.$repeatable_symbol,
		$.$backreference,
		$.$named_backreference_prefix,
		$.$group_or_lookaround,
		$.$named_capturing_group_identifier_prefix,
		$.$character_set,
		$.$boundary_assertion,
		$.$character_range_unit,
		$.$p_character_escape,
		$.$s_character_escape,
	],
	
	rules: {
		
		
		regex: $ => choice(
			$.$pattern,
			$.$disjunction,
		),
		
		
		$disjunction: $ => seq(
			optional($.$pattern),
			repeat1(
				seq(
					$.disjunction_delimiter,
					optional($.$pattern),
				),
			),
		),
		
		
		$pattern: $ => seq(
			optional(
				alias($.$quantifier, $.invalid),
			),
			repeat1(
				choice(
					$.$boundary_assertion,
					seq(
						$.$repeatable_symbol,
						optional($.$quantifier),
					),
				),
			),
		),
		
		
		$repeatable_symbol: $ => choice(
			$.$backreference,											// \1 ... \9 \1__ ... \9__ \k<__>   nonconforming: \k
			$.$group_or_lookaround,										// (__) (?<__>__) (?:__) (?=__) (?!__) (?<=__) (?<!__)   invalid: ( (? )
			$.$character_set,											// [__] [^__]   invalid: [ ]
			$.character_class_escape,									// \d \D \s \S \w \W
			$.$p_character_escape,										// \f \n \r \t \v \c__ \x__ \u__ \0 \00 \000 \0__ \__   nonconforming: \c \x \u
			$.any_character,											// .
			alias(/[{}]/, $.non_syntax),
			alias($._p_non_syntax_character, $.non_syntax),				// NOT: ^ $ \ . * + ? ( ) [ ] { } | / or newline
		),
		
		
		//#####  quantifiers  #####
		
		
		$quantifier: $ => prec.right(seq(
			choice(
				$.optional,											// ? ??
				$.zero_or_more,										// * *?
				$.one_or_more,										// + +?
				$.count_quantifier,									// {__} {__,} {__,__} {__}? {__,}? {__,__}?
			),
			repeat(alias($.$invalid_extra_quantifier, $.invalid)),
		)),
		
		optional: quantifierRule($ => /\?/),
		zero_or_more: quantifierRule($ => /\*/),
		one_or_more: quantifierRule($ => /\+/),
		count_quantifier: quantifierRule($ => seq(
			$._begin_count_quantifier,
			seq(
				alias(/[0-9]+/, $.count_quantifier_value),
				optional(seq(
					alias(/,/, $.count_quantifier_delimiter),
					optional(alias(/[0-9]+/, $.count_quantifier_value)),
				)),
			),
			/\}/,
		)),
		
		$invalid_extra_quantifier: $ => choice(
			/[?*+]/,
			seq(
				$._begin_count_quantifier,
				/[0-9]+(,[0-9]*)?\}/,
			),
		),
		
		
		//#####  backreferences  #####
		
		
		$backreference: $ => choice(
			$.numeric_backreference,
			$.named_backreference,
			alias($.$nonconforming_named_backreference, $.identity_escape),
		),
		
		numeric_backreference: $ => seq(
			$._backslash,
			/[1-9][0-9]*/,
		),
		
		named_backreference: $ => seq(
			$.$named_backreference_prefix,	// \k
			/</,
			$.group_name,
			/>/,
		),
		$named_backreference_prefix: $ => seq(
			$._backslash,
			/k/,
			$._has_group_name,		// (no content) matches if the backreference includes a valid group name
		),
		$nonconforming_named_backreference: $ => seq(
			alias($._backslash, $.escape_operator),
			/k/,
		),
		
		
		//#####  groups and lookaround assertions  #####
		
		
		$group_or_lookaround: $ => choice(
			$.lookahead_assertion,													// (?=__)
			$.negative_lookahead_assertion,											// (?!__)
			$.lookbehind_assertion,													// (?<=__)
			$.negative_lookbehind_assertion,										// (?<!__)
			$.non_capturing_group,													// (?:__)
			$.named_capturing_group,												// (?<__>__)
			$.anonymous_capturing_group,											// (__)
			$.$invalid_group,
		),
		
		
		lookahead_assertion: groupRule($ => alias(/\?=/, $.lookahead_identifier)),
		negative_lookahead_assertion: groupRule($ => alias(/\?!/, $.negative_lookahead_identifier)),
		lookbehind_assertion: groupRule($ => alias(/\?<=/, $.lookbehind_identifier)),
		negative_lookbehind_assertion: groupRule($ => alias(/\?<!/, $.negative_lookbehind_identifier)),
		
		
		non_capturing_group: groupRule($ => alias(/\?:/, $.non_capturing_group_identifier)),
		
		
		named_capturing_group: groupRule($ => $.named_capturing_group_identifier),
		named_capturing_group_identifier: $ => seq(
			$.$named_capturing_group_identifier_prefix,	// ?
			/</,
			$.group_name,
			/>/,
		),
		$named_capturing_group_identifier_prefix: $ => seq(
			/\?/,
			$._has_group_name,		// (no content) matches if the identifier includes a valid group name
		),
		
		
		//TODO: Tree-sitter doesn't support Unicode property escapes, so I can't reasonably make this match the spec.
		// https://tc39.es/proposal-regexp-named-groups/
		// http://www.unicode.org/reports/tr31/#Table_Lexical_Classes_for_Identifiers
		/*group_name: $ => seq(
			choice(
				/[\p{ID_Start}$_]/,
				$.unicode_escape,
			),
			repeat(
				choice(
					/[\p{ID_Continue}$_\u200C\u200D]/,
					$.unicode_escape,
				)
			),
		),*/
		group_name: $ => prec.right(repeat1(
			choice(
				/[a-zA-Z0-9$_]/,
				$.unicode_escape,
			),
		)),
		
		
		anonymous_capturing_group: groupRule($ => blank()),
		
		
		$invalid_group: $ => choice(
			prec.left(1, seq(
				alias($.group_begin, $.invalid),
				alias(/\?/, $.invalid),
				optional(choice(
					$.$pattern,
					$.$disjunction,
				)),
				optional(alias($.group_end, $.invalid)),
			)),
			alias($.group_end, $.invalid),
		),
		
		
		group_begin: $ => /\(/,
		group_end: $ => /\)/,
		
		
		//#####  boundary assertions  #####
		
		
		$boundary_assertion: $ => choice(
			$.boundary_assertion,		// \b
			$.non_boundary_assertion,	// \B
			$.start_assertion,			// ^
			$.end_assertion,			// $
		),
		
		
		boundary_assertion: $ => seq(
			$._backslash, /b/,
		),
		non_boundary_assertion: $ => seq(
			$._backslash, /B/,
		),
		
		
		start_assertion: $ => /\^/,
		end_assertion: $ => /\$/,
		
		
		//#####  character sets  #####
		
		
		$character_set: $ => choice(
			alias($.character_set, $.character_class),				//renamed to match pre-existing themes
			alias($._invalid_character_set_delimiter, $.invalid),	// invalid [ ]
		),
		
		character_set: $ => seq(
			alias(/\[/, $.set_begin),
			optional(alias(/\^/, $.set_negation)),
			repeat(
				choice(
					$.character_range,									// __-__
					$.character_class_escape,							// \d \D \s \S \w \W
					$.$s_character_escape,								// \f \n \r \t \v \b \c__ \x__ \u__ \0 \00 \000 \0__ \__ \c \x \u
					alias($._dash, $.non_syntax),						// -
					alias($._s_non_syntax_character, $.non_syntax),		// NOT: - \ ] or newline
				),
			),
			alias(/\]/, $.set_end),
		),
		
		//make sure this is below $.character_set in the code
		_invalid_character_set_delimiter: $ => /[\[\]]/,
		
		
		//#####  character ranges  #####
		
		
		character_range: $ => prec.dynamic(1, seq(
			$.$character_range_unit,
			alias($._dash, $.range_delimiter),
			$.$character_range_unit,
		)),
		
		$character_range_unit: $ => choice(
			$.$s_character_escape,								// \f \n \r \t \v \b \c__ \x__ \u__ \0 \00 \000 \0__ \__ \c \x \u
			alias($._dash, $.non_syntax),						// -
			alias($._s_non_syntax_character, $.non_syntax),		// NOT: - \ ] or newline
		),
		
		
		//#####  character class escapes  #####
		
		
		character_class_escape: $ => seq(
			$._backslash,
      /[dDsSwW]/,
		),
		
		
		//#####  character escapes  #####
		
		
		$p_character_escape: $ => prec.left(choice(
			$.null_character,
			alias($.$p_special_escape, $.special_escape),
			$.control_letter_escape,
			$.octal_escape,
			$.hexadecimal_escape,
			$.unicode_escape,
			alias($.$nonconforming_control_letter_escape, $.identity_escape),
			alias($.$nonconforming_hexadecimal_escape, $.identity_escape),
			alias($.$nonconforming_unicode_escape, $.identity_escape),
			alias($.$p_identity_escape, $.identity_escape),
		)),
		$s_character_escape: $ => choice(
			$.null_character,
			alias($.$s_special_escape, $.special_escape),
			$.control_letter_escape,
			$.octal_escape,
			$.hexadecimal_escape,
			$.unicode_escape,
			alias($.$nonconforming_control_letter_escape, $.identity_escape),
			alias($.$nonconforming_hexadecimal_escape, $.identity_escape),
			alias($.$nonconforming_unicode_escape, $.identity_escape),
			alias($.$s_identity_escape, $.identity_escape),
		),
		
		
		$p_special_escape: $ => seq(
			$._backslash,
      /[fnrtv]/,
		),
		$s_special_escape: $ => seq(
			$._backslash,
      /[fnrtvb]/,
		),
		
		
		control_letter_escape: $ => seq(
			$._backslash,
			/c/,
			alias(/[a-zA-Z]/, $.control_letter_code),
		),
		$nonconforming_control_letter_escape: $ => seq(
			alias($._backslash, $.escape_operator),
			/c/,
		),
		
		
		octal_escape: $ => seq(
			$._backslash,
			/0/,
			alias(/0?[1-7]|[1-7][0-7]/, $.octal_code),
		),
		
		
		hexadecimal_escape: $ => seq(
			$._backslash,
			/x/,
			alias(/[a-fA-F0-9]{2}/, $.hexadecimal_code),
		),
		$nonconforming_hexadecimal_escape: $ => seq(
			alias($._backslash, $.escape_operator),
			/x/,
		),
		
		
		unicode_escape: $ => seq(
			$._backslash,
			/u/,
			alias(/[a-fA-F0-9]{4}/, $.unicode_code),
		),
		$nonconforming_unicode_escape: $ => seq(
			alias($._backslash, $.escape_operator),
			/u/,
		),
		
		
		//#####  identity escapes  #####
		
		
		$p_identity_escape: $ => seq(
			alias($._backslash, $.escape_operator),
			/[^dDsSwWbBfnrtvcxu0-9k]/,
		),
		$s_identity_escape: $ => seq(
			alias($._backslash, $.escape_operator),
			/[^dDsSwWbfnrtvcxu0]/,
		),
		
		
		//#####  characters  #####
		
		
		_backslash: $ => /\\/,
		_dash: $ => /-/,
		
		
		disjunction_delimiter: $ => /\|/,
		
		
		any_character: $ => /\./,
		
		
		_p_non_syntax_character: $ => /[^\^$\\.*+?()\[\]{}|\/\n]/,	// NOT: ^ $ \ . * + ? ( ) [ ] { } | / or newline
		_s_non_syntax_character: $ => /[^-\\\]\n]/,			// NOT: - \ ] or newline
		
	}
});
