/* Bemolang Grammar, Lex specification */
/* Based on https://www.lysator.liu.se/c/ANSI-C-grammar-l.html */

%option noinput nounput
%option noyywrap
%option outfile="./src/lexical/scanner.c" header-file="./src/lexical/scanner.h"

%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include "../syntax/parser.h"
  #include "../main.h"

  enum TOKENS {
    SET_ADD_TKN,
    ELEM_TKN,
    ELSE_TKN,
    EXISTS_TKN,
    FOR_TKN,
    FORALL_TKN,
    IF_TKN,
    IN_TKN,
    INT_TKN,
    IS_SET_TKN,
    READ_TKN,
    REMOVE_TKN,
    RETURN_TKN,
    SET_TKN,
    WRITE_TKN,
    WRITELN_TKN,
    EMPTY_CONST_TKN,
    AND_OP_TKN,
    OR_OP_TKN,
    LT_OR_EQ_OP_TKN,
    BG_OR_EQ_OP_TKN,
    EQUAL_OP_TKN,
    NOT_EQUAL_OP_TKN,
    SEMICOLON_TKN,
    LEFT_BRACKET_TKN,
    RIGHT_BRACKET_TKN,
    ASSIGNMENT_OP_TKN,
    LEFT_PARENTESIS_TKN,
    RIGHT_PARENTESIS_TKN,
    ADD_OP_TKN,
    SUBTRACTION_OP_TKN,
    MULTIPLICATION_OP_TKN,
    DIVISION_OP_TKN,
    NOT_OP_TKN,
    LT_OP_TKN,
    BG_OP_TKN,
    COMMA_TKN,
    WHITESPACE_TKN,
    BREAK_LINE_TKN,
    IDENTIFIER_TKN,
    INTEGER_TKN,
    FLOAT_TKN,
    STRING_TKN,
    CHARACTER_TKN,
    COMMENT_TKN
  };
%}

DIGIT      [0-9]
LETTER     [a-zA-Z_]

%%

"add"                           { handle_token(SET_ADD_TKN); return ADD; }
"elem"                          { handle_token(ELEM_TKN); return ELEM; }
"else"                          { handle_token(ELSE_TKN); return ELSE; }
"exists"                        { handle_token(EXISTS_TKN); return EXISTS; }
"float"                         { handle_token(FLOAT_TKN); return FLOAT; }
"for"                           { handle_token(FOR_TKN); return FOR; }
"forall"                        { handle_token(FORALL_TKN); return FORALL; }
"if"                            { handle_token(IF_TKN); return IF; }
"in"                            { handle_token(IN_TKN); return IN; }
"int"                           { handle_token(INT_TKN); return INT; }
"is_set"                        { handle_token(IS_SET_TKN); return IS_SET; }
"read"                          { handle_token(READ_TKN); return READ; }
"remove"                        { handle_token(REMOVE_TKN); return REMOVE; }
"return"                        { handle_token(RETURN_TKN); return RETURN; }
"set"                           { handle_token(SET_TKN); return SET; }
"write"                         { handle_token(WRITE_TKN); return WRITE; }
"writeln"                       { handle_token(WRITELN_TKN); return WRITELN; }

"EMPTY"                         { handle_token(EMPTY_CONST_TKN); return EMPTY_CONST; }
{LETTER}({LETTER}|{DIGIT})*     { handle_token(IDENTIFIER_TKN); return IDENTIFIER; }
[+-]?{DIGIT}+                   { handle_token(INTEGER_TKN); return INTEGER_CONST; }
[+-]?{DIGIT}+"."{DIGIT}+        { handle_token(FLOAT_TKN); return FLOAT_CONST; }
\"(\\.|[^\\"])*\"               { handle_token(STRING_TKN); return STRING; }
\'(\\.|[^\\'])\'                { handle_token(CHARACTER_TKN); return CHARACTER_CONST; }

"&&"                            { handle_token(AND_OP_TKN); return AND; }
"||"                            { handle_token(OR_OP_TKN); return OR; }
"<="                            { handle_token(LT_OR_EQ_OP_TKN); return LT_OR_EQ_TO; }
">="                            { handle_token(BG_OR_EQ_OP_TKN); return BG_OR_EQ_TO; }
"=="                            { handle_token(EQUAL_OP_TKN); return EQUAL_TO; }
"!="                            { handle_token(NOT_EQUAL_OP_TKN); return NOT_EQUAL_TO; }
";"                             { handle_token(SEMICOLON_TKN); return yytext[0]; }
"{"                             { handle_token(LEFT_BRACKET_TKN); return yytext[0]; }
"}"                             { handle_token(RIGHT_BRACKET_TKN); return yytext[0]; }
"="                             { handle_token(ASSIGNMENT_OP_TKN); return yytext[0]; }
"("                             { handle_token(LEFT_PARENTESIS_TKN); return yytext[0]; }
")"                             { handle_token(RIGHT_PARENTESIS_TKN); return yytext[0]; }
"-"                             { handle_token(ADD_OP_TKN); return yytext[0]; }
"+"                             { handle_token(SUBTRACTION_OP_TKN); return yytext[0]; }
"*"                             { handle_token(MULTIPLICATION_OP_TKN); return yytext[0]; }
"/"                             { handle_token(DIVISION_OP_TKN); return yytext[0]; }
"!"                             { handle_token(NOT_OP_TKN); return yytext[0]; }
"<"                             { handle_token(LT_OP_TKN); return yytext[0]; }
">"                             { handle_token(BG_OP_TKN); return yytext[0]; }
","                             { handle_token(COMMA_TKN); return yytext[0]; }

[ \t\v\f]                       { handle_token(WHITESPACE_TKN); }
\n                              { handle_token(BREAK_LINE_TKN); }
"//".*"\n"                      { handle_token(COMMENT_TKN); }

.                               { handle_unrecognized_symbol(); }

%%

int is_a_line_break(char* string) {
  return !strcmp(string, "\n");
}

int is_a_comment(char* string) {
  return string[0] == '/' && string[1] == '/';
}

void count_line() {
  if (is_a_line_break(yytext) || is_a_comment(yytext)) {
    column_counter = 1;
    line_counter ++;

    parser_column = column_counter;
  }
}

void count_column() {
  int number_of_symbols = strlen(yytext);
  column_counter += number_of_symbols;

  parser_column = column_counter - strlen(yytext);
}

void count() {
  count_column();
  count_line();
}

void handle_token(int token) {
  int token_length;
  count();
  switch(token) {
    case SET_ADD_TKN:
      if (print_tokens_enabled) printf("<add>");
      break;
    case ELEM_TKN:
      if (print_tokens_enabled) printf("<elem>");
      break;
    case ELSE_TKN:
      if (print_tokens_enabled) printf("<else>");
      break;
    case EXISTS_TKN:
      if (print_tokens_enabled) printf("<exists>");
      break;
    case FOR_TKN:
      if (print_tokens_enabled) printf("<for>");
      break;
    case FORALL_TKN:
      if (print_tokens_enabled) printf("<forall>");
      break;
    case IF_TKN:
      if (print_tokens_enabled) printf("<if>");
      break;
    case IN_TKN:
      if (print_tokens_enabled) printf("<in>");
      break;
    case IS_SET_TKN:
      if (print_tokens_enabled) printf("is_set");
      break;
    case READ_TKN:
      if (print_tokens_enabled) printf("<read>");
      break;
    case REMOVE_TKN:
      if (print_tokens_enabled) printf("<remove>");
      break;
    case RETURN_TKN:
      if (print_tokens_enabled) printf("<return>");
      break;
    case SET_TKN:
      if (print_tokens_enabled) printf("<set>");
      break;
    case WRITE_TKN:
      if (print_tokens_enabled) printf("<write>");
      break;
    case WRITELN_TKN:
      if (print_tokens_enabled) printf("<writeln>");
      break;
    case AND_OP_TKN:
      if (print_tokens_enabled) printf("<and_op, '%s'>", yytext);
      break;
    case OR_OP_TKN:
      if (print_tokens_enabled) printf("<or_op, '%s'>", yytext);
      break;
    case LT_OR_EQ_OP_TKN:
      if (print_tokens_enabled) printf("<lt_or_eq_op, '%s'>", yytext);
      break;
    case BG_OR_EQ_OP_TKN:
      if (print_tokens_enabled) printf("<bg_or_eq_op, '%s'>", yytext);
      break;
    case EQUAL_OP_TKN:
      if (print_tokens_enabled) printf("<eq_op, '%s'>", yytext);
      break;
    case NOT_EQUAL_OP_TKN:
      if (print_tokens_enabled) printf("<not_eq_op, '%s'>", yytext);
      break;
    case SEMICOLON_TKN:
      if (print_tokens_enabled) printf("<semicolon, '%s'>", yytext);
      break;
    case LEFT_BRACKET_TKN:
      if (print_tokens_enabled) printf("<left_brack, '%s'>", yytext);
      break;
    case RIGHT_BRACKET_TKN:
      if (print_tokens_enabled) printf("<right_brack, '%s'>", yytext);
      break;
    case ASSIGNMENT_OP_TKN:
      if (print_tokens_enabled) printf("<assign_op, '%s'>", yytext);
      break;
    case LEFT_PARENTESIS_TKN:
      if (print_tokens_enabled) printf("<left_parent, '%s'>", yytext);
      break;
    case RIGHT_PARENTESIS_TKN:
      if (print_tokens_enabled) printf("<right_parent, '%s'>", yytext);
      break;
    case ADD_OP_TKN:
      if (print_tokens_enabled) printf("<add_op, '%s'>", yytext);
      break;
    case SUBTRACTION_OP_TKN:
      if (print_tokens_enabled) printf("<sub_op, '%s'>", yytext);
      break;
    case MULTIPLICATION_OP_TKN:
      if (print_tokens_enabled) printf("<mult_op, '%s'>", yytext);
      break;
    case DIVISION_OP_TKN:
      if (print_tokens_enabled) printf("<div_op, '%s'>", yytext);
      break;
    case NOT_OP_TKN:
      if (print_tokens_enabled) printf("<not_op, '%s'>", yytext);
      break;
    case LT_OP_TKN:
      if (print_tokens_enabled) printf("<lt_op, '%s'>", yytext);
      break;
    case BG_OP_TKN:
      if (print_tokens_enabled) printf("<bg_op, '%s'>", yytext);
      break;
    case COMMA_TKN:
      if (print_tokens_enabled) printf("<comma, '%s>'", yytext);
      break;
    case WHITESPACE_TKN:
      if (print_tokens_enabled) printf("%s", yytext);
      break;
    case BREAK_LINE_TKN:
      if (print_tokens_enabled) printf("%s", yytext);
      break;
    case EMPTY_CONST_TKN:
      if (print_tokens_enabled) printf("<EMPTY>");
      break;
    case IDENTIFIER_TKN:;
      if (print_tokens_enabled) printf("<id, '%s'>", yytext);
      token_length = strlen(yytext) + 1;
      yylval.token = (char *) malloc(token_length * sizeof(char *));
      break;
    case INTEGER_TKN:;
      if (print_tokens_enabled) printf("<int, %s>", yytext);
      token_length = strlen(yytext) + 1;
      yylval.token = (char *) malloc(token_length * sizeof(char *));
      break;
    case FLOAT_TKN:;
      if (print_tokens_enabled) printf("<float, %s>", yytext);
      token_length = strlen(yytext) + 1;
      yylval.token = (char *) malloc(token_length * sizeof(char *));
      break;
    case STRING_TKN:;
      if (print_tokens_enabled) printf("<string, %s>", yytext);
      token_length = strlen(yytext) + 1;
      yylval.token = (char *) malloc(token_length * sizeof(char *));
      break;
    case CHARACTER_TKN:;
      if (print_tokens_enabled) printf("<char, %s>", yytext);
      token_length = strlen(yytext) + 1;
      yylval.token = (char *) malloc(token_length * sizeof(char *));
      break;
    case COMMENT_TKN:
      if (print_tokens_enabled) printf("<comment>");
      break;
    default:
      break;
  }
}

void handle_unrecognized_symbol() {
  if (print_tokens_enabled) printf("\n");
  printf("%d:%d Unrecognized symbol \"%s\".\n", line_counter, column_counter, yytext);
  count();
}
