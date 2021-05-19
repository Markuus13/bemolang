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
  #include "../main.h"

  extern int line_counter;
  extern int column_counter;
  extern int parser_column;

  struct ast_node *ast = NULL;
  struct symbol_table *symbol_table = NULL;
  int scope = 0;

#line 87 "./src/syntax/parser.c"

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
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* '='  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_translation_unit = 48,          /* translation_unit  */
  YYSYMBOL_external_declaration_list = 49, /* external_declaration_list  */
  YYSYMBOL_external_declaration = 50,      /* external_declaration  */
  YYSYMBOL_function_definition = 51,       /* function_definition  */
  YYSYMBOL_type_specifier = 52,            /* type_specifier  */
  YYSYMBOL_parameters = 53,                /* parameters  */
  YYSYMBOL_parameter_list = 54,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 55,     /* parameter_declaration  */
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
  YYSYMBOL_expression = 67,                /* expression  */
  YYSYMBOL_function_arg_constant_expression = 68, /* function_arg_constant_expression  */
  YYSYMBOL_function_call_expression = 69,  /* function_call_expression  */
  YYSYMBOL_set_function_call_expression = 70, /* set_function_call_expression  */
  YYSYMBOL_argument_list = 71,             /* argument_list  */
  YYSYMBOL_compound_statement = 72,        /* compound_statement  */
  YYSYMBOL_statement_list = 73,            /* statement_list  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_assignment_statement = 76,      /* assignment_statement  */
  YYSYMBOL_expression_statement = 77,      /* expression_statement  */
  YYSYMBOL_set_membership_expression = 78, /* set_membership_expression  */
  YYSYMBOL_selection_statement = 79,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 80,       /* iteration_statement  */
  YYSYMBOL_io_statement = 81,              /* io_statement  */
  YYSYMBOL_jump_statement = 82,            /* jump_statement  */
  YYSYMBOL_identifier = 83                 /* identifier  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5278

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  471

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      36,    46,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
       0,    50,    50,    56,    59,    62,    63,    66,    72,    73,
      74,    75,    78,    79,    82,    85,    88,    93,    94,    99,
     100,   105,   106,   109,   114,   115,   118,   121,   124,   127,
     132,   135,   138,   139,   142,   147,   148,   151,   156,   157,
     162,   163,   164,   167,   168,   169,   170,   173,   176,   177,
     180,   181,   184,   189,   194,   201,   206,   207,   210,   215,
     220,   225,   232,   235,   236,   239,   240,   243,   246,   249,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   265,
     270,   273,   278,   281,   286,   289,   294,   297,   300,   305,
     310
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
  "'-'", "'*'", "'/'", "'!'", "'{'", "'}'", "';'", "'='", "$accept",
  "translation_unit", "external_declaration_list", "external_declaration",
  "function_definition", "type_specifier", "parameters", "parameter_list",
  "parameter_declaration", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "belongs_to_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "unary_operator",
  "term", "optional_expression", "expression",
  "function_arg_constant_expression", "function_call_expression",
  "set_function_call_expression", "argument_list", "compound_statement",
  "statement_list", "declaration", "statement", "assignment_statement",
  "expression_statement", "set_membership_expression",
  "selection_statement", "iteration_statement", "io_statement",
  "jump_statement", "identifier", YY_NULLPTR
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
      42,    47,    33,   123,   125,    59,    61
};
#endif

#define YYPACT_NINF (-302)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     506,     2,    10,    15,    29,    47,   533,  1001,  1932,    35,
    2053,  -302,  2372,   -31,    -7,    14,  2452,    38,    48,    50,
      -2,    46,   -16,   506,   143,  2562,    58,  1021,    70,    72,
     961,    89,   110,   112,   128,   136,   144,   147,   156,    69,
     240,    68,   160,   162,  1057,   274,   690,  1352,  2687,   172,
      78,   423,   725,  1383,   818,   163,   170,   177,   902,   930,
    1316,  1611,  1906,  3619,  3664,  3709,  3754,  3799,  3844,  3889,
     642,  1251,   206,   189,   296,  1088,  1088,  1088,   174,  1057,
    1057,   174,  1088,   182,   183,   204,  1383,  1383,  1383,  1383,
    1012,  3934,  2697,  3979,   597,   961,  1931,   -23,    18,  1064,
    1975,  1855,  1544,   208,  4024,   229,   209,   249,   254,   256,
     266,   272,   276,   281,  1133,  1197,  1307,  1348,  1379,  1428,
      55,    65,   275,  1251,  4699,  1251,  1251,  1251,  1418,  1418,
    1418,  1418,  1546,   206,  1057,  4742,  1492,  1602,   285,   301,
     304,  1643,  1674,  1723,  1123,  4069,   176,   556,  1798,  2013,
    2150,  1416,  1711,  5226,  5239,  1946,   315,   283,  4114,  4159,
    4204,  4249,   138,  4742,   828,  4294,   336,  4742,  4339,   149,
     755,  4384,   552,   344,   353,   358,   360,  1119,  2083,  2116,
     349,   362,   365,  1057,  2194,  2276,  1647,  2378,  2442,  2458,
    1247,   376,   374,   377,   398,   409,   619,   513,  1998,  1057,
    2135,  2213,  1546,  2293,  2489,  2564,  1838,   410,   413,   418,
     419,     3,    80,    88,   244,   441,   442,  1057,   -10,   157,
     161,  1678,   173,   453,   217,   228,    36,   443,   202,   448,
    1647,  1647,  4429,   458,   459,   460,   464,   957,  1257,  1374,
     198,   268,   288,  1057,    27,  1552,  1669,  1713,  1819,   297,
    1954,  1980,  1084,  1546,  1546,   736,   467,   468,   961,   474,
     486,   487,   493,  4474,   172,   430,  2536,  2615,  2752,  2797,
    2854,  2899,  2944,  2989,   838,   494,   495,   501,   502,  2174,
    4941,  4956,  1057,  4971,  4986,  1418,  5001,  5016,  5031,  4926,
    1418,  1418,   452,  4519,  4564,  1088,  1088,   174,  1088,   225,
     514,  1647,  1647,  2472,   597,  1088,  1088,   174,  1088,   314,
     540,  1546,  1546,  2637,   597,  1088,  1088,   174,  1088,   328,
     549,  1678,  1678,  1678,  1678,   234,   597,  2673,  2703,  1088,
    1088,   174,  1088,   381,   550,  1713,  1713,  1713,  1713,  2221,
     597,  4761,  4776,  1251,   206,   541,  1088,   174,  1057,  1057,
    3034,  4609,   542,  3079,   961,  1088,  1088,   174,  1088,   465,
     554,  1418,  1418,  5046,   597,  5061,  5076,  4654,   562,   573,
     577,   578,  2850,  2895,  2940,  2985,   305,   581,   589,   591,
     599,  4791,  4806,  4821,  4836,   338,   604,   606,   607,   608,
     287,   385,   400,   440,   449,   484,   367,   611,   628,   629,
     634,  2246,  2259,  2301,  2311,  2397,  2574,   393,    23,   579,
    3124,   637,   639,   640,   643,  3169,  3214,   641,   651,   655,
     657,   658,  5091,  5106,  5121,  5136,   399,  3030,  3075,  3120,
    3165,  3210,  4851,  4866,  4881,  4896,  4911,   564,   588,   744,
     784,   788,  2611,  2693,  2748,  2793,  2809,  4699,   206,  4699,
     648,   650,   652,  3259,  5151,  5166,  5181,  5196,  5211,  3304,
     660,  3349,  3394,  3439,  3484,  4699,   828,  3529,   662,  4699,
    3574
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
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
    -302,  -302,  -302,   694,  -302,     0,  -302,   683,  -302,   382,
     585,   601,   -56,  -302,  2145,  2065,   590,   885,  1180,   -60,
     350,  2390,  1475,  1770,  -301,   -12,  -166,     1,   -52,   -90,
     -84,   200,   -71,   -65,   -57,   -33,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    49,    18,    19,    20,    97,
      98,    99,   100,   101,    50,    51,    52,    53,    54,    55,
     105,    57,    58,    59,   121,    60,    61,    62,    63,    64,
      65,   106,    66,    67,    68,    69,   226
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   -90,   376,   123,   294,     9,    10,   -50,    93,
      25,   124,   103,   385,   -90,    17,    14,     1,     2,     3,
       4,   -90,    -8,    17,    21,   396,    15,    24,   321,   322,
      -9,    70,   -15,    23,   268,   -10,   -90,    74,    16,   407,
     269,   -90,   -90,   -90,   -90,   -17,   125,    11,   -13,   -11,
     123,   190,   -17,   270,   -43,    13,    85,   447,   169,   271,
      74,   -50,   -50,   426,   265,   335,   336,   272,    70,   326,
     149,   150,   147,   156,   -43,   -43,   -43,   -43,   206,    74,
     -16,   -16,    22,   158,   -12,   109,   190,   190,   112,   -63,
     -63,   273,   -14,    74,    74,    74,    74,   351,   -44,   143,
     144,   252,    74,    71,   166,    72,   -45,   -44,   -44,   -44,
     -44,   165,   266,   -54,   -44,   168,    86,    87,   -44,   -44,
     -44,   -44,    75,   -50,   264,   267,   -45,   -45,   -45,   -45,
     206,   274,   206,   206,   206,   289,   289,   289,   289,   206,
      74,   190,    70,    76,    27,    77,     1,     2,     3,     4,
      28,   252,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    78,    38,   170,    39,    40,    41,    42,    43,    79,
      70,   190,   -62,   -62,    70,   -32,    44,    80,    70,   -35,
      81,    45,    46,   -90,   -90,    47,   171,    48,   -49,    82,
     190,   -38,   191,   190,   227,   -32,   -32,   323,   324,   -35,
     -35,   -35,   -35,   -18,   125,   -53,   190,   -52,    91,   206,
     -18,   -38,   -38,   -38,   -38,   -48,   114,   115,    32,    33,
     230,   231,   -51,    37,   190,    38,   172,    39,    40,    41,
      42,    43,   -54,   -54,   104,   -47,   -50,   190,   190,    44,
     230,   231,    93,   135,    45,    46,   -56,   134,    47,   232,
     190,   -49,   -39,   133,   252,   -47,   -47,   -47,   -47,   372,
     206,   206,   -54,   230,   231,    74,   -56,   -56,   -56,   -56,
      70,   352,   -39,   -39,   -39,   -39,   107,   108,   -45,   -45,
     -45,   -45,   113,   136,   409,   -45,   -40,   -40,   137,   190,
     138,   -40,   289,   -40,   -40,   -40,   -40,   289,   289,    93,
     139,    70,   -53,   -53,   370,   -46,   140,   -40,   190,   190,
     141,   252,   -40,   -40,   379,   142,   -40,   -81,   206,   206,
     145,   252,   -52,   -52,   388,   -46,   -46,   -46,   -46,    94,
     159,   -51,   -51,   252,   -43,   -43,   -43,   -43,   399,   431,
     144,   -43,   252,   252,   252,   252,   160,   252,   381,   161,
     206,    74,   230,   231,   412,   190,   190,   268,    70,   268,
     164,    74,   390,   269,   420,   269,   230,   231,   289,   289,
     167,   252,   436,   144,    56,   268,   270,   295,   270,   268,
      73,   269,   271,   -54,   271,   269,   296,   265,   460,   265,
     272,   297,   272,   298,   270,   459,   -53,   461,   270,   -52,
     271,   441,   144,   -57,   271,   265,   468,   305,   272,   265,
     306,    56,   272,   467,   273,   401,   273,   470,   -33,   230,
     231,   -90,    56,   -57,   -57,   -57,   -57,   446,   144,   110,
     111,   307,   273,   458,   144,   266,   273,   266,   -33,   -33,
     323,   324,   308,   315,   120,   122,   316,   264,   267,   264,
     267,   317,   318,   266,   274,    74,   274,   266,   -34,   -53,
     -52,   -32,   -32,    88,    89,   264,   267,   -36,   -32,   264,
     267,   -51,   274,   190,    56,   353,   274,   -90,   -34,   -34,
     323,   324,   -51,    56,   157,    56,   -48,   -36,   -36,   -36,
     -36,   329,   330,   331,   162,   368,   369,   332,   371,   422,
     343,   344,   -37,   230,   231,   377,   378,   346,   380,     1,
       2,     3,     4,    56,   292,   386,   387,    56,   389,   347,
     348,    56,   -37,   -37,   -37,   -37,   349,   355,   356,   397,
     398,   -44,   400,    -2,   357,   358,     1,     2,     3,     4,
     -44,   -44,   -44,   -44,   -44,   -44,   411,   -44,   373,   -44,
     -44,   -44,   -44,   -44,   -44,   418,   419,   -82,   421,   -82,
     -82,   -82,   -82,   -82,   163,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   382,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -59,   391,   402,   -90,   410,   416,   423,   -82,
     -90,   -90,   -90,   -90,   -82,   -82,   427,   -90,   -82,   -82,
     -82,   -82,   -59,   -59,   -59,   -59,   -60,   428,   345,   233,
     234,   429,   430,    56,   235,   432,   236,   237,   238,   239,
     240,   241,   242,   433,   448,   434,   -60,   -60,   -60,   -60,
     243,   -64,   -64,   435,   185,    45,    46,   -90,   437,    47,
     438,   439,   440,    90,    56,   442,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   120,   -90,   -90,   -90,   -90,   -90,
     -90,   201,   443,   444,   120,   220,   220,   220,   445,   185,
     185,   449,   220,   450,   451,    94,   120,   452,   118,   119,
     -43,   -43,   -43,   -43,   246,   454,   453,   -43,    95,   455,
     120,   456,   457,   462,    56,   463,   469,   464,   413,   414,
      12,    56,   -41,   -41,   417,   466,    26,   -41,   146,   -41,
     -41,   -41,   -41,   201,   120,   201,   201,   201,   284,   284,
     284,   284,   201,   -41,   185,   408,   148,     0,   -41,   -41,
       0,     0,   -41,     0,   246,     0,     0,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   185,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -58,   -35,   -35,   -35,   -35,     0,     0,   -78,
     -35,     0,     0,   185,   -78,   -78,   303,     0,   -78,   -78,
     -78,   -78,   -58,   -58,   -58,   -58,     0,     0,   -90,   185,
       0,     0,   313,   -90,   -90,   -90,   -90,    56,    56,    56,
     -90,   -90,   -61,     0,     0,     0,   -55,   185,     0,     0,
       0,   325,     0,     0,     0,    56,   292,     0,     0,    56,
     185,   185,   -61,   -61,   -61,   -61,   -55,   -55,   -55,   -55,
       0,     0,     0,   185,     0,     0,     0,   339,     0,     0,
     173,   174,     0,   201,   201,   175,     0,   176,   177,   178,
     179,   180,   181,   182,     0,     0,   -38,   -38,   -38,   -38,
       0,   183,   -49,   -38,     0,     0,    45,    46,     0,     0,
      47,    94,   185,     0,     0,   363,   -43,   -43,   -43,   -43,
     284,   284,     0,   -43,   354,   220,   220,     0,   220,     0,
       0,   374,   375,     0,   246,   220,   220,     0,   220,     0,
       0,   383,   384,     0,   246,   220,   220,     0,   220,     0,
       0,   220,   220,   394,   395,     0,   246,     0,     0,   220,
     220,     0,   220,     0,     0,   246,   246,   405,   406,   186,
     246,     0,     0,   201,     0,     0,   220,     0,   185,   185,
     -47,   -47,   -47,   -47,     0,   220,   220,   -47,   220,     0,
       0,   424,   425,     0,   246,     0,   202,     0,     0,     0,
     221,   221,   221,     0,   186,   186,     0,   221,   -56,   -56,
     -56,   -56,     0,    32,    33,   -56,     0,     0,    37,   247,
      38,   172,    39,    40,    41,    42,    43,     0,     0,     0,
     -90,   -90,   -90,     0,    44,   -90,   -90,   -90,   -90,    45,
      46,    -4,     0,    47,    -4,    -4,    -4,    -4,   202,     0,
     202,   202,   202,   285,   285,   285,   285,   202,     0,   186,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   247,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,   186,
     -39,   -39,   -39,   -39,   -78,     0,   185,   -39,     0,   -78,
     -78,     0,     0,   -78,   -78,   -78,   -78,     0,   186,   173,
     174,   186,     0,     0,   175,     0,   176,   177,   178,   179,
     180,   181,   182,     0,   186,     0,     0,   202,     0,     0,
     183,   -19,   -19,   126,   127,    45,    46,     0,   -19,    47,
     207,   208,   186,     0,     0,   209,   221,   210,   211,   212,
     213,   214,   215,   216,     0,   186,   186,   340,   -43,   -43,
       0,   217,   -43,   -43,   -43,   -43,    45,    46,   186,     0,
      47,     0,   247,     0,     0,   233,   234,     0,   202,   202,
     235,     0,   236,   237,   238,   239,   240,   241,   242,     0,
       0,     0,   -90,   -90,     0,     0,   243,   -90,   -90,   -90,
     -90,    45,    46,     0,     0,    47,     0,   186,     0,     0,
     285,   -46,   -46,   -46,   -46,   285,   285,     0,   -46,     0,
     221,   221,     0,   221,     0,     0,   186,   186,     0,   247,
     221,   221,     0,   221,     0,     0,   202,   202,     0,   247,
     221,   221,     0,   221,     0,     0,   221,   221,   221,   221,
       0,   247,     0,     0,   221,   221,     0,   221,     0,     0,
     247,   247,   247,   247,   187,   247,     0,     0,   202,     0,
       0,   221,     0,   186,   186,   -57,   -57,   -57,   -57,     0,
     221,   221,   -57,   221,     0,     0,   285,   285,     0,   247,
       0,   203,     0,     0,     0,   222,   222,   222,     0,   187,
     187,     0,   222,   192,   193,     0,     0,     0,   194,     0,
     195,   196,   197,   198,   248,     0,    96,     0,     0,     0,
     304,   -43,     0,     0,   199,   -43,   -43,   -43,   -43,    45,
      46,   -44,   -44,    47,     0,   -44,   -44,   -44,   -44,     0,
       0,     0,     0,   203,     0,   203,   203,   203,   286,   286,
     286,   286,   203,     0,   187,     0,     0,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   248,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,   187,   -33,   -33,    88,    89,   -71,
       0,   186,   -33,     0,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,     0,   187,   -42,   -42,   187,     0,     0,   -42,
       0,   -42,   -42,   -42,   -42,     0,     0,     0,     0,   187,
       0,     0,   203,     0,     0,   -42,   -34,   -34,    88,    89,
     -42,   -42,     0,   -34,   -42,    32,    33,   187,     0,     0,
      37,   222,    38,   172,    39,    40,     0,     0,   -45,   -45,
     187,   187,   -45,   -45,   -45,   -45,    44,   -36,   -36,   -36,
     -36,    45,    46,   187,   -36,    47,     0,   248,     0,     0,
     275,   276,     0,   203,   203,   277,     0,   278,   279,   280,
     281,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   282,   -28,   -28,   290,   291,    45,    46,     0,     0,
      47,     0,   187,     0,     0,   286,   -37,   -37,   -37,   -37,
     286,   286,     0,   -37,     0,   222,   222,     0,   222,     0,
       0,   187,   187,     0,   248,   222,   222,     0,   222,     0,
       0,   203,   203,     0,   248,   222,   222,     0,   222,     0,
       0,   222,   222,   222,   222,     0,   248,     0,     0,   222,
     222,     0,   222,     0,     0,   248,   248,   248,   248,   188,
     248,     0,     0,   203,     0,     0,   222,     0,   187,   187,
     -59,   -59,   -59,   -59,     0,   222,   222,   -59,   222,     0,
       0,   286,   286,     0,   248,     0,   204,     0,     0,     0,
     224,   224,   224,     0,   188,   188,     0,   224,   192,   193,
       0,     0,   -31,   194,     0,   195,   196,   197,   198,   250,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   199,
     -31,   -31,   253,   254,    45,    46,   -32,   -32,    47,     0,
     -32,   -32,   337,   338,     0,     0,     0,     0,   204,     0,
     204,   204,   204,   287,   287,   287,   287,   204,     0,   188,
       0,     0,    27,     0,     1,     2,     3,     4,    28,   250,
      29,    30,    31,    32,    33,    34,    35,    36,    37,     0,
      38,   170,    39,    40,    41,    42,    43,     0,     0,   188,
     -60,   -60,   -60,   -60,    44,     0,   187,   -60,     0,    45,
      46,     0,     0,    47,   171,    92,   -49,     0,   188,   173,
     174,   188,     0,     0,   175,     0,   176,   177,   178,   179,
       0,     0,     0,     0,   188,     0,     0,   204,     0,     0,
     183,   -58,   -58,   -58,   -58,    45,    46,     0,   -58,    47,
     207,   208,   188,     0,     0,   209,   224,   210,   211,   212,
     213,     0,     0,   -35,   -35,   188,   188,   -35,   -35,   -35,
     -35,   217,   -61,   -61,   -61,   -61,    45,    46,   188,   -61,
      47,     0,   250,     0,     0,   233,   234,     0,   204,   204,
     235,     0,   236,   237,   238,   239,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   243,   -29,   -29,   290,
     291,    45,    46,     0,     0,    47,     0,   188,     0,     0,
     287,   -55,   -55,   -55,   -55,   287,   287,     0,   -55,     0,
     224,   224,     0,   224,     0,     0,   188,   188,     0,   250,
     224,   224,     0,   224,     0,     0,   204,   204,     0,   250,
     224,   224,     0,   224,     0,     0,   224,   224,   224,   224,
       0,   250,     0,     0,   224,   224,     0,   224,     0,     0,
     250,   250,   250,   250,   189,   250,     0,     0,   204,     0,
       0,   224,     0,   188,   188,   -20,   -20,   126,   127,     0,
     224,   224,   -20,   224,     0,     0,   287,   287,     0,   250,
       0,   205,     0,     0,     0,   225,   225,   225,     0,   189,
     189,     0,   225,   -38,   -38,     0,   -43,   -38,   -38,   -38,
     -38,     0,     0,     0,   251,   -43,   -43,   -43,   -43,   -43,
     -43,   314,   -43,   132,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
       0,   -24,   -24,   205,     0,   205,   205,   205,   288,   288,
     288,   288,   205,     0,   189,     0,     0,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   251,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,    -5,     0,   189,    -5,    -5,    -5,    -5,   -70,
       0,   188,     0,     0,   -70,   -70,     0,     0,   -70,   -70,
     -70,   -70,     0,   189,     0,     0,   189,     0,   -25,   -25,
     -25,   -25,   -25,   -25,   -30,   -25,     0,   -25,   -25,   189,
       0,     0,   205,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   253,   254,     0,   189,   -47,   -47,
       0,   225,   -47,   -47,   -47,   -47,     0,     0,     0,     0,
     189,   189,   -21,   -21,   -21,   -21,   128,   129,     0,   -21,
       0,   130,   131,   189,   -56,   -56,   -45,   251,   -56,   -56,
     -56,   -56,     0,   205,   205,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -22,   -22,   -22,   -22,   128,   129,     0,   -22,     0,   130,
     131,     0,   189,    -6,     0,   288,    -6,    -6,    -6,    -6,
     288,   288,     0,     0,     0,   225,   225,     0,   225,     0,
       0,   189,   189,     0,   251,   225,   225,     0,   225,     0,
       0,   205,   205,     0,   251,   225,   225,     0,   225,     0,
       0,   225,   225,   225,   225,     0,   251,     0,     0,   225,
     225,     0,   225,     0,     0,   251,   251,   251,   251,   184,
     251,     0,     0,   205,     0,     0,   225,   -44,   189,   189,
       0,   -44,   -44,   -44,   -44,   225,   225,     0,   225,     0,
       0,   288,   288,     0,   251,     0,   200,     0,     0,     0,
     219,   219,   219,     0,   184,   184,     0,   219,     0,     0,
     -45,   116,   117,   -32,   -45,   -45,   -45,   -45,     0,   245,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,   311,   312,   -23,   -23,   -23,
     -23,   128,   129,     0,   -23,     0,   130,   131,   200,    83,
     200,   200,   200,   283,   283,   283,   283,   200,     0,   184,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   245,
     -90,   -90,   -90,   -90,   -90,   -90,   102,     0,     0,     0,
     218,   218,   218,     0,   228,   228,     0,   218,   -32,   184,
       0,   -35,   -32,   -32,   301,   302,   189,     0,     0,   244,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   184,   -35,
     -35,   -35,   -35,   -35,   -35,   -39,   -39,     0,     0,   -39,
     -39,   -39,   -39,     0,   184,     0,     0,     0,   102,     0,
     102,   102,   102,   151,   152,   153,   154,   155,     0,   228,
     -46,   -46,   184,     0,   -46,   -46,   -46,   -46,     0,   244,
       0,     0,     0,   -57,   -57,   327,   328,   -57,   -57,   -57,
     -57,     0,     0,     0,     0,     0,     0,     0,   184,   228,
     -35,   -38,     0,     0,   -35,   -35,   -35,   -35,   341,   342,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   299,   -38,
     -38,   -38,   -38,   -38,   -38,   -33,   -33,     0,     0,   -33,
     -33,   337,   338,     0,   309,   -34,   -34,   184,     0,   -34,
     -34,   337,   338,     0,     0,   365,   366,     0,     0,     0,
     219,   219,   319,   219,     0,     0,     0,     0,     0,   245,
     219,   219,    -3,   219,     0,    -3,    -3,    -3,    -3,   245,
     219,   219,     0,   219,     0,     0,   392,   393,   333,     0,
       0,   245,     0,     0,   219,   219,     0,   219,     0,     0,
     403,   404,     0,     0,     0,   245,     0,     0,   200,     0,
       0,   219,   -38,   184,   184,     0,   -38,   -38,   -38,   -38,
     219,   219,     0,   219,     0,     0,     0,   359,     0,   245,
       0,   -36,   -36,     0,    84,   -36,   -36,   -36,   -36,     0,
     218,   218,     0,   218,     0,     0,     0,     0,     0,   244,
     218,   218,   -69,   218,     0,   -69,   -69,   -69,   -69,   244,
     218,   218,     0,   218,     0,   223,   223,   223,     0,   229,
     229,   244,   223,     0,   218,   218,   -47,   218,     0,     0,
     -47,   -47,   -47,   -47,   249,   244,     0,     0,   102,     0,
       0,   218,   -56,   228,   228,     0,   -56,   -56,   -56,   -56,
     218,   218,     0,   218,     0,     0,   -39,   -47,     0,   244,
     -39,   -39,   -39,   -39,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   229,   -47,   -47,   -47,   -47,   -47,
     -47,   184,     0,     0,   249,     0,     0,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   229,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,    -7,     0,     0,    -7,    -7,    -7,    -7,   -71,
       0,     0,     0,   300,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,   -56,     0,     0,     0,     0,     0,     0,   310,
       0,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,     0,
     -56,   -56,   -56,   -56,   -56,   -56,     0,   320,   -37,   -37,
       0,   228,   -37,   -37,   -37,   -37,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   334,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -59,   -59,     0,   -70,   -59,
     -59,   -59,   -59,   -70,   -70,   -39,     0,   -70,   -70,   -70,
     -70,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   360,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,     0,   223,   223,   -66,   223,     0,
     -66,   -66,   -66,   -66,   249,   223,   223,   -65,   223,     0,
     -65,   -65,   -65,   -65,   249,   223,   223,   -33,   223,     0,
       0,   -33,   -33,   301,   302,     0,   249,     0,     0,   223,
     223,     0,   223,     0,     0,     0,     0,   -60,   -60,     0,
     249,   -60,   -60,   -60,   -60,     0,   223,   -34,   229,   229,
       0,   -34,   -34,   301,   302,   223,   223,     0,   223,     0,
       0,     0,     0,   -77,   249,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,   -58,   -58,     0,   -77,   -58,   -58,   -58,   -58,
     -77,   -77,     0,     0,   -77,   -77,   -77,   -77,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,   -61,   -61,     0,
     -72,   -61,   -61,   -61,   -61,   -72,   -72,     0,     0,   -72,
     -72,   -72,   -72,   -55,   -55,     0,     0,   -55,   -55,   -55,
     -55,     0,     0,     0,     0,   -73,   229,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,   -46,     0,     0,   -73,   -46,   -46,
     -46,   -46,   -73,   -73,     0,     0,   -73,   -73,   -73,   -73,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,   -57,
       0,     0,   -74,   -57,   -57,   -57,   -57,   -74,   -74,     0,
       0,   -74,   -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,   -36,     0,     0,   -75,   -36,   -36,
     -36,   -36,   -75,   -75,     0,     0,   -75,   -75,   -75,   -75,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,   -37,
       0,     0,   -76,   -37,   -37,   -37,   -37,   -76,   -76,     0,
       0,   -76,   -76,   -76,   -76,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,   -59,     0,     0,   -66,   -59,   -59,
     -59,   -59,   -66,   -66,     0,     0,   -66,   -66,   -66,   -66,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,   -60,
       0,     0,   -80,   -60,   -60,   -60,   -60,   -80,   -80,     0,
       0,   -80,   -80,   -80,   -80,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,   -58,     0,     0,   -89,   -58,   -58,
     -58,   -58,   -89,   -89,     0,     0,   -89,   -89,   -89,   -89,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,   -61,
       0,     0,   -65,   -61,   -61,   -61,   -61,   -65,   -65,     0,
       0,   -65,   -65,   -65,   -65,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -55,     0,     0,   -69,   -55,   -55,
     -55,   -55,   -69,   -69,     0,     0,   -69,   -69,   -69,   -69,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,   -79,     0,     0,     0,     0,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -79,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   465,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,     0,   -82,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,   -85,   -85,     0,
       0,   -85,   -85,   -85,   -85,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,   -88,     0,     0,
       0,     0,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,     0,   -87,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,   -83,     0,     0,     0,     0,   -83,   -83,     0,
       0,   -83,   -83,   -83,   -83,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
       0,     0,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,
     -68,     0,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,   -68,     0,     0,     0,     0,   -68,   -68,     0,
       0,   -68,   -68,   -68,   -68,   -77,     0,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   -77,     0,     0,
       0,     0,   -77,   -77,     0,     0,   -77,   -77,   -77,   -77,
     -72,     0,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,   -72,     0,     0,     0,     0,   -72,   -72,     0,
       0,   -72,   -72,   -72,   -72,   -73,     0,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,   -73,     0,     0,
       0,     0,   -73,   -73,     0,     0,   -73,   -73,   -73,   -73,
     -74,     0,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,     0,     0,   -74,   -74,     0,
       0,   -74,   -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,     0,
       0,     0,   -75,   -75,     0,     0,   -75,   -75,   -75,   -75,
     -76,     0,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,   -76,   -76,     0,
       0,   -76,   -76,   -76,   -76,   -80,     0,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
       0,     0,   -80,   -80,     0,     0,   -80,   -80,   -80,   -80,
     -67,     0,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -67,     0,     0,     0,     0,   -67,   -67,     0,
       0,   -67,   -67,   -67,   -67,   -89,     0,   -89,   -89,   -89,
     -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,   -89,     0,     0,
       0,     0,   -89,   -89,     0,     0,   -89,   -89,   -89,   -89,
     -79,     0,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,   -79,     0,     0,     0,     0,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -79,   -85,     0,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
       0,     0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,
     -88,     0,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,   -88,     0,     0,     0,     0,   -88,   -88,     0,
       0,   -88,   -88,   -88,   -88,   -87,     0,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   -87,     0,     0,
       0,     0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -86,     0,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,   -86,     0,     0,     0,     0,   -86,   -86,     0,
       0,   -86,   -86,   -86,   -86,   -83,     0,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,     0,
       0,     0,   -83,   -83,     0,     0,   -83,   -83,   -83,   -83,
     -84,     0,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,   -84,     0,     0,     0,     0,   -84,   -84,     0,
       0,   -84,   -84,   -84,   -84,    27,     0,     1,     2,     3,
       4,    28,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     0,    38,   170,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,    45,    46,     0,     0,    47,   171,   293,   -49,
     -69,     0,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,   -69,     0,     0,     0,     0,   -69,   -69,     0,
       0,   -69,   -69,   -69,   -69,    27,     0,     1,     2,     3,
       4,    28,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     0,    38,   170,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,    45,    46,     0,     0,    47,   171,   350,   -49,
     -66,     0,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,   -66,     0,     0,     0,     0,   -66,   -66,     0,
       0,   -66,   -66,   -66,   -66,    27,     0,     1,     2,     3,
       4,    28,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     0,    38,   170,    39,    40,    41,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,    45,    46,     0,     0,    47,   171,   367,   -49,
      27,     0,     1,     2,     3,     4,    28,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,     0,    38,   170,
      39,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     0,     0,    45,    46,     0,
       0,    47,   171,   415,   -49,   -65,     0,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,     0,     0,     0,   -65,     0,     0,
       0,     0,   -65,   -65,     0,     0,   -65,   -65,   -65,   -65,
     255,     0,     1,     2,     3,     4,   256,     0,   257,   258,
     259,    32,    33,   260,   261,   262,    37,     0,    38,   170,
      39,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     0,     0,    45,    46,     0,
       0,    47,   263,    27,   -49,     1,     2,     3,     4,    28,
       0,    29,    30,    31,    32,    33,    34,    35,    36,    37,
       0,    38,   170,    39,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,    44,     0,     0,     0,   -33,
      45,    46,     0,     0,    47,   171,     0,   -49,   -33,   -33,
     -33,   -33,   -33,   -33,   -34,   -33,     0,   -33,   -33,   -33,
     -33,   311,   312,   -34,   -34,   -34,   -34,   -34,   -34,   -46,
     -34,     0,   -34,   -34,   -34,   -34,   311,   312,   -46,   -46,
     -46,   -46,   -46,   -46,   -57,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -57,   -57,   -57,   -57,   -57,   -57,   -36,
     -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -36,   -36,
     -36,   -36,   -36,   -36,   -37,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,   -59,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -59,   -59,
     -59,   -59,   -59,   -59,   -60,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -60,   -58,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -58,   -58,
     -58,   -58,   -58,   -58,   -61,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -61,   -61,   -61,   -61,   -61,   -61,   -55,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   -55,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -43,   -43,   -43,   -43,   -43,   -43,   364,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
     -32,   361,   362,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -56,   -56,
     -56,   -56,   -56,   -56,     0,   -56,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,
     -33,   361,   362,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,   -34,   -34,   -34,   361,   362,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,   -60,     0,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   -55,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,     0,   -26,   -26,   290,   291,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   290,   291
};

static const yytype_int16 yycheck[] =
{
       0,     0,    33,   304,    27,   171,     6,     6,    18,    61,
      22,    34,    72,   314,    45,    15,     9,     3,     4,     5,
       6,    18,    20,    23,    17,   326,    33,    43,    38,    39,
      20,    24,    34,    35,   124,    20,    33,    30,    45,   340,
     124,    38,    39,    40,    41,    27,    28,     0,    34,    20,
      27,    44,    34,   124,    18,    20,    49,    34,    20,   124,
      53,    34,    35,   364,   124,    38,    39,   124,    61,    33,
     126,   127,   124,   133,    38,    39,    40,    41,    71,    72,
      34,    35,    34,   135,    34,    78,    79,    80,    81,    34,
      35,   124,    34,    86,    87,    88,    89,   263,    18,    34,
      35,    94,    95,    33,   164,    33,    18,    38,    39,    40,
      41,   163,   124,    45,    45,   167,    38,    39,    38,    39,
      40,    41,    33,    45,   124,   124,    38,    39,    40,    41,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    33,     1,    33,     3,     4,     5,     6,
       7,   144,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    33,    19,    20,    21,    22,    23,    24,    25,    33,
     163,   164,    34,    35,   167,    18,    33,    33,   171,    18,
      33,    38,    39,    34,    35,    42,    43,    44,    45,    33,
     183,    18,    20,   186,    20,    38,    39,    40,    41,    38,
      39,    40,    41,    27,    28,    45,   199,    45,    45,   202,
      34,    38,    39,    40,    41,    45,    34,    34,    12,    13,
      38,    39,    45,    17,   217,    19,    20,    21,    22,    23,
      24,    25,    34,    35,    45,    18,    34,   230,   231,    33,
      38,    39,   294,    34,    38,    39,    18,    18,    42,    45,
     243,    45,    18,    45,   247,    38,    39,    40,    41,    34,
     253,   254,    18,    38,    39,   258,    38,    39,    40,    41,
     263,   264,    38,    39,    40,    41,    76,    77,    38,    39,
      40,    41,    82,    34,   344,    45,    12,    13,    34,   282,
      34,    17,   285,    19,    20,    21,    22,   290,   291,   351,
      34,   294,    34,    35,   297,    18,    34,    33,   301,   302,
      34,   304,    38,    39,   307,    34,    42,    34,   311,   312,
      45,   314,    34,    35,   317,    38,    39,    40,    41,    33,
      45,    34,    35,   326,    38,    39,    40,    41,   331,    34,
      35,    45,   335,   336,   337,   338,    45,   340,    34,    45,
     343,   344,    38,    39,   347,   348,   349,   447,   351,   449,
      45,   354,    34,   447,   357,   449,    38,    39,   361,   362,
      34,   364,    34,    35,    24,   465,   447,    33,   449,   469,
      30,   465,   447,    34,   449,   469,    33,   447,   448,   449,
     447,    33,   449,    33,   465,   447,    34,   449,   469,    34,
     465,    34,    35,    18,   469,   465,   466,    33,   465,   469,
      33,    61,   469,   465,   447,    34,   449,   469,    18,    38,
      39,    45,    72,    38,    39,    40,    41,    34,    35,    79,
      80,    33,   465,    34,    35,   447,   469,   449,    38,    39,
      40,    41,    33,    33,    94,    95,    33,   447,   447,   449,
     449,    33,    33,   465,   447,   448,   449,   469,    18,    18,
      18,    38,    39,    40,    41,   465,   465,    18,    45,   469,
     469,    18,   465,   466,   124,    45,   469,    34,    38,    39,
      40,    41,    34,   133,   134,   135,    34,    38,    39,    40,
      41,    33,    33,    33,   144,   295,   296,    33,   298,    34,
      33,    33,    18,    38,    39,   305,   306,    33,   308,     3,
       4,     5,     6,   163,   164,   315,   316,   167,   318,    33,
      33,   171,    38,    39,    40,    41,    33,    33,    33,   329,
     330,    18,   332,     0,    33,    33,     3,     4,     5,     6,
      27,    28,    29,    30,    31,    32,   346,    34,    34,    36,
      37,    38,    39,    40,    41,   355,   356,     1,   358,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    34,    19,    20,    21,    22,    23,
      24,    25,    18,    34,    34,    33,    45,    45,    34,    33,
      38,    39,    40,    41,    38,    39,    34,    45,    42,    43,
      44,    45,    38,    39,    40,    41,    18,    34,   258,    12,
      13,    34,    34,   263,    17,    34,    19,    20,    21,    22,
      23,    24,    25,    34,    45,    34,    38,    39,    40,    41,
      33,    34,    35,    34,    44,    38,    39,    18,    34,    42,
      34,    34,    34,    53,   294,    34,    27,    28,    29,    30,
      31,    32,    33,    34,   304,    36,    37,    38,    39,    40,
      41,    71,    34,    34,   314,    75,    76,    77,    34,    79,
      80,    34,    82,    34,    34,    33,   326,    34,    88,    89,
      38,    39,    40,    41,    94,    34,    45,    45,    46,    34,
     340,    34,    34,    45,   344,    45,    34,    45,   348,   349,
       6,   351,    12,    13,   354,    45,    23,    17,   123,    19,
      20,    21,    22,   123,   364,   125,   126,   127,   128,   129,
     130,   131,   132,    33,   134,   343,   125,    -1,    38,    39,
      -1,    -1,    42,    -1,   144,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   164,    19,    20,    21,    22,    23,
      24,    25,    18,    38,    39,    40,    41,    -1,    -1,    33,
      45,    -1,    -1,   183,    38,    39,   186,    -1,    42,    43,
      44,    45,    38,    39,    40,    41,    -1,    -1,    33,   199,
      -1,    -1,   202,    38,    39,    40,    41,   447,   448,   449,
      45,    46,    18,    -1,    -1,    -1,    18,   217,    -1,    -1,
      -1,   221,    -1,    -1,    -1,   465,   466,    -1,    -1,   469,
     230,   231,    38,    39,    40,    41,    38,    39,    40,    41,
      -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,    -1,
      12,    13,    -1,   253,   254,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    38,    39,    40,    41,
      -1,    33,    34,    45,    -1,    -1,    38,    39,    -1,    -1,
      42,    33,   282,    -1,    -1,   285,    38,    39,    40,    41,
     290,   291,    -1,    45,    46,   295,   296,    -1,   298,    -1,
      -1,   301,   302,    -1,   304,   305,   306,    -1,   308,    -1,
      -1,   311,   312,    -1,   314,   315,   316,    -1,   318,    -1,
      -1,   321,   322,   323,   324,    -1,   326,    -1,    -1,   329,
     330,    -1,   332,    -1,    -1,   335,   336,   337,   338,    44,
     340,    -1,    -1,   343,    -1,    -1,   346,    -1,   348,   349,
      38,    39,    40,    41,    -1,   355,   356,    45,   358,    -1,
      -1,   361,   362,    -1,   364,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    79,    80,    -1,    82,    38,    39,
      40,    41,    -1,    12,    13,    45,    -1,    -1,    17,    94,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      33,    34,    35,    -1,    33,    38,    39,    40,    41,    38,
      39,     0,    -1,    42,     3,     4,     5,     6,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,   144,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,   164,
      38,    39,    40,    41,    33,    -1,   466,    45,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,    -1,   183,    12,
      13,   186,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,   199,    -1,    -1,   202,    -1,    -1,
      33,    27,    28,    29,    30,    38,    39,    -1,    34,    42,
      12,    13,   217,    -1,    -1,    17,   221,    19,    20,    21,
      22,    23,    24,    25,    -1,   230,   231,    33,    34,    35,
      -1,    33,    38,    39,    40,    41,    38,    39,   243,    -1,
      42,    -1,   247,    -1,    -1,    12,    13,    -1,   253,   254,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    33,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    -1,   282,    -1,    -1,
     285,    38,    39,    40,    41,   290,   291,    -1,    45,    -1,
     295,   296,    -1,   298,    -1,    -1,   301,   302,    -1,   304,
     305,   306,    -1,   308,    -1,    -1,   311,   312,    -1,   314,
     315,   316,    -1,   318,    -1,    -1,   321,   322,   323,   324,
      -1,   326,    -1,    -1,   329,   330,    -1,   332,    -1,    -1,
     335,   336,   337,   338,    44,   340,    -1,    -1,   343,    -1,
      -1,   346,    -1,   348,   349,    38,    39,    40,    41,    -1,
     355,   356,    45,   358,    -1,    -1,   361,   362,    -1,   364,
      -1,    71,    -1,    -1,    -1,    75,    76,    77,    -1,    79,
      80,    -1,    82,    12,    13,    -1,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    94,    -1,    25,    -1,    -1,    -1,
      33,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    34,    35,    42,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,   123,    -1,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,   144,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,   164,    38,    39,    40,    41,    33,
      -1,   466,    45,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    -1,   183,    12,    13,   186,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,   199,
      -1,    -1,   202,    -1,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    45,    42,    12,    13,   217,    -1,    -1,
      17,   221,    19,    20,    21,    22,    -1,    -1,    34,    35,
     230,   231,    38,    39,    40,    41,    33,    38,    39,    40,
      41,    38,    39,   243,    45,    42,    -1,   247,    -1,    -1,
      12,    13,    -1,   253,   254,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,    33,    36,    37,    38,    39,    38,    39,    -1,    -1,
      42,    -1,   282,    -1,    -1,   285,    38,    39,    40,    41,
     290,   291,    -1,    45,    -1,   295,   296,    -1,   298,    -1,
      -1,   301,   302,    -1,   304,   305,   306,    -1,   308,    -1,
      -1,   311,   312,    -1,   314,   315,   316,    -1,   318,    -1,
      -1,   321,   322,   323,   324,    -1,   326,    -1,    -1,   329,
     330,    -1,   332,    -1,    -1,   335,   336,   337,   338,    44,
     340,    -1,    -1,   343,    -1,    -1,   346,    -1,   348,   349,
      38,    39,    40,    41,    -1,   355,   356,    45,   358,    -1,
      -1,   361,   362,    -1,   364,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    79,    80,    -1,    82,    12,    13,
      -1,    -1,    18,    17,    -1,    19,    20,    21,    22,    94,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    33,
      36,    37,    38,    39,    38,    39,    34,    35,    42,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,   144,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,   164,
      38,    39,    40,    41,    33,    -1,   466,    45,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,    -1,   183,    12,
      13,   186,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,   199,    -1,    -1,   202,    -1,    -1,
      33,    38,    39,    40,    41,    38,    39,    -1,    45,    42,
      12,    13,   217,    -1,    -1,    17,   221,    19,    20,    21,
      22,    -1,    -1,    34,    35,   230,   231,    38,    39,    40,
      41,    33,    38,    39,    40,    41,    38,    39,   243,    45,
      42,    -1,   247,    -1,    -1,    12,    13,    -1,   253,   254,
      17,    -1,    19,    20,    21,    22,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    33,    36,    37,    38,
      39,    38,    39,    -1,    -1,    42,    -1,   282,    -1,    -1,
     285,    38,    39,    40,    41,   290,   291,    -1,    45,    -1,
     295,   296,    -1,   298,    -1,    -1,   301,   302,    -1,   304,
     305,   306,    -1,   308,    -1,    -1,   311,   312,    -1,   314,
     315,   316,    -1,   318,    -1,    -1,   321,   322,   323,   324,
      -1,   326,    -1,    -1,   329,   330,    -1,   332,    -1,    -1,
     335,   336,   337,   338,    44,   340,    -1,    -1,   343,    -1,
      -1,   346,    -1,   348,   349,    27,    28,    29,    30,    -1,
     355,   356,    34,   358,    -1,    -1,   361,   362,    -1,   364,
      -1,    71,    -1,    -1,    -1,    75,    76,    77,    -1,    79,
      80,    -1,    82,    34,    35,    -1,    18,    38,    39,    40,
      41,    -1,    -1,    -1,    94,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    36,    37,    38,    39,    40,    41,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,   123,    -1,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,   144,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,     0,    -1,   164,     3,     4,     5,     6,    33,
      -1,   466,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,    -1,   183,    -1,    -1,   186,    -1,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    36,    37,   199,
      -1,    -1,   202,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    -1,   217,    34,    35,
      -1,   221,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
     230,   231,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,   243,    34,    35,    18,   247,    38,    39,
      40,    41,    -1,   253,   254,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    -1,   282,     0,    -1,   285,     3,     4,     5,     6,
     290,   291,    -1,    -1,    -1,   295,   296,    -1,   298,    -1,
      -1,   301,   302,    -1,   304,   305,   306,    -1,   308,    -1,
      -1,   311,   312,    -1,   314,   315,   316,    -1,   318,    -1,
      -1,   321,   322,   323,   324,    -1,   326,    -1,    -1,   329,
     330,    -1,   332,    -1,    -1,   335,   336,   337,   338,    44,
     340,    -1,    -1,   343,    -1,    -1,   346,    34,   348,   349,
      -1,    38,    39,    40,    41,   355,   356,    -1,   358,    -1,
      -1,   361,   362,    -1,   364,    -1,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    79,    80,    -1,    82,    -1,    -1,
      34,    86,    87,    18,    38,    39,    40,    41,    -1,    94,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,   123,    44,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,   144,
      36,    37,    38,    39,    40,    41,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    79,    80,    -1,    82,    34,   164,
      -1,    18,    38,    39,    40,    41,   466,    -1,    -1,    94,
      27,    28,    29,    30,    31,    32,    -1,    34,   183,    36,
      37,    38,    39,    40,    41,    34,    35,    -1,    -1,    38,
      39,    40,    41,    -1,   199,    -1,    -1,    -1,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
      34,    35,   217,    -1,    38,    39,    40,    41,    -1,   144,
      -1,    -1,    -1,    34,    35,   230,   231,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,   164,
      34,    18,    -1,    -1,    38,    39,    40,    41,   253,   254,
      27,    28,    29,    30,    31,    32,    -1,    34,   183,    36,
      37,    38,    39,    40,    41,    34,    35,    -1,    -1,    38,
      39,    40,    41,    -1,   199,    34,    35,   282,    -1,    38,
      39,    40,    41,    -1,    -1,   290,   291,    -1,    -1,    -1,
     295,   296,   217,   298,    -1,    -1,    -1,    -1,    -1,   304,
     305,   306,     0,   308,    -1,     3,     4,     5,     6,   314,
     315,   316,    -1,   318,    -1,    -1,   321,   322,   243,    -1,
      -1,   326,    -1,    -1,   329,   330,    -1,   332,    -1,    -1,
     335,   336,    -1,    -1,    -1,   340,    -1,    -1,   343,    -1,
      -1,   346,    34,   348,   349,    -1,    38,    39,    40,    41,
     355,   356,    -1,   358,    -1,    -1,    -1,   282,    -1,   364,
      -1,    34,    35,    -1,    44,    38,    39,    40,    41,    -1,
     295,   296,    -1,   298,    -1,    -1,    -1,    -1,    -1,   304,
     305,   306,     0,   308,    -1,     3,     4,     5,     6,   314,
     315,   316,    -1,   318,    -1,    75,    76,    77,    -1,    79,
      80,   326,    82,    -1,   329,   330,    34,   332,    -1,    -1,
      38,    39,    40,    41,    94,   340,    -1,    -1,   343,    -1,
      -1,   346,    34,   348,   349,    -1,    38,    39,    40,    41,
     355,   356,    -1,   358,    -1,    -1,    34,    18,    -1,   364,
      38,    39,    40,    41,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,   134,    36,    37,    38,    39,    40,
      41,   466,    -1,    -1,   144,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   164,    19,    20,    21,    22,    23,
      24,    25,     0,    -1,    -1,     3,     4,     5,     6,    33,
      -1,    -1,    -1,   183,    38,    39,    -1,    -1,    42,    43,
      44,    45,    18,    -1,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,   217,    34,    35,
      -1,   466,    38,    39,    40,    41,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   243,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,    38,
      39,    40,    41,    38,    39,    18,    -1,    42,    43,    44,
      45,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,   282,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,   295,   296,     0,   298,    -1,
       3,     4,     5,     6,   304,   305,   306,     0,   308,    -1,
       3,     4,     5,     6,   314,   315,   316,    34,   318,    -1,
      -1,    38,    39,    40,    41,    -1,   326,    -1,    -1,   329,
     330,    -1,   332,    -1,    -1,    -1,    -1,    34,    35,    -1,
     340,    38,    39,    40,    41,    -1,   346,    34,   348,   349,
      -1,    38,    39,    40,    41,   355,   356,    -1,   358,    -1,
      -1,    -1,    -1,     1,   364,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    34,    35,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    -1,    42,    43,    44,    45,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,
      33,    38,    39,    40,    41,    38,    39,    -1,    -1,    42,
      43,    44,    45,    34,    35,    -1,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,     1,   466,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,     1,    45,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    18,
      38,    39,    -1,    -1,    42,    43,    -1,    45,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      74,     0,    50,    20,    83,    33,    45,    52,    53,    54,
      55,    83,    34,    35,    43,    72,    54,     1,     7,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    19,    21,
      22,    23,    24,    25,    33,    38,    39,    42,    44,    52,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      72,    73,    74,    75,    76,    77,    79,    80,    81,    82,
      83,    33,    33,    67,    83,    33,    33,    33,    33,    33,
      33,    33,    33,    61,    68,    83,    38,    39,    40,    41,
      63,    45,    44,    75,    33,    46,    25,    56,    57,    58,
      59,    60,    61,    66,    45,    67,    78,    78,    78,    83,
      67,    67,    83,    78,    34,    34,    62,    62,    63,    63,
      67,    71,    67,    27,    34,    28,    29,    30,    31,    32,
      36,    37,    18,    45,    18,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    35,    45,    57,    75,    58,    59,
      59,    61,    61,    61,    61,    61,    66,    67,    75,    45,
      45,    45,    67,     8,    45,    75,    66,    34,    75,    20,
      20,    43,    20,    12,    13,    17,    19,    20,    21,    22,
      23,    24,    25,    33,    62,    63,    64,    65,    69,    70,
      83,    20,    12,    13,    17,    19,    20,    21,    22,    33,
      62,    63,    64,    65,    69,    70,    83,    12,    13,    17,
      19,    20,    21,    22,    23,    24,    25,    33,    61,    62,
      63,    64,    65,    68,    69,    70,    83,    20,    61,    68,
      38,    39,    45,    12,    13,    17,    19,    20,    21,    22,
      23,    24,    25,    33,    61,    62,    63,    64,    65,    68,
      69,    70,    83,    38,    39,     1,     7,     9,    10,    11,
      14,    15,    16,    43,    52,    66,    72,    74,    76,    77,
      79,    80,    81,    82,    83,    12,    13,    17,    19,    20,
      21,    22,    33,    62,    63,    64,    65,    69,    70,    83,
      38,    39,    67,    44,    73,    33,    33,    33,    33,    61,
      68,    40,    41,    63,    33,    33,    33,    33,    33,    61,
      68,    40,    41,    63,    33,    33,    33,    33,    33,    61,
      68,    38,    39,    40,    41,    63,    33,    62,    62,    33,
      33,    33,    33,    61,    68,    38,    39,    40,    41,    63,
      33,    62,    62,    33,    33,    67,    33,    33,    33,    33,
      44,    73,    83,    45,    46,    33,    33,    33,    33,    61,
      68,    40,    41,    63,    33,    62,    62,    44,    78,    78,
      83,    78,    34,    34,    63,    63,    71,    78,    78,    83,
      78,    34,    34,    63,    63,    71,    78,    78,    83,    78,
      34,    34,    62,    62,    63,    63,    71,    78,    78,    83,
      78,    34,    34,    62,    62,    63,    63,    71,    56,    66,
      45,    78,    83,    67,    67,    44,    45,    67,    78,    78,
      83,    78,    34,    34,    63,    63,    71,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    45,    34,
      34,    34,    34,    45,    34,    34,    34,    34,    34,    75,
      66,    75,    45,    45,    45,     8,    45,    75,    66,    34,
      75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    53,    54,    54,    55,    56,    56,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    62,    63,    63,
      64,    64,    64,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      77,    78,    79,    79,    80,    80,    81,    81,    81,    82,
      83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     1,     1,
       1,     1,     1,     0,     3,     1,     2,     1,     3,     1,
       3,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     0,
       1,     1,     1,     1,     1,     4,     1,     3,     4,     4,
       4,     4,     3,     1,     0,     3,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     3,     5,     7,     9,     5,     5,     5,     5,     3,
       1
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
#line 50 "src/syntax/parser.y"
                                            {
                    (yyval.ast_node) = create_ast_node(TRANSLATION_UNIT, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                    ast = (yyval.ast_node);
                  }
#line 2664 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 56 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2672 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 59 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2678 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 62 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2684 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 63 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2690 "./src/syntax/parser.c"
    break;

  case 7: /* function_definition: type_specifier identifier '(' parameters ')' compound_statement  */
#line 66 "src/syntax/parser.y"
                                                                                     {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-5].token), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), NULL, NULL);
                      insert_row_into_symbol_table((yyvsp[-5].token), (yyvsp[-4].ast_node)->value, "function");
                    }
#line 2699 "./src/syntax/parser.c"
    break;

  case 8: /* type_specifier: INT  */
#line 72 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2705 "./src/syntax/parser.c"
    break;

  case 9: /* type_specifier: FLOAT  */
#line 73 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 2711 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: ELEM  */
#line 74 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 2717 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: SET  */
#line 75 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2723 "./src/syntax/parser.c"
    break;

  case 12: /* parameters: parameter_list  */
#line 78 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2729 "./src/syntax/parser.c"
    break;

  case 13: /* parameters: %empty  */
#line 79 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 2735 "./src/syntax/parser.c"
    break;

  case 14: /* parameter_list: parameter_declaration ',' parameter_list  */
#line 82 "src/syntax/parser.y"
                                                         {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 2743 "./src/syntax/parser.c"
    break;

  case 15: /* parameter_list: parameter_declaration  */
#line 85 "src/syntax/parser.y"
                                      { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2749 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_declaration: type_specifier identifier  */
#line 88 "src/syntax/parser.y"
                                                 {
                        (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[-1].token), (yyvsp[0].ast_node), NULL, NULL, NULL);
                      }
#line 2757 "./src/syntax/parser.c"
    break;

  case 17: /* logical_or_expression: logical_and_expression  */
#line 93 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2763 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 94 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2771 "./src/syntax/parser.c"
    break;

  case 19: /* logical_and_expression: equality_expression  */
#line 99 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2777 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 100 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 2785 "./src/syntax/parser.c"
    break;

  case 21: /* equality_expression: relational_expression  */
#line 105 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2791 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 106 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2799 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 109 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2807 "./src/syntax/parser.c"
    break;

  case 24: /* relational_expression: belongs_to_expression  */
#line 114 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2813 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: EMPTY_CONST  */
#line 115 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 2821 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: relational_expression '<' additive_expression  */
#line 118 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2829 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '>' additive_expression  */
#line 121 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2837 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 124 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2845 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 127 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2853 "./src/syntax/parser.c"
    break;

  case 30: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 132 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2861 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: additive_expression  */
#line 135 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2867 "./src/syntax/parser.c"
    break;

  case 32: /* additive_expression: multiplicative_expression  */
#line 138 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2873 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 139 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2881 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 142 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2889 "./src/syntax/parser.c"
    break;

  case 35: /* multiplicative_expression: unary_expression  */
#line 147 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2895 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 148 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2903 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 151 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2911 "./src/syntax/parser.c"
    break;

  case 38: /* unary_expression: term  */
#line 156 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2917 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: unary_operator unary_expression  */
#line 157 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 2925 "./src/syntax/parser.c"
    break;

  case 40: /* unary_operator: '+'  */
#line 162 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 2931 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '-'  */
#line 163 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 2937 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '!'  */
#line 164 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 2943 "./src/syntax/parser.c"
    break;

  case 43: /* term: identifier  */
#line 167 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2949 "./src/syntax/parser.c"
    break;

  case 44: /* term: INTEGER_CONST  */
#line 168 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2955 "./src/syntax/parser.c"
    break;

  case 45: /* term: FLOAT_CONST  */
#line 169 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2961 "./src/syntax/parser.c"
    break;

  case 46: /* term: '(' additive_expression ')'  */
#line 170 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 2969 "./src/syntax/parser.c"
    break;

  case 47: /* term: function_call_expression  */
#line 173 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2975 "./src/syntax/parser.c"
    break;

  case 48: /* optional_expression: expression  */
#line 176 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2981 "./src/syntax/parser.c"
    break;

  case 49: /* optional_expression: %empty  */
#line 177 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 2987 "./src/syntax/parser.c"
    break;

  case 50: /* expression: additive_expression  */
#line 180 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2993 "./src/syntax/parser.c"
    break;

  case 51: /* expression: function_arg_constant_expression  */
#line 181 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2999 "./src/syntax/parser.c"
    break;

  case 52: /* function_arg_constant_expression: EMPTY_CONST  */
#line 184 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3009 "./src/syntax/parser.c"
    break;

  case 53: /* function_arg_constant_expression: STRING  */
#line 189 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3019 "./src/syntax/parser.c"
    break;

  case 54: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 194 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3029 "./src/syntax/parser.c"
    break;

  case 55: /* function_call_expression: identifier '(' argument_list ')'  */
#line 201 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3039 "./src/syntax/parser.c"
    break;

  case 56: /* function_call_expression: set_function_call_expression  */
#line 206 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3045 "./src/syntax/parser.c"
    break;

  case 57: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 207 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3051 "./src/syntax/parser.c"
    break;

  case 58: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 210 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3061 "./src/syntax/parser.c"
    break;

  case 59: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 215 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3071 "./src/syntax/parser.c"
    break;

  case 60: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 220 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3081 "./src/syntax/parser.c"
    break;

  case 61: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 225 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3091 "./src/syntax/parser.c"
    break;

  case 62: /* argument_list: argument_list ',' expression  */
#line 232 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3099 "./src/syntax/parser.c"
    break;

  case 63: /* argument_list: expression  */
#line 235 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3105 "./src/syntax/parser.c"
    break;

  case 64: /* argument_list: %empty  */
#line 236 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3111 "./src/syntax/parser.c"
    break;

  case 65: /* compound_statement: '{' statement_list '}'  */
#line 239 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3117 "./src/syntax/parser.c"
    break;

  case 66: /* compound_statement: '{' '}'  */
#line 240 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3123 "./src/syntax/parser.c"
    break;

  case 67: /* statement_list: statement_list statement  */
#line 243 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3131 "./src/syntax/parser.c"
    break;

  case 68: /* statement_list: statement  */
#line 246 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3137 "./src/syntax/parser.c"
    break;

  case 69: /* declaration: type_specifier identifier ';'  */
#line 249 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
            }
#line 3145 "./src/syntax/parser.c"
    break;

  case 70: /* statement: declaration  */
#line 254 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3151 "./src/syntax/parser.c"
    break;

  case 71: /* statement: compound_statement  */
#line 255 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3157 "./src/syntax/parser.c"
    break;

  case 72: /* statement: expression_statement  */
#line 256 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3163 "./src/syntax/parser.c"
    break;

  case 73: /* statement: selection_statement  */
#line 257 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3169 "./src/syntax/parser.c"
    break;

  case 74: /* statement: iteration_statement  */
#line 258 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3175 "./src/syntax/parser.c"
    break;

  case 75: /* statement: io_statement  */
#line 259 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3181 "./src/syntax/parser.c"
    break;

  case 76: /* statement: jump_statement  */
#line 260 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3187 "./src/syntax/parser.c"
    break;

  case 77: /* statement: assignment_statement  */
#line 261 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3193 "./src/syntax/parser.c"
    break;

  case 78: /* statement: error  */
#line 262 "src/syntax/parser.y"
                { yyerrok; }
#line 3199 "./src/syntax/parser.c"
    break;

  case 79: /* assignment_statement: identifier '=' expression ';'  */
#line 265 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3207 "./src/syntax/parser.c"
    break;

  case 80: /* expression_statement: optional_expression ';'  */
#line 270 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3213 "./src/syntax/parser.c"
    break;

  case 81: /* set_membership_expression: expression IN expression  */
#line 273 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3221 "./src/syntax/parser.c"
    break;

  case 82: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 278 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3229 "./src/syntax/parser.c"
    break;

  case 83: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 281 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3237 "./src/syntax/parser.c"
    break;

  case 84: /* iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ')' statement  */
#line 286 "src/syntax/parser.y"
                                                                                                               {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3245 "./src/syntax/parser.c"
    break;

  case 85: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 289 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3253 "./src/syntax/parser.c"
    break;

  case 86: /* io_statement: WRITE '(' expression ')' ';'  */
#line 294 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3261 "./src/syntax/parser.c"
    break;

  case 87: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 297 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3269 "./src/syntax/parser.c"
    break;

  case 88: /* io_statement: READ '(' identifier ')' ';'  */
#line 300 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3277 "./src/syntax/parser.c"
    break;

  case 89: /* jump_statement: RETURN expression ';'  */
#line 305 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3285 "./src/syntax/parser.c"
    break;

  case 90: /* identifier: IDENTIFIER  */
#line 310 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 3293 "./src/syntax/parser.c"
    break;


#line 3297 "./src/syntax/parser.c"

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

#line 315 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
