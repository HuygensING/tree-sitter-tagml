module.exports = grammar({
  name: 'TAGML',
  extras: $ => [],

  rules: {
    document: $ => repeat($._chunk),

    _chunk: $ => choice(
      $.start_tag,
      $.end_tag,
      $.milestone_tag,
      $.text,
      $.whitespace
    ),

    start_tag:  $ => seq(
      '[',
      $.name,
      optional($.start_layer_suffix),
      '>'
    ),

    end_tag:  $ => seq(
      '<',
      $.name,
      optional($.end_layer_suffix),
      ']'
    ),

    milestone_tag:  $ => seq(
      '[',
      $.name,
      optional($.start_layer_suffix),
      ']'
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

    name: $ => prec(1, /[a-zA-Z]+/),

    text: $ => prec(3, /[^[<]+/),

    whitespace: $ => prec(2, /[ \t\n]+/)
  }
});
