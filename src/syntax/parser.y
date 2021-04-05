%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "ast.h"

  struct ast_node *ast = NULL
%}

%output "./src/syntax/parser.c"
%defines "./src/syntax/parser.h"

%define lr.type canonical-lr
%define parse.error verbose

%union {
  struct ast_node *ast_node;
}

%token <token> INT FLOAT ELEM SET IF ELSE FOR FORALL ADD REMOVE READ WRITELN WRITE IS_SET IN RETURN IDENTIFIER INTEGER_CONSTANT FLOAT_CONSTANT CHARACTER_CONSTANT STRING_CONSTANT EMPTY_CONSTANT FOO

%nonassoc FOO ELSE

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

declarator: identifier '(' parameter_list ')'
          ;

parameter_list: parameter_declaration ',' parameter_list
              | parameter_declaration
              |
              ;

parameter_declaration: type_specifier identifier
                    ;

conditional_expression: logical_or_expression
                      ;

logical_or_expression: logical_and_expression
                    | logical_or_expression "||" logical_and_expression
                    ;

logical_and_expression: equality_expression
                      | logical_and_expression "&&" equality_expression
                      ;

equality_expression: relational_expression
                  | equality_expression "==" relational_expression
                  | equality_expression "!=" relational_expression
                  ;

relational_expression: additive_expression
                    | relational_expression '<' additive_expression
                    | relational_expression '>' additive_expression
                    | relational_expression "<=" additive_expression
                    | relational_expression ">=" additive_expression
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

constant: integer_constant
        | character_constant
        | float_constant
        | empty_constant
        | string_constant
        ;

optional_expression: expression
                  |
                  ;

expression: assignment_expression
          | type_check_expression
          | expression ',' assignment_expression
          ;

assignment_expression: conditional_expression
                    | unary_expression '=' assignment_expression
                    ;

type_check_expression:  IS_SET '(' identifier ')'
                    ;

compound_statement: '{' declaration_list statement_list '}'
                  ;

declaration_list: declaration_list declaration
                | declaration
                ;

compound_or_inline_statement: compound_statement
                            | statement
                            ;

statement_list: statement_list statement
              | statement
              ;

declaration: type_specifier identifier
          ;

statement: expression_statement
        | selection_statement
        | iteration_statement
        | inclusion_statement
        | removal_statement
        | io_statement
        | jump_statement
        ;

expression_statement: optional_expression ';'
                    ;

membership_expression: expression IN expression
                    ;

selection_statement: IF '(' expression ')' compound_or_inline_statement %prec FOO
                  | IF '(' expression ')' compound_or_inline_statement ELSE compound_or_inline_statement
                  ;

iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ';' ')' compound_or_inline_statement
                  | FORALL '(' membership_expression ')' compound_or_inline_statement
                  ;

inclusion_statement: ADD '(' membership_expression ')'
                  ;

removal_statement: REMOVE '(' membership_expression ')'
                ;

io_statement: WRITE '(' expression ')' ';'
            | WRITELN '(' expression ')' ';'
            | READ '(' identifier ')' ';'
            ;

jump_statement: RETURN optional_expression ';'
              ;

identifier: IDENTIFIER;
          ;

integer_constant: INTEGER_CONSTANT
                ;

character_constant: CHARACTER_CONSTANT
                  ;

float_constant: FLOAT_CONSTANT
              ;

empty_constant: EMPTY_CONSTANT
              ;

string_constant: STRING_CONSTANT
              ;

%%

void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}



