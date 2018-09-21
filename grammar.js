module.exports = grammar({
  name: 'TAGML',
  extras: $ => [/\s+/],

  rules: {
    document: $ => repeat($._chunk),

    _chunk: $ => choice(
      $.start_tag,
      $.end_tag,
      $.milestone_tag,
      $.text_variation,
      $.text
    ),

    start_tag:  $ => seq(
      $._open_start_markup,
      $.name,
      optional($.start_layer_suffix),
      repeat(seq(/\s+/, $.annotation)),
      $._close_start_markup
    ),
    _open_start_markup: $ => '[',
    _close_start_markup: $ => '>',

    end_tag:  $ => seq(
      $._open_end_markup,
      $.name,
      optional($.end_layer_suffix),
      repeat(seq(/\s+/, $.annotation)),
      $._close_end_markup
    ),
    _open_end_markup: $ => '<',
    _close_end_markup: $ => ']',

    milestone_tag:  $ => seq(
      $._open_start_markup,
      $.name,
      optional($.start_layer_suffix),
      repeat(seq(/\s+/, $.annotation)),
      $._close_end_markup
    ),

    start_layer_suffix: $ => seq(
      '|',
      optional('+'),
      $.name,
      repeat(seq(',',optional('+'),$.name))
    ),

    end_layer_suffix: $ => seq(
      '|',
      $.name,
      repeat(seq(',',$.name))
    ),

    text_variation: $ => seq(
      $.begin_text_variation,
      $.variant_text,
      repeat1(
        $.text_variation_separator,
        $.variant_text
      ),
      $.end_text_variation
    ),

    begin_text_variation: $ => '<|',
    text_variation_separator:  $ => '|',
    end_text_variation: $ => '|>',

    variant_text: $ => $._chunk,
//    variant_text: $ => choice(
//        $._chunk,
//        /[^[<\|]+/
//    ),

    name: $ => prec(1, /[a-zA-Z0-9_]+/),

    text: $ => prec(2, /[^[<]+/),

    annotation: $ => choice(
      $.basic_annotation,
      $.ref_annotation,
      $.identifying_annotation
    ),

    basic_annotation:  $ => seq(
      $.annotation_name,
      '=',
      $._annotation_value
    ),

    ref_annotation:  $ => seq(
      $.annotation_name,
      '->',
      $.ref_value
    ),

    identifying_annotation:  $ => seq(
      $.id_annotation,
      '=',
      $.id_value
    ),

    annotation_name: $ => /[a-zA-Z0-9_]+/,

    _annotation_value: $ => choice(
      $.string_value,
      $.boolean_value,
      $.number_value,
      $.richtext_value,
      $.list_value,
      $.object_value
    ),

    ref_value: $ => $.name,

    id_annotation: $ => ':id',

    id_value: $ => $.name,

    string_value: $ => choice(
       seq('"',/[^"]*/,'"'),
       seq("'",/[^']*/,"'"),
     ),

    boolean_value: $ => choice(
      /[Tt][Rr][Uu][Ee]/,
      /[Ff][Aa][Ll][Ss][Ee]/
    ),

    number_value: $ => /[0-9]+(\.[0-9]+)?/,

    richtext_value: $ => seq(
      '[>',
      /[^<]*/,
      '<]'
    ),

    list_value: $ => seq(
      '[',
      $._annotation_value,
      repeat(seq(',',$._annotation_value)),
      ']'
    ),

    object_value: $ => seq(
      '{',
      repeat1($.annotation),
      '}'
    ),

//    whitespace: $ => prec(2, /[ \t\n]+/)
  }
});
