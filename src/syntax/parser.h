/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_SYNTAX_PARSER_H_INCLUDED
# define YY_YY_SRC_SYNTAX_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    ELEM = 260,                    /* ELEM  */
    SET = 261,                     /* SET  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    FOR = 264,                     /* FOR  */
    RETURN = 265,                  /* RETURN  */
    FORALL = 266,                  /* FORALL  */
    ADD = 267,                     /* ADD  */
    REMOVE = 268,                  /* REMOVE  */
    READ = 269,                    /* READ  */
    WRITELN = 270,                 /* WRITELN  */
    WRITE = 271,                   /* WRITE  */
    IS_SET = 272,                  /* IS_SET  */
    IN = 273,                      /* IN  */
    EXISTS = 274,                  /* EXISTS  */
    IDENTIFIER = 275,              /* IDENTIFIER  */
    INTEGER_CONST = 276,           /* INTEGER_CONST  */
    FLOAT_CONST = 277,             /* FLOAT_CONST  */
    CHARACTER_CONST = 278,         /* CHARACTER_CONST  */
    STRING = 279,                  /* STRING  */
    EMPTY_CONST = 280,             /* EMPTY_CONST  */
    IF_ONLY = 281,                 /* IF_ONLY  */
    OR = 282,                      /* OR  */
    AND = 283,                     /* AND  */
    EQUAL_TO = 284,                /* EQUAL_TO  */
    NOT_EQUAL_TO = 285,            /* NOT_EQUAL_TO  */
    LT_OR_EQ_TO = 286,             /* LT_OR_EQ_TO  */
    BG_OR_EQ_TO = 287              /* BG_OR_EQ_TO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "src/syntax/parser.y"

  struct ast_node *ast_node;
  char* token;

#line 101 "./src/syntax/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_SYNTAX_PARSER_H_INCLUDED  */
