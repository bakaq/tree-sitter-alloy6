module.exports = grammar({
  name: "Alloy6",

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.sig_definition,
      // TODO: facts, open, functions, pred, assert and commands
    ),

    sig_definition: $ => seq(
      optional($.var),
      optional($.abstract),
      optional($.multiplicity),
      "sig",
      field("names", $.name_list),
      optional(choice($.sig_extends, $.sig_in)),
      "{",
      // TODO: fields
      "}",
      // TODO: implicit fact block
    ),

    name_list: $ => $._name_list,
    _name_list: $ => choice(
      $.identifier,
      seq($.identifier, ",", $._name_list),
    ),

    sig_extends: $ => seq(
      "extends",
      field("extends", $.qualified_name),
    ),

    sig_in: $ => seq(
      "in",
      field("in_list", $.sig_in_list),
    ),

    sig_in_list: $ => $._sig_in_list,
    _sig_in_list: $ => seq(
      $.qualified_name,
      optional(repeat(seq("+", $.qualified_name))),
    ),

    qualified_name: $ => seq(
      // TODO: qualification
      $.identifier,
    ),
    
    abstract: _ => "abstract",
    var: _ => "var",

    multiplicity: _ => choice(
      "one",
      "lone",
      "some"
    ),

    identifier: _ => /[a-zA-Z][a-zA-Z0-9_"]*/,
  },
});
