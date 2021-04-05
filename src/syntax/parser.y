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

// %type <ast_node> translation_unit external_declaration_list external_declaration function_definition type_specifier declarator compound_statement
%%
translation_unit: external_declaration_list
                ;

external_declaration_list: external_declaration_list external_declaration
                        | external_declaration
                        ;

external_declaration: function_definition
                    | declaration
                    ;

function_definition: type_specifier declarator compound_statement
                  ;

type_specifier: INT
              | FLOAT
              | ELEM
              | SET
              ;

declarator: identifier '(' parameters ')'
          ;

parameters: parameter_list
          |
          ;

parameter_list: parameter_declaration ',' parameter_list
              | parameter_declaration
              ;

parameter_declaration: type_specifier identifier
                    ;

conditional_expression: logical_or_expression
                      ;

logical_or_expression: logical_and_expression
                    | logical_or_expression OR logical_and_expression
                    ;

logical_and_expression: equality_expression
                      | logical_and_expression AND equality_expression
                      ;

equality_expression: relational_expression
                  | equality_expression EQUAL_TO relational_expression
                  | equality_expression NOT_EQUAL_TO relational_expression
                  ;

relational_expression: additive_expression
                    | relational_expression '<' additive_expression
                    | relational_expression '>' additive_expression
                    | relational_expression LT_OR_EQ_TO additive_expression
                    | relational_expression BG_OR_EQ_TO additive_expression
                    ;

additive_expression: multiplicative_expression
                  | additive_expression '+' multiplicative_expression
                  | additive_expression '-' multiplicative_expression
                  ;

multiplicative_expression: unary_expression
                        | multiplicative_expression '*' unary_expression
                        | multiplicative_expression '/' unary_expression
                        ;

unary_expression: postfix_expression
                | unary_operator unary_expression
                ;

unary_operator: '+'
              | '-'
              | '!'
              ;

postfix_expression: primary_expression
                  | postfix_expression '(' assignment_expression ')'
                  ;

primary_expression: identifier
                  | constant
                  | '(' expression ')'
                  ;

constant: INTEGER_CONST
        | FLOAT_CONST
        | CHARACTER_CONST
        | EMPTY_CONST
        | STRING
        ;

optional_expression: expression
                  |
                  ;

expression: assignment_expression
          | type_check_expression
          | exists_expression
          | inclusion_expression
          | removal_expression
          | membership_expression
          | function_call_expression
          ;

function_call_expression: identifier '(' args ')'
                        ;

args: argument_list
    |
    ;

argument_list: expression ',' argument_list
            | expression
            ;

assignment_expression: conditional_expression
                    | unary_expression '=' assignment_expression
                    ;

type_check_expression: IS_SET '(' expression ')'
                    ;

exists_expression: EXISTS '(' expression ')'
                ;

inclusion_expression: ADD '(' expression ')'
                  ;

removal_expression: REMOVE '(' expression ')'
                ;

compound_statement: '{' statement_list '}'
                  ;

compound_or_inline_statement: compound_statement
                            | statement
                            ;

statement_list: statement_list statement
              |
              ;

declaration: type_specifier identifier ';'
          ;

statement: expression_statement
        | selection_statement
        | iteration_statement
        | io_statement
        | jump_statement
        | declaration
        ;

expression_statement: optional_expression ';'
                    ;

membership_expression: expression IN expression
                    ;

selection_statement: IF '(' expression ')' compound_or_inline_statement %prec IF_ONLY
                  | IF '(' expression ')' compound_or_inline_statement ELSE compound_or_inline_statement
                  ;

iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ')' compound_or_inline_statement
                  | FORALL '(' membership_expression ')' compound_or_inline_statement
                  ;

io_statement: WRITE '(' expression ')' ';'
            | WRITELN '(' expression ')' ';'
            | READ '(' identifier ')' ';'
            ;

jump_statement: RETURN expression ';'
              ;

identifier: IDENTIFIER
          ;

%%

void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}
