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
      $.open_start_markup,
      $.name,
      optional($.start_layer_suffix),
      $.close_start_markup
    ),
    open_start_markup: $ => '[',
    close_start_markup: $ => '>',

    end_tag:  $ => seq(
      $.open_end_markup,
      $.name,
      optional($.end_layer_suffix),
      $.close_end_markup
    ),
    open_end_markup: $ => '<',
    close_end_markup: $ => ']',

    milestone_tag:  $ => seq(
      $.open_start_markup,
      $.name,
      optional($.start_layer_suffix),
      $.close_end_markup
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
      repeat(
        $.text_variation_separator,
        $.variant_text
      ),
      $.end_text_variation
    ),

    begin_text_variation: $ => '<|',
    text_variation_separator:  $ => '|',
    end_text_variation: $ => '|>',

    variant_text: $ => repeat1(
      choice(
        $._chunk,
        prec(3, /[^[<\|]+/)
    )),

    name: $ => prec(1, /[a-zA-Z]+/),

    text: $ => prec(2, /[^[<]+/)

//    whitespace: $ => prec(2, /[ \t\n]+/)
  }
});
