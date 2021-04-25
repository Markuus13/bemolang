/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SRC_SYNTAX_PARSER_H_INCLUDED
# define YY_YY_SRC_SYNTAX_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    ELEM = 260,
    SET = 261,
    IF = 262,
    ELSE = 263,
    FOR = 264,
    RETURN = 265,
    FORALL = 266,
    ADD = 267,
    REMOVE = 268,
    READ = 269,
    WRITELN = 270,
    WRITE = 271,
    IS_SET = 272,
    IN = 273,
    EXISTS = 274,
    IDENTIFIER = 275,
    INTEGER_CONST = 276,
    FLOAT_CONST = 277,
    CHARACTER_CONST = 278,
    STRING = 279,
    EMPTY_CONST = 280,
    IF_ONLY = 281,
    OR = 282,
    AND = 283,
    EQUAL_TO = 284,
    NOT_EQUAL_TO = 285,
    LT_OR_EQ_TO = 286,
    BG_OR_EQ_TO = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/syntax/parser.y" /* yacc.c:1921  */

  struct ast_node *ast_node;
  char* token;

#line 96 "./src/syntax/parser.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_SYNTAX_PARSER_H_INCLUDED  */
