/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/syntax/parser.y" /* yacc.c:337  */

  #include <stdio.h>
  #include <stdlib.h>
  #include "ast.h"

  struct ast_node *ast = NULL;

#line 78 "./src/syntax/parser.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
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
#line 14 "src/syntax/parser.y" /* yacc.c:352  */

  struct ast_node *ast_node;
  char* token;

#line 159 "./src/syntax/parser.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_SYNTAX_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   8592

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  622

#define YYUNDEFTOK  2
#define YYMAXUTOK   287

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    44,    47,    50,    51,    54,    59,    60,
      61,    62,    65,    70,    71,    74,    77,    80,    85,    88,
      89,    94,    95,   100,   101,   104,   109,   110,   113,   116,
     119,   124,   125,   128,   133,   134,   137,   142,   143,   148,
     149,   150,   153,   154,   157,   158,   159,   162,   163,   164,
     165,   166,   169,   170,   173,   174,   175,   176,   177,   178,
     179,   182,   185,   186,   189,   190,   193,   194,   197,   200,
     203,   206,   209,   212,   213,   216,   217,   220,   223,   224,
     225,   226,   227,   228,   229,   234,   237,   240,   241,   244,
     245,   248,   249,   250,   253,   256
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ELEM", "SET", "IF",
  "ELSE", "FOR", "RETURN", "FORALL", "ADD", "REMOVE", "READ", "WRITELN",
  "WRITE", "IS_SET", "IN", "EXISTS", "IDENTIFIER", "INTEGER_CONST",
  "FLOAT_CONST", "CHARACTER_CONST", "STRING", "EMPTY_CONST", "IF_ONLY",
  "OR", "AND", "EQUAL_TO", "NOT_EQUAL_TO", "LT_OR_EQ_TO", "BG_OR_EQ_TO",
  "'('", "')'", "','", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'!'",
  "'='", "'{'", "'}'", "';'", "$accept", "translation_unit",
  "external_declaration_list", "external_declaration",
  "function_definition", "type_specifier", "declarator", "parameters",
  "parameter_list", "parameter_declaration", "conditional_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "unary_operator",
  "postfix_expression", "primary_expression", "constant",
  "optional_expression", "expression", "function_call_expression", "args",
  "argument_list", "assignment_expression", "type_check_expression",
  "exists_expression", "inclusion_expression", "removal_expression",
  "compound_statement", "compound_or_inline_statement", "statement_list",
  "declaration", "statement", "expression_statement",
  "membership_expression", "selection_statement", "iteration_statement",
  "io_statement", "jump_statement", "identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    40,    41,    44,    60,    62,    43,    45,
      42,    47,    33,    61,   123,   125,    59
};
# endif

#define YYPACT_NINF -343

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-343)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     887,    -7,    27,    47,    52,    84,  1254,  1416,  1487,    86,
    1514,  -343,  1557,   -21,    80,    13,  4626,  1593,     5,  1617,
    4774,   106,     6,   113,   164,  4820,   116,   133,   526,   167,
     169,   180,   190,   198,   204,   207,   215,    82,   956,   980,
    1181,  1348,   605,   423,  2113,  2866,  1644,   139,    17,    16,
      55,     2,   489,   929,  2962,  2468,  2932,  1372,  1573,  1740,
     173,    18,    20,    40,    85,    90,   109,   111,  4866,  4912,
    4958,   114,  5004,  5050,  5096,  5142,  1764,   216,   210,   887,
     605,    32,   126,   797,   605,   605,   249,   605,   605,   605,
     605,     3,   247,  2939,  2939,  2939,  2939,  2939,  2939,  2939,
    2939,  2939,  2939,  2939,  2939,  2932,  2605,  1965,  3162,  5188,
     526,   205,   265,    42,   262,  5234,   302,   130,   347,   368,
     288,   475,   494,   518,   545,  2132,    89,  4542,   124,   573,
    1210,  1004,  1321,  1396,  1713,  5942,  5966,  5990,  6014,   150,
     307,   151,   280,   308,   310,  5280,    32,  5324,   186,   187,
     299,   317,   318,   188,   189,  2156,   825,   196,   170,   267,
     659,   339,  5368,  5414,  5460,  5506,   353,  5324,   416,  5552,
     378,  5324,  5598,  2431,   261,   384,   397,   399,   401,  1794,
    2186,  6374,  6391,  6408,  6425,   605,   589,   393,   618,   681,
    3034,  3255,  7447,  6609,  3218,  6442,  6459,  6476,   678,   695,
     696,   717,   718,   739,   741,  6493,   373,   419,   424,   426,
     427,  6626,  6643,  6660,  6677,  6694,  6711,   605,   405,    15,
     183,   923,  3988,  2497,  7744,  6864,  3281,  6728,  6745,  6762,
     408,   445,   452,   453,   482,   483,  6779,   469,   605,  5644,
    2629,  2742,  2993,  3100,  3472,  3498,   605,  2939,  4146,  4291,
    4360,  4403,  8010,  8027,  8044,  8061,  8078,  8095,   605,   470,
     103,   289,  1202,  3747,  4124,  8398,  8214,  3162,  8112,  8129,
    8146,  8163,   473,   478,   504,   511,  6062,  6086,  6110,  6134,
    6158,  6182,   605,   284,   218,   276,   621,  7954,   228,  7138,
    6510,  3382,  6206,  6230,  6254,   303,   325,   349,   387,   390,
     506,   538,  6278,   825,   893,   533,   534,   526,   536,   548,
     565,   578,  4626,   139,   514,  1051,  1285,  1443,  1677,  1835,
    2069,  4626,  5690,  5736,   759,   605,   605,   605,   605,   760,
    3532,  3532,  3532,  3532,  3532,  3532,  3532,  3532,  3532,  3532,
    3532,  3532,  3218,  6796,  6534,  3162,   205,   605,   605,   605,
     605,   779,  3555,  3555,  3555,  3555,  3555,  3555,  3555,  3555,
    3555,  3555,  3555,  3555,  3281,  6881,  6813,  3162,   205,   793,
     794,  6038,  3162,   806,  3723,  3723,  3723,  3723,  3723,  3723,
    3723,  3723,  3723,  3723,  3723,  3723,  3162,  8231,  3162,   605,
     605,   605,   605,   807,  3897,  3897,  3897,  3897,  3897,  3897,
    3897,  3897,  3897,  3897,  3897,  3897,  3382,  6551,  6302,  3162,
     205,   540,   605,    32,   203,   797,   249,   605,   605,  5782,
     532,  2227,  5828,   834,   835,   836,   877,  6575,  7153,  7170,
    7187,  7204,  7221,  7238,   605,   902,  7462,  3532,  7255,  7272,
    7289,  7306,  1019,  3131,  3198,  4321,  7879,  7894,  7909,  7477,
    7492,  7507,  7522,   903,   579,   597,   909,   910,   928,   930,
    6830,  7537,  7553,  7569,  7585,  7601,  7617,   605,   487,  7759,
    3555,  7633,  7649,  7665,  7681,  1174,  4434,  7999,  2771,  2888,
    7924,  7939,  7774,  7789,  7804,  7819,   614,   600,   601,  4458,
     603,  8180,  3628,  4503,  8248,  8263,  8278,  8293,   605,   527,
    8413,  3723,  8308,  8323,  8338,  8353,  1306,  4571,  8555,  8503,
    8516,  8529,  8542,  8428,  8443,  8458,  8473,   606,   608,   937,
     996,  1010,  1060,  6326,  1597,  1989,  6898,  6922,  6946,  6970,
     605,   495,  7323,  3897,  6994,  7018,  7042,  7066,  2114,  7969,
    7984,  2350,  4527,  7849,  7864,  7338,  7353,  7368,  7383,   552,
     620,   625,  1061,   615,  2392,  1064,   651,  1065,  1068,  2575,
    3078,  5874,  1069,  1070,  1073,  1087,  1088,  7697,  3162,  6592,
    1109,   669,   670,   673,   676,  1110,  7834,  3162,  6847,   677,
    4483,  1131,  8488,  3162,  8197,   558,   581,   623,   668,  1133,
    7398,  3162,  6350,   672,  5280,    32,  5280,   654,   682,   687,
    7413,   700,  7712,   703,  8368,   721,  7090,   722,  5920,   730,
    3336,  3422,  3848,  4680,  7430,  7728,  8383,  7114,   416,   745,
    5280,  4728
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -343,  -343,  -343,   796,  -343,     0,  -343,  -343,   724,  -343,
    3539,  3626,  3217,  2902,  2802,  2460,  2346,   386,   778,  1170,
    1562,  1954,   -12,  4200,  3643,  -342,   644,  3306,  3659,  3676,
    3957,  4001,    -9,   -86,  -293,     1,    -4,  -143,  4059,  -128,
    -122,  -121,  -118,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    47,    14,    22,    23,    24,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,    60,    61,   198,   143,   144,   199,   200,   201,
     202,   203,   158,   159,    20,    68,   160,    70,   204,    72,
      73,    74,    75,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   316,    15,   455,    17,     9,    10,     1,     2,
       3,     4,   -95,    -8,    76,    77,    69,   317,    21,   419,
     -21,   238,    76,   318,   319,   -95,   488,   320,   422,   -21,
     -21,    95,    96,   -18,   -18,   -66,   110,   125,   -60,   -14,
      78,    92,   352,    93,    30,    31,    18,    -9,   -21,    35,
     107,    36,   173,    37,    38,    39,    40,    41,   -54,    19,
     238,   162,   -18,   -66,   -52,    42,   -60,   -10,   551,   114,
      43,    44,   -11,   -19,    45,    76,   145,   236,   -53,    21,
     120,   169,   -19,    94,    11,   172,   -54,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   107,
     -47,   -19,   271,   -55,    76,   302,    13,   -20,   -56,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -20,    94,   -47,   -47,
     -47,   -47,   -47,   -47,    16,   -47,   174,   -57,   -47,   -58,
     374,   -55,   -59,   314,   161,   -20,   -56,   -18,   322,    76,
      76,    76,   -22,   323,   110,   313,   315,   -13,   -59,    80,
     302,   -22,   -22,    95,    96,   -57,   170,   -58,   322,   206,
     -59,    76,   322,   323,   147,    76,    81,   323,   -67,   110,
     -22,   -73,   115,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   344,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -67,   -86,   -16,    79,
      83,   -19,    84,   -73,   -70,   -71,   -68,   -69,   -73,   -73,
     -19,   353,   -73,    85,   -61,   -73,   -73,   272,   273,   109,
     366,   110,   274,    86,   275,   276,   277,   278,   279,   280,
     281,    87,   -70,   -71,   -68,   -69,   -18,    88,   282,   -63,
      89,   251,   -61,    43,    44,   394,   -26,    45,    90,   554,
     -17,   -17,   -18,   -18,   -12,   -26,   -26,   -26,   -26,   -26,
     -26,   271,   -26,   -26,   -26,   -26,   402,   403,   -87,   237,
     -87,   -87,   -87,   -87,   -87,   167,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   408,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   239,   -19,   -95,   -95,   302,   303,   -15,
     -87,    76,   -66,   -19,   395,   -87,   -87,   420,   146,   -87,
     -19,   -19,   -87,   -87,   -65,   156,   -19,   375,   -66,   -66,
     238,   -60,   150,   -19,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   344,   -60,   -60,   271,
     302,   155,   157,   -54,   -62,   163,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   366,   -54,
     -54,   271,   302,   164,   165,   238,   271,   -55,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     271,   148,   271,   -55,   -55,   168,   238,   -64,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     408,   553,   149,   271,   302,   -56,    55,    76,   -57,   236,
     556,   -18,   171,    76,    55,    69,    76,   325,    69,   -95,
     330,   -56,   -56,   -66,   -57,   -57,   -60,   -18,   175,   176,
     326,   441,   327,   177,   328,   178,   179,   180,   181,   182,
     183,   184,   106,   -39,   -39,   -39,   -39,   -39,   -39,   185,
     -53,   316,   347,   316,    43,    44,   -39,   348,    45,   349,
     350,   -39,   -39,   -54,   474,   -39,   317,    55,   317,   225,
     -55,   -56,   318,   319,   318,   319,   320,   316,   320,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   137,
     138,    55,   317,   238,   266,   505,    55,   290,   318,   319,
     -57,   -58,   320,   -95,   -66,   -20,   389,   -23,   608,   151,
     610,   390,   238,   -20,   -20,   353,   -23,   -23,   -23,   -23,
      97,    98,   -20,   395,   -58,    99,   100,   537,   152,   -20,
     -20,    55,    55,    55,   621,   -23,   238,   391,    30,    31,
     -58,   -58,   290,    35,   392,    36,   173,    37,    38,    39,
      40,    41,   153,    55,   -20,   375,   -59,    55,   303,    42,
     421,   -20,   271,   238,    43,    44,   412,   413,    45,   415,
     -67,   271,   -59,   -59,   -86,   -86,   -70,   271,   560,   154,
     343,   416,   314,   609,   314,   271,   -67,   -67,    76,    76,
      76,   -24,   -70,   -70,   313,   315,   313,   315,   417,   -71,
     -24,   -24,   -24,   -24,    97,    98,   619,   -66,   314,    99,
     100,   418,   365,   569,    76,   -71,   -71,   175,   176,   -24,
     313,   315,   177,   -66,   178,   179,   180,   181,   182,   183,
     184,   570,   -67,   371,   578,   579,   -19,   580,   185,   -21,
     -67,   -68,   584,    43,    44,   -19,   331,    45,   -21,   -21,
     396,   397,   -19,   387,   592,   -21,   -21,   -68,   -68,   593,
     -74,   595,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   407,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   597,   -69,   -70,   -71,   290,
     -61,   -68,   -74,    55,   -69,   -61,   -60,   -74,   -74,   -21,
     611,   -74,   -69,   -69,   -74,   -74,   -61,   -61,   -21,   -21,
     332,   333,   -60,   -54,   -55,   -21,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   451,   452,   612,   -54,
     -55,   266,   290,   613,   614,   -56,   -57,   615,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   484,   485,
     225,   -56,   -57,   266,   290,   616,   617,   -58,   266,   -59,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     515,   516,   266,   -58,   266,   -59,   618,   238,   238,   620,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     547,   548,   290,   -52,   427,   266,   290,   238,    56,    55,
     166,   225,    12,   112,     0,    55,    56,     0,    55,   207,
     208,   238,   238,   460,   209,     0,   210,   211,   212,   213,
     214,   215,   216,   567,   238,   238,     0,   -86,   489,     0,
     217,     0,     0,     0,    56,    43,    44,   272,   273,    45,
     491,   523,   274,     0,   275,   276,   277,   278,   279,   280,
     281,     0,   238,   238,   238,     0,   576,     0,   282,    56,
       0,   226,     0,    43,    44,     0,     0,    45,   562,   563,
     564,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,    56,     0,     0,   267,   582,    56,   291,
       1,     2,     3,     4,   -84,   238,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   565,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   590,
     -20,   -67,     0,    56,    56,    56,   -84,   238,   238,   -20,
     331,   -84,   -84,     0,   291,   -84,   -20,   -67,   -84,   -84,
       0,   -21,     0,   571,   572,    56,   238,   -26,   238,    56,
     -21,   -21,   354,   355,   266,   238,   -26,   -26,   -26,   -26,
     -26,   -26,   573,   266,   574,   -26,   -26,   101,   102,   266,
       0,   585,     0,     0,   -48,   -26,     0,   266,     0,     0,
      55,    55,    55,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -49,   -48,
       0,     0,   -48,     0,   226,     0,    55,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   238,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -29,   -49,     0,   247,   -49,     0,   238,     0,
     586,   -29,   -29,   -29,   -29,   -29,   -29,   -22,     0,     0,
     -29,   -29,   101,   102,   587,   267,   -22,   -22,   332,   333,
     -29,     0,   -83,   -22,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   291,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   238,   238,
       0,   291,   -59,   238,   -83,    56,   238,   -70,   -71,   -83,
     -83,   -68,     0,   -83,   588,   594,   -83,   -83,   596,   598,
       0,     0,   599,   -70,   -71,   -69,   238,   -68,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
       0,   -69,   600,   267,   291,     0,     0,   -61,   238,     0,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   226,   -61,   602,   267,   291,     0,     0,   238,
     267,   238,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   267,   604,   267,   606,     0,     0,
       0,     0,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   291,     0,     0,   267,   291,     0,
      57,    56,   -22,   226,     0,     0,     0,    56,    57,   -51,
      56,   -22,   -22,   354,   355,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   437,     0,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -51,     0,    57,   -51,   -25,   -21,
     -21,   376,   377,     0,     0,     0,   -21,   -25,   -25,   -25,
     -25,    97,    98,     0,     0,     0,    99,   100,   470,     0,
       0,    57,     0,   227,    -2,     0,   -25,     1,     2,     3,
       4,     0,     0,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,    57,     0,     0,   268,   501,
      57,   292,     0,     0,     0,     0,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   533,     0,     0,     0,    57,    57,    57,   -78,     0,
       0,     0,     0,   -78,   -78,     0,   292,   -78,     0,     0,
     -78,   -78,     0,   -22,   -22,   376,   377,    57,     0,   -30,
     -22,    57,     0,     0,     0,     0,   267,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   267,     0,   -30,   -30,   101,
     102,   267,     0,     0,     0,     0,   -50,   -30,     0,   267,
       0,     0,    56,    56,    56,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -37,   -50,     0,     0,   -50,     0,   227,     0,    56,   -37,
     -37,   -37,   -37,   -37,   -37,   108,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -27,   -37,    -4,   248,   -37,    -4,
      -4,    -4,    -4,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,   -27,   -27,   101,   102,     0,   268,     0,     0,
       0,     0,   -27,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   292,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,   292,     0,     0,   -79,    57,     0,     0,
       0,   -79,   -79,     0,     0,   -79,     0,    -5,   -79,   -79,
      -5,    -5,    -5,    -5,     0,     0,     0,     0,     0,     0,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,     0,     0,    -6,   268,   292,    -6,    -6,    -6,
      -6,     0,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   227,     0,     0,   268,   292,     0,
       0,     0,   268,     0,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   268,    -3,   268,     0,
      -3,    -3,    -3,    -3,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   292,     0,     0,   268,
     292,     0,    58,    57,     0,   227,     0,     0,     0,    57,
      58,   -42,    57,    -7,     0,     0,    -7,    -7,    -7,    -7,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   438,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -95,   -42,   -77,    58,   -42,
     -77,   -77,   -77,   -77,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
     471,     0,     0,    58,   -72,   228,     0,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,    58,     0,     0,
     269,   502,    58,   293,     0,     0,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   534,     0,     0,     0,    58,    58,    58,
     -80,     0,     0,     0,     0,   -80,   -80,     0,   293,   -80,
       0,     0,   -80,   -80,     0,     0,     0,     0,     0,    58,
       0,   -28,     0,    58,     0,     0,     0,     0,   268,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   268,     0,   -28,
     -28,   101,   102,   268,     0,     0,     0,     0,   -45,   -28,
       0,   268,     0,     0,    57,    57,    57,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -44,   -45,     0,     0,   -45,     0,   228,     0,
      57,   -44,   -44,   -44,   -44,   -44,   -44,   111,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   249,
     -44,     0,   -95,     0,     0,     0,     0,     0,     0,     0,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   269,
     -95,   -95,   -95,   -95,   -95,   -95,   -81,   -95,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   293,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   293,     0,     0,   -81,    58,
       0,     0,     0,   -81,   -81,     0,     0,   -81,     0,     0,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,     0,     0,     0,   269,   293,     0,
       0,     0,     0,     0,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   228,     0,     0,   269,
     293,     0,     0,     0,   269,     0,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   269,     0,
     269,     0,     0,     0,     0,     0,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   293,     0,
       0,   269,   293,     0,    59,    58,     0,   228,     0,     0,
       0,    58,    59,   -44,    58,     0,     0,     0,     0,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   439,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -47,   -44,     0,
      59,   -44,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   472,     0,     0,    59,     0,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,    59,
       0,     0,   270,   503,    59,   294,     0,     0,     0,     0,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   535,     0,     0,     0,    59,
      59,    59,   -82,     0,     0,     0,     0,   -82,   -82,     0,
     294,   -82,     0,     0,   -82,   -82,     0,     0,     0,     0,
       0,    59,     0,     0,     0,    59,     0,     0,     0,     0,
     269,     0,   -22,   -40,   -40,   -40,   -40,   -40,   -40,   269,
       0,   -22,   -22,   396,   397,   269,   -40,     0,   -22,   -22,
     -46,   -40,   -40,   269,     0,   -40,    58,    58,    58,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -43,   -46,     0,     0,   -46,     0,
     229,     0,    58,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
       0,   250,   -43,     0,   -47,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   270,   -47,   -47,   -47,   -47,   -47,   -47,   -85,   -47,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   294,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,   294,     0,     0,
     -85,    59,     0,     0,     0,   -85,   -85,     0,     0,   -85,
       0,     0,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,     0,     0,     0,   270,
     294,     0,     0,     0,     0,     0,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   229,     0,
       0,   270,   294,     0,     0,     0,   270,     0,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     270,     0,   270,     0,     0,     0,     0,     0,   536,   536,
     536,   536,   536,   536,   536,   536,   536,   536,   536,   536,
     294,     0,     0,   270,   294,     0,    54,    59,   -29,   229,
       0,     0,     0,    59,    54,     0,    59,   -29,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   402,   403,
       0,   440,     0,   -94,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,
       0,     0,     0,     0,   473,   -94,     0,    54,     0,   224,
     -94,   -94,     0,     0,   -94,     0,     0,   -94,   -94,    54,
      54,    54,    54,    54,    54,    54,    54,   135,   136,   -95,
       0,    54,     0,     0,   265,   504,    54,   289,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,     0,   -95,   -95,   -95,
     -95,   -95,   -95,     0,   -95,     0,     0,   -95,     0,     0,
      53,     0,     0,     0,     0,     0,   -34,   536,    53,     0,
       0,    54,    54,    54,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   289,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   105,     0,    54,   -34,   -26,     0,    54,     0,     0,
       0,     0,   270,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   270,     0,   -26,   -26,   360,   361,   270,     0,     0,
       0,    53,     0,   223,     0,   270,     0,     0,    59,    59,
      59,     0,     0,    53,    53,    53,    53,   131,   132,   133,
     134,     0,     0,     0,     0,    53,     0,     0,   264,     0,
      53,   288,     0,     0,    59,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,    53,    53,    53,   -72,     0,
       0,     0,     0,   -72,   -72,     0,   288,   -72,     0,     0,
     -72,   -72,     0,   -38,     0,     0,     0,    53,     0,     0,
       0,    53,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -95,   -38,   289,
       0,   -38,     0,    54,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,     0,   -95,   -95,   -95,   -95,   -95,
     -95,     0,     0,     0,     0,   -95,     0,     0,     0,     0,
       0,     0,     0,     0,   449,   450,     0,     0,     0,     0,
       0,   265,   289,     0,     0,     0,     0,     0,   224,   224,
     224,   224,   224,   224,   224,   224,   482,   483,     0,     0,
     224,     0,     0,   265,   289,     0,     0,     0,   265,     0,
     265,   265,   265,   265,   265,   265,   265,   265,   513,   514,
       0,     0,   265,     0,   265,     0,     0,     0,     0,     0,
     289,   289,   289,   289,   289,   289,   289,   289,   545,   546,
       0,     0,   289,     0,     0,   265,   289,     0,     0,    54,
     -47,   224,     0,   288,     0,    54,     0,    53,    54,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -47,     0,     0,     0,     0,   -47,   -29,
       0,     0,     0,     0,   445,   446,   447,   448,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   264,   288,   -29,   -29,   360,
     361,     0,   223,   223,   223,   223,   478,   479,   480,   481,
       0,     0,    52,     0,   223,     0,     0,   264,   288,     0,
      52,     0,   264,     0,   264,   264,   264,   264,   509,   510,
     511,   512,     0,     0,     0,     0,   264,     0,   264,     0,
       0,     0,     0,     0,   288,   288,   288,   288,   541,   542,
     543,   544,     0,     0,     0,     0,   288,     0,     0,   264,
     288,     0,     0,    53,     0,   223,     0,     0,     0,    53,
       0,     0,    53,    52,     0,   222,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,    52,    52,   129,   130,   -41,
       0,     0,     0,     0,   -41,   -41,   -30,    52,   -41,     0,
     263,     0,    52,   287,   265,   -30,   -30,   -30,   -30,   -30,
     -30,     0,    51,   265,   -30,   -30,   360,   361,     0,   265,
      51,     0,     0,     0,     0,     0,     0,   265,     0,     0,
      54,    54,    54,     0,     0,     0,     0,    52,    52,    52,
       0,     0,   173,    37,    38,    39,    40,    41,   287,   240,
     241,   242,   243,   244,   245,    42,    54,     0,     0,    52,
      43,    44,   246,    52,    45,     0,     0,    43,    44,     0,
     -31,    45,     0,    51,     0,   221,     0,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,    51,   128,     0,   -31,   -31,
     -31,   -31,   103,   104,     0,     0,     0,    51,   -31,     0,
     262,   -48,    51,   286,     0,     0,     0,     0,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   264,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,   264,     0,   -48,
       0,     0,     0,   264,     0,     0,     0,    51,    51,    51,
       0,   264,   -23,     0,    53,    53,    53,     0,   286,     0,
       0,   -23,   -23,   -23,   -23,   334,   335,     0,   -23,    51,
     336,   337,     0,    51,     0,     0,     0,     0,     0,   -77,
      53,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   287,     0,     0,     0,    52,
       0,   -77,     0,     0,     0,     0,   -77,   -77,   -49,     0,
     -77,     0,     0,   -77,   -77,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   443,   444,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,   -49,   263,   287,   -24,
       0,     0,     0,     0,   222,   222,   476,   477,   -24,   -24,
     -24,   -24,   334,   335,     0,   -24,   222,   336,   337,   263,
     287,     0,     0,     0,   263,     0,   263,   263,   507,   508,
       0,     0,   252,   253,   254,   255,   256,   257,   263,     0,
     263,     0,     0,     0,     0,   258,   287,   287,   539,   540,
      43,    44,     0,     0,    45,   286,     0,     0,   287,    51,
       0,   263,   287,     0,     0,    52,   -25,   222,     0,     0,
       0,    52,     0,     0,    52,   -25,   -25,   -25,   -25,   334,
     335,     0,   -25,   442,   336,   337,     0,    50,   179,   180,
     181,   182,   183,   184,     0,    50,     0,   262,   286,     0,
       0,   185,     0,     0,   221,   475,    43,    44,     0,     0,
      45,     0,     0,     0,     0,     0,   221,     0,     0,   262,
     286,     0,     0,   -26,   262,     0,   262,   506,     0,     0,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,   262,   -26,
     262,   -26,   -26,   338,   339,     0,   286,   538,    50,     0,
     220,   211,   212,   213,   214,   215,   216,     0,   286,     0,
     126,   262,   286,     0,   217,    51,     0,   221,     0,    43,
      44,    51,    50,    45,    51,   261,    63,    50,   285,     0,
       0,     0,     0,     0,    63,     0,     0,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,    50,    50,    50,     0,     0,     0,     0,   -90,
     263,     0,     0,   285,   -90,   -90,     0,     0,   -90,   263,
       0,   -90,   -90,     0,    50,   263,     0,    63,    50,   231,
       0,     0,     0,   263,     0,     0,    52,    52,    52,     0,
       0,     0,   276,   277,   278,   279,   280,   281,     0,     0,
       0,   139,     0,     0,   140,   282,    63,   296,     0,     0,
      43,    44,    52,   -93,    45,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,     0,
       0,    63,    63,    63,     0,   -93,     0,     0,     0,     0,
     -93,   -93,   296,     0,   -93,     0,     0,   -93,   -93,     0,
     262,     0,     0,    63,     0,     0,     0,    63,     0,   262,
       0,     0,     0,     0,     0,   262,     0,     0,     0,     0,
     -51,     0,     0,   262,     0,     0,    51,    51,    51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,     0,     0,   -50,     0,   -51,     0,
     285,     0,    51,     0,    50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,   -50,     0,     0,   435,     0,     0,
       0,     0,   428,   429,   430,   431,   432,   433,     0,    48,
       0,     0,   261,   285,     0,   434,     0,    48,     0,   468,
      43,    44,     0,     0,    45,   461,   462,   463,   464,   465,
     466,   220,     0,     0,   261,   285,     0,     0,   467,   261,
       0,   499,     0,    43,    44,     0,     0,    45,     0,     0,
       0,     0,     0,   261,     0,   261,     0,     0,     0,   296,
       0,   531,     0,    63,     0,     0,     0,     0,     0,     0,
      48,     0,   218,   285,     0,     0,   261,   285,     0,     0,
      50,     0,   220,     0,     0,     0,    50,     0,     0,    50,
       0,     0,     0,     0,    48,     0,    49,   259,   453,    48,
     283,   454,   296,     0,    49,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,    62,   -95,   -95,   -95,   -95,   -95,   -95,
     486,    62,     0,   487,   296,     0,     0,     0,   490,    64,
       0,     0,     0,     0,    48,    48,    48,    64,     0,     0,
       0,     0,   517,     0,   518,   283,    65,     0,     0,     0,
       0,     0,     0,     0,    65,     0,    48,    49,     0,   219,
      48,     0,   549,     0,     0,   550,   296,     0,     0,    63,
       0,   231,     0,     0,    62,    63,   230,     0,    63,     0,
       0,    49,     0,     0,   260,     0,    49,   284,     0,     0,
      64,     0,   232,   492,   493,   494,   495,   496,   497,     0,
       0,     0,     0,    62,   295,     0,   498,    65,     0,   233,
       0,    43,    44,     0,     0,    45,     0,     0,     0,    64,
     297,    49,    49,    49,   -23,   -23,   -23,   -23,   378,   379,
       0,   -23,   284,   380,   381,   261,    65,   298,    62,    62,
      62,     0,     0,    49,   261,     0,     0,    49,     0,   295,
     261,     0,     0,     0,    64,    64,    64,     0,   261,     0,
      62,    50,    50,    50,    62,   297,     0,     0,     0,     0,
       0,    65,    65,    65,     0,     0,    64,     0,     0,     0,
      64,     0,   298,     0,     0,     0,     0,    50,     0,     0,
       0,     0,   283,    65,     0,     0,    48,    65,     0,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   601,     0,     0,     0,     0,     0,
       0,   -92,     0,   603,   259,   283,   -92,   -92,     0,   605,
     -92,     0,     0,   -92,   -92,     0,     0,   607,     0,     0,
      63,    63,    63,   218,     0,     0,   259,   283,     0,     0,
       0,   259,     0,     0,     0,     0,     0,   524,   525,   526,
     527,   528,   529,     0,     0,   259,    63,   259,     0,   284,
     530,     0,     0,    49,     0,    43,    44,     0,     0,    45,
       0,     0,     0,     0,     0,   283,   295,     0,   259,   283,
      62,     0,    48,     0,   218,     0,     0,     0,    48,     0,
       0,    48,   297,     0,     0,     0,    64,     0,     0,     0,
       0,   260,   284,     0,     0,     0,     0,    66,     0,   298,
       0,     0,     0,    65,     0,    66,     0,     0,     0,   295,
     219,     0,     0,   260,   284,     0,     0,     0,   260,     0,
       0,     0,     0,     0,     0,   297,   -23,     0,     0,     0,
       0,   295,   260,     0,   260,   -23,   -23,   -23,   -23,   356,
     357,    67,   298,     0,   358,   359,     0,   297,     0,    67,
       0,     0,   284,     0,     0,   260,   284,     0,    66,    49,
     234,   219,     0,     0,   298,    49,     0,     0,    49,     0,
       0,     0,     0,   295,     0,     0,    62,     0,   230,     0,
       0,     0,    62,     0,     0,    62,     0,    66,   299,   297,
       0,     0,    64,     0,   232,     0,     0,     0,    64,    71,
       0,    64,    67,     0,   235,     0,   298,    71,     0,    65,
       0,   233,     0,     0,     0,    65,     0,     0,    65,     0,
       0,     0,    66,    66,    66,     0,     0,   259,     0,     0,
       0,    67,   300,   299,     0,     0,   259,     0,     0,     0,
       0,     0,   259,     0,    66,     0,     0,     0,    66,     0,
     259,     0,     0,    48,    48,    48,     0,     0,     0,     0,
      71,     0,   117,     0,     0,     0,    67,    67,    67,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   300,   -26,    48,
     -26,   -26,   382,   383,   -37,     0,     0,     0,    67,    71,
     301,     0,    67,   -37,   -37,   -37,   -37,   -37,   -37,   372,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,   -37,     0,   260,     0,     0,     0,     0,     0,
       0,     0,     0,   260,    71,    71,    71,     0,     0,   260,
       0,     0,     0,     0,     0,   301,     0,   260,     0,     0,
      49,    49,    49,     0,     0,     0,    71,     0,    82,     0,
      71,     0,     0,     0,     0,     0,     0,    62,    62,    62,
       0,     0,    91,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,    64,    64,    64,     0,     0,     0,     0,
     299,     0,     0,    62,    66,     0,     0,     0,     0,     0,
      65,    65,    65,     0,     0,     0,     0,     0,     0,    64,
     113,     0,     0,   116,   118,   119,     0,   121,   122,   123,
     124,     0,     0,     0,     0,     0,    65,     0,     0,     0,
       0,     0,     0,   299,   300,     0,     0,     0,    67,   -42,
     141,   142,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   299,     0,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,   -42,     0,   -29,
       0,     0,     0,     0,     0,     0,     0,   300,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   142,   -29,   -29,   338,
     339,     0,   301,     0,     0,     0,    71,   299,   324,   300,
      66,     0,   234,     0,     0,     0,    66,     0,   -45,    66,
       0,     0,     0,     0,     0,   329,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,   301,   -45,     0,     0,     0,
       0,   300,     0,     0,    67,     0,   235,   351,     0,     0,
      67,   -44,     0,    67,     0,     0,     0,   301,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   369,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   370,     0,     0,   -44,
       0,     0,   -24,     0,     0,     0,     0,     0,   373,     0,
       0,   -24,   -24,   -24,   -24,   356,   357,     0,     0,   301,
     358,   359,    71,     0,   555,     0,   -46,     0,    71,     0,
       0,    71,   393,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -43,     0,   411,   -46,     0,     0,   414,     0,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   423,   424,   425,   426,   -43,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -30,   142,   456,   457,   458,
     459,    66,    66,    66,   -30,   -30,   -30,   -30,   -30,   -30,
     -34,   -30,   -30,   -30,   -30,   402,   403,     0,   142,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,    66,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   519,
     520,   521,   522,     0,     0,    67,    67,    67,   -24,   -24,
     -24,   -24,   378,   379,     0,   -24,     0,   380,   381,     0,
     142,     0,   552,     0,     0,   116,     0,   557,   558,     0,
       0,    67,     0,     0,     0,     0,     0,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   566,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,    71,    71,    71,     0,     0,     0,   -76,
       0,     0,     0,     0,   -76,   -76,     0,   575,   -76,     0,
       0,   -76,   -76,     0,     0,     0,     0,     0,     0,    71,
       0,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   581,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,
       0,     0,     0,   -91,     0,     0,     0,     0,   -91,   -91,
       0,     0,   -91,     0,     0,   -91,   -91,     0,     0,   -89,
     589,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,   -89,     0,     0,     0,     0,   -89,   -89,     0,     0,
     -89,     0,     0,   -89,   -89,    25,     0,     1,     2,     3,
       4,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,    36,   173,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,    43,    44,     0,     0,    45,     0,   324,    46,
     -53,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,     0,   -84,   -84,
       0,     0,   -84,     0,     0,   -84,   -84,   -83,     0,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,   -83,   -83,     0,     0,   -83,     0,
       0,   -83,   -83,   -75,     0,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,     0,     0,     0,
     -75,   -75,     0,     0,   -75,     0,     0,   -75,   -75,   -78,
       0,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,     0,   -78,   -78,     0,     0,
     -78,     0,     0,   -78,   -78,   -79,     0,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,     0,     0,     0,     0,   -79,     0,     0,
       0,     0,   -79,   -79,     0,     0,   -79,     0,     0,   -79,
     -79,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,   -80,   -80,
       0,     0,   -80,     0,     0,   -80,   -80,   -81,     0,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,   -81,   -81,     0,     0,   -81,     0,
       0,   -81,   -81,   -82,     0,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,   -82,     0,     0,     0,     0,
     -82,   -82,     0,     0,   -82,     0,     0,   -82,   -82,   -85,
       0,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,   -85,   -85,     0,     0,
     -85,     0,     0,   -85,   -85,   -94,     0,   -94,   -94,   -94,
     -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,     0,     0,     0,     0,     0,     0,   -94,     0,     0,
       0,     0,   -94,   -94,     0,     0,   -94,     0,     0,   -94,
     -94,   304,     0,     1,     2,     3,     4,   305,     0,   306,
     307,   308,    30,    31,   309,   310,   311,    35,     0,    36,
     173,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,    43,    44,
       0,     0,    45,     0,   312,    25,   -53,     1,     2,     3,
       4,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,    36,   173,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,    43,    44,     0,     0,    45,     0,   321,   -90,
     -53,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,   -90,     0,     0,     0,     0,   -90,   -90,     0,     0,
     -90,     0,     0,   -90,   -90,   -93,     0,   -93,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,     0,     0,     0,   -93,     0,     0,
       0,     0,   -93,   -93,     0,     0,   -93,     0,     0,   -93,
     -93,   -92,     0,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,
       0,     0,     0,   -92,     0,     0,     0,     0,   -92,   -92,
       0,     0,   -92,     0,     0,   -92,   -92,   -91,     0,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,     0,     0,     0,     0,     0,   -91,
       0,     0,     0,     0,   -91,   -91,     0,     0,   -91,     0,
       0,   -91,   -91,   -88,     0,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,   -88,     0,     0,     0,     0,
     -88,   -88,     0,     0,   -88,     0,     0,   -88,   -88,   -89,
       0,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,     0,
       0,   -89,     0,     0,     0,     0,   -89,   -89,     0,     0,
     -89,     0,     0,   -89,   -89,   -77,     0,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   -77,     0,     0,
       0,     0,   -77,   -77,     0,     0,   -77,     0,     0,   -77,
     -77,   -73,     0,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,   -73,   -73,
       0,     0,   -73,     0,     0,   -73,   -73,   -74,     0,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -74,
       0,     0,     0,     0,   -74,   -74,     0,     0,   -74,     0,
       0,   -74,   -74,    25,     0,     1,     2,     3,     4,    26,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,    36,   173,    37,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
      43,    44,     0,     0,    45,     0,     0,   559,   -53,    25,
       0,     1,     2,     3,     4,    26,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     0,    36,   173,    37,
      38,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,    43,    44,     0,     0,
      45,     0,     0,   561,   -53,   -72,     0,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,   -72,   -72,     0,     0,   -72,     0,     0,   -72,
     -72,   -87,     0,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,     0,     0,     0,     0,   -87,   -87,
     -32,     0,   -87,     0,     0,   -87,   -87,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,   -32,
     -32,   -32,   103,   104,   -33,     0,     0,     0,   -32,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,   -33,   -33,   -33,   -33,   103,   104,   -35,     0,
       0,     0,   -33,     0,     0,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -36,     0,     0,     0,   -35,     0,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -38,     0,     0,     0,
     -36,     0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -95,     0,     0,     0,   -38,     0,     0,     0,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -47,   -95,     0,     0,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,   -47,
       0,     0,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -49,   -48,     0,     0,     0,     0,     0,     0,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -51,   -49,     0,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -50,   -51,     0,     0,     0,     0,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -37,   -50,     0,     0,     0,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   409,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -42,   -37,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -45,   -42,     0,     0,     0,     0,     0,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -44,   -45,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   410,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -46,   -44,     0,     0,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -43,   -46,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -48,   -43,     0,     0,     0,     0,     0,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -49,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -51,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -50,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -51,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -37,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -37,
     -37,   -37,   -37,   -37,   -37,   345,   -37,   -42,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -45,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -44,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -44,   -44,   -44,   -44,   -44,   -44,   346,   -44,   -34,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -44,   406,     0,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -38,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -46,   -38,     0,     0,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -43,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -34,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -95,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   342,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -47,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -48,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -49,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -51,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -50,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -37,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -50,   -37,   -37,   -37,   -37,   -37,
     -37,   367,     0,   -42,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -45,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -44,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -44,   -44,   -44,   -44,
     -44,   -44,   368,     0,   -38,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -44,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -46,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -43,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -34,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -38,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   364,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -48,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -49,     0,     0,     0,     0,     0,     0,     0,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -51,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -50,     0,
       0,     0,     0,     0,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -37,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   591,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -95,   -31,   -31,   -31,   -31,   -31,   -31,   404,   405,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -47,   -95,
     -95,   -95,   -95,   -95,   -95,     0,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -48,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -49,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -51,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -50,   -51,   -51,   -51,
     -51,   -51,   -51,     0,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -37,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   568,   -37,
     -42,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -45,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -44,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -34,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -32,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -32,   -32,   -32,   -32,   -32,
     -32,   -33,   -32,   -32,   -32,   -32,   -32,   -32,   404,   405,
     -33,   -33,   -33,   -33,   -33,   -33,   -35,   -33,   -33,   -33,
     -33,   -33,   -33,   404,   405,   -35,   -35,   -35,   -35,   -35,
     -35,   -36,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -36,   -36,   -36,   -36,   -36,   -36,   -38,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -38,   -38,   -38,   -38,   -38,
     -38,   -46,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -43,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -31,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -34,   -31,     0,   -31,   -31,   -31,   -31,   340,   341,   -34,
     -34,   -34,   -34,   -34,   -34,   -32,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -32,   -32,   -32,   -32,   -32,   -32,
     -33,   -32,     0,   -32,   -32,   -32,   -32,   340,   341,   -33,
     -33,   -33,   -33,   -33,   -33,   -35,   -33,     0,   -33,   -33,
     -33,   -33,   340,   341,   -35,   -35,   -35,   -35,   -35,   -35,
     -36,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -36,
     -36,   -36,   -36,   -36,   -36,   -95,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -47,     0,   -95,   -95,   -95,   -95,   -95,   -95,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,     0,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -49,     0,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -51,
       0,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -50,     0,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -37,     0,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   577,   -42,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -45,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -44,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -38,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -46,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -43,     0,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -31,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -34,     0,     0,
     -31,   -31,   -31,   -31,   362,   363,   -34,   -34,   -34,   -34,
     -34,   -34,   -32,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -32,   -32,   -32,   -32,   -32,   -32,   -33,     0,     0,
     -32,   -32,   -32,   -32,   362,   363,   -33,   -33,   -33,   -33,
     -33,   -33,   -35,     0,     0,   -33,   -33,   -33,   -33,   362,
     363,   -35,   -35,   -35,   -35,   -35,   -35,   -36,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -36,   -36,   -36,   -36,
     -36,   -36,   -38,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -38,   -38,   -38,   -38,   -38,   -38,   -27,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -27,   -27,   -27,   -27,
     -27,   -27,   -28,   -27,   -27,   -27,   -27,   402,   403,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -30,   -28,   -28,
     -28,   -28,   402,   403,     0,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   -27,   -30,     0,   -30,   -30,   338,   339,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -28,   -27,     0,
     -27,   -27,   338,   339,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -27,   -28,     0,   -28,   -28,   338,   339,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -28,     0,     0,
     -27,   -27,   360,   361,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -23,     0,     0,   -28,   -28,   360,   361,     0,
       0,   -23,   -23,   -23,   -23,   398,   399,   -24,   -23,   -23,
     400,   401,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
     398,   399,   -25,   -24,   -24,   400,   401,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,   398,   399,   -25,   -25,   -25,
     400,   401,     0,     0,     0,     0,   -25,   -25,   -25,   -25,
     356,   357,     0,     0,     0,   358,   359,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,
     -95,   -95,     0,   -95,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -51,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -37,
     -37,   -37,   -37,   -37,   -37,   388,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   386,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -37,   -37,   -37,   -37,   -37,
     -37,   583,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   384,   385,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   384,   385,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
     -33,   -33,   -33,   384,   385,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,   -29,
     -29,   382,   383,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   382,   383,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   382,   383,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     382,   383,   -25,   -25,   -25,   -25,   378,   379,     0,   -25,
       0,   380,   381
};

static const yytype_int16 yycheck[] =
{
       0,     0,   145,     9,   346,    14,     6,     6,     3,     4,
       5,     6,    33,    20,    20,    21,    20,   145,    18,   312,
      18,    18,    28,   145,   145,    46,   368,   145,   321,    27,
      28,    29,    30,    18,    18,    18,    18,    34,    18,    34,
      34,    47,    27,    27,    12,    13,    33,    20,    46,    17,
      56,    19,    20,    21,    22,    23,    24,    25,    18,    46,
      18,   147,    46,    46,    46,    33,    46,    20,   410,    81,
      38,    39,    20,    18,    42,    81,    34,    83,    46,    79,
      86,   167,    27,    28,     0,   171,    46,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      18,    46,   108,    18,   110,   111,    20,    18,    18,    27,
      28,    29,    30,    31,    32,    33,    27,    28,    36,    37,
      38,    39,    40,    41,    44,    43,    20,    18,    46,    18,
      27,    46,    18,   145,   146,    46,    46,    34,   147,   145,
     146,   147,    18,   147,    18,   145,   145,    34,    18,    33,
     156,    27,    28,    29,    30,    46,   168,    46,   167,    20,
      46,   167,   171,   167,    34,   171,    33,   171,    18,    18,
      46,     1,    46,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   194,    19,
      20,    21,    22,    23,    24,    25,    46,    46,    34,    35,
      33,    18,    33,    33,    18,    18,    18,    18,    38,    39,
      27,    28,    42,    33,    18,    45,    46,    12,    13,    46,
     226,    18,    17,    33,    19,    20,    21,    22,    23,    24,
      25,    33,    46,    46,    46,    46,    18,    33,    33,    34,
      33,   247,    46,    38,    39,    27,    18,    42,    33,    46,
      34,    35,    34,    35,    44,    27,    28,    29,    30,    31,
      32,   267,    34,    35,    36,    37,    38,    39,     1,    20,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   291,    19,    20,    21,    22,
      23,    24,    25,    46,    18,    34,    35,   303,    18,    34,
      33,   307,    18,    27,    28,    38,    39,   313,    46,    42,
      34,    35,    45,    46,    34,    35,    27,    28,    34,    35,
      18,    18,    34,    34,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,    34,    35,   345,
     346,    34,    34,    18,    34,    46,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,    34,
      35,   367,   368,    46,    46,    18,   372,    18,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,    34,   388,    34,    35,    46,    18,    34,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   413,    34,   409,   410,    18,    20,   413,    18,   415,
     416,    18,    34,   419,    28,   419,   422,    33,   422,    46,
      27,    34,    35,    18,    34,    35,    18,    34,    12,    13,
      33,   437,    33,    17,    33,    19,    20,    21,    22,    23,
      24,    25,    56,    20,    21,    22,    23,    24,    25,    33,
      34,   594,    33,   596,    38,    39,    33,    33,    42,    33,
      33,    38,    39,    18,   470,    42,   594,    81,   596,    83,
      18,    18,   594,   594,   596,   596,   594,   620,   596,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   620,    18,   108,   501,   110,   111,   620,   620,
      18,    18,   620,    34,    34,    18,    33,    18,   594,    34,
     596,    33,    18,    18,    27,    28,    27,    28,    29,    30,
      31,    32,    27,    28,    18,    36,    37,   533,    34,    34,
      35,   145,   146,   147,   620,    46,    18,    33,    12,    13,
      34,    35,   156,    17,    33,    19,    20,    21,    22,    23,
      24,    25,    34,   167,    27,    28,    18,   171,    18,    33,
      46,    34,   568,    18,    38,    39,    33,    33,    42,    33,
      18,   577,    34,    35,    34,    35,    18,   583,    46,    34,
     194,    33,   594,   595,   596,   591,    34,    35,   594,   595,
     596,    18,    34,    35,   594,   594,   596,   596,    33,    18,
      27,    28,    29,    30,    31,    32,   618,    18,   620,    36,
      37,    33,   226,    34,   620,    34,    35,    12,    13,    46,
     620,   620,    17,    34,    19,    20,    21,    22,    23,    24,
      25,    34,    18,   247,    34,    34,    18,    34,    33,    18,
      34,    18,    34,    38,    39,    27,    28,    42,    27,    28,
      29,    30,    34,   267,    34,    34,    35,    34,    35,    34,
       1,    46,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   291,    19,    20,
      21,    22,    23,    24,    25,    34,    18,    18,    18,   303,
      18,    18,    33,   307,    18,    18,    18,    38,    39,    18,
      46,    42,    34,    35,    45,    46,    34,    35,    27,    28,
      29,    30,    34,    18,    18,    34,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,    46,    34,
      34,   345,   346,    46,    34,    18,    18,    34,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,    34,    34,   367,   368,    34,    34,    18,   372,    18,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,    34,   388,    34,    46,    18,    18,    34,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,    34,    34,   409,   410,    18,    20,   413,
     156,   415,     6,    79,    -1,   419,    28,    -1,   422,    12,
      13,    18,    18,    34,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,   437,    18,    18,    -1,    34,    34,    -1,
      33,    -1,    -1,    -1,    56,    38,    39,    12,    13,    42,
      34,    34,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    18,    18,    18,    -1,   470,    -1,    33,    81,
      -1,    83,    -1,    38,    39,    -1,    -1,    42,    34,    34,
      34,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,   108,   501,   110,   111,
       3,     4,     5,     6,     1,    18,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    34,    19,    20,    21,    22,    23,    24,    25,   533,
      18,    18,    -1,   145,   146,   147,    33,    18,    18,    27,
      28,    38,    39,    -1,   156,    42,    34,    34,    45,    46,
      -1,    18,    -1,    34,    34,   167,    18,    18,    18,   171,
      27,    28,    29,    30,   568,    18,    27,    28,    29,    30,
      31,    32,    34,   577,    34,    36,    37,    38,    39,   583,
      -1,    34,    -1,    -1,    18,    46,    -1,   591,    -1,    -1,
     594,   595,   596,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    18,    43,
      -1,    -1,    46,    -1,   226,    -1,   620,    27,    28,    29,
      30,    31,    32,    33,    18,    -1,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,   247,    46,    -1,    18,    -1,
      34,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    34,   267,    27,    28,    29,    30,
      46,    -1,     1,    34,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   291,
      19,    20,    21,    22,    23,    24,    25,    -1,    18,    18,
      -1,   303,    18,    18,    33,   307,    18,    18,    18,    38,
      39,    18,    -1,    42,    34,    34,    45,    46,    34,    34,
      -1,    -1,    34,    34,    34,    18,    18,    34,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,    34,    34,   345,   346,    -1,    -1,    18,    18,    -1,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,    34,    34,   367,   368,    -1,    -1,    18,
     372,    18,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,    34,   388,    34,    -1,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,    -1,    -1,   409,   410,    -1,
      20,   413,    18,   415,    -1,    -1,    -1,   419,    28,    18,
     422,    27,    28,    29,    30,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,   437,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    56,    46,    18,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,   470,    -1,
      -1,    81,    -1,    83,     0,    -1,    46,     3,     4,     5,
       6,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,   108,   501,
     110,   111,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,   533,    -1,    -1,    -1,   145,   146,   147,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,   156,    42,    -1,    -1,
      45,    46,    -1,    27,    28,    29,    30,   167,    -1,    18,
      34,   171,    -1,    -1,    -1,    -1,   568,    -1,    27,    28,
      29,    30,    31,    32,    -1,   577,    -1,    36,    37,    38,
      39,   583,    -1,    -1,    -1,    -1,    18,    46,    -1,   591,
      -1,    -1,   594,   595,   596,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      18,    43,    -1,    -1,    46,    -1,   226,    -1,   620,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    18,    43,     0,   247,    46,     3,
       4,     5,     6,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    -1,   267,    -1,    -1,
      -1,    -1,    46,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   291,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    33,   307,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,     0,    45,    46,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    -1,    -1,     0,   345,   346,     3,     4,     5,
       6,    -1,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    -1,    -1,   367,   368,    -1,
      -1,    -1,   372,    -1,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,     0,   388,    -1,
       3,     4,     5,     6,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,    -1,    -1,   409,
     410,    -1,    20,   413,    -1,   415,    -1,    -1,    -1,   419,
      28,    18,   422,     0,    -1,    -1,     3,     4,     5,     6,
      27,    28,    29,    30,    31,    32,    33,   437,    -1,    36,
      37,    38,    39,    40,    41,    18,    43,     0,    56,    46,
       3,     4,     5,     6,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
     470,    -1,    -1,    81,     0,    83,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
     108,   501,   110,   111,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,   533,    -1,    -1,    -1,   145,   146,   147,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,   156,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    18,    -1,   171,    -1,    -1,    -1,    -1,   568,    -1,
      27,    28,    29,    30,    31,    32,    -1,   577,    -1,    36,
      37,    38,    39,   583,    -1,    -1,    -1,    -1,    18,    46,
      -1,   591,    -1,    -1,   594,   595,   596,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    46,    -1,   226,    -1,
     620,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    -1,   247,
      46,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,   267,
      36,    37,    38,    39,    40,    41,     1,    43,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   291,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,   303,    -1,    -1,    33,   307,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    -1,    -1,    -1,   345,   346,    -1,
      -1,    -1,    -1,    -1,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,    -1,    -1,   367,
     368,    -1,    -1,    -1,   372,    -1,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,    -1,
     388,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,    -1,
      -1,   409,   410,    -1,    20,   413,    -1,   415,    -1,    -1,
      -1,   419,    28,    18,   422,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,   437,
      -1,    36,    37,    38,    39,    40,    41,    18,    43,    -1,
      56,    46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,   470,    -1,    -1,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,   108,   501,   110,   111,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,   533,    -1,    -1,    -1,   145,
     146,   147,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
     156,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
     568,    -1,    18,    20,    21,    22,    23,    24,    25,   577,
      -1,    27,    28,    29,    30,   583,    33,    -1,    34,    35,
      18,    38,    39,   591,    -1,    42,   594,   595,   596,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    18,    43,    -1,    -1,    46,    -1,
     226,    -1,   620,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,   247,    46,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,   267,    36,    37,    38,    39,    40,    41,     1,    43,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   291,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      33,   307,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,    -1,    -1,    -1,   345,
     346,    -1,    -1,    -1,    -1,    -1,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,    -1,
      -1,   367,   368,    -1,    -1,    -1,   372,    -1,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,    -1,   388,    -1,    -1,    -1,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,    -1,    -1,   409,   410,    -1,    20,   413,    18,   415,
      -1,    -1,    -1,   419,    28,    -1,   422,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,   437,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    33,    -1,    81,    -1,    83,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    18,
      -1,   105,    -1,    -1,   108,   501,   110,   111,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    18,   533,    28,    -1,
      -1,   145,   146,   147,    -1,    27,    28,    29,    30,    31,
      32,    -1,   156,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,   167,    46,    18,    -1,   171,    -1,    -1,
      -1,    -1,   568,    -1,    27,    28,    29,    30,    31,    32,
      -1,   577,    -1,    36,    37,    38,    39,   583,    -1,    -1,
      -1,    81,    -1,    83,    -1,   591,    -1,    -1,   594,   595,
     596,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
     110,   111,    -1,    -1,   620,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,   145,   146,   147,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,   156,    42,    -1,    -1,
      45,    46,    -1,    18,    -1,    -1,    -1,   167,    -1,    -1,
      -1,   171,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    18,    43,   303,
      -1,    46,    -1,   307,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   338,   339,    -1,    -1,    -1,    -1,
      -1,   345,   346,    -1,    -1,    -1,    -1,    -1,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,    -1,    -1,
     364,    -1,    -1,   367,   368,    -1,    -1,    -1,   372,    -1,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,   386,    -1,   388,    -1,    -1,    -1,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
      -1,    -1,   406,    -1,    -1,   409,   410,    -1,    -1,   413,
      18,   415,    -1,   303,    -1,   419,    -1,   307,   422,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    18,
      -1,    -1,    -1,    -1,   334,   335,   336,   337,    27,    28,
      29,    30,    31,    32,    -1,   345,   346,    36,    37,    38,
      39,    -1,   352,   353,   354,   355,   356,   357,   358,   359,
      -1,    -1,    20,    -1,   364,    -1,    -1,   367,   368,    -1,
      28,    -1,   372,    -1,   374,   375,   376,   377,   378,   379,
     380,   381,    -1,    -1,    -1,    -1,   386,    -1,   388,    -1,
      -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,   401,    -1,    -1,    -1,    -1,   406,    -1,    -1,   409,
     410,    -1,    -1,   413,    -1,   415,    -1,    -1,    -1,   419,
      -1,    -1,   422,    81,    -1,    83,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    93,    94,    95,    96,    33,
      -1,    -1,    -1,    -1,    38,    39,    18,   105,    42,    -1,
     108,    -1,   110,   111,   568,    27,    28,    29,    30,    31,
      32,    -1,    20,   577,    36,    37,    38,    39,    -1,   583,
      28,    -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,    -1,
     594,   595,   596,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    20,    21,    22,    23,    24,    25,   156,    20,
      21,    22,    23,    24,    25,    33,   620,    -1,    -1,   167,
      38,    39,    33,   171,    42,    -1,    -1,    38,    39,    -1,
      18,    42,    -1,    81,    -1,    83,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    93,    94,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,   105,    46,    -1,
     108,    18,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    -1,   568,    36,
      37,    38,    39,    40,    41,    -1,    -1,   577,    -1,    46,
      -1,    -1,    -1,   583,    -1,    -1,    -1,   145,   146,   147,
      -1,   591,    18,    -1,   594,   595,   596,    -1,   156,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,   167,
      36,    37,    -1,   171,    -1,    -1,    -1,    -1,    -1,     1,
     620,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,   303,    -1,    -1,    -1,   307,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    18,    -1,
      42,    -1,    -1,    45,    46,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,   332,   333,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,   345,   346,    18,
      -1,    -1,    -1,    -1,   352,   353,   354,   355,    27,    28,
      29,    30,    31,    32,    -1,    34,   364,    36,    37,   367,
     368,    -1,    -1,    -1,   372,    -1,   374,   375,   376,   377,
      -1,    -1,    20,    21,    22,    23,    24,    25,   386,    -1,
     388,    -1,    -1,    -1,    -1,    33,   394,   395,   396,   397,
      38,    39,    -1,    -1,    42,   303,    -1,    -1,   406,   307,
      -1,   409,   410,    -1,    -1,   413,    18,   415,    -1,    -1,
      -1,   419,    -1,    -1,   422,    27,    28,    29,    30,    31,
      32,    -1,    34,   331,    36,    37,    -1,    20,    20,    21,
      22,    23,    24,    25,    -1,    28,    -1,   345,   346,    -1,
      -1,    33,    -1,    -1,   352,   353,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,   364,    -1,    -1,   367,
     368,    -1,    -1,    18,   372,    -1,   374,   375,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,   386,    34,
     388,    36,    37,    38,    39,    -1,   394,   395,    81,    -1,
      83,    20,    21,    22,    23,    24,    25,    -1,   406,    -1,
      93,   409,   410,    -1,    33,   413,    -1,   415,    -1,    38,
      39,   419,   105,    42,   422,   108,    20,   110,   111,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,   145,   146,   147,    -1,    -1,    -1,    -1,    33,
     568,    -1,    -1,   156,    38,    39,    -1,    -1,    42,   577,
      -1,    45,    46,    -1,   167,   583,    -1,    81,   171,    83,
      -1,    -1,    -1,   591,    -1,    -1,   594,   595,   596,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,   105,    -1,    -1,   108,    33,   110,   111,    -1,    -1,
      38,    39,   620,     1,    42,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,   145,   146,   147,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,   156,    -1,    42,    -1,    -1,    45,    46,    -1,
     568,    -1,    -1,   167,    -1,    -1,    -1,   171,    -1,   577,
      -1,    -1,    -1,    -1,    -1,   583,    -1,    -1,    -1,    -1,
      18,    -1,    -1,   591,    -1,    -1,   594,   595,   596,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    18,    -1,    46,    -1,
     303,    -1,   620,    -1,   307,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,   330,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    20,
      -1,    -1,   345,   346,    -1,    33,    -1,    28,    -1,   352,
      38,    39,    -1,    -1,    42,    20,    21,    22,    23,    24,
      25,   364,    -1,    -1,   367,   368,    -1,    -1,    33,   372,
      -1,   374,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,   386,    -1,   388,    -1,    -1,    -1,   303,
      -1,   394,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,   406,    -1,    -1,   409,   410,    -1,    -1,
     413,    -1,   415,    -1,    -1,    -1,   419,    -1,    -1,   422,
      -1,    -1,    -1,    -1,   105,    -1,    20,   108,   342,   110,
     111,   345,   346,    -1,    28,    27,    28,    29,    30,    31,
      32,    33,    34,    20,    36,    37,    38,    39,    40,    41,
     364,    28,    -1,   367,   368,    -1,    -1,    -1,   372,    20,
      -1,    -1,    -1,    -1,   145,   146,   147,    28,    -1,    -1,
      -1,    -1,   386,    -1,   388,   156,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,   167,    81,    -1,    83,
     171,    -1,   406,    -1,    -1,   409,   410,    -1,    -1,   413,
      -1,   415,    -1,    -1,    81,   419,    83,    -1,   422,    -1,
      -1,   105,    -1,    -1,   108,    -1,   110,   111,    -1,    -1,
      81,    -1,    83,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,   110,   111,    -1,    33,    81,    -1,    83,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,   110,
     111,   145,   146,   147,    27,    28,    29,    30,    31,    32,
      -1,    34,   156,    36,    37,   568,   110,   111,   145,   146,
     147,    -1,    -1,   167,   577,    -1,    -1,   171,    -1,   156,
     583,    -1,    -1,    -1,   145,   146,   147,    -1,   591,    -1,
     167,   594,   595,   596,   171,   156,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,   167,    -1,    -1,    -1,
     171,    -1,   156,    -1,    -1,    -1,    -1,   620,    -1,    -1,
      -1,    -1,   303,   167,    -1,    -1,   307,   171,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,   568,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,   577,   345,   346,    38,    39,    -1,   583,
      42,    -1,    -1,    45,    46,    -1,    -1,   591,    -1,    -1,
     594,   595,   596,   364,    -1,    -1,   367,   368,    -1,    -1,
      -1,   372,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,   386,   620,   388,    -1,   303,
      33,    -1,    -1,   307,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,   406,   303,    -1,   409,   410,
     307,    -1,   413,    -1,   415,    -1,    -1,    -1,   419,    -1,
      -1,   422,   303,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,   345,   346,    -1,    -1,    -1,    -1,    20,    -1,   303,
      -1,    -1,    -1,   307,    -1,    28,    -1,    -1,    -1,   346,
     364,    -1,    -1,   367,   368,    -1,    -1,    -1,   372,    -1,
      -1,    -1,    -1,    -1,    -1,   346,    18,    -1,    -1,    -1,
      -1,   368,   386,    -1,   388,    27,    28,    29,    30,    31,
      32,    20,   346,    -1,    36,    37,    -1,   368,    -1,    28,
      -1,    -1,   406,    -1,    -1,   409,   410,    -1,    81,   413,
      83,   415,    -1,    -1,   368,   419,    -1,    -1,   422,    -1,
      -1,    -1,    -1,   410,    -1,    -1,   413,    -1,   415,    -1,
      -1,    -1,   419,    -1,    -1,   422,    -1,   110,   111,   410,
      -1,    -1,   413,    -1,   415,    -1,    -1,    -1,   419,    20,
      -1,   422,    81,    -1,    83,    -1,   410,    28,    -1,   413,
      -1,   415,    -1,    -1,    -1,   419,    -1,    -1,   422,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,   568,    -1,    -1,
      -1,   110,   111,   156,    -1,    -1,   577,    -1,    -1,    -1,
      -1,    -1,   583,    -1,   167,    -1,    -1,    -1,   171,    -1,
     591,    -1,    -1,   594,   595,   596,    -1,    -1,    -1,    -1,
      81,    -1,    83,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    27,    28,    29,    30,    31,    32,   156,    34,   620,
      36,    37,    38,    39,    18,    -1,    -1,    -1,   167,   110,
     111,    -1,   171,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    -1,   568,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   577,   145,   146,   147,    -1,    -1,   583,
      -1,    -1,    -1,    -1,    -1,   156,    -1,   591,    -1,    -1,
     594,   595,   596,    -1,    -1,    -1,   167,    -1,    28,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,   594,   595,   596,
      -1,    -1,    42,    -1,    -1,    -1,   620,    -1,    -1,    -1,
      -1,    -1,    -1,   594,   595,   596,    -1,    -1,    -1,    -1,
     303,    -1,    -1,   620,   307,    -1,    -1,    -1,    -1,    -1,
     594,   595,   596,    -1,    -1,    -1,    -1,    -1,    -1,   620,
      80,    -1,    -1,    83,    84,    85,    -1,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,   620,    -1,    -1,    -1,
      -1,    -1,    -1,   346,   303,    -1,    -1,    -1,   307,    18,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,   368,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    27,    28,
      29,    30,    31,    32,    -1,    34,   156,    36,    37,    38,
      39,    -1,   303,    -1,    -1,    -1,   307,   410,   168,   368,
     413,    -1,   415,    -1,    -1,    -1,   419,    -1,    18,   422,
      -1,    -1,    -1,    -1,    -1,   185,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,   346,    46,    -1,    -1,    -1,
      -1,   410,    -1,    -1,   413,    -1,   415,   217,    -1,    -1,
     419,    18,    -1,   422,    -1,    -1,    -1,   368,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    -1,   238,    36,
      37,    38,    39,    40,    41,    -1,   246,    -1,    -1,    46,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,   258,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,   410,
      36,    37,   413,    -1,   415,    -1,    18,    -1,   419,    -1,
      -1,   422,   282,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    18,    -1,   303,    46,    -1,    -1,   307,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,   325,   326,   327,   328,    46,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    18,   346,   347,   348,   349,
     350,   594,   595,   596,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    -1,   368,    27,
      28,    29,    30,    31,    32,    -1,    -1,   620,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,   389,
     390,   391,   392,    -1,    -1,   594,   595,   596,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    -1,
     410,    -1,   412,    -1,    -1,   415,    -1,   417,   418,    -1,
      -1,   620,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,   434,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,   594,   595,   596,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,   467,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,   620,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   498,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,    -1,    -1,     1,
     530,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,   618,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,     1,    46,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,     1,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      18,    -1,    42,    -1,    -1,    45,    46,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    18,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    18,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    18,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    18,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    18,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    18,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    18,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    34,
      18,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    18,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    34,    18,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      34,    18,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    33,    34,    18,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    18,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      18,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    18,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    -1,    34,    18,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      -1,    18,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    33,    -1,    18,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    33,    -1,    18,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    -1,    18,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    33,    -1,    18,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    -1,    18,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    -1,    18,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    -1,
      18,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    -1,    18,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    -1,    18,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    -1,
      34,    18,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    33,    -1,    18,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    33,    -1,    18,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    -1,    18,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    -1,    -1,    18,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    -1,    -1,    18,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    18,    36,
      37,    38,    39,    40,    41,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    18,    36,    37,    38,    39,
      40,    41,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    18,    36,    37,    38,    39,    40,    41,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    18,
      36,    37,    38,    39,    40,    41,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    18,    36,    37,    38,
      39,    40,    41,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    36,    37,    38,    39,    40,    41,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      18,    36,    37,    38,    39,    40,    41,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    18,    36,    37,
      38,    39,    40,    41,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    18,    36,    37,    38,    39,    40,
      41,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    18,    36,    37,    38,    39,    40,    41,    -1,    -1,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    18,    36,
      37,    38,    39,    40,    41,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    18,    36,    37,    38,    39,
      40,    41,    -1,    -1,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      33,    18,    -1,    36,    37,    38,    39,    40,    41,    -1,
      27,    28,    29,    30,    31,    32,    33,    18,    -1,    36,
      37,    38,    39,    40,    41,    -1,    27,    28,    29,    30,
      31,    32,    33,    18,    -1,    36,    37,    38,    39,    40,
      41,    -1,    27,    28,    29,    30,    31,    32,    33,    18,
      -1,    36,    37,    38,    39,    40,    41,    -1,    27,    28,
      29,    30,    31,    32,    33,    18,    -1,    36,    37,    38,
      39,    40,    41,    -1,    27,    28,    29,    30,    31,    32,
      33,    18,    -1,    36,    37,    38,    39,    40,    41,    -1,
      27,    28,    29,    30,    31,    32,    33,    18,    -1,    36,
      37,    38,    39,    40,    41,    -1,    27,    28,    29,    30,
      31,    32,    33,    18,    -1,    36,    37,    38,    39,    40,
      41,    -1,    27,    28,    29,    30,    31,    32,    33,    18,
      -1,    36,    37,    38,    39,    40,    41,    -1,    27,    28,
      29,    30,    31,    32,    33,    18,    -1,    36,    37,    38,
      39,    40,    41,    -1,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    33,    18,    -1,    36,    37,
      38,    39,    40,    41,    -1,    27,    28,    29,    30,    31,
      32,    33,    18,    -1,    36,    37,    38,    39,    40,    41,
      -1,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    38,    39,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    -1,    -1,    27,    28,    29,    30,
      31,    32,    18,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    27,    28,    29,    30,
      31,    32,    18,    34,    -1,    36,    37,    38,    39,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    -1,    -1,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    36,    37,    38,    39,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      82,     0,    50,    20,    53,    90,    44,    79,    33,    46,
      81,    52,    54,    55,    56,     1,     7,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    19,    21,    22,    23,
      24,    25,    33,    38,    39,    42,    45,    52,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    74,    75,    76,    77,    78,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    90,    34,    35,
      33,    33,    70,    33,    33,    33,    33,    33,    33,    33,
      33,    70,    90,    27,    28,    29,    30,    31,    32,    36,
      37,    38,    39,    40,    41,    43,    64,    90,    33,    46,
      18,    33,    55,    70,    69,    46,    70,    85,    70,    70,
      90,    70,    70,    70,    70,    34,    59,    64,    60,    61,
      61,    62,    62,    62,    62,    63,    63,    64,    64,    74,
      74,    70,    70,    72,    73,    34,    46,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    35,    34,    79,    80,
      83,    69,    80,    46,    46,    46,    73,     8,    46,    80,
      69,    34,    80,    20,    20,    12,    13,    17,    19,    20,
      21,    22,    23,    24,    25,    33,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    71,    74,
      75,    76,    77,    78,    85,    90,    20,    12,    13,    17,
      19,    20,    21,    22,    23,    24,    25,    33,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      71,    74,    75,    76,    77,    78,    90,    20,    18,    46,
      20,    21,    22,    23,    24,    25,    33,    65,    66,    67,
      68,    90,    20,    21,    22,    23,    24,    25,    33,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    90,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    71,    74,    75,    76,    77,
      78,    85,    90,    18,     1,     7,     9,    10,    11,    14,
      15,    16,    44,    52,    69,    82,    84,    86,    87,    88,
      89,    44,    79,    83,    70,    33,    33,    33,    33,    70,
      27,    28,    29,    30,    31,    32,    36,    37,    38,    39,
      40,    41,    43,    64,    90,    33,    33,    33,    33,    33,
      33,    70,    27,    28,    29,    30,    31,    32,    36,    37,
      38,    39,    40,    41,    43,    64,    90,    33,    33,    70,
      70,    64,    33,    70,    27,    28,    29,    30,    31,    32,
      36,    37,    38,    39,    40,    41,    43,    64,    33,    33,
      33,    33,    33,    70,    27,    28,    29,    30,    31,    32,
      36,    37,    38,    39,    40,    41,    43,    64,    90,    33,
      33,    70,    33,    33,    70,    33,    33,    33,    33,    81,
      90,    46,    81,    70,    70,    70,    70,    34,    20,    21,
      22,    23,    24,    25,    33,    59,    64,    65,    66,    67,
      68,    90,    60,    61,    61,    62,    62,    62,    62,    63,
      63,    64,    64,    74,    74,    72,    70,    70,    70,    70,
      34,    20,    21,    22,    23,    24,    25,    33,    59,    64,
      65,    66,    67,    68,    90,    60,    61,    61,    62,    62,
      62,    62,    63,    63,    64,    64,    74,    74,    72,    34,
      74,    34,    20,    21,    22,    23,    24,    25,    33,    59,
      64,    65,    66,    67,    68,    90,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    64,    64,    74,    74,    70,
      70,    70,    70,    34,    20,    21,    22,    23,    24,    25,
      33,    59,    64,    65,    66,    67,    68,    90,    60,    61,
      61,    62,    62,    62,    62,    63,    63,    64,    64,    74,
      74,    72,    70,    69,    46,    85,    90,    70,    70,    45,
      46,    45,    34,    34,    34,    34,    70,    64,    33,    34,
      34,    34,    34,    34,    34,    70,    64,    33,    34,    34,
      34,    70,    64,    33,    34,    34,    34,    34,    34,    70,
      64,    33,    34,    34,    34,    46,    34,    34,    34,    34,
      34,    74,    34,    74,    34,    74,    34,    74,    80,    69,
      80,    46,    46,    46,    34,    34,    34,    34,    46,    69,
      34,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    54,    54,    55,    55,    56,    57,    58,
      58,    59,    59,    60,    60,    60,    61,    61,    61,    61,
      61,    62,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    65,    66,    66,    67,    67,    67,    68,    68,    68,
      68,    68,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    75,    76,
      77,    78,    79,    80,    80,    81,    81,    82,    83,    83,
      83,    83,    83,    83,    83,    84,    85,    86,    86,    87,
      87,    88,    88,    88,    89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     0,     3,     1,     2,     1,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     4,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     0,     3,     1,     1,     3,     4,     4,
       4,     4,     3,     1,     1,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     5,     7,     9,
       5,     5,     5,     5,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
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
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 40 "src/syntax/parser.y" /* yacc.c:1652  */
    { ast = (yyvsp[0].ast_node); }
#line 3204 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 44 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                          }
#line 3212 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 47 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3218 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 50 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3224 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 51 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3230 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 54 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, NULL, (yyvsp[-2].ast_node), (yyvsp[-1].ast_node), NULL);
                    }
#line 3238 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 59 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3244 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 60 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3250 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 61 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3256 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 62 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3262 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 12:
#line 65 "src/syntax/parser.y" /* yacc.c:1652  */
    {
              (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL);
            }
#line 3270 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 70 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3276 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 71 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = NULL; }
#line 3282 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 74 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                }
#line 3290 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 77 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3296 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 80 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                        (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                      }
#line 3304 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 85 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3310 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 88 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3316 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 89 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3324 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 94 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3330 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 95 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                        (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                      }
#line 3338 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 100 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3344 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 101 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3352 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 104 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3360 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 109 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3366 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 110 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3374 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 113 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3382 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 116 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3390 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 119 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3398 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 124 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3404 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 125 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3412 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 128 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3420 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 133 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3426 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 134 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                          (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                        }
#line 3434 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 137 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                          (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                        }
#line 3442 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 142 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3448 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 143 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                  (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                }
#line 3456 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 148 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3462 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 40:
#line 149 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3468 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 41:
#line 150 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3474 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 42:
#line 153 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3480 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 43:
#line 154 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3486 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 44:
#line 157 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3492 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 45:
#line 158 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3498 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 46:
#line 159 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3504 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 47:
#line 162 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3510 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 48:
#line 163 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3516 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 49:
#line 164 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3522 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 50:
#line 165 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3528 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 166 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3534 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 169 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3540 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 170 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3546 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 173 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3552 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 174 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3558 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 175 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3564 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 176 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3570 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 177 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3576 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 178 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3582 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 179 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3588 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 182 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3594 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 185 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3600 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 186 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3606 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 189 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3612 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 190 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3618 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 193 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3624 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 194 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3630 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 197 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3636 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 200 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3642 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 203 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3648 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 206 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3654 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 209 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3660 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 212 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3666 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 213 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3672 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 216 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3678 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 217 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3684 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 220 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3690 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 223 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3696 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 224 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3702 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 225 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3708 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 226 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3714 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 227 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3720 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 228 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3726 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 229 "src/syntax/parser.y" /* yacc.c:1652  */
    {
          yyerrok;
        }
#line 3734 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 234 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3740 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 237 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3746 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 240 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3752 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 241 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3758 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 244 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3764 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 245 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3770 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 248 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3776 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 249 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3782 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 250 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3788 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 253 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3794 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 256 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(IDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3800 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;


#line 3804 "./src/syntax/parser.c" /* yacc.c:1652  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 259 "src/syntax/parser.y" /* yacc.c:1918  */


void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}
