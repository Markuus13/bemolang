%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "ast.h"

  struct ast_node *ast = NULL;
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

%nonassoc IF_ONLY ELSE

%type <ast_node> translation_unit external_declaration_list external_declaration function_definition
%type <ast_node> type_specifier declarator compound_statement parameter_list parameters parameter_declaration
%type <ast_node> conditional_expression logical_or_expression logical_and_expression equality_expression
%type <ast_node> relational_expression additive_expression multiplicative_expression unary_expression
%type <ast_node> postfix_expression primary_expression optional_expression unary_operator
%type <ast_node> expression function_call_expression args argument_list assignment_expression
%type <ast_node> type_check_expression exists_expression inclusion_expression removal_expression
%type <ast_node> compound_or_inline_statement statement_list declaration
%type <ast_node> statement expression_statement membership_expression selection_statement
%type <ast_node> iteration_statement io_statement jump_statement identifier

%%
translation_unit: external_declaration_list { ast = $1; }
                // | error {  yyerrork; }
                ;

external_declaration_list: external_declaration_list external_declaration {
                            $$ = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, $1, $2, NULL);
                          }
                        | external_declaration { $$ = $1; }
                        ;

external_declaration: function_definition { $$ = $1; }
                    | declaration { $$ = $1; }
                    ;

function_definition: type_specifier declarator compound_statement {
                      $$ = create_ast_node(FUNCTION_DEFINITION, NULL, $1, $2, NULL);
                    }
                  ;

type_specifier: INT { $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL); }
              | FLOAT { $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL); }
              | ELEM { $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL); }
              | SET { $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL); }
              ;

declarator: identifier '(' parameters ')' {
              $$ = create_ast_node(FUNCTION_DEFINITION, NULL, $1, $3, NULL);
            }
          ;

parameters: parameter_list { $$ = $1; }
          | { $$ = NULL; }
          ;

parameter_list: parameter_declaration ',' parameter_list {
                  $$ = create_ast_node(PARAMETER_LIST, NULL, $1, $3, NULL);
                }
              | parameter_declaration { $$ = $1; }
              ;

parameter_declaration: type_specifier identifier {
                        $$ = create_ast_node(PARAMETER_DECLARATION, NULL, $1, $2, NULL);
                      }
                    ;

conditional_expression: logical_or_expression { $$ = $1; }
                      ;

logical_or_expression: logical_and_expression { $$ = $1; }
                    | logical_or_expression OR logical_and_expression {
                      $$ = create_ast_node(LOGICAL_OR_EXPRESSION, NULL, $1, $3, NULL);
                    }
                    ;

logical_and_expression: equality_expression { $$ = $1; }
                      | logical_and_expression AND equality_expression {
                        $$ = create_ast_node(LOGICAL_AND_EXPRESSION, NULL, $1, $3, NULL);
                      }
                      ;

equality_expression: relational_expression { $$ = $1; }
                  | equality_expression EQUAL_TO relational_expression {
                    $$ = create_ast_node(EQUALITY_EXPRESSION, NULL, $1, $3, NULL);
                  }
                  | equality_expression NOT_EQUAL_TO relational_expression {
                    $$ = create_ast_node(EQUALITY_EXPRESSION, NULL, $1, $3, NULL);
                  }
                  ;

relational_expression: additive_expression { $$ = $1; }
                    | relational_expression '<' additive_expression {
                      $$ = create_ast_node(RELATIONAL_EXPRESSION, NULL, $1, $3, NULL);
                    }
                    | relational_expression '>' additive_expression {
                      $$ = create_ast_node(RELATIONAL_EXPRESSION, NULL, $1, $3, NULL);
                    }
                    | relational_expression LT_OR_EQ_TO additive_expression {
                      $$ = create_ast_node(RELATIONAL_EXPRESSION, NULL, $1, $3, NULL);
                    }
                    | relational_expression BG_OR_EQ_TO additive_expression {
                      $$ = create_ast_node(RELATIONAL_EXPRESSION, NULL, $1, $3, NULL);
                    }
                    ;

additive_expression: multiplicative_expression { $$ = $1; }
                  | additive_expression '+' multiplicative_expression {
                    $$ = create_ast_node(ADDITIVE_EXPRESSION, NULL, $1, $3, NULL);
                  }
                  | additive_expression '-' multiplicative_expression {
                    $$ = create_ast_node(ADDITIVE_EXPRESSION, NULL, $1, $3, NULL);
                  }
                  ;

multiplicative_expression: unary_expression { $$ = $1; }
                        | multiplicative_expression '*' unary_expression {
                          $$ = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, $1, $3, NULL);
                        }
                        | multiplicative_expression '/' unary_expression {
                          $$ = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, $1, $3, NULL);
                        }
                        ;

unary_expression: postfix_expression { $$ = $1; }
                | unary_operator unary_expression {
                  $$ = create_ast_node(UNARY_EXPRESSION, NULL, $1, $2, NULL);
                }
                ;

unary_operator: '+' { $$ = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
              | '-' { $$ = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
              | '!' { $$ = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
              ;

postfix_expression: primary_expression {}
                  | postfix_expression '(' assignment_expression ')' {}
                  ;

primary_expression: identifier {}
                  | constant {}
                  | '(' expression ')' {}
                  ;

constant: INTEGER_CONST {}
        | FLOAT_CONST {}
        | CHARACTER_CONST {}
        | EMPTY_CONST {}
        | STRING {}
        ;

optional_expression: expression {}
                  | {}
                  ;

expression: assignment_expression {}
          | type_check_expression {}
          | exists_expression {}
          | inclusion_expression {}
          | removal_expression {}
          | membership_expression {}
          | function_call_expression {}
          ;

function_call_expression: identifier '(' args ')' {}
                        ;

args: argument_list {}
    | {}
    ;

argument_list: expression ',' argument_list {}
            | expression {}
            ;

assignment_expression: conditional_expression {}
                    | unary_expression '=' assignment_expression {}
                    ;

type_check_expression: IS_SET '(' expression ')' {}
                    ;

exists_expression: EXISTS '(' expression ')' {}
                ;

inclusion_expression: ADD '(' expression ')' {}
                  ;

removal_expression: REMOVE '(' expression ')' {}
                ;

compound_statement: '{' statement_list '}' {}
                  ;

compound_or_inline_statement: compound_statement {}
                            | statement {}
                            ;

statement_list: statement_list statement {}
              | {}
              ;

declaration: type_specifier identifier ';' {}
          ;

statement: expression_statement {}
        | selection_statement {}
        | iteration_statement {}
        | io_statement {}
        | jump_statement {}
        | declaration {}
        // | error {
        //   yyerrork;
        // }
        ;

expression_statement: optional_expression ';' {}
                    ;

membership_expression: expression IN expression {}
                    ;

selection_statement: IF '(' expression ')' compound_or_inline_statement %prec IF_ONLY {}
                  | IF '(' expression ')' compound_or_inline_statement ELSE compound_or_inline_statement {}
                  ;

iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ')' compound_or_inline_statement {}
                  | FORALL '(' membership_expression ')' compound_or_inline_statement {}
                  ;

io_statement: WRITE '(' expression ')' ';' {}
            | WRITELN '(' expression ')' ';' {}
            | READ '(' identifier ')' ';' {}
            ;

jump_statement: RETURN expression ';' {}
              ;

identifier: IDENTIFIER { $$ = create_ast_node(IDENTIFIER, $1, NULL, NULL, NULL); }
          ;

%%

void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}
