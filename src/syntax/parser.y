%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "../entities/ast.h"
  #include "../entities/symbol_table.h"
  #include "../semantic/semantic.h"
  #include "../error_handler/errors.h"
  #include "../main.h"

  extern int line_counter;
  extern int column_counter;
  extern int parser_column;
  extern scope *initial_scope;
  extern symbol_table_row *initial_symbol_table;
  extern scope *current_scope;
  extern ast_node *ast;

  int is_a_function_declaration = 0;
  int function_arity_counter = 0;
  int scope_counter_depth = 0;
%}

%output "./src/syntax/parser.c"
%defines "./src/syntax/parser.h"
%define lr.type canonical-lr
%define parse.error verbose

%union {
  struct ast_node *ast_node;
  char* token;
}

%token <token> INT FLOAT ELEM SET
%token <token> IF ELSE FOR RETURN
%token <token> FORALL ADD REMOVE READ WRITELN WRITE IS_SET IN EXISTS
%token <token> IDENTIFIER INTEGER_CONST FLOAT_CONST CHARACTER_CONST STRING EMPTY_CONST
%token <token> IF_ONLY
%token <token> OR AND EQUAL_TO NOT_EQUAL_TO LT_OR_EQ_TO BG_OR_EQ_TO

%nonassoc IF_ONLY
%nonassoc ELSE

%type <token> type_specifier
%type <ast_node> translation_unit external_declaration external_declaration_list
%type <ast_node> parameters parameter_list function_definition
%type <ast_node> logical_or_expression logical_and_expression equality_expression
%type <ast_node> relational_expression belongs_to_expression additive_expression
%type <ast_node> multiplicative_expression unary_expression unary_operator term
%type <ast_node> expression function_arg_constant_expression function_call_expression
%type <ast_node> set_function_call_expression argument_list compound_statement statement_list
%type <ast_node> declaration statement assignment_statement expression_statement
%type <ast_node> set_membership_expression selection_statement iteration_statement io_statement
%type <ast_node> jump_statement identifier optional_for_expression for_expression optional_expression

%%
translation_unit: external_declaration_list {
                    $$ = create_ast_node(TRANSLATION_UNIT, NULL, $1, NULL, NULL, NULL);
                    ast = $$;
                    check_for_main_function(initial_scope);
                  }
               ;

external_declaration_list: external_declaration_list external_declaration {
                            $$ = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, $1, $2, NULL, NULL);
                          }
                        | external_declaration { $$ = $1; }
                        ;

external_declaration: function_definition { $$ = $1; }
                    | declaration { $$ = $1; }
                    | assignment_statement { $$ = $1; }
                    ;

function_definition: type_specifier identifier '(' {
                      insert_row_into_symbol_table(current_scope, $1, $2->value, "function", function_arity_counter);
                      is_a_function_declaration = 1;
                      scope_counter_depth++;
                      current_scope = push_scope(current_scope, scope_counter_depth);
                    } parameters ')' compound_statement {
                      $$ = create_ast_node(FUNCTION_DEFINITION, $1, $5, $7, NULL, NULL);
                      update_function_into_symbol_table(current_scope, $1, $2->value, "function", function_arity_counter);
                      function_arity_counter = 0;
                    }
                  ;

type_specifier: INT { $$ = $1; }
              | FLOAT { $$ = $1; }
              | ELEM { $$ = $1; }
              | SET { $$ = $1; }
              ;

parameters: parameter_list { $$ = $1; }
          | { $$ = NULL; }
          ;

parameter_list: type_specifier identifier ',' parameter_list {
                  function_arity_counter++;
                  $$ = create_ast_node(PARAMETER_LIST, NULL, $4, NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, $1, $2->value, "parameter", 0);
                }
              | type_specifier identifier {
                  function_arity_counter++;
                  $$ = create_ast_node(PARAMETER_DECLARATION, $2->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, $1, $2->value, "parameter", 0);
                }
              ;

logical_or_expression: logical_and_expression { $$ = $1; }
                    | logical_or_expression OR logical_and_expression {
                        $$ = create_ast_node(LOGICAL_OR_EXPRESSION, $2, $1, $3, NULL, NULL);
                      }
                    ;

logical_and_expression: equality_expression { $$ = $1; }
                      | logical_and_expression AND equality_expression {
                          $$ = create_ast_node(LOGICAL_AND_EXPRESSION, $2, $1, $3, NULL, NULL);
                        }
                      ;

equality_expression: relational_expression { $$ = $1; }
                  | equality_expression EQUAL_TO relational_expression {
                      $$ = create_ast_node(EQUALITY_EXPRESSION, $2, $1, $3, NULL, NULL);
                    }
                  | equality_expression NOT_EQUAL_TO relational_expression {
                      $$ = create_ast_node(EQUALITY_EXPRESSION, $2, $1, $3, NULL, NULL);
                    }
                  ;

relational_expression: belongs_to_expression { $$ = $1; }
                    | EMPTY_CONST {
                        $$ = create_ast_node(RELATIONAL_EXPRESSION, $1, NULL, NULL, NULL, NULL);
                      }
                    | relational_expression '<' additive_expression {
                        $$ = create_ast_node(RELATIONAL_EXPRESSION, "<", $1, $3, NULL, NULL);
                      }
                    | relational_expression '>' additive_expression {
                        $$ = create_ast_node(RELATIONAL_EXPRESSION, ">", $1, $3, NULL, NULL);
                      }
                    | relational_expression LT_OR_EQ_TO additive_expression {
                        $$ = create_ast_node(RELATIONAL_EXPRESSION, (char *) $2, $1, $3, NULL, NULL);
                      }
                    | relational_expression BG_OR_EQ_TO additive_expression {
                        $$ = create_ast_node(RELATIONAL_EXPRESSION, (char *) $2, $1, $3, NULL, NULL);
                      }
                    ;

belongs_to_expression: belongs_to_expression IN additive_expression {
                        $$ = create_ast_node(BELONGS_TO_EXPRESSION, $2, $1, $3, NULL, NULL);
                      }
                    |  additive_expression { $$ = $1; }
                    ;

additive_expression: multiplicative_expression { $$ = $1; }
                  | additive_expression '+' multiplicative_expression {
                      $$ = create_ast_node(ADDITIVE_EXPRESSION, "+", $1, $3, NULL, NULL);
                    }
                  | additive_expression '-' multiplicative_expression {
                      $$ = create_ast_node(ADDITIVE_EXPRESSION, "-", $1, $3, NULL, NULL);
                    }
                  ;

multiplicative_expression: unary_expression { $$ = $1; }
                        | multiplicative_expression '*' unary_expression {
                            $$ = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", $1, $3, NULL, NULL);
                          }
                        | multiplicative_expression '/' unary_expression {
                            $$ = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", $1, $3, NULL, NULL);
                          }
                        ;

unary_expression: term { $$ = $1; }
                | unary_operator unary_expression {
                    $$ = create_ast_node(UNARY_EXPRESSION, NULL, $1, $2, NULL, NULL);
                  }
                ;

unary_operator: '+' { $$ = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
              | '-' { $$ = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
              | '!' { $$ = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
              ;

term: identifier {
        $$ = $1;
        check_if_identifier_has_already_been_declared(current_scope, $1->value);
      }
    | INTEGER_CONST { $$ = create_ast_node(TERM, $1, NULL, NULL, NULL, NULL); }
    | FLOAT_CONST { $$ = create_ast_node(TERM, $1, NULL, NULL, NULL, NULL); }
    | '(' additive_expression ')' {
        $$ = create_ast_node(TERM, NULL, $2, NULL, NULL, NULL);
      }
    | function_call_expression { $$ = $1; }
    ;

optional_expression: expression { $$ = $1; }
                  | { $$ = NULL; }
                  ;

optional_for_expression: for_expression { $$ = $1; }
                  | { $$ = NULL; }
                  ;

for_expression: logical_or_expression { $$ = $1; }
              | identifier '=' expression {
                  $$ = $3;
                  check_if_identifier_has_already_been_declared(current_scope, $1->value);
                }
              ;

expression: additive_expression { $$ = $1; }
          | function_arg_constant_expression { $$ = $1; }
          ;

function_arg_constant_expression: EMPTY_CONST {
                                    $$ = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, $1, NULL, NULL, NULL, NULL
                                    );
                                  }
                                | STRING {
                                    $$ = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, $1, NULL, NULL, NULL, NULL
                                    );
                                  }
                                | CHARACTER_CONST {
                                    $$ = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, $1, NULL, NULL, NULL, NULL
                                    );
                                  }
                                ;

function_call_expression: identifier '(' argument_list ')' {
                            $$ = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, $1, $3, NULL, NULL
                            );
                            check_if_identifier_has_already_been_declared(current_scope, $1->value);
                          }
                        | set_function_call_expression { $$ = $1; }
                        | '(' function_arg_constant_expression ')' { $$ = $2; }
                        ;

set_function_call_expression: IS_SET '(' identifier ')' {
                                $$ = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, $1, $3, NULL, NULL, NULL
                                );
                              }
                            | ADD '(' set_membership_expression ')' {
                                $$ = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, $1, $3, NULL, NULL, NULL
                                );
                              }
                            | REMOVE '(' set_membership_expression ')' {
                                $$ = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, $1, $3, NULL, NULL, NULL
                                );
                              }
                            | EXISTS '(' set_membership_expression ')' {
                                $$ = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, $1, $3, NULL, NULL, NULL
                                );
                              }
                            ;

argument_list: argument_list ',' expression {
                $$ = create_ast_node(ARGUMENT_LIST, NULL, $1, $3, NULL, NULL);
              }
            | expression { $$ = $1; }
            | { $$ = NULL; }
            ;

compound_statement: '{' {
                      if (!is_a_function_declaration) {
                        scope_counter_depth++;
                        current_scope = push_scope(current_scope, scope_counter_depth);
                      }
                      is_a_function_declaration = 0;
                    } statement_list '}' {
                      $$ = $3;
                      scope_counter_depth--;
                      current_scope = current_scope->parent;
                    }
                  | '{' '}' { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
                  ;

statement_list: statement_list statement {
                  $$ = create_ast_node(STATEMENT_LIST, NULL, $1, $2, NULL, NULL);
                }
              | statement { $$ = $1; }
              ;

declaration: type_specifier identifier ';' {
              $$ = create_ast_node(DECLARATION, $1, $2, NULL, NULL, NULL);
              insert_row_into_symbol_table(current_scope, $1, $2->value, "variable", 0);
            }
          ;

statement: declaration { $$ = $1; }
        | compound_statement { $$ = $1; }
        | expression_statement { $$ = $1; }
        | selection_statement { $$ = $1; }
        | iteration_statement { $$ = $1; }
        | io_statement { $$ = $1; }
        | jump_statement { $$ = $1; }
        | assignment_statement { $$ = $1; }
        | error { yyerrok; }
        ;

assignment_statement: identifier '=' expression ';' {
                      $$ = create_ast_node(ASSIGNMENT_STATEMENT, NULL, $1, $3, NULL, NULL);
                      check_if_identifier_has_already_been_declared(current_scope, $1->value);
                    }
                  ;

expression_statement: optional_expression ';' { $$ = $1; }
                    ;

set_membership_expression: expression IN expression {
                        $$ = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, $1, $3, NULL, NULL);
                      }
                    ;

selection_statement: IF '(' logical_or_expression ')' statement %prec IF_ONLY {
                      $$ = create_ast_node(SELECTION_STATEMENT, NULL, $3, $5, NULL, NULL);
                    }
                  | IF '(' logical_or_expression ')' statement ELSE statement {
                      $$ = create_ast_node(SELECTION_STATEMENT, NULL, $3, $5, $7, NULL);
                    }
                  ;

iteration_statement: FOR '(' optional_for_expression ';' optional_for_expression ';' optional_for_expression ')' statement {
                      $$ = create_ast_node(ITERATION_STATEMENT, NULL, $3, $5, $7, $9);
                    }
                  | FORALL '(' set_membership_expression ')' statement {
                      $$ = create_ast_node(ITERATION_STATEMENT, NULL, $3, $5, NULL, NULL);
                    }
                  ;

io_statement: WRITE '(' expression ')' ';' {
                $$ = create_ast_node(IO_STATEMENT, $1, $3, NULL, NULL, NULL);
              }
            | WRITELN '(' expression ')' ';' {
                $$ = create_ast_node(IO_STATEMENT, $1, $3, NULL, NULL, NULL);
              }
            | READ '(' identifier ')' ';' {
                $$ = create_ast_node(IO_STATEMENT, $1, $3, NULL, NULL, NULL);
              }
            ;

jump_statement: RETURN expression ';' {
                  $$ = create_ast_node(JUMP_STATEMENT, $1, $2, NULL, NULL, NULL);
                }
              ;

identifier: IDENTIFIER {
              $$ = create_ast_node(tIDENTIFIER, $1, NULL, NULL, NULL, NULL);
            }
          ;

%%
