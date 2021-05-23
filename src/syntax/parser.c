/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/syntax/parser.y"

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

#line 93 "./src/syntax/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_ELEM = 5,                       /* ELEM  */
  YYSYMBOL_SET = 6,                        /* SET  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_FORALL = 11,                    /* FORALL  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_REMOVE = 13,                    /* REMOVE  */
  YYSYMBOL_READ = 14,                      /* READ  */
  YYSYMBOL_WRITELN = 15,                   /* WRITELN  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_IS_SET = 17,                    /* IS_SET  */
  YYSYMBOL_IN = 18,                        /* IN  */
  YYSYMBOL_EXISTS = 19,                    /* EXISTS  */
  YYSYMBOL_IDENTIFIER = 20,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONST = 21,             /* INTEGER_CONST  */
  YYSYMBOL_FLOAT_CONST = 22,               /* FLOAT_CONST  */
  YYSYMBOL_CHARACTER_CONST = 23,           /* CHARACTER_CONST  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_EMPTY_CONST = 25,               /* EMPTY_CONST  */
  YYSYMBOL_IF_ONLY = 26,                   /* IF_ONLY  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_EQUAL_TO = 29,                  /* EQUAL_TO  */
  YYSYMBOL_NOT_EQUAL_TO = 30,              /* NOT_EQUAL_TO  */
  YYSYMBOL_LT_OR_EQ_TO = 31,               /* LT_OR_EQ_TO  */
  YYSYMBOL_BG_OR_EQ_TO = 32,               /* BG_OR_EQ_TO  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_36_ = 36,                       /* '<'  */
  YYSYMBOL_37_ = 37,                       /* '>'  */
  YYSYMBOL_38_ = 38,                       /* '+'  */
  YYSYMBOL_39_ = 39,                       /* '-'  */
  YYSYMBOL_40_ = 40,                       /* '*'  */
  YYSYMBOL_41_ = 41,                       /* '/'  */
  YYSYMBOL_42_ = 42,                       /* '!'  */
  YYSYMBOL_43_ = 43,                       /* '='  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_translation_unit = 48,          /* translation_unit  */
  YYSYMBOL_external_declaration_list = 49, /* external_declaration_list  */
  YYSYMBOL_external_declaration = 50,      /* external_declaration  */
  YYSYMBOL_function_definition = 51,       /* function_definition  */
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_type_specifier = 53,            /* type_specifier  */
  YYSYMBOL_parameters = 54,                /* parameters  */
  YYSYMBOL_parameter_list = 55,            /* parameter_list  */
  YYSYMBOL_logical_or_expression = 56,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 57,    /* logical_and_expression  */
  YYSYMBOL_equality_expression = 58,       /* equality_expression  */
  YYSYMBOL_relational_expression = 59,     /* relational_expression  */
  YYSYMBOL_belongs_to_expression = 60,     /* belongs_to_expression  */
  YYSYMBOL_additive_expression = 61,       /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 62, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 63,          /* unary_expression  */
  YYSYMBOL_unary_operator = 64,            /* unary_operator  */
  YYSYMBOL_term = 65,                      /* term  */
  YYSYMBOL_optional_expression = 66,       /* optional_expression  */
  YYSYMBOL_optional_for_expression = 67,   /* optional_for_expression  */
  YYSYMBOL_for_expression = 68,            /* for_expression  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_function_arg_constant_expression = 70, /* function_arg_constant_expression  */
  YYSYMBOL_function_call_expression = 71,  /* function_call_expression  */
  YYSYMBOL_set_function_call_expression = 72, /* set_function_call_expression  */
  YYSYMBOL_argument_list = 73,             /* argument_list  */
  YYSYMBOL_compound_statement = 74,        /* compound_statement  */
  YYSYMBOL_75_2 = 75,                      /* $@2  */
  YYSYMBOL_statement_list = 76,            /* statement_list  */
  YYSYMBOL_declaration = 77,               /* declaration  */
  YYSYMBOL_statement = 78,                 /* statement  */
  YYSYMBOL_assignment_statement = 79,      /* assignment_statement  */
  YYSYMBOL_expression_statement = 80,      /* expression_statement  */
  YYSYMBOL_set_membership_expression = 81, /* set_membership_expression  */
  YYSYMBOL_selection_statement = 82,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 83,       /* iteration_statement  */
  YYSYMBOL_io_statement = 84,              /* io_statement  */
  YYSYMBOL_jump_statement = 85,            /* jump_statement  */
  YYSYMBOL_identifier = 86                 /* identifier  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6873

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  601

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,     2,     2,     2,     2,     2,
      33,    34,    40,    38,    35,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
      36,    43,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    63,    66,    69,    70,    71,    74,    74,
      85,    86,    87,    88,    91,    92,    95,   100,   107,   108,
     113,   114,   119,   120,   123,   128,   129,   132,   135,   138,
     141,   146,   149,   152,   153,   156,   161,   162,   165,   170,
     171,   176,   177,   178,   181,   182,   183,   184,   187,   190,
     191,   194,   195,   198,   199,   202,   203,   206,   211,   216,
     223,   228,   229,   232,   237,   242,   247,   254,   257,   258,
     261,   261,   272,   275,   278,   281,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   298,   303,   306,   311,   314,
     319,   322,   327,   330,   333,   338,   343
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "ELEM",
  "SET", "IF", "ELSE", "FOR", "RETURN", "FORALL", "ADD", "REMOVE", "READ",
  "WRITELN", "WRITE", "IS_SET", "IN", "EXISTS", "IDENTIFIER",
  "INTEGER_CONST", "FLOAT_CONST", "CHARACTER_CONST", "STRING",
  "EMPTY_CONST", "IF_ONLY", "OR", "AND", "EQUAL_TO", "NOT_EQUAL_TO",
  "LT_OR_EQ_TO", "BG_OR_EQ_TO", "'('", "')'", "','", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'!'", "'='", "'{'", "'}'", "';'", "$accept",
  "translation_unit", "external_declaration_list", "external_declaration",
  "function_definition", "$@1", "type_specifier", "parameters",
  "parameter_list", "logical_or_expression", "logical_and_expression",
  "equality_expression", "relational_expression", "belongs_to_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "unary_operator", "term", "optional_expression",
  "optional_for_expression", "for_expression", "expression",
  "function_arg_constant_expression", "function_call_expression",
  "set_function_call_expression", "argument_list", "compound_statement",
  "$@2", "statement_list", "declaration", "statement",
  "assignment_statement", "expression_statement",
  "set_membership_expression", "selection_statement",
  "iteration_statement", "io_statement", "jump_statement", "identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    40,    41,    44,    60,    62,    43,    45,
      42,    47,    33,    61,   123,   125,    59
};
#endif

#define YYPACT_NINF (-350)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     197,   -14,    -5,     1,    15,    19,    64,   162,   347,   945,
      38,  1065,  1100,    24,  -350,  1188,    -1,   633,    35,  1210,
      37,    43,    47,    70,   602,   775,    51,    59,    63,   691,
    1040,  1076,  1113,    44,   914,   940,  1137,  1000,   108,   110,
    1286,  1395,  1498,   121,   770,   770,   161,   770,   209,   159,
    1137,  1137,  1137,  1137,  1513,  1219,   203,   170,   164,   172,
     193,   187,   195,   201,   206,  1790,  1963,  2002,  2185,  2358,
    2397,    94,   125,   218,   222,   691,  2426,  2444,  2502,  2580,
    2741,   905,   562,  4584,  1346,   235,   230,   242,  1460,  5918,
    4630,   246,   254,   633,   256,   259,   264,   267,   309,   290,
     311,  4676,  4722,  4768,  4814,  4860,  4906,  4952,  4998,  5044,
    5090,  1565,   742,   166,   318,   770,   161,   691,   691,   326,
    5136,  1495,  5182,  2078,   130,    73,   723,  2804,  3189,  3015,
     -18,   334,   353,   975,  5228,   299,   367,   375,   381,   742,
    5962,   742,   742,   742,  1165,  1165,  1165,  1165,  1216,   166,
     633,  5918,   376,   378,   386,   205,  2751,   876,  6825,  6836,
    3245,  3304,  6799,  6812,  3074,   397,   402,  5274,  5320,  5366,
    5412,  5918,   282,  5458,   425,  5918,  5504,    33,  1712,   434,
     439,   442,   462,  1678,   412,  1260,   466,   467,   470,   691,
    1655,  2050,  1300,  2602,  2657,  2853,  2354,   473,   478,   479,
     483,    97,    81,    93,   504,   510,   511,   691,     9,   156,
     270,  1343,   287,   516,   357,   401,   396,   501,  1300,  1300,
     509,   518,   519,   520,  1959,  1104,  2779,   240,   247,   278,
     691,   175,  2843,  2930,  1435,  2996,   284,  3026,  3143,  2107,
     297,   217,   503,  1607,  5550,   497,   633,   525,   537,   543,
     549,  1884,  2382,  2949,   691,  2973,  3050,  1216,  3275,  3331,
    3370,  2279,   550,   555,   556,   564,  1370,  1703,  1765,   856,
     691,    -4,    58,  1251,   231,   655,  1858,  1908,  1471,  1937,
    2098,  2136,  5596,  1216,  1216,   949,   203,  3523,   570,   571,
     633,   583,   593,   611,   614,  5642,   309,   533,  3571,  3639,
    3710,  3756,  3802,  3848,  3894,  3940,  1667,   616,   618,   628,
     629,  6484,  6514,  6529,   691,  6544,  6559,  1165,  6574,  6589,
    6604,  6499,  1165,  1165,  1592,   142,   515,  1987,   770,   770,
     161,   770,   307,   575,  1300,  1300,  2958,   203,   770,   770,
     161,   770,   332,   634,  1343,  1343,  1343,  1343,   507,   203,
    3086,  3127,   770,   770,   161,   770,   343,   635,  1435,  1435,
    1435,  1435,  3400,   203,  5688,  5918,   624,   770,   770,   161,
     770,   366,   642,  1216,  1216,  3440,   203,   770,   770,   161,
     770,   469,   647,   949,   949,   949,  1508,  1508,  1508,  1508,
    1471,  1471,  1471,  1471,  1471,  1542,  2160,  1741,  3477,  3593,
      46,   304,   742,   166,   643,   770,   161,   691,   691,  3986,
    5918,   644,  4032,   633,   770,   770,   161,   770,   576,   654,
    1165,  1165,  6619,   203,  6634,  6649,   691,   662,   663,   664,
     666,  3193,  3251,  4120,  4166,   321,   668,   675,   685,   686,
     546,   553,   580,   584,   687,   699,   377,   689,   697,   698,
     701,  3421,  3448,  3635,  3752,  3798,  3844,   383,  5734,  5780,
     702,   707,   709,   710,  3661,  5984,  5999,  6014,   427,   722,
     726,   734,   735,  2253,  2303,   719,  1646,  2041,   688,   737,
     744,   746,  2913,  6104,  6124,   691,  1822,  6144,  6164,  1508,
    6184,  6204,  6224,  3390,  2217,  3109,  3223,  2878,  2332,  2469,
    2493,  2531,  2555,   150,   739,  4078,   752,   754,   766,   767,
    5826,  4124,   761,   783,   785,   786,   790,  6664,  6679,  6694,
    6709,   443,   796,  4212,  4258,  4304,  4350,  4396,   758,   788,
     800,   818,   827,  3890,  3936,  3982,  4028,  4074,  5872,  6029,
    6044,  6059,  6074,  6089,  2619,  2648,  2674,  2698,   770,   770,
     161,   770,   640,   797,  1508,  1508,  1508,  1508,  6244,   203,
    5962,   166,  5962,   787,   798,   804,  4170,  4216,  6724,  6739,
    6754,  6769,  6784,   808,   809,   820,   821,  6264,  6284,  6304,
    6324,  6344,  6364,   457,  4262,   806,  4308,  4354,  4400,  4446,
    6384,  6404,  6424,  6444,  6464,  5962,   282,  4492,   826,  5962,
    4538
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,  -350,  -350,   825,  -350,  -350,    12,  -350,   781,  -109,
    -105,   -35,  -112,   -41,  2786,  2463,   488,   883,  1278,  -135,
    -123,  -168,  3147,  3040,  1673,  2068,  -253,   -72,  -230,  -349,
      13,   -80,    18,  -129,   116,   -97,   -86,   -81,   -63,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    43,    98,    58,    59,   130,
     125,   126,   127,   128,   208,   209,   210,   211,   212,    99,
     131,   132,    60,   213,   214,   215,    72,   101,    89,   102,
     103,   104,   105,   106,    61,   107,   108,   109,   110,   216
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,   273,    84,   124,   326,   297,   -10,    13,   271,   285,
      16,   301,    10,    11,   365,   -11,   458,    42,    12,    10,
      11,   -12,   122,   -18,   383,    12,   165,   -55,   -53,   196,
     158,   159,    18,   401,   155,   -13,    42,   273,    -8,    -8,
      -8,    -8,   -18,   302,   271,    19,    63,   344,   345,   174,
      42,    42,    42,    42,   303,    57,   239,    73,   177,   304,
     156,   510,   -96,   325,    14,   410,   -96,    17,   298,    -8,
      44,   167,   274,   -19,   383,   196,    45,   305,   272,   -96,
      46,   239,    50,    51,   435,   -20,   -20,   384,   385,   111,
     -55,   173,   -19,    42,    57,   176,   446,   -59,   119,   -45,
     -18,   141,   111,    47,   -20,   -58,   157,   -18,   274,   -57,
     457,   -46,   261,   133,   272,   -96,   136,   196,   196,   -45,
     -45,   -45,   -45,   468,     1,     2,     3,     4,   -68,   -68,
     -96,   -46,   -46,   -46,   -46,   -96,   -96,   -96,   -96,   261,
     306,   261,   261,   261,   321,   321,   321,   321,   261,   133,
      42,   111,   296,   299,    55,   -15,   -56,   139,   300,    80,
      81,    62,    -2,    64,   140,     1,     2,     3,     4,   139,
     521,   111,   327,   273,   -33,   111,   -53,   139,   262,   263,
     400,   217,     5,   264,   560,   265,   266,   267,   268,   196,
     240,   269,   196,    66,   -33,   -33,   346,   347,    74,   270,
       1,     2,     3,     4,    30,    31,   -14,   196,    32,   -55,
     -55,    75,   -52,   358,   359,   220,   221,     5,   196,   196,
     222,    76,   223,   224,   225,   226,   227,   228,   229,    77,
     196,   135,   -19,   141,   239,    78,   230,   -69,   -69,   -19,
      79,    30,    31,    65,   274,    32,    42,   218,   219,   390,
     272,   -55,   -17,    82,   196,   218,   219,   261,   -25,   -25,
     -25,   -25,   -25,   -25,   -67,   -67,    83,   -25,   -25,   -87,
     196,   273,   476,   477,   -59,   -59,   -16,   -25,   397,   112,
     504,   -58,   -58,   261,   261,   397,   239,   113,   -36,   115,
      42,   273,   116,   503,   247,   248,   411,   117,   271,   249,
     118,   250,   324,   252,   253,   -39,   583,   123,   -36,   -36,
     -36,   -36,   -57,   -57,   196,   254,   -52,   321,   -56,   -56,
      30,    31,   321,   321,    32,   -39,   -39,   -39,   -39,   245,
     429,   -96,   -96,   151,   196,   196,   120,   239,   502,    81,
     438,   431,   274,   274,   274,   218,   219,    -4,   475,   239,
      -4,    -4,    -4,    -4,   449,   527,    81,   -49,   239,   239,
     239,   239,   274,   239,   134,   111,   440,    -4,   272,   462,
     218,   219,   282,   261,   261,   -48,   239,   451,   122,   471,
     149,   218,   219,   397,   397,   397,   493,   493,   493,   493,
     397,   397,   397,   397,   397,   -48,   -48,   -48,   -48,   -51,
     464,   152,   261,   133,   218,   219,   507,   196,   196,   153,
     111,   532,    81,    42,   -44,   154,   515,   537,    81,   -61,
     321,   321,   168,   239,   169,   297,   196,   297,   326,   349,
     122,   301,   170,   301,   -44,   -44,   -44,   -44,   585,   -61,
     -61,   -61,   -61,   172,   427,   428,   -45,   430,   -54,   273,
     -45,   -45,   -45,   -45,   436,   437,   271,   439,   111,   175,
     297,   543,    81,   302,   297,   302,   301,   328,   447,   448,
     301,   450,   329,   598,   303,   330,   303,   572,    81,   304,
     584,   304,   586,   460,   461,   196,   463,   325,   298,   493,
     298,   594,    81,   469,   470,   331,   472,   305,   302,   305,
     -59,   -58,   302,   473,   -57,    35,   338,   218,   219,   303,
     111,   339,   340,   303,   304,   597,   341,   191,   304,   600,
     274,   506,   -59,   298,    54,   -40,   272,   298,   -58,   -57,
     513,   514,   305,   516,   -56,   -96,   305,   -56,    35,    35,
      69,    70,   352,   -96,   233,   -40,   -40,   -40,   -40,   -51,
     575,   353,   354,   355,   493,   493,   493,   493,   367,   239,
     306,   133,   306,   191,   -47,     1,     2,     3,     4,   233,
     368,   -62,   296,   299,   296,   299,   369,    35,   300,   412,
     300,    35,   370,   377,   -47,   -47,   -47,   -47,   378,   379,
      35,   -62,   -62,   -62,   -62,   306,   327,   380,   -34,   306,
     256,   277,   -35,   402,   403,   191,   191,   296,   299,   432,
     517,   296,   299,   300,   218,   219,   405,   300,   -34,   -34,
     346,   347,   -35,   -35,   346,   347,   406,   256,    35,   256,
     256,   256,   316,   316,   316,   316,   256,   277,    35,    35,
     -45,   -45,   -45,   -45,   407,    20,    21,   408,   -45,   414,
      22,   415,    23,   178,    24,    25,    26,    27,    28,    35,
     256,   416,   417,    35,   573,   574,    29,   576,   441,   452,
     459,    30,    31,   -32,   577,    32,   465,   191,   218,   219,
     336,   474,   -32,   -32,   -32,   -32,   -32,   -32,   518,   505,
     511,   -32,   -32,   391,   392,   191,   523,   524,   525,   348,
     526,   -32,   528,   179,   180,   -37,   191,   191,   181,   529,
     182,   183,   184,   185,   186,   187,   188,   -38,   191,   530,
     531,   548,   362,   533,   189,   -37,   -37,   -37,   -37,    30,
      31,   534,   535,    32,    35,   536,   539,   -38,   -38,   -38,
     -38,   540,   191,   541,   542,   375,   -21,   -21,   384,   385,
     -20,   -20,   142,   143,   247,   248,   544,   -20,   191,   249,
     545,   250,   251,   252,   253,   -21,   396,   123,   546,   547,
     549,   256,   256,   277,   233,   254,   -64,   550,    35,   551,
      30,    31,   197,   198,    32,   561,   562,   199,   563,   200,
     201,   202,   203,   204,   205,   206,   -64,   -64,   -64,   -64,
     564,   565,   191,   207,     0,   422,   -65,   567,    30,    31,
     316,   316,    32,   -46,   -46,   -46,   -46,   568,   -63,   569,
     570,   -46,   433,   434,   571,   233,   -65,   -65,   -65,   -65,
     -54,   578,    15,   587,   444,   445,   -66,   233,   -63,   -63,
     -63,   -63,   590,   591,   588,   -60,   233,   233,   455,   456,
     589,   233,   596,    35,   592,   593,   -66,   -66,   -66,   -66,
     599,   466,   467,    87,   233,   -60,   -60,   -60,   -60,     0,
       0,   277,   277,   277,   488,   488,   488,   488,   277,   277,
     277,   500,   501,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     256,   277,   -26,   -26,     0,   191,   191,     0,    35,     0,
      36,    35,   -26,   -21,   -21,   142,   143,     0,   519,   520,
     -21,   233,   192,     0,   191,     0,     0,   220,   221,    36,
       0,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,     0,     0,    36,    36,    36,    36,     0,   230,   234,
       0,     0,     0,    30,    31,    -5,    35,    32,    -5,    -5,
      -5,    -5,   -33,   -33,    52,    53,     0,     0,   192,     0,
     -33,   262,   263,     0,   234,    -5,   264,     0,   265,   395,
     267,   268,    36,   191,   269,     0,    36,   558,   -36,   -36,
     -36,   -36,   270,     0,     0,    36,   -36,    30,    31,     0,
       0,    32,     0,   -44,     0,   257,   278,     0,    35,     0,
     192,   192,   -44,   -44,   -44,   -44,   -44,   -44,   286,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,     0,   150,     0,
       0,   -44,   257,    36,   257,   257,   257,   317,   317,   317,
     317,   257,   278,    36,    36,     0,     0,     0,   -39,   -39,
     -39,   -39,   488,   488,   581,   582,   -39,   233,    35,   277,
      35,     0,   -41,   -41,    36,   257,     0,   -41,    36,   -41,
     -41,   -41,   -41,     0,     0,    -6,     0,     0,    -6,    -6,
      -6,    -6,   192,   -41,     0,   192,     0,     0,   -41,   -41,
       0,     0,   -41,    35,   256,    -6,     0,    35,   -42,   -42,
     192,     0,     0,   -42,     0,   -42,   -42,   -42,   -42,     0,
      -7,   192,   192,    -7,    -7,    -7,    -7,     0,     0,   -42,
       0,     0,     0,   192,   -42,   -42,     0,   234,   -42,     0,
      -7,     0,     0,     0,     0,   -43,   -43,     0,     0,    36,
     -43,     0,   -43,   -43,   -43,   -43,     0,   192,   -45,   -45,
     257,     0,   -45,   -45,   -45,   -45,   -43,     0,     0,    20,
      21,   -43,   -43,   192,    22,   -43,    23,   178,    24,    25,
       0,   278,     0,     0,     0,     0,   257,   257,   278,   234,
      29,     0,     0,    36,     0,    30,    31,   307,   308,    32,
       0,     0,   309,     0,   310,   311,   312,   313,    -3,     0,
       0,    -3,    -3,    -3,    -3,     0,     0,   192,   314,     0,
     317,     0,     0,    30,    31,   317,   317,    32,    -3,     0,
     -75,     0,     0,   -75,   -75,   -75,   -75,   192,   192,   -85,
     234,     0,   -85,   -85,   -85,   -85,     0,     0,   247,   248,
     -75,     0,   234,   249,     0,   250,   251,   252,   253,   -85,
       0,   234,   234,   234,   234,     0,   234,     0,    36,   254,
       0,     0,     0,     0,    30,    31,   257,   257,    32,   234,
       0,     0,     0,     0,     0,     0,   278,   278,   278,   489,
     489,   489,   489,   278,   278,   278,   278,   278,   -22,   -22,
     -22,   -22,   386,   387,     0,   257,   278,   388,   389,     0,
     192,   192,     0,    36,   -46,    37,    36,   -22,   -46,   -46,
     -46,   -46,     0,   317,   317,     0,   234,   193,     0,   192,
       0,     0,   179,   180,    37,     0,     0,   181,     0,   182,
     183,   184,   185,     0,   -48,   -48,   -48,   -48,    37,    37,
      37,    37,   -48,   189,   235,     0,     0,     0,    30,    31,
       0,    36,    32,     0,     0,     0,    -9,     0,     0,    -9,
      -9,    -9,    -9,   193,     0,   197,   198,     0,     0,   235,
     199,     0,   200,   201,   202,   203,    -9,    37,   192,     0,
       0,    37,   489,     0,     0,     0,   207,     0,     0,     0,
      37,    30,    31,     0,     0,    32,     0,     0,   -96,     0,
     258,   279,     0,    36,     0,   193,   193,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,     0,   -96,     0,     0,   -96,   258,    37,   258,
     258,   258,   318,   318,   318,   318,   258,   279,    37,    37,
       0,     0,     0,   -61,   -61,   -61,   -61,   489,   489,   489,
     489,   -61,   234,    36,   278,    36,     0,   220,   221,    37,
     258,     0,   222,    37,   223,   224,   225,   226,     0,     0,
     -72,     0,     0,   -72,   -72,   -72,   -72,   193,   230,     0,
     193,     0,     0,    30,    31,     0,     0,    32,    36,   257,
     -72,     0,    36,   262,   263,   193,     0,     0,   264,     0,
     265,   395,   267,   268,     0,   -71,   193,   193,   -71,   -71,
     -71,   -71,     0,     0,   270,     0,     0,     0,   193,    30,
      31,     0,   235,    32,     0,   -71,     0,     0,     0,     0,
     478,   479,     0,     0,    37,   480,     0,   481,   482,   483,
     484,    56,   193,     0,     0,   258,   -44,   -44,   -44,   -44,
       0,   485,     0,     0,   -44,     0,    30,    31,   193,     0,
      32,   -40,   -40,   -40,   -40,     0,   279,     0,     0,   -40,
     -96,   258,   258,   279,   235,     0,     0,     0,    37,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,     0,     0,   -96,     0,
       0,     0,   193,     0,     0,   318,     0,     0,    56,     0,
     318,   318,     0,   -44,   -44,   -44,   -44,     0,   246,     0,
     -96,   -44,   193,   193,     0,   235,     0,     0,     0,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   235,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   -96,   235,   235,   235,   235,
     -96,   235,     0,    37,     0,   -96,   -96,   -96,   -96,     0,
     -96,   258,   258,   -96,   235,     0,     0,     0,     0,     0,
       0,   279,   279,   279,   490,   490,   490,   490,   279,   279,
     279,   279,   279,   -23,   -23,   -23,   -23,   386,   387,     0,
     258,   279,   388,   389,     0,   193,   193,     0,    37,   -33,
      40,    37,   -23,   -33,   -33,   334,   335,     0,   318,   318,
      56,   235,   194,     0,   193,   -44,   -44,   -44,   -44,    40,
     413,   -96,   -96,   -44,     0,     0,   -96,   -96,   -96,   -96,
       0,   -45,     0,    40,    40,    40,    40,     0,     0,   237,
     -45,   -45,   -45,   -45,   -45,   -45,    37,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -96,     0,     0,   194,   -45,
     -96,   -96,   -96,   -96,   237,     0,     0,     0,   -96,   -44,
       0,     0,    40,   193,     0,     0,    40,   490,   -44,   -44,
     -44,   -44,   -44,   -44,   286,    40,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -46,     0,   259,   280,   -44,    37,     0,
     194,   194,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,   -46,   259,    40,   259,   259,   259,   319,   319,   319,
     319,   259,   280,    40,    40,     0,     0,     0,   -47,   -47,
     -47,   -47,   490,   490,   490,   490,   -47,   235,    37,   279,
      37,     0,     0,     0,    40,   259,     0,     0,    40,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,   -29,
     554,   555,   194,     0,     0,   194,     0,     0,   -29,     0,
       0,     0,     0,    37,   258,     0,   -33,    37,     0,     0,
     194,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   194,   194,     0,   -33,   -33,   -33,   -33,   393,   394,
       0,     0,   -96,   194,   -33,     0,     0,   237,     0,     0,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,    40,
     -96,   -96,   -96,   -96,   -96,   -96,   -36,   194,     0,     0,
     259,     0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,   194,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   280,     0,     0,   -36,   -39,   259,   259,   280,   237,
       0,     0,     0,    40,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,   -39,     0,     0,     0,   194,     0,     0,
     319,     0,   -96,   -96,   -96,   319,   319,   -96,   -96,   -96,
     -96,   -62,   -62,   -62,   -62,   -44,     0,   194,   194,   -62,
     237,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     376,   -44,   237,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     426,   237,   237,   237,   237,     0,   237,     0,    40,     0,
     -34,   -34,    52,    53,     0,     0,   259,   259,   -34,   237,
       0,     0,     0,     0,     0,     0,   280,   280,   280,   491,
     491,   491,   491,   280,   280,   280,   280,   280,   -24,   -24,
     -24,   -24,   386,   387,     0,   259,   280,   388,   389,     0,
     194,   194,     0,    40,   -36,    41,    40,   -24,   -36,   -36,
     -36,   -36,     0,   319,   319,     0,   237,   195,     0,   194,
       0,     0,     0,     0,    41,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -48,     0,    41,    41,
      41,    41,     0,     0,   238,   -48,   -48,   -48,   -48,   -48,
     -48,    40,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     363,   -44,   -44,   195,   -48,   -44,   -44,   -44,   -44,   238,
       0,     0,     0,     0,   -61,     0,     0,    41,   194,     0,
       0,    41,   491,   -61,   -61,   -61,   -61,   -61,   -61,     0,
      41,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -40,     0,
     260,   281,   -61,    40,     0,   195,   195,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,   -40,   260,    41,   260,
     260,   260,   320,   320,   320,   320,   260,   281,    41,    41,
       0,     0,     0,   -35,   -35,    52,    53,   491,   491,   491,
     491,   -35,   237,    40,   280,    40,     0,     0,     0,    41,
     260,     0,     0,    41,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,     0,   -30,   -30,   554,   555,   195,     0,     0,
     195,     0,     0,   -30,     0,     0,     0,     0,    40,   259,
       0,   -47,    40,     0,     0,   195,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   195,   195,     0,   -47,
     -47,   -47,   -47,   -47,   -47,     0,     0,   -44,   195,   -47,
       0,     0,   238,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   376,   -44,    41,   -44,   -44,   -44,   -44,   -44,
     -44,   -62,   195,     0,     0,   260,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,   195,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   281,     0,     0,   -62,
     -34,   260,   260,   281,   238,     0,     0,     0,    41,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,
     -34,   -34,   393,   394,     0,     0,     0,     0,   -34,     0,
       0,     0,   195,     0,     0,   320,     0,   337,   -44,     0,
     320,   320,   -44,   -44,   -44,   -44,   -37,   -37,   -37,   -37,
     -45,     0,   195,   195,   -37,   238,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   238,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   238,   238,   238,   238,
       0,   238,     0,    41,     0,   -38,   -38,   -38,   -38,     0,
       0,   260,   260,   -38,   238,     0,     0,     0,     0,     0,
       0,   281,   281,   281,   492,   492,   492,   492,   281,   281,
     281,   281,   281,     0,   -64,   -64,   -64,   -64,     0,     0,
     260,   281,   -64,     0,     0,   195,   195,     0,    41,     0,
      34,    41,   -65,   -65,   -65,   -65,     0,   -35,   320,   320,
     -65,   238,   190,     0,   195,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,   393,
     394,   -37,     0,    67,    68,   -35,     0,     0,     0,   232,
     -37,   -37,   -37,   -37,   -37,   -37,    41,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,   190,   -37,
     -63,   -63,   -63,   -63,   232,     0,     0,     0,   -63,   -38,
       0,     0,    34,   195,     0,     0,    34,   492,   -38,   -38,
     -38,   -38,   -38,   -38,     0,    34,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -60,     0,   255,   276,   -38,    41,     0,
     190,   190,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
       0,   -60,   255,    34,   255,   255,   255,   315,   315,   315,
     315,   255,   276,    34,    34,     0,     0,     0,   -66,   -66,
     -66,   -66,   492,   492,   492,   492,   -66,   238,    41,   281,
      41,     0,     0,     0,    34,   255,   -39,   -64,    34,     0,
     -39,   -39,   -39,   -39,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   190,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,    41,   260,   -64,   -65,    41,     0,     0,
     190,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   350,   351,     0,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -48,   -63,   190,   -65,   -48,   -48,   -48,   -48,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,    34,
     -63,   -63,   -63,   -63,   -63,   -63,   -66,   190,     0,     0,
     -63,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,   190,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,   -66,     0,   398,   399,   276,   232,
       0,     0,   -88,    34,   -88,   -88,   -88,   -88,   -88,   171,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   190,     0,   -60,
     -60,   -60,   -60,     0,   -88,   424,   425,   -60,     0,   -88,
     -88,     0,     0,   -88,     0,   -88,   -88,   -88,     0,     0,
     232,     0,     0,    33,     0,     0,     0,   442,   443,     0,
       0,     0,   232,   -46,   -46,    48,     0,   -46,   -46,   -46,
     -46,   453,   454,     0,     0,     0,   232,     0,    34,     0,
       0,   -22,   -22,   -22,   -22,   144,   145,     0,   -22,   232,
     146,   147,   231,     0,     0,     0,   276,   276,   276,   487,
     487,   487,   487,   276,   498,   499,     0,     0,     0,     0,
       0,   241,     0,     0,     0,   255,   276,   231,     0,     0,
     190,   190,     0,    34,     0,    33,    34,   -33,   -33,    33,
       0,   -33,   -33,   360,   361,     0,   232,   -61,    33,   190,
       0,   -61,   -61,   -61,   -61,     0,   -31,     0,   129,   275,
       0,     0,     0,   241,   241,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,   -31,   391,   392,     0,     0,
       0,    34,     0,     0,   -31,   129,    33,   129,   129,   129,
     160,   161,   162,   163,   164,   275,    33,    33,     0,     0,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   190,   -96,
     -96,   -96,   -96,   -96,   -96,     0,     0,    33,   129,   -96,
       0,    33,     0,     0,   -36,   -36,     0,   -46,   -36,   -36,
     -36,   -36,     0,    34,     0,   332,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -33,   -40,   342,     0,     0,   -40,   -40,   -40,   -40,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
     -33,   -33,   -33,   373,   374,     0,   356,   579,   580,     0,
       0,     0,   232,    34,   276,    34,     0,     0,     0,     0,
     -39,   -39,    33,   -32,   -39,   -39,   -39,   -39,     0,     0,
     371,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   283,   284,     0,   381,    39,    34,   255,
     -48,   -48,    34,     0,   -48,   -48,   -48,   -48,   -36,    49,
       0,   275,   231,     0,     0,     0,    33,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -31,     0,     0,     0,   236,     0,     0,     0,
     418,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   283,   284,     0,   242,     0,     0,     0,     0,
     -34,   236,     0,   231,   -34,   -34,   334,   335,     0,    39,
       0,     0,     0,    39,     0,   231,   -27,   -27,   -27,   -27,
     -27,   -27,    39,     0,     0,   -27,   -27,   554,   555,   231,
       0,    33,     0,     0,     0,   -27,     0,   242,   242,     0,
       0,   -35,   231,     0,    38,   -35,   -35,   334,   335,   275,
     275,   275,   486,   494,   495,   496,   497,   -61,   -61,     0,
      39,   -61,   -61,   -61,   -61,     0,     0,     0,   129,   275,
      39,    39,     0,   241,   241,     0,    33,     0,     0,    33,
       0,     0,     0,    71,     0,     0,     0,   148,     0,   231,
       0,    39,   241,     0,     0,    39,   -25,   -25,   -25,   -25,
     -25,   -25,    85,   -25,     0,   -25,   -25,   -47,    86,   333,
       0,   -47,   -47,   -47,   -47,     0,   100,     0,     0,     0,
     114,     0,     0,     0,    33,     0,     0,   343,     0,   100,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,   -28,
     -28,   554,   555,     0,   137,   138,     0,     0,     0,   -28,
     357,   552,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,   -29,   -29,   322,   323,   -62,    39,   100,     0,   -62,
     -62,   -62,   -62,   -39,   372,     0,    33,   166,   100,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     382,   -39,   -39,   -39,   -39,   -39,   -39,     0,   100,     0,
       0,     0,   100,     0,     0,     0,   236,     0,     0,     0,
      39,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,
     -30,   -30,   322,   323,     0,   231,    33,   275,    33,   -48,
       0,     0,     0,     0,   419,     0,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,   236,     0,     0,
       0,    33,   129,     0,     0,    33,     0,     0,   -61,   236,
       0,     0,     0,   366,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   236,   -61,    39,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,   236,   -44,   -44,   -44,
     -44,   -44,   -44,   559,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,    71,   -40,   -40,   -44,   404,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,     0,   242,   242,     0,
      39,     0,     0,    39,     0,   -47,   -47,     0,   -40,   -47,
     -47,   -47,   -47,   236,     0,     0,   242,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -62,   -62,    71,     0,   -62,   -62,   -62,   -62,
       0,     0,     0,     0,     0,   -34,    71,     0,    39,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
      71,   -34,   100,   -34,   -34,   -34,   -34,   373,   374,     0,
       0,     0,     0,    71,   -84,   553,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
      39,     0,     0,     0,   508,   509,   -84,   100,     0,     0,
     512,   -84,   -84,     0,     0,   -84,     0,   -84,   -84,   -84,
      71,     0,   -77,   522,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   236,
      39,     0,    39,     0,   -77,   100,     0,     0,     0,   -77,
     -77,   -35,     0,   -77,     0,   -77,   -77,   -77,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
     -35,   -35,   -35,   373,   374,    39,     0,     0,     0,    39,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   100,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,   -34,
     -34,     0,   -76,   -34,   -34,   360,   361,   -76,   -76,   -47,
       0,   -76,     0,   -76,   -76,   -76,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -47,     0,   -47,     0,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,    71,   100,     0,   100,
       0,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,   100,   -83,     0,     0,   100,     0,   -83,   -83,
       0,     0,   -83,     0,   -83,   -83,   -83,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,   -35,   -35,     0,   -78,
     -35,   -35,   360,   361,   -78,   -78,     0,     0,   -78,     0,
     -78,   -78,   -78,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,   -37,   -37,     0,   -79,   -37,   -37,   -37,   -37,
     -79,   -79,     0,     0,   -79,     0,   -79,   -79,   -79,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,   -38,   -38,
       0,   -80,   -38,   -38,   -38,   -38,   -80,   -80,     0,     0,
     -80,     0,   -80,   -80,   -80,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,   -64,   -64,     0,   -81,   -64,   -64,
     -64,   -64,   -81,   -81,     0,     0,   -81,     0,   -81,   -81,
     -81,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
     -65,   -65,     0,   -82,   -65,   -65,   -65,   -65,   -82,   -82,
       0,     0,   -82,     0,   -82,   -82,   -82,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,   -63,   -63,     0,   -72,
     -63,   -63,   -63,   -63,   -72,   -72,     0,     0,   -72,     0,
     -72,   -72,   -72,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,   -66,   -66,     0,   -86,   -66,   -66,   -66,   -66,
     -86,   -86,     0,     0,   -86,     0,   -86,   -86,   -86,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     0,     0,     0,     0,   -60,   -60,
       0,   -95,   -60,   -60,   -60,   -60,   -95,   -95,     0,     0,
     -95,     0,   -95,   -95,   -95,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,   -37,     0,     0,   -75,   -37,   -37,
     -37,   -37,   -75,   -75,     0,     0,   -75,     0,   -75,   -75,
     -75,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
     -38,     0,     0,   -71,   -38,   -38,   -38,   -38,   -71,   -71,
       0,     0,   -71,     0,   -71,   -71,   -71,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,   -64,     0,     0,   -85,
     -64,   -64,   -64,   -64,   -85,   -85,     0,     0,   -85,     0,
     -85,   -85,   -85,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     595,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,   -65,     0,     0,   -88,   -65,   -65,   -65,   -65,
     -88,   -88,     0,     0,   -88,     0,   -88,   -88,   -88,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,   -63,     0,
       0,   -91,   -63,   -63,   -63,   -63,   -91,   -91,     0,     0,
     -91,     0,   -91,   -91,   -91,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,     0,     0,     0,   -66,     0,     0,   -94,   -66,   -66,
     -66,   -66,   -94,   -94,     0,     0,   -94,     0,   -94,   -94,
     -94,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -60,     0,     0,   -93,   -60,   -60,   -60,   -60,   -93,   -93,
       0,     0,   -93,     0,   -93,   -93,   -93,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,     0,     0,     0,     0,     0,     0,   -92,
       0,     0,     0,     0,   -92,   -92,     0,     0,   -92,     0,
     -92,   -92,   -92,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,   -89,     0,     0,     0,     0,
     -89,   -89,     0,     0,   -89,     0,   -89,   -89,   -89,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,   -90,     0,     0,     0,     0,   -90,   -90,     0,     0,
     -90,     0,   -90,   -90,   -90,   -70,     0,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,   -70,     0,     0,
       0,     0,   -70,   -70,     0,     0,   -70,     0,   -70,    88,
     -70,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,     0,   -84,   -84,
       0,     0,   -84,     0,   -84,   -84,   -84,   -77,     0,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,     0,     0,     0,   -77,   -77,     0,     0,   -77,     0,
     -77,   -77,   -77,    90,     0,     1,     2,     3,     4,    91,
       0,    92,    93,    94,    20,    21,    95,    96,    97,    22,
       0,    23,   243,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
      30,    31,     0,     0,    32,     0,   244,   121,   -50,   -76,
       0,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,   -76,   -76,     0,     0,
     -76,     0,   -76,   -76,   -76,   -74,     0,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -74,     0,     0,
       0,     0,   -74,   -74,     0,     0,   -74,     0,   -74,   -74,
     -74,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,     0,   -83,   -83,
       0,     0,   -83,     0,   -83,   -83,   -83,   -78,     0,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,   -78,
       0,     0,     0,     0,   -78,   -78,     0,     0,   -78,     0,
     -78,   -78,   -78,   -79,     0,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,   -79,     0,     0,     0,     0,
     -79,   -79,     0,     0,   -79,     0,   -79,   -79,   -79,   -80,
       0,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,     0,     0,     0,   -80,   -80,     0,     0,
     -80,     0,   -80,   -80,   -80,   -81,     0,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
       0,     0,   -81,   -81,     0,     0,   -81,     0,   -81,   -81,
     -81,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,   -82,     0,     0,     0,     0,   -82,   -82,
       0,     0,   -82,     0,   -82,   -82,   -82,   -86,     0,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,   -86,
       0,     0,     0,     0,   -86,   -86,     0,     0,   -86,     0,
     -86,   -86,   -86,   -73,     0,   -73,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,   -73,     0,     0,     0,     0,
     -73,   -73,     0,     0,   -73,     0,   -73,   -73,   -73,   -95,
       0,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     0,     0,     0,     0,     0,     0,
       0,   -95,     0,     0,     0,     0,   -95,   -95,     0,     0,
     -95,     0,   -95,   -95,   -95,   -91,     0,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,     0,     0,     0,     0,     0,     0,   -91,     0,     0,
       0,     0,   -91,   -91,     0,     0,   -91,     0,   -91,   -91,
     -91,   -94,     0,   -94,   -94,   -94,   -94,   -94,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,     0,
       0,     0,     0,   -94,     0,     0,     0,     0,   -94,   -94,
       0,     0,   -94,     0,   -94,   -94,   -94,   -93,     0,   -93,
     -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,     0,     0,     0,     0,     0,     0,   -93,
       0,     0,     0,     0,   -93,   -93,     0,     0,   -93,     0,
     -93,   -93,   -93,   -92,     0,   -92,   -92,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,
       0,     0,     0,     0,     0,   -92,     0,     0,     0,     0,
     -92,   -92,     0,     0,   -92,     0,   -92,   -92,   -92,   -89,
       0,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,   -89,     0,     0,     0,     0,   -89,   -89,     0,     0,
     -89,     0,   -89,   -89,   -89,   -90,     0,   -90,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,   -90,     0,     0,
       0,     0,   -90,   -90,     0,     0,   -90,     0,   -90,   -90,
     -90,   -70,     0,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,     0,   -70,   -70,
       0,     0,   -70,     0,   -70,   364,   -70,   -75,     0,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,     0,     0,   -75,   -75,     0,     0,   -75,     0,
     -75,   -75,   -75,   -70,     0,   -70,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,     0,   -70,     0,     0,     0,     0,
     -70,   -70,     0,     0,   -70,     0,   -70,   409,   -70,   -72,
       0,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,   -72,   -72,     0,     0,
     -72,     0,   -72,   -72,   -72,    90,     0,     1,     2,     3,
       4,    91,     0,    92,    93,    94,    20,    21,    95,    96,
      97,    22,     0,    23,   243,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,    30,    31,     0,     0,    32,     0,   244,   538,
     -50,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,     0,   -85,   -85,
       0,     0,   -85,     0,   -85,   -85,   -85,    90,     0,     1,
       2,     3,     4,    91,     0,    92,    93,    94,    20,    21,
      95,    96,    97,    22,     0,    23,   243,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,    30,    31,     0,     0,    32,     0,
     244,   566,   -50,   -71,     0,   -71,   -71,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,   -71,     0,     0,     0,     0,
     -71,   -71,     0,     0,   -71,     0,   -71,   -71,   -71,    90,
       0,     1,     2,     3,     4,    91,     0,    92,    93,    94,
      20,    21,    95,    96,    97,    22,     0,    23,   243,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,    30,    31,     0,     0,
      32,     0,   244,   287,   -50,     1,     2,     3,     4,   288,
       0,   289,   290,   291,    20,    21,   292,   293,   294,    22,
       0,    23,   243,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
      30,    31,   -62,     0,    32,     0,   295,     0,   -50,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -37,   -62,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -37,   -37,   -37,   -37,
     -37,   -37,   -38,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -38,   -38,   -38,   -38,   -38,   -38,   -64,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -64,   -64,   -64,   -64,
     -64,   -64,   -65,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -65,   -65,   -65,   -65,   -65,   -65,   -63,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,
     -63,   -63,   -66,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -66,   -66,   -66,   -66,   -66,   -66,   -60,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
     -45,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
     -46,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
     -33,   -33,   -33,   -33,   556,   557,     0,     0,     0,     0,
     -33,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -36,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
     -48,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
     -61,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
     -40,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,
     -47,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
     -62,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
     -34,   -34,   -34,   -34,   556,   557,     0,     0,     0,     0,
     -34,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
     -35,   -35,   -35,   -35,   556,   557,     0,     0,     0,     0,
     -35,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
     -37,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
     -64,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
     -65,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
     -63,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
     -66,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,     0,
     -60,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,
     -96,   -96,   -96,   -96,   -96,   -96,   -44,   -44,   -44,   -44,
     -44,   -44,   423,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,   420,   421,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,   420,   421,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   420,
     421,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   322,   323,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     322,   323,   -23,   -23,   -23,   -23,   144,   145,     0,   -23,
       0,   146,   147,   -24,   -24,   -24,   -24,   144,   145,     0,
     -24,     0,   146,   147
};

static const yytype_int16 yycheck[] =
{
       0,   113,    74,   112,   172,   140,    20,     7,   113,    27,
      10,   140,     0,     0,   244,    20,   365,    17,     0,     7,
       7,    20,   102,    27,    28,     7,   149,    18,    46,    29,
     142,   143,    33,   286,   139,    20,    36,   149,     3,     4,
       5,     6,    46,   140,   149,    46,    46,    38,    39,   172,
      50,    51,    52,    53,   140,    43,    56,    57,    20,   140,
     140,   410,    43,   172,     0,   295,    33,    43,   140,    34,
      33,   151,   113,    27,    28,    75,    33,   140,   113,    46,
      33,    81,    38,    39,   337,    27,    28,    29,    30,    89,
      46,   171,    46,    93,    82,   175,   349,    46,    98,    18,
      27,    28,   102,    33,    46,    46,   141,    34,   149,    46,
     363,    18,   112,   113,   149,    18,   116,   117,   118,    38,
      39,    40,    41,   376,     3,     4,     5,     6,    34,    35,
      33,    38,    39,    40,    41,    38,    39,    40,    41,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   140,   140,    46,    34,    46,    27,   140,    34,
      35,    45,     0,    47,    34,     3,     4,     5,     6,    27,
     423,   171,   172,   285,    18,   175,    34,    27,    12,    13,
     285,    20,    20,    17,    34,    19,    20,    21,    22,   189,
      20,    25,   192,    34,    38,    39,    40,    41,    34,    33,
       3,     4,     5,     6,    38,    39,    34,   207,    42,    34,
      35,    18,    46,    38,    39,    12,    13,    20,   218,   219,
      17,    34,    19,    20,    21,    22,    23,    24,    25,    34,
     230,   115,    27,    28,   234,    34,    33,    34,    35,    34,
      34,    38,    39,    34,   285,    42,   246,    38,    39,    18,
     285,    34,    34,    35,   254,    38,    39,   257,    27,    28,
      29,    30,    31,    32,    34,    35,    44,    36,    37,    34,
     270,   383,   384,   385,    34,    35,    34,    46,   278,    33,
     403,    34,    35,   283,   284,   285,   286,    33,    18,    33,
     290,   403,    33,   402,    12,    13,   296,    33,   403,    17,
      33,    19,    20,    21,    22,    18,   559,    25,    38,    39,
      40,    41,    34,    35,   314,    33,    34,   317,    34,    35,
      38,    39,   322,   323,    42,    38,    39,    40,    41,    20,
     330,    34,    35,    34,   334,   335,    46,   337,    34,    35,
     340,    34,   383,   384,   385,    38,    39,     0,   383,   349,
       3,     4,     5,     6,   354,    34,    35,    46,   358,   359,
     360,   361,   403,   363,    46,   365,    34,    20,   403,   369,
      38,    39,    46,   373,   374,    18,   376,    34,   458,   379,
      46,    38,    39,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,    38,    39,    40,    41,    46,
      34,    34,   402,   403,    38,    39,   406,   407,   408,    34,
     410,    34,    35,   413,    18,    34,   416,    34,    35,    18,
     420,   421,    46,   423,    46,   560,   426,   562,   596,    33,
     510,   560,    46,   562,    38,    39,    40,    41,   561,    38,
      39,    40,    41,    46,   328,   329,    34,   331,    46,   561,
      38,    39,    40,    41,   338,   339,   561,   341,   458,    34,
     595,    34,    35,   560,   599,   562,   595,    33,   352,   353,
     599,   355,    33,   596,   560,    33,   562,    34,    35,   560,
     560,   562,   562,   367,   368,   485,   370,   596,   560,   489,
     562,    34,    35,   377,   378,    33,   380,   560,   595,   562,
      34,    34,   599,    34,    34,    17,    33,    38,    39,   595,
     510,    33,    33,   599,   595,   595,    33,    29,   599,   599,
     561,   405,    18,   595,    36,    18,   561,   599,    18,    18,
     414,   415,   595,   417,    18,    34,   599,    34,    50,    51,
      52,    53,    33,    46,    56,    38,    39,    40,    41,    34,
     550,    33,    33,    33,   554,   555,   556,   557,    33,   559,
     560,   561,   562,    75,    18,     3,     4,     5,     6,    81,
      33,    18,   560,   560,   562,   562,    33,    89,   560,    46,
     562,    93,    33,    33,    38,    39,    40,    41,    33,    33,
     102,    38,    39,    40,    41,   595,   596,    33,    18,   599,
     112,   113,    18,    33,    33,   117,   118,   595,   595,    34,
      34,   599,   599,   595,    38,    39,    33,   599,    38,    39,
      40,    41,    38,    39,    40,    41,    33,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      38,    39,    40,    41,    33,    12,    13,    33,    46,    33,
      17,    33,    19,    20,    21,    22,    23,    24,    25,   171,
     172,    33,    33,   175,   548,   549,    33,   551,    34,    34,
      46,    38,    39,    18,    34,    42,    34,   189,    38,    39,
     192,    34,    27,    28,    29,    30,    31,    32,    34,    46,
      46,    36,    37,    38,    39,   207,    34,    34,    34,   211,
      34,    46,    34,    12,    13,    18,   218,   219,    17,    34,
      19,    20,    21,    22,    23,    24,    25,    18,   230,    34,
      34,    33,   234,    34,    33,    38,    39,    40,    41,    38,
      39,    34,    34,    42,   246,    34,    34,    38,    39,    40,
      41,    34,   254,    34,    34,   257,    27,    28,    29,    30,
      27,    28,    29,    30,    12,    13,    34,    34,   270,    17,
      34,    19,    20,    21,    22,    46,   278,    25,    34,    34,
      33,   283,   284,   285,   286,    33,    18,    33,   290,    33,
      38,    39,    12,    13,    42,    46,    34,    17,    34,    19,
      20,    21,    22,    23,    24,    25,    38,    39,    40,    41,
      34,    34,   314,    33,    -1,   317,    18,    46,    38,    39,
     322,   323,    42,    38,    39,    40,    41,    34,    18,    34,
      34,    46,   334,   335,    34,   337,    38,    39,    40,    41,
      34,    34,     7,    46,   346,   347,    18,   349,    38,    39,
      40,    41,    34,    34,    46,    18,   358,   359,   360,   361,
      46,   363,    46,   365,    34,    34,    38,    39,    40,    41,
      34,   373,   374,    82,   376,    38,    39,    40,    41,    -1,
      -1,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,    27,    28,    29,    30,    31,    32,    -1,
     402,   403,    36,    37,    -1,   407,   408,    -1,   410,    -1,
      17,   413,    46,    27,    28,    29,    30,    -1,   420,   421,
      34,   423,    29,    -1,   426,    -1,    -1,    12,    13,    36,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    50,    51,    52,    53,    -1,    33,    56,
      -1,    -1,    -1,    38,    39,     0,   458,    42,     3,     4,
       5,     6,    38,    39,    40,    41,    -1,    -1,    75,    -1,
      46,    12,    13,    -1,    81,    20,    17,    -1,    19,    20,
      21,    22,    89,   485,    25,    -1,    93,   489,    38,    39,
      40,    41,    33,    -1,    -1,   102,    46,    38,    39,    -1,
      -1,    42,    -1,    18,    -1,   112,   113,    -1,   510,    -1,
     117,   118,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    46,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    38,    39,
      40,    41,   554,   555,   556,   557,    46,   559,   560,   561,
     562,    -1,    12,    13,   171,   172,    -1,    17,   175,    19,
      20,    21,    22,    -1,    -1,     0,    -1,    -1,     3,     4,
       5,     6,   189,    33,    -1,   192,    -1,    -1,    38,    39,
      -1,    -1,    42,   595,   596,    20,    -1,   599,    12,    13,
     207,    -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,
       0,   218,   219,     3,     4,     5,     6,    -1,    -1,    33,
      -1,    -1,    -1,   230,    38,    39,    -1,   234,    42,    -1,
      20,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,   246,
      17,    -1,    19,    20,    21,    22,    -1,   254,    34,    35,
     257,    -1,    38,    39,    40,    41,    33,    -1,    -1,    12,
      13,    38,    39,   270,    17,    42,    19,    20,    21,    22,
      -1,   278,    -1,    -1,    -1,    -1,   283,   284,   285,   286,
      33,    -1,    -1,   290,    -1,    38,    39,    12,    13,    42,
      -1,    -1,    17,    -1,    19,    20,    21,    22,     0,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,   314,    33,    -1,
     317,    -1,    -1,    38,    39,   322,   323,    42,    20,    -1,
       0,    -1,    -1,     3,     4,     5,     6,   334,   335,     0,
     337,    -1,     3,     4,     5,     6,    -1,    -1,    12,    13,
      20,    -1,   349,    17,    -1,    19,    20,    21,    22,    20,
      -1,   358,   359,   360,   361,    -1,   363,    -1,   365,    33,
      -1,    -1,    -1,    -1,    38,    39,   373,   374,    42,   376,
      -1,    -1,    -1,    -1,    -1,    -1,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,    27,    28,
      29,    30,    31,    32,    -1,   402,   403,    36,    37,    -1,
     407,   408,    -1,   410,    34,    17,   413,    46,    38,    39,
      40,    41,    -1,   420,   421,    -1,   423,    29,    -1,   426,
      -1,    -1,    12,    13,    36,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    -1,    38,    39,    40,    41,    50,    51,
      52,    53,    46,    33,    56,    -1,    -1,    -1,    38,    39,
      -1,   458,    42,    -1,    -1,    -1,     0,    -1,    -1,     3,
       4,     5,     6,    75,    -1,    12,    13,    -1,    -1,    81,
      17,    -1,    19,    20,    21,    22,    20,    89,   485,    -1,
      -1,    93,   489,    -1,    -1,    -1,    33,    -1,    -1,    -1,
     102,    38,    39,    -1,    -1,    42,    -1,    -1,    18,    -1,
     112,   113,    -1,   510,    -1,   117,   118,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    46,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    38,    39,    40,    41,   554,   555,   556,
     557,    46,   559,   560,   561,   562,    -1,    12,    13,   171,
     172,    -1,    17,   175,    19,    20,    21,    22,    -1,    -1,
       0,    -1,    -1,     3,     4,     5,     6,   189,    33,    -1,
     192,    -1,    -1,    38,    39,    -1,    -1,    42,   595,   596,
      20,    -1,   599,    12,    13,   207,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    -1,     0,   218,   219,     3,     4,
       5,     6,    -1,    -1,    33,    -1,    -1,    -1,   230,    38,
      39,    -1,   234,    42,    -1,    20,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,   246,    17,    -1,    19,    20,    21,
      22,    33,   254,    -1,    -1,   257,    38,    39,    40,    41,
      -1,    33,    -1,    -1,    46,    -1,    38,    39,   270,    -1,
      42,    38,    39,    40,    41,    -1,   278,    -1,    -1,    46,
      18,   283,   284,   285,   286,    -1,    -1,    -1,   290,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,   314,    -1,    -1,   317,    -1,    -1,    33,    -1,
     322,   323,    -1,    38,    39,    40,    41,    -1,    43,    -1,
      18,    46,   334,   335,    -1,   337,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,   349,    36,    37,
      38,    39,    40,    41,    -1,    43,   358,   359,   360,   361,
      33,   363,    -1,   365,    -1,    38,    39,    40,    41,    -1,
      43,   373,   374,    46,   376,    -1,    -1,    -1,    -1,    -1,
      -1,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,    27,    28,    29,    30,    31,    32,    -1,
     402,   403,    36,    37,    -1,   407,   408,    -1,   410,    34,
      17,   413,    46,    38,    39,    40,    41,    -1,   420,   421,
      33,   423,    29,    -1,   426,    38,    39,    40,    41,    36,
      43,    33,    34,    46,    -1,    -1,    38,    39,    40,    41,
      -1,    18,    -1,    50,    51,    52,    53,    -1,    -1,    56,
      27,    28,    29,    30,    31,    32,   458,    -1,    -1,    36,
      37,    38,    39,    40,    41,    33,    -1,    -1,    75,    46,
      38,    39,    40,    41,    81,    -1,    -1,    -1,    46,    18,
      -1,    -1,    89,   485,    -1,    -1,    93,   489,    27,    28,
      29,    30,    31,    32,    33,   102,    -1,    36,    37,    38,
      39,    40,    41,    18,    -1,   112,   113,    46,   510,    -1,
     117,   118,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    38,    39,
      40,    41,   554,   555,   556,   557,    46,   559,   560,   561,
     562,    -1,    -1,    -1,   171,   172,    -1,    -1,   175,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,    37,
      38,    39,   189,    -1,    -1,   192,    -1,    -1,    46,    -1,
      -1,    -1,    -1,   595,   596,    -1,    18,   599,    -1,    -1,
     207,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,   218,   219,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    18,   230,    46,    -1,    -1,   234,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,   246,
      36,    37,    38,    39,    40,    41,    18,   254,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,   270,    36,    37,    38,    39,    40,    41,
      -1,   278,    -1,    -1,    46,    18,   283,   284,   285,   286,
      -1,    -1,    -1,   290,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,   314,    -1,    -1,
     317,    -1,    33,    34,    35,   322,   323,    38,    39,    40,
      41,    38,    39,    40,    41,    18,    -1,   334,   335,    46,
     337,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,   349,    36,    37,    38,    39,    40,    41,    -1,
      43,   358,   359,   360,   361,    -1,   363,    -1,   365,    -1,
      38,    39,    40,    41,    -1,    -1,   373,   374,    46,   376,
      -1,    -1,    -1,    -1,    -1,    -1,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,    27,    28,
      29,    30,    31,    32,    -1,   402,   403,    36,    37,    -1,
     407,   408,    -1,   410,    34,    17,   413,    46,    38,    39,
      40,    41,    -1,   420,   421,    -1,   423,    29,    -1,   426,
      -1,    -1,    -1,    -1,    36,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    18,    -1,    50,    51,
      52,    53,    -1,    -1,    56,    27,    28,    29,    30,    31,
      32,   458,    -1,    -1,    36,    37,    38,    39,    40,    41,
      33,    34,    35,    75,    46,    38,    39,    40,    41,    81,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    89,   485,    -1,
      -1,    93,   489,    27,    28,    29,    30,    31,    32,    -1,
     102,    -1,    36,    37,    38,    39,    40,    41,    18,    -1,
     112,   113,    46,   510,    -1,   117,   118,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    38,    39,    40,    41,   554,   555,   556,
     557,    46,   559,   560,   561,   562,    -1,    -1,    -1,   171,
     172,    -1,    -1,   175,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    36,    37,    38,    39,   189,    -1,    -1,
     192,    -1,    -1,    46,    -1,    -1,    -1,    -1,   595,   596,
      -1,    18,   599,    -1,    -1,   207,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,   218,   219,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    18,   230,    46,
      -1,    -1,   234,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,   246,    36,    37,    38,    39,    40,
      41,    18,   254,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,   270,    36,
      37,    38,    39,    40,    41,    -1,   278,    -1,    -1,    46,
      18,   283,   284,   285,   286,    -1,    -1,    -1,   290,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,   314,    -1,    -1,   317,    -1,    33,    34,    -1,
     322,   323,    38,    39,    40,    41,    38,    39,    40,    41,
      18,    -1,   334,   335,    46,   337,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,   349,    36,    37,
      38,    39,    40,    41,    -1,    -1,   358,   359,   360,   361,
      -1,   363,    -1,   365,    -1,    38,    39,    40,    41,    -1,
      -1,   373,   374,    46,   376,    -1,    -1,    -1,    -1,    -1,
      -1,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,    -1,    38,    39,    40,    41,    -1,    -1,
     402,   403,    46,    -1,    -1,   407,   408,    -1,   410,    -1,
      17,   413,    38,    39,    40,    41,    -1,    18,   420,   421,
      46,   423,    29,    -1,   426,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    18,    -1,    50,    51,    46,    -1,    -1,    -1,    56,
      27,    28,    29,    30,    31,    32,   458,    -1,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    75,    46,
      38,    39,    40,    41,    81,    -1,    -1,    -1,    46,    18,
      -1,    -1,    89,   485,    -1,    -1,    93,   489,    27,    28,
      29,    30,    31,    32,    -1,   102,    -1,    36,    37,    38,
      39,    40,    41,    18,    -1,   112,   113,    46,   510,    -1,
     117,   118,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,    -1,    -1,    38,    39,
      40,    41,   554,   555,   556,   557,    46,   559,   560,   561,
     562,    -1,    -1,    -1,   171,   172,    34,    18,   175,    -1,
      38,    39,    40,    41,    -1,    -1,    27,    28,    29,    30,
      31,    32,   189,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,   595,   596,    46,    18,   599,    -1,    -1,
     207,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,   218,   219,    -1,    36,    37,    38,    39,    40,    41,
      -1,    34,    18,   230,    46,    38,    39,    40,    41,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,   246,
      36,    37,    38,    39,    40,    41,    18,   254,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,   270,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,   283,   284,   285,   286,
      -1,    -1,     1,   290,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,   314,    -1,    38,
      39,    40,    41,    -1,    33,   322,   323,    46,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,    -1,    -1,
     337,    -1,    -1,    17,    -1,    -1,    -1,   344,   345,    -1,
      -1,    -1,   349,    34,    35,    29,    -1,    38,    39,    40,
      41,   358,   359,    -1,    -1,    -1,   363,    -1,   365,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,   376,
      36,    37,    56,    -1,    -1,    -1,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,   402,   403,    81,    -1,    -1,
     407,   408,    -1,   410,    -1,    89,   413,    34,    35,    93,
      -1,    38,    39,    40,    41,    -1,   423,    34,   102,   426,
      -1,    38,    39,    40,    41,    -1,    18,    -1,   112,   113,
      -1,    -1,    -1,   117,   118,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    -1,
      -1,   458,    -1,    -1,    46,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    -1,   485,    36,
      37,    38,    39,    40,    41,    -1,    -1,   171,   172,    46,
      -1,   175,    -1,    -1,    34,    35,    -1,    18,    38,    39,
      40,    41,    -1,   510,    -1,   189,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    18,    34,   207,    -1,    -1,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,   230,   554,   555,    -1,
      -1,    -1,   559,   560,   561,   562,    -1,    -1,    -1,    -1,
      34,    35,   246,    18,    38,    39,    40,    41,    -1,    -1,
     254,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    -1,   270,    17,   595,   596,
      34,    35,   599,    -1,    38,    39,    40,    41,    18,    29,
      -1,   285,   286,    -1,    -1,    -1,   290,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    56,    -1,    -1,    -1,
     314,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    -1,    75,    -1,    -1,    -1,    -1,
      34,    81,    -1,   337,    38,    39,    40,    41,    -1,    89,
      -1,    -1,    -1,    93,    -1,   349,    27,    28,    29,    30,
      31,    32,   102,    -1,    -1,    36,    37,    38,    39,   363,
      -1,   365,    -1,    -1,    -1,    46,    -1,   117,   118,    -1,
      -1,    34,   376,    -1,    17,    38,    39,    40,    41,   383,
     384,   385,   386,   387,   388,   389,   390,    34,    35,    -1,
     140,    38,    39,    40,    41,    -1,    -1,    -1,   402,   403,
     150,   151,    -1,   407,   408,    -1,   410,    -1,    -1,   413,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    18,    -1,   423,
      -1,   171,   426,    -1,    -1,   175,    27,    28,    29,    30,
      31,    32,    75,    34,    -1,    36,    37,    34,    81,   189,
      -1,    38,    39,    40,    41,    -1,    89,    -1,    -1,    -1,
      93,    -1,    -1,    -1,   458,    -1,    -1,   207,    -1,   102,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    -1,   117,   118,    -1,    -1,    -1,    46,
     230,   485,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    34,   246,   140,    -1,    38,
      39,    40,    41,    18,   254,    -1,   510,   150,   151,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
     270,    36,    37,    38,    39,    40,    41,    -1,   171,    -1,
      -1,    -1,   175,    -1,    -1,    -1,   286,    -1,    -1,    -1,
     290,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    -1,   559,   560,   561,   562,    18,
      -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,   337,    -1,    -1,
      -1,   595,   596,    -1,    -1,   599,    -1,    -1,    18,   349,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,   363,    34,   365,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,   376,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,   286,    34,    35,    46,   290,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,   407,   408,    -1,
     410,    -1,    -1,   413,    -1,    34,    35,    -1,    18,    38,
      39,    40,    41,   423,    -1,    -1,   426,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    34,    35,   337,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    18,   349,    -1,   458,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
     363,    34,   365,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,   376,     1,   485,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
     510,    -1,    -1,    -1,   407,   408,    33,   410,    -1,    -1,
     413,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
     423,    -1,     1,   426,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,   559,
     560,    -1,   562,    -1,    33,   458,    -1,    -1,    -1,    38,
      39,    18,    -1,    42,    -1,    44,    45,    46,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,   595,    -1,    -1,    -1,   599,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   510,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      35,    -1,    33,    38,    39,    40,    41,    38,    39,    18,
      -1,    42,    -1,    44,    45,    46,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,   559,   560,    -1,   562,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,   595,    33,    -1,    -1,   599,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    34,    35,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    35,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      34,    35,    -1,    33,    38,    39,    40,    41,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    34,    35,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    33,    38,    39,    40,    41,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    33,    38,    39,    40,    41,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,     1,    46,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    18,    -1,    42,    -1,    44,    -1,    46,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    20,    48,    49,    50,    51,
      53,    77,    79,    86,     0,    50,    86,    43,    33,    46,
      12,    13,    17,    19,    21,    22,    23,    24,    25,    33,
      38,    39,    42,    61,    62,    63,    64,    65,    69,    70,
      71,    72,    86,    52,    33,    33,    33,    33,    61,    70,
      38,    39,    40,    41,    63,    46,    33,    53,    54,    55,
      69,    81,    81,    86,    81,    34,    34,    62,    62,    63,
      63,    69,    73,    86,    34,    18,    34,    34,    34,    34,
      34,    35,    35,    44,    74,    69,    69,    55,    45,    75,
       1,     7,     9,    10,    11,    14,    15,    16,    53,    66,
      69,    74,    76,    77,    78,    79,    80,    82,    83,    84,
      85,    86,    33,    33,    69,    33,    33,    33,    33,    86,
      46,    45,    78,    25,    56,    57,    58,    59,    60,    61,
      56,    67,    68,    86,    46,    81,    86,    69,    69,    27,
      34,    28,    29,    30,    31,    32,    36,    37,    18,    46,
      43,    34,    34,    34,    34,    57,    78,    58,    59,    59,
      61,    61,    61,    61,    61,    67,    69,    78,    46,    46,
      46,     8,    46,    78,    67,    34,    78,    20,    20,    12,
      13,    17,    19,    20,    21,    22,    23,    24,    25,    33,
      62,    63,    64,    65,    71,    72,    86,    12,    13,    17,
      19,    20,    21,    22,    23,    24,    25,    33,    61,    62,
      63,    64,    65,    70,    71,    72,    86,    20,    38,    39,
      12,    13,    17,    19,    20,    21,    22,    23,    24,    25,
      33,    61,    62,    63,    64,    65,    70,    71,    72,    86,
      20,    61,    70,    20,    44,    20,    43,    12,    13,    17,
      19,    20,    21,    22,    33,    62,    63,    64,    65,    71,
      72,    86,    12,    13,    17,    19,    20,    21,    22,    25,
      33,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      71,    72,    46,    38,    39,    27,    33,     1,     7,     9,
      10,    11,    14,    15,    16,    44,    53,    66,    74,    77,
      79,    80,    82,    83,    84,    85,    86,    12,    13,    17,
      19,    20,    21,    22,    33,    62,    63,    64,    65,    71,
      72,    86,    38,    39,    20,    56,    68,    86,    33,    33,
      33,    33,    61,    70,    40,    41,    63,    33,    33,    33,
      33,    33,    61,    70,    38,    39,    40,    41,    63,    33,
      62,    62,    33,    33,    33,    33,    61,    70,    38,    39,
      40,    41,    63,    33,    45,    75,    69,    33,    33,    33,
      33,    61,    70,    40,    41,    63,    33,    33,    33,    33,
      33,    61,    70,    28,    29,    30,    31,    32,    36,    37,
      18,    38,    39,    40,    41,    20,    63,    86,    62,    62,
      57,    73,    33,    33,    69,    33,    33,    33,    33,    45,
      75,    86,    46,    43,    33,    33,    33,    33,    61,    70,
      40,    41,    63,    33,    62,    62,    43,    81,    81,    86,
      81,    34,    34,    63,    63,    73,    81,    81,    86,    81,
      34,    34,    62,    62,    63,    63,    73,    81,    81,    86,
      81,    34,    34,    62,    62,    63,    63,    73,    76,    46,
      81,    81,    86,    81,    34,    34,    63,    63,    73,    81,
      81,    86,    81,    34,    34,    58,    59,    59,    12,    13,
      17,    19,    20,    21,    22,    33,    61,    62,    63,    64,
      65,    71,    72,    86,    61,    61,    61,    61,    62,    62,
      63,    63,    34,    56,    67,    46,    81,    86,    69,    69,
      76,    46,    69,    81,    81,    86,    81,    34,    34,    63,
      63,    73,    69,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    45,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    33,    33,
      33,    33,    61,    70,    38,    39,    40,    41,    63,    33,
      34,    46,    34,    34,    34,    34,    45,    46,    34,    34,
      34,    34,    34,    81,    81,    86,    81,    34,    34,    62,
      62,    63,    63,    73,    78,    67,    78,    46,    46,    46,
      34,    34,    34,    34,    34,     8,    46,    78,    67,    34,
      78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    52,    51,
      53,    53,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    70,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      75,    74,    74,    76,    76,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    80,    81,    82,    82,
      83,    83,    84,    84,    84,    85,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     7,
       1,     1,     1,     1,     1,     0,     4,     2,     1,     3,
       1,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       0,     1,     0,     1,     3,     1,     1,     1,     1,     1,
       4,     1,     3,     4,     4,     4,     4,     3,     1,     0,
       0,     4,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     2,     3,     5,     7,
       9,     5,     5,     5,     5,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* translation_unit: external_declaration_list  */
#line 56 "src/syntax/parser.y"
                                            {
                    (yyval.ast_node) = create_ast_node(TRANSLATION_UNIT, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                    ast = (yyval.ast_node);
                    check_for_main_function(initial_scope);
                  }
#line 3033 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 63 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3041 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 66 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3047 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 69 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3053 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 70 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3059 "./src/syntax/parser.c"
    break;

  case 7: /* external_declaration: assignment_statement  */
#line 71 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3065 "./src/syntax/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 74 "src/syntax/parser.y"
                                                   {
                      is_a_function_declaration = 1;
                      scope_counter_depth++;
                      current_scope = push_scope(current_scope, scope_counter_depth);
                    }
#line 3075 "./src/syntax/parser.c"
    break;

  case 9: /* function_definition: type_specifier identifier '(' $@1 parameters ')' compound_statement  */
#line 78 "src/syntax/parser.y"
                                                        {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-6].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      insert_row_into_symbol_table(current_scope, (yyvsp[-6].token), (yyvsp[-5].ast_node)->value, "function", function_arity_counter);
                      function_arity_counter = 0;
                    }
#line 3085 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: INT  */
#line 85 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 3091 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: FLOAT  */
#line 86 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 3097 "./src/syntax/parser.c"
    break;

  case 12: /* type_specifier: ELEM  */
#line 87 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 3103 "./src/syntax/parser.c"
    break;

  case 13: /* type_specifier: SET  */
#line 88 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 3109 "./src/syntax/parser.c"
    break;

  case 14: /* parameters: parameter_list  */
#line 91 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3115 "./src/syntax/parser.c"
    break;

  case 15: /* parameters: %empty  */
#line 92 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 3121 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_list: type_specifier identifier ',' parameter_list  */
#line 95 "src/syntax/parser.y"
                                                             {
                  function_arity_counter++;
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-3].token), (yyvsp[-2].ast_node)->value, "parameter", 0);
                }
#line 3131 "./src/syntax/parser.c"
    break;

  case 17: /* parameter_list: type_specifier identifier  */
#line 100 "src/syntax/parser.y"
                                          {
                  function_arity_counter++;
                  (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[0].ast_node)->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-1].token), (yyvsp[0].ast_node)->value, "parameter", 0);
                }
#line 3141 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_and_expression  */
#line 107 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3147 "./src/syntax/parser.c"
    break;

  case 19: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 108 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3155 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: equality_expression  */
#line 113 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3161 "./src/syntax/parser.c"
    break;

  case 21: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 114 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 3169 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: relational_expression  */
#line 119 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3175 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 120 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3183 "./src/syntax/parser.c"
    break;

  case 24: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 123 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3191 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: belongs_to_expression  */
#line 128 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3197 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: EMPTY_CONST  */
#line 129 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 3205 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '<' additive_expression  */
#line 132 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3213 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression '>' additive_expression  */
#line 135 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3221 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 138 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3229 "./src/syntax/parser.c"
    break;

  case 30: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 141 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3237 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 146 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3245 "./src/syntax/parser.c"
    break;

  case 32: /* belongs_to_expression: additive_expression  */
#line 149 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3251 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: multiplicative_expression  */
#line 152 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3257 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 153 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3265 "./src/syntax/parser.c"
    break;

  case 35: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 156 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3273 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 161 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3279 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 162 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3287 "./src/syntax/parser.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 165 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3295 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: term  */
#line 170 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3301 "./src/syntax/parser.c"
    break;

  case 40: /* unary_expression: unary_operator unary_expression  */
#line 171 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 3309 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '+'  */
#line 176 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 3315 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '-'  */
#line 177 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 3321 "./src/syntax/parser.c"
    break;

  case 43: /* unary_operator: '!'  */
#line 178 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 3327 "./src/syntax/parser.c"
    break;

  case 44: /* term: identifier  */
#line 181 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3333 "./src/syntax/parser.c"
    break;

  case 45: /* term: INTEGER_CONST  */
#line 182 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3339 "./src/syntax/parser.c"
    break;

  case 46: /* term: FLOAT_CONST  */
#line 183 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3345 "./src/syntax/parser.c"
    break;

  case 47: /* term: '(' additive_expression ')'  */
#line 184 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 3353 "./src/syntax/parser.c"
    break;

  case 48: /* term: function_call_expression  */
#line 187 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3359 "./src/syntax/parser.c"
    break;

  case 49: /* optional_expression: expression  */
#line 190 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3365 "./src/syntax/parser.c"
    break;

  case 50: /* optional_expression: %empty  */
#line 191 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3371 "./src/syntax/parser.c"
    break;

  case 51: /* optional_for_expression: for_expression  */
#line 194 "src/syntax/parser.y"
                                        { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3377 "./src/syntax/parser.c"
    break;

  case 52: /* optional_for_expression: %empty  */
#line 195 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3383 "./src/syntax/parser.c"
    break;

  case 53: /* for_expression: logical_or_expression  */
#line 198 "src/syntax/parser.y"
                                      { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3389 "./src/syntax/parser.c"
    break;

  case 54: /* for_expression: identifier '=' expression  */
#line 199 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3395 "./src/syntax/parser.c"
    break;

  case 55: /* expression: additive_expression  */
#line 202 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3401 "./src/syntax/parser.c"
    break;

  case 56: /* expression: function_arg_constant_expression  */
#line 203 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3407 "./src/syntax/parser.c"
    break;

  case 57: /* function_arg_constant_expression: EMPTY_CONST  */
#line 206 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3417 "./src/syntax/parser.c"
    break;

  case 58: /* function_arg_constant_expression: STRING  */
#line 211 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3427 "./src/syntax/parser.c"
    break;

  case 59: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 216 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3437 "./src/syntax/parser.c"
    break;

  case 60: /* function_call_expression: identifier '(' argument_list ')'  */
#line 223 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3447 "./src/syntax/parser.c"
    break;

  case 61: /* function_call_expression: set_function_call_expression  */
#line 228 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3453 "./src/syntax/parser.c"
    break;

  case 62: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 229 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3459 "./src/syntax/parser.c"
    break;

  case 63: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 232 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3469 "./src/syntax/parser.c"
    break;

  case 64: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 237 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3479 "./src/syntax/parser.c"
    break;

  case 65: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 242 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3489 "./src/syntax/parser.c"
    break;

  case 66: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 247 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3499 "./src/syntax/parser.c"
    break;

  case 67: /* argument_list: argument_list ',' expression  */
#line 254 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3507 "./src/syntax/parser.c"
    break;

  case 68: /* argument_list: expression  */
#line 257 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3513 "./src/syntax/parser.c"
    break;

  case 69: /* argument_list: %empty  */
#line 258 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3519 "./src/syntax/parser.c"
    break;

  case 70: /* $@2: %empty  */
#line 261 "src/syntax/parser.y"
                        {
                      if (!is_a_function_declaration) {
                        scope_counter_depth++;
                        current_scope = push_scope(current_scope, scope_counter_depth);
                      }
                      is_a_function_declaration = 0;
                    }
#line 3531 "./src/syntax/parser.c"
    break;

  case 71: /* compound_statement: '{' $@2 statement_list '}'  */
#line 267 "src/syntax/parser.y"
                                         {
                      (yyval.ast_node) = (yyvsp[-1].ast_node);
                      scope_counter_depth--;
                      current_scope = current_scope->parent;
                    }
#line 3541 "./src/syntax/parser.c"
    break;

  case 72: /* compound_statement: '{' '}'  */
#line 272 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3547 "./src/syntax/parser.c"
    break;

  case 73: /* statement_list: statement_list statement  */
#line 275 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3555 "./src/syntax/parser.c"
    break;

  case 74: /* statement_list: statement  */
#line 278 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3561 "./src/syntax/parser.c"
    break;

  case 75: /* declaration: type_specifier identifier ';'  */
#line 281 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
              insert_row_into_symbol_table(current_scope, (yyvsp[-2].token), (yyvsp[-1].ast_node)->value, "variable", 0);
            }
#line 3570 "./src/syntax/parser.c"
    break;

  case 76: /* statement: declaration  */
#line 287 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3576 "./src/syntax/parser.c"
    break;

  case 77: /* statement: compound_statement  */
#line 288 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3582 "./src/syntax/parser.c"
    break;

  case 78: /* statement: expression_statement  */
#line 289 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3588 "./src/syntax/parser.c"
    break;

  case 79: /* statement: selection_statement  */
#line 290 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3594 "./src/syntax/parser.c"
    break;

  case 80: /* statement: iteration_statement  */
#line 291 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3600 "./src/syntax/parser.c"
    break;

  case 81: /* statement: io_statement  */
#line 292 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3606 "./src/syntax/parser.c"
    break;

  case 82: /* statement: jump_statement  */
#line 293 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3612 "./src/syntax/parser.c"
    break;

  case 83: /* statement: assignment_statement  */
#line 294 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3618 "./src/syntax/parser.c"
    break;

  case 84: /* statement: error  */
#line 295 "src/syntax/parser.y"
                { yyerrok; }
#line 3624 "./src/syntax/parser.c"
    break;

  case 85: /* assignment_statement: identifier '=' expression ';'  */
#line 298 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3632 "./src/syntax/parser.c"
    break;

  case 86: /* expression_statement: optional_expression ';'  */
#line 303 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3638 "./src/syntax/parser.c"
    break;

  case 87: /* set_membership_expression: expression IN expression  */
#line 306 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3646 "./src/syntax/parser.c"
    break;

  case 88: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 311 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3654 "./src/syntax/parser.c"
    break;

  case 89: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 314 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3662 "./src/syntax/parser.c"
    break;

  case 90: /* iteration_statement: FOR '(' optional_for_expression ';' optional_for_expression ';' optional_for_expression ')' statement  */
#line 319 "src/syntax/parser.y"
                                                                                                                           {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3670 "./src/syntax/parser.c"
    break;

  case 91: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 322 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3678 "./src/syntax/parser.c"
    break;

  case 92: /* io_statement: WRITE '(' expression ')' ';'  */
#line 327 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3686 "./src/syntax/parser.c"
    break;

  case 93: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 330 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3694 "./src/syntax/parser.c"
    break;

  case 94: /* io_statement: READ '(' identifier ')' ';'  */
#line 333 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3702 "./src/syntax/parser.c"
    break;

  case 95: /* jump_statement: RETURN expression ';'  */
#line 338 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3710 "./src/syntax/parser.c"
    break;

  case 96: /* identifier: IDENTIFIER  */
#line 343 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 3718 "./src/syntax/parser.c"
    break;


#line 3722 "./src/syntax/parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 348 "src/syntax/parser.y"

