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
#line 15 "src/syntax/parser.y" /* yacc.c:352  */

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
#define YYLAST   8368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

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
       0,    41,    41,    45,    48,    51,    52,    55,    60,    61,
      62,    63,    66,    71,    72,    75,    78,    81,    86,    89,
      90,    95,    96,   101,   102,   105,   110,   111,   114,   117,
     120,   125,   126,   129,   134,   135,   138,   143,   144,   149,
     150,   151,   154,   155,   158,   159,   160,   163,   164,   165,
     166,   167,   170,   171,   174,   175,   176,   177,   178,   179,
     180,   183,   186,   187,   190,   191,   194,   195,   198,   201,
     204,   207,   210,   213,   214,   217,   218,   221,   224,   225,
     226,   227,   228,   229,   235,   238,   241,   242,   245,   246,
     249,   250,   251,   254,   257
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

#define YYPACT_NINF -336

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-336)))

#define YYTABLE_NINF -95

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     687,   -16,     2,     3,    17,    43,  1235,  1328,  1421,    25,
    1481,  -336,  1534,   -22,   -32,   231,   211,  1577,    30,  1611,
     662,    28,    50,    83,    32,    86,   135,   810,   137,   159,
     196,   206,   208,   210,   212,   234,   684,  1078,  1472,  1592,
    1616,   843,   395,  2529,  2681,  1667,   101,    24,    29,    11,
      53,   149,    23,  4019,  2458,  2923,  1674,  1707,  1866,    77,
      26,    59,    67,    84,    89,    90,    96,  1056,  1450,  1844,
     104,  2238,  4473,  4951,  4995,  1986,   175,    19,   687,   843,
     249,   106,  1204,   843,   843,   183,   843,   843,   843,   843,
      12,   165,  3254,  3254,  3254,  3254,  3254,  3254,  3254,  3254,
    3254,  3254,  3254,  3254,  2923,  2496,  2010,  3298,  5039,   810,
     519,    95,   109,   229,  5083,   265,   171,   247,   260,   252,
     345,   347,   366,   492,  2068,    88,  5701,    82,  1733,  2127,
     491,   571,   944,  1338,  5725,  5749,  5773,  5797,   107,   256,
     108,   138,   266,   287,   908,   249,  1302,   113,   123,   293,
     315,   316,   128,   144,  2101,  1237,   145,   996,  1390,  1784,
     337,  5127,  5171,  5215,  5259,   351,  1302,   603,  5303,   372,
    1302,  5347,  2260,   269,   376,   388,   397,   402,  4133,  6157,
    6174,  6191,  6208,  6225,   843,   517,   587,   451,   414,  3534,
    7610,  3136,  6409,  3466,  6242,  6259,  6276,   537,   615,   617,
     671,   685,   692,   755,  6293,   390,   412,   420,   427,   438,
    6426,  6443,  6460,  6477,  6494,  6511,   843,   429,   219,   385,
     959,   170,  3021,  7505,  6664,  3496,  6528,  6545,  6562,   457,
     459,   463,   464,   465,   474,  6579,   461,   843,  5391,  2653,
    2889,  3064,  3106,  3173,  3368,   843,  3254,  3579,  3712,  3895,
    4108,  7743,  7760,  7777,  7794,  7811,  7828,   843,   478,   131,
     308,  1003,  3158,  8266,  8161,  7947,  3298,  7845,  7862,  7879,
    7896,   482,   483,   512,   513,  5845,  5869,  5893,  5917,  5941,
    5965,   843,   178,    -8,   220,   625,  2377,  1018,  6914,  6310,
    3694,  5989,  6013,  6037,   245,   258,   267,   323,   392,   405,
     439,  6061,  1237,   514,   523,   810,   543,   563,   578,   580,
     211,   101,   531,  2178,  2413,  2609,  2798,  2991,  4233,   211,
    5435,  5479,   775,   843,   843,   843,   843,   776,  3872,  3872,
    3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,  3872,
    3466,  6596,  6334,  3298,   519,   843,   843,   843,   843,   802,
    3923,  3923,  3923,  3923,  3923,  3923,  3923,  3923,  3923,  3923,
    3923,  3923,  3496,  6681,  6613,  3298,   519,   808,   820,  5821,
    3298,   823,  3978,  3978,  3978,  3978,  3978,  3978,  3978,  3978,
    3978,  3978,  3978,  3978,  3298,  7964,  3298,   843,   843,   843,
     843,   827,  4058,  4058,  4058,  4058,  4058,  4058,  4058,  4058,
    4058,  4058,  4058,  4058,  3694,  6351,  6085,  3298,   519,   454,
     843,   249,   148,  1204,   183,   843,   843,  5523,   588,  4529,
    5567,   840,   841,   852,   853,  6375,  6929,  6946,  6963,  6980,
    6997,  7014,   843,   630,  7223,  3872,  7031,  7048,  7065,  7082,
    1325,  3564,  3814,  7625,  7640,  7655,  7670,  7238,  7253,  7268,
    7283,   855,   490,   556,   870,   892,   921,   922,  6630,  7298,
    7314,  7330,  7346,  7362,  7378,   843,   670,  7520,  3923,  7394,
    7410,  7426,  7442,  1253,   536,  4159,  7685,  7700,  7715,  7730,
    7535,  7550,  7565,  7580,   620,   605,   606,  4305,   610,  7913,
    7981,  7996,  8011,  8026,  8041,  8056,   843,   557,  8176,  3978,
    8071,  8086,  8101,  8116,  1057,  4437,  8331,  8279,  8292,  8305,
    8318,  8191,  8206,  8221,  8236,   613,   627,   933,   960,  1006,
    1009,  6109,   279,  4256,  4416,  6698,  6722,  6746,   843,   224,
    7099,  4058,  6770,  6794,  6818,  6842,   931,  4357,  4605,  1412,
    1806,  2200,  4377,  7114,  7129,  7144,  7159,   499,   646,   665,
    1040,   650,  4579,  1065,   695,  1079,  1086,  4641,  4687,  5611,
    1104,  1105,  1127,  1128,  1149,  7458,  3298,  6392,  1151,   700,
     713,   728,   731,  1169,  7595,  3298,  6647,   732,  5677,  1170,
    8251,  3298,  7930,   544,   628,   710,   733,  1196,  7174,  3298,
    6133,   757,   908,   249,   908,   706,   707,   725,  7189,   738,
    7473,   761,  8131,   779,  6866,   780,  5655,   770,  4731,  4775,
    4819,  4863,  7206,  7489,  8146,  6890,   603,   785,   908,  4907
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -336,  -336,  -336,   432,  -336,     0,  -336,  -336,   750,  -336,
    3403,  3495,  3089,  2962,  2877,  2495,  2374,   404,   798,  1192,
    1586,  1980,   -12,  4115,    38,  -335,   682,  3283,  3615,  3708,
    3809,  3963,    -9,  -138,   -21,     1,     5,  -142,  4013,  -131,
    -128,  -127,  -124,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    46,    14,    22,    23,    24,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,    59,    60,   197,   142,   143,   198,   199,   200,
     201,   202,   157,   158,    20,    67,   159,    69,   203,    71,
      72,    73,    74,   204
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   314,    15,    -8,    17,     9,    10,   161,   453,
     -18,   -94,    16,   315,    75,    76,   316,   317,    21,   392,
     318,    75,    -9,   -10,   -94,    68,   -18,   -18,   168,   -19,
     237,   486,   171,     1,     2,     3,     4,   -11,   -19,    93,
      91,   -26,   -66,    11,   109,    13,   124,   -18,   173,   106,
     -26,   -26,   -26,   -26,   -26,   -26,    92,   -19,    61,   -26,
     -26,   100,   101,   -12,   -14,    61,   -16,    78,   113,   -26,
     -66,   -21,   -52,   549,    75,   -18,   235,   -60,    21,   119,
     -21,   -21,    94,    95,    77,   -54,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   106,   -21,
     -22,   270,   -55,    75,   301,   -60,   -20,   -56,   -57,   -22,
     -22,    94,    95,   -54,   -58,   -20,    93,   -13,    61,    79,
     229,   205,   -59,   108,   109,   -67,   109,   237,   -22,   -15,
     -55,   -70,   312,   160,   -20,   -56,   -57,   320,    75,    75,
      75,   -71,   -58,   144,   311,   313,   -68,    61,   294,   301,
     -59,   321,   114,   -67,   -85,   169,   302,   320,   372,   -70,
      75,   320,   -69,   -61,    75,   -18,   109,   -23,    80,   -71,
      82,   321,   -65,   155,   -68,   321,   -23,   -23,   -23,   -23,
      96,    97,    61,    61,    61,    98,    99,   342,   -23,   -59,
     -69,   -61,    83,   294,   552,   -23,   -66,   -23,   -23,   -23,
     -23,   354,   355,   236,    61,   146,   356,   357,    61,   -17,
     -17,   238,   -66,   -66,   -76,   -76,   -76,   -76,   -76,   364,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    84,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -18,   -19,    85,
     250,    86,   -20,    87,   -76,    88,   350,   -19,   393,   -76,
     -76,   -20,   393,   -76,   -19,   -19,   -76,   -76,   -20,   -20,
     270,    29,    30,   -60,    18,   237,    34,    89,    35,   172,
      36,    37,    38,    39,    40,   145,   -54,    19,   237,   -60,
     -60,   147,    41,   237,   406,   -55,   149,    42,    43,   417,
     154,    44,   -54,   -54,   148,   -53,   301,   -94,   420,    75,
     156,   -55,   -55,   -94,   -94,   418,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -62,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   342,   -19,   373,   270,   301,   162,
     294,   -56,   -19,    61,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   364,   -56,   -56,   270,
     301,   163,   164,   237,   270,   237,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   270,   150,
     270,   151,   294,   167,   237,   -64,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   406,   551,
     152,   270,   301,   -19,   294,    75,   170,   235,   554,   323,
     -57,    75,   -19,   351,    75,   -39,   -39,   -39,   -39,   -39,
     -39,   324,    68,   -58,    54,    68,   -57,   -57,   -39,   439,
     325,    54,   -21,   -39,   -39,   326,   -94,   -39,    12,   -58,
     -58,   -21,   -21,   330,   331,   345,   294,   -66,   -21,    61,
     314,   229,   314,   346,   606,    61,   608,   -59,    61,   105,
     347,   315,   472,   315,   316,   317,   316,   317,   318,   -19,
     318,   348,   302,   -59,   -59,   -60,   314,   -54,   -19,   329,
     619,   -55,   -56,   -57,    54,   -19,   224,   315,   -85,   -85,
     316,   317,   -58,   503,   318,   -94,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   136,   137,    54,   -29,
     237,   265,   -66,    54,   289,   387,   388,   -67,   -29,   -29,
     -29,   -29,   -29,   -29,   567,   535,   153,   -29,   -29,   100,
     101,   271,   272,   -67,   -67,   -66,   273,   -29,   274,   275,
     276,   277,   278,   279,   280,   389,   390,   410,    54,    54,
      54,   -66,   281,   -63,   -24,   -60,   411,    42,    43,   289,
     270,    44,   -70,   -24,   -24,   -24,   -24,   354,   355,   270,
      54,   -60,   356,   357,    54,   270,   413,   419,   -70,   -70,
     312,   607,   312,   270,   -20,   373,    75,    75,    75,   -30,
     568,   -20,   311,   313,   311,   313,   414,   341,   -30,   -30,
     -30,   -30,   -30,   -30,   617,   -18,   312,   -30,   -30,   100,
     101,   415,    75,   416,   328,   174,   175,   -30,   311,   313,
     176,   -18,   177,   178,   179,   180,   181,   182,   183,   363,
      61,    61,    61,   -54,   558,   -55,   184,   -53,   -67,   576,
     577,    42,    43,   -21,   578,    44,   -71,   -67,   -20,   -54,
     369,   -55,   -21,   -21,   394,   395,    61,   -20,   329,   -21,
     -21,   582,   -71,   -71,   -20,     1,     2,     3,     4,    25,
     385,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     590,    35,   172,    36,    37,    38,    39,    40,   -20,   -56,
       1,     2,     3,     4,   405,    41,   593,   -20,   351,   591,
      42,    43,   -47,   -57,    44,   -56,   289,    45,   -53,    54,
     -58,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -70,   -57,
     -47,   -47,   -47,   -47,   -47,   -47,   -58,   -47,   -68,   595,
     -47,   -71,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   449,   450,   -68,   -68,   -68,   265,   289,   -69,
     -61,   -69,   609,   610,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   482,   483,   224,   -69,   -69,   265,
     289,   611,   612,   -59,   265,   -61,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   513,   514,   265,   -59,
     265,   -61,   -61,   237,   237,   613,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   545,   546,   289,   -52,
     425,   265,   289,   614,   615,    54,   616,   224,    55,   618,
     237,    54,    29,    30,    54,    55,   237,    34,   111,    35,
     172,    36,    37,    38,    39,    40,   458,   165,   237,   565,
       0,   237,   -85,    41,     0,   237,     0,     0,    42,    43,
       0,     0,    44,    55,   487,   174,   175,   489,   237,   237,
     176,   521,   177,   178,   179,   180,   181,   182,   183,     0,
     237,   237,   574,   -67,   560,   561,   184,     0,    55,     0,
     225,    42,    43,     0,     0,    44,   562,   563,   237,   -67,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,    55,   580,   569,   266,     0,    55,   290,     0,
     237,     1,     2,     3,     4,   303,     0,   304,   305,   306,
      29,    30,   307,   308,   309,    34,   570,    35,   172,    36,
      37,    38,    39,    40,     0,   588,     0,     0,     0,   237,
     237,    41,    55,    55,    55,     0,    42,    43,     0,   -22,
      44,   237,   310,   290,   -53,   571,   572,     0,   -22,   -22,
     394,   395,   -27,     0,    55,   -22,   -22,   583,    55,     0,
     265,   -27,   -27,   -27,   -27,   -27,   -27,   -21,   237,   265,
     -27,   -27,   100,   101,     0,   265,   -21,   -21,   352,   353,
     -27,     0,     0,   265,   584,     0,    54,    54,    54,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,    54,   225,   237,     0,     0,   237,     0,   -73,
     -21,   -21,   374,   375,   -73,   -73,   -26,   -21,   -73,     0,
     585,   -73,   -73,   586,   246,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   400,   401,   237,   -83,
     -83,   -83,   -83,   -83,   266,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   592,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -59,   -22,   -22,   374,   375,   290,   -83,
       0,   -22,     0,     0,   -83,   -83,   -48,   237,   -83,   594,
     290,   -83,   -83,    55,   237,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   596,   -48,   -48,   -48,   -48,   -48,   -48,
     597,   -48,   -70,   -71,   -48,     0,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   -70,   -71,
       0,   266,   290,     0,     0,   -68,   -69,     0,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     225,   -68,   -69,   266,   290,     0,     0,   237,   266,   -61,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   266,   598,   266,   -61,     0,   237,   237,     0,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   290,   600,   602,   266,   290,     0,     0,    55,
       0,   225,    56,     0,   237,    55,   206,   207,    55,    56,
       0,   208,     0,   209,   210,   211,   212,   213,   214,   215,
     604,     0,     0,   435,     0,    -2,     0,   216,     1,     2,
       3,     4,    42,    43,     0,     0,    44,    56,     0,   271,
     272,     0,     0,     0,   273,     0,   274,   275,   276,   277,
     278,   279,   280,     0,     0,     0,   468,     0,     0,     0,
     281,   -22,    56,     0,   226,    42,    43,     0,     0,    44,
     -22,   -22,   352,   353,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,    56,   499,     0,   267,
       0,    56,   291,     0,     0,     1,     2,     3,     4,    25,
       0,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    35,   172,    36,    37,    38,    39,    40,    -4,   531,
       0,    -4,    -4,    -4,    -4,    41,    56,    56,    56,     0,
      42,    43,     0,   -22,    44,     0,   319,   291,   -53,     0,
       0,     0,   -22,   -22,   330,   331,   -28,     0,    56,   -22,
       0,     0,    56,     0,   266,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,   266,   -28,   -28,   100,   101,     0,   266,
       0,     0,     0,     0,   -28,     0,     0,   266,     0,     0,
      55,    55,    55,   -86,   -86,   -86,   -86,   -86,   166,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,    55,   226,     0,     0,
       0,    -5,     0,   -86,    -5,    -5,    -5,    -5,   -86,   -86,
     -29,     0,   -86,     0,     0,   -86,   -86,     0,   247,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     400,   401,     0,   -75,   -75,   -75,   -75,   -75,   267,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,    -6,   291,   -75,    -6,    -6,    -6,    -6,   -75,   -75,
     -49,     0,   -75,     0,   291,   -75,   -75,    56,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,     0,   -49,     0,     0,   -49,     0,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,     0,     0,    -3,   267,   291,    -3,    -3,    -3,
      -3,     0,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   226,     0,     0,   267,   291,     0,
       0,     0,   267,     0,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   267,    -7,   267,     0,
      -7,    -7,    -7,    -7,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   291,     0,     0,   267,
     291,     0,     0,    56,     0,   226,    57,     0,     0,    56,
     -51,   -77,    56,    57,   -77,   -77,   -77,   -77,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   436,   -51,   -51,
     -51,   -51,   -51,   -51,   -50,   -51,     0,     0,   -51,     0,
       0,    57,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     469,     0,   -50,     0,     0,     0,    57,   -72,   227,     0,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
      57,   500,   -37,   268,     0,    57,   292,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   107,     0,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,     0,
     -37,     0,     0,   532,     0,   -42,     0,     0,     0,     0,
      57,    57,    57,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   292,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -24,    57,   -42,     0,     0,    57,     0,   267,     0,
     -24,   -24,   -24,   -24,    96,    97,     0,   267,     0,    98,
      99,     0,     0,   267,     0,     0,     0,     0,     0,   -24,
       0,   267,     0,     0,    56,    56,    56,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
      56,   227,     0,     0,     0,     0,     0,   -74,     0,     0,
       0,     0,   -74,   -74,   -30,     0,   -74,     0,     0,   -74,
     -74,     0,   248,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   400,   401,     0,   -78,   -78,   -78,
     -78,   -78,   268,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,   292,   -78,     0,     0,
       0,     0,   -78,   -78,   -45,     0,   -78,     0,   292,   -78,
     -78,    57,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
       0,     0,   -45,     0,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,     0,     0,     0,   268,
     292,     0,     0,     0,     0,     0,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   227,     0,
       0,   268,   292,     0,     0,     0,   268,     0,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     268,     0,   268,     0,     0,     0,     0,     0,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     292,     0,     0,   268,   292,     0,     0,    57,     0,   227,
      58,     0,     0,    57,   -44,     0,    57,    58,     0,     0,
       0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   110,
       0,   437,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,   -44,     0,     0,    58,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   470,     0,   -44,     0,     0,     0,
      58,     0,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,    58,   501,   -46,   269,     0,    58,
     293,     0,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,     0,   -46,     0,     0,   533,     0,   -43,
       0,     0,     0,     0,    58,    58,    58,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   293,     0,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -25,    58,   -43,     0,     0,
      58,     0,   268,     0,   -25,   -25,   -25,   -25,    96,    97,
       0,   268,     0,    98,    99,     0,     0,   268,     0,     0,
       0,     0,     0,   -25,     0,   268,     0,     0,    57,    57,
      57,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,    57,   228,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,     0,   -83,   -83,   -27,     0,
     -83,     0,     0,   -83,   -83,     0,   249,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   400,   401,
       0,   -79,   -79,   -79,   -79,   -79,   269,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
     293,   -79,     0,     0,     0,     0,   -79,   -79,   -94,     0,
     -79,     0,   293,   -79,   -79,    58,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,     0,     0,   -94,   -94,   -94,   -94,
     -94,   -94,     0,   -94,     0,     0,   -94,     0,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
       0,     0,     0,   269,   293,     0,     0,     0,     0,     0,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   228,     0,     0,   269,   293,     0,     0,     0,
     269,     0,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   269,     0,   269,     0,     0,     0,
       0,     0,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   293,     0,     0,   269,   293,     0,
       0,    58,     0,   228,    53,   -23,     0,    58,     0,     0,
      58,    53,     0,     0,   -23,   -23,   -23,   -23,   396,   397,
       0,   -23,   -23,   398,   399,   438,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,   -78,     0,   471,     0,
       0,   -78,   -78,     0,    53,   -78,   223,     0,   -78,   -78,
       0,     0,     0,     0,     0,     0,    53,    53,    53,    53,
      53,    53,    53,    53,   134,   135,   -34,     0,    53,   502,
       0,   264,     0,    53,   288,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   104,     0,     0,   -34,     0,     0,     0,     0,     0,
       0,   534,     0,     0,   -38,    52,     0,     0,    53,    53,
      53,     0,    52,   -38,   -38,   -38,   -38,   -38,   -38,   288,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
      53,     0,   -38,     0,    53,     0,   269,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   269,     0,     0,     0,     0,
       0,   269,   -40,     0,     0,     0,     0,   -40,   -40,   269,
       0,   -40,    58,    58,    58,    52,     0,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    52,    52,
      52,   130,   131,   132,   133,     0,     0,     0,    58,    52,
       0,     0,   263,     0,    52,   287,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,    52,
      52,    52,   -79,     0,     0,     0,     0,   -79,   -79,     0,
     287,   -79,     0,     0,   -79,   -79,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    52,     0,     0,     0,     0,
       0,   -94,     0,     0,     0,     0,   288,     0,     0,    53,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,   -94,
     -94,   -94,   -94,   -94,   -94,     0,     0,     0,     0,   -94,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
     447,   448,     0,     0,   -41,     0,     0,   264,   288,   -41,
     -41,     0,     0,   -41,   223,   223,   223,   223,   223,   223,
     223,   223,   480,   481,     0,     0,   223,     0,     0,   264,
     288,     0,     0,     0,   264,     0,   264,   264,   264,   264,
     264,   264,   264,   264,   511,   512,     0,     0,   264,     0,
     264,     0,     0,     0,     0,     0,   288,   288,   288,   288,
     288,   288,   288,   288,   543,   544,     0,     0,   288,     0,
       0,   264,   288,     0,     0,    53,     0,   223,     0,     0,
       0,    53,     0,     0,    53,     0,     0,   287,     0,     0,
      52,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,   443,   444,   445,
     446,   -80,     0,     0,     0,     0,   -80,   -80,   263,   287,
     -80,     0,     0,   -80,   -80,   222,   222,   222,   222,   476,
     477,   478,   479,     0,     0,     0,     0,   222,     0,     0,
     263,   287,     0,     0,     0,   263,     0,   263,   263,   263,
     263,   507,   508,   509,   510,     0,     0,     0,     0,   263,
       0,   263,     0,     0,     0,     0,     0,   287,   287,   287,
     287,   539,   540,   541,   542,     0,     0,    51,     0,   287,
       0,     0,   263,   287,    51,     0,    52,   -47,   222,     0,
       0,     0,    52,     0,     0,    52,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,     0,     0,   -47,     0,     0,     0,     0,
     264,     0,     0,   172,    36,    37,    38,    39,    40,   264,
       0,     0,     0,     0,     0,   264,    41,    51,     0,   221,
       0,    42,    43,   264,     0,    44,    53,    53,    53,    51,
      51,   128,   129,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    50,     0,   262,     0,    51,   286,     0,    50,
       0,     0,    53,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,    51,    51,    51,   -81,     0,     0,     0,     0,   -81,
     -81,     0,   286,   -81,     0,     0,   -81,   -81,     0,   -26,
       0,     0,    50,    51,   220,     0,     0,    51,   -26,   -26,
     -26,   -26,   -26,   -26,    50,   127,     0,   -26,   -26,   358,
     359,   263,     0,     0,     0,     0,    50,     0,     0,   261,
     263,    50,   285,     0,     0,     0,   263,     0,     0,     0,
       0,     0,   -48,     0,   263,     0,     0,    52,    52,    52,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,    50,    50,    50,    49,
     -48,     0,     0,    52,     0,     0,    49,   285,     0,     0,
       0,     0,     0,     0,   -49,     0,     0,     0,    50,     0,
       0,     0,    50,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,     0,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,
       0,     0,   -49,     0,   -31,     0,     0,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,    49,
     -31,   219,   -31,   -31,   -31,   -31,   338,   339,     0,   286,
       0,   125,    51,     0,     0,   -23,   -23,   -23,   -23,   376,
     377,   -51,   -23,    49,   378,   379,   260,     0,    49,   284,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   441,   442,   -51,
     -51,   -51,   -51,   -51,   -51,     0,     0,     0,     0,   -51,
     262,   286,     0,     0,     0,     0,     0,   221,   221,   474,
     475,     0,     0,    49,    49,    49,     0,     0,     0,   221,
       0,     0,   262,   286,   284,     0,     0,   262,     0,   262,
     262,   505,   506,     0,     0,    49,     0,     0,     0,    49,
       0,   262,     0,   262,   285,     0,     0,    50,     0,   286,
     286,   537,   538,     0,   239,   240,   241,   242,   243,   244,
       0,   286,     0,     0,   262,   286,     0,   245,    51,     0,
     221,   440,    42,    43,    51,     0,    44,    51,     0,     0,
       0,     0,     0,    62,     0,   261,   285,     0,     0,     0,
      62,     0,   220,   473,     0,     0,     0,     0,   251,   252,
     253,   254,   255,   256,   220,     0,     0,   261,   285,     0,
       0,   257,   261,     0,   261,   504,    42,    43,     0,     0,
      44,     0,     0,     0,     0,     0,   261,     0,   261,     0,
       0,     0,     0,     0,   285,   536,     0,     0,     0,     0,
       0,     0,     0,    62,     0,   230,   285,     0,     0,   261,
     285,     0,     0,    50,     0,   220,     0,     0,     0,    50,
       0,     0,    50,     0,     0,     0,   -50,   138,     0,     0,
     139,   284,    62,   295,    49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,   -50,     0,     0,   433,     0,     0,
       0,     0,     0,    47,     0,     0,     0,    62,    62,    62,
      47,     0,   260,   284,     0,     0,     0,     0,   295,   466,
       0,     0,     0,   262,     0,     0,     0,     0,     0,    62,
       0,   219,   262,    62,   260,   284,     0,     0,   262,   260,
       0,   497,     0,     0,     0,     0,   262,     0,     0,    51,
      51,    51,     0,   260,     0,   260,     0,     0,     0,     0,
       0,   529,     0,    47,     0,   217,   178,   179,   180,   181,
     182,   183,     0,   284,     0,    51,   260,   284,     0,   184,
      49,     0,   219,     0,    42,    43,    49,    47,    44,    49,
     258,     0,    47,   282,     0,    48,   210,   211,   212,   213,
     214,   215,    48,     0,     0,     0,     0,     0,   261,   216,
       0,     0,     0,     0,    42,    43,     0,   261,    44,     0,
       0,     0,     0,   261,     0,     0,     0,    47,    47,    47,
       0,   261,   -23,     0,    50,    50,    50,     0,   282,     0,
       0,   -23,   -23,   -23,   -23,   332,   333,     0,   -23,    47,
     334,   335,     0,    47,     0,    48,     0,   218,     0,     0,
      50,     0,   -24,     0,     0,   295,     0,     0,    62,     0,
       0,   -24,   -24,   -24,   -24,   332,   333,   -37,   -24,    48,
     334,   335,   259,     0,    48,   283,   -37,   -37,   -37,   -37,
     -37,   -37,   370,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   451,     0,   -37,   452,   295,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,    48,
      48,    48,    63,     0,     0,   484,     0,     0,   485,   295,
     283,     0,     0,   488,     0,   260,     0,     0,     0,     0,
       0,    48,     0,     0,   260,    48,     0,   515,     0,   516,
     260,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,    49,    49,    49,     0,     0,     0,   547,     0,     0,
     548,   295,     0,     0,    62,    63,   230,   231,     0,     0,
      62,     0,     0,    62,     0,   282,     0,    49,    47,     0,
       0,     0,     0,     0,   275,   276,   277,   278,   279,   280,
       0,     0,     0,     0,    63,   296,     0,   281,    64,     0,
     -42,     0,    42,    43,     0,    64,    44,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   258,   282,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,   -42,    63,
      63,    63,     0,     0,     0,   217,     0,     0,   258,   282,
     296,     0,     0,   258,     0,     0,     0,     0,     0,     0,
       0,    63,     0,     0,     0,    63,     0,   258,    64,   258,
     232,     0,     0,     0,     0,     0,     0,   283,     0,     0,
      48,     0,     0,     0,     0,     0,     0,   282,     0,     0,
     258,   282,     0,     0,    47,     0,   217,    64,   297,     0,
      47,     0,     0,    47,     0,     0,     0,     0,     0,    65,
       0,     0,   -25,     0,     0,     0,    65,     0,   259,   283,
       0,   -25,   -25,   -25,   -25,   332,   333,     0,   -25,   599,
     334,   335,    64,    64,    64,     0,     0,   218,   601,     0,
     259,   283,     0,   297,   603,   259,     0,     0,     0,     0,
       0,     0,   605,     0,    64,    62,    62,    62,    64,   259,
       0,   259,     0,     0,     0,     0,     0,     0,     0,    65,
       0,   233,   426,   427,   428,   429,   430,   431,     0,   283,
       0,    62,   259,   283,     0,   432,    48,     0,   218,     0,
      42,    43,    48,   -45,    44,    48,     0,   296,    65,   298,
      63,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,   -45,     0,   459,   460,   461,   462,   463,   464,     0,
       0,     0,     0,    65,    65,    65,   465,     0,     0,   296,
       0,    42,    43,     0,   298,    44,     0,     0,     0,   258,
       0,     0,     0,     0,     0,    65,     0,     0,   258,    65,
       0,   296,     0,    66,   258,     0,     0,     0,     0,     0,
      66,     0,   258,     0,     0,    47,    47,    47,   490,   491,
     492,   493,   494,   495,     0,     0,     0,     0,     0,     0,
     297,   496,     0,    64,     0,     0,    42,    43,     0,     0,
      44,    47,     0,   296,     0,     0,    63,     0,   231,     0,
       0,     0,    63,    70,     0,    63,     0,   -31,     0,     0,
      70,     0,     0,    66,     0,   234,   -31,   -31,   -31,   -31,
     -31,   -31,   297,     0,     0,   -31,   -31,   -31,   -31,   102,
     103,   259,     0,     0,     0,   -31,     0,     0,     0,     0,
     259,     0,    66,   299,   297,     0,   259,     0,   522,   523,
     524,   525,   526,   527,   259,     0,     0,    48,    48,    48,
       0,   528,     0,    70,     0,   116,    42,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,    66,    66,    66,
       0,   298,     0,    48,    65,     0,   297,     0,   299,    64,
       0,   232,    70,   300,     0,    64,   -44,     0,    64,    66,
       0,     0,     0,    66,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,    81,     0,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -94,     0,   298,   -44,     0,    90,    70,    70,    70,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   300,   -94,
     -94,   -94,   -94,   -94,   -94,   298,   -94,   -25,     0,    70,
       0,     0,     0,    70,     0,     0,   -25,   -25,   -25,   -25,
     354,   355,     0,     0,   112,   356,   357,   115,   117,   118,
       0,   120,   121,   122,   123,     0,     0,    63,    63,    63,
       0,     0,     0,     0,     0,     0,     0,   298,     0,     0,
      65,     0,   233,     0,   140,   141,    65,     0,     0,    65,
       0,     0,     0,    63,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,   299,   -82,     0,    66,     0,
     141,   -82,   -82,     0,   -47,   -82,     0,     0,   -82,   -82,
       0,     0,   322,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   327,
      64,    64,    64,     0,     0,     0,     0,   299,     0,     0,
       0,     0,     0,     0,     0,   300,     0,     0,    70,     0,
       0,     0,     0,   -46,     0,     0,    64,     0,     0,   299,
       0,   349,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,   -46,   367,     0,     0,     0,     0,   300,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,   371,     0,    66,   -24,   234,     0,     0,   300,
      66,     0,     0,    66,   -24,   -24,   -24,   -24,   396,   397,
       0,   -24,   -24,   398,   399,   -28,   391,     0,     0,     0,
       0,    65,    65,    65,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   400,   401,   409,     0,     0,
     412,   300,     0,     0,    70,     0,   553,    65,     0,     0,
      70,     0,     0,    70,   -48,     0,     0,     0,   421,   422,
     423,   424,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   141,
     454,   455,   456,   457,   -24,   -24,   -24,   -24,   376,   377,
       0,   -24,     0,   378,   379,     0,   -80,   -80,   -80,   -80,
     -80,   141,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,   517,   518,   519,   520,   -80,     0,     0,     0,
       0,   -80,   -80,     0,     0,   -80,     0,     0,   -80,   -80,
       0,     0,     0,   141,     0,   550,     0,     0,   115,     0,
     555,   556,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   564,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,    66,    66,    66,     0,     0,
       0,     0,   -84,     0,     0,     0,     0,   -84,   -84,     0,
       0,   -84,     0,     0,   -84,   -84,     0,     0,     0,     0,
     573,    66,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,    70,    70,    70,     0,     0,
       0,   579,   -93,     0,     0,     0,     0,   -93,   -93,     0,
       0,   -93,     0,   -25,   -93,   -93,     0,     0,     0,     0,
       0,    70,   -25,   -25,   -25,   -25,   396,   397,     0,   -25,
     -25,   398,   399,   587,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,   -72,
     -72,     0,     0,   -72,     0,     0,   -72,   -72,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
     -77,     0,     0,     0,     0,   -77,   -77,     0,     0,   -77,
       0,   322,   -77,   -77,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,     0,     0,     0,   -89,     0,     0,     0,     0,   -89,
     -89,     0,     0,   -89,     0,     0,   -89,   -89,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,     0,     0,     0,     0,     0,   -92,     0,
       0,     0,     0,   -92,   -92,     0,     0,   -92,     0,     0,
     -92,   -92,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,   -91,     0,     0,     0,     0,   -91,   -91,     0,
       0,   -91,     0,     0,   -91,   -91,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,     0,     0,   -90,     0,     0,     0,
       0,   -90,   -90,     0,     0,   -90,     0,     0,   -90,   -90,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,     0,     0,     0,
     -88,     0,     0,     0,     0,   -88,   -88,     0,     0,   -88,
       0,     0,   -88,   -88,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,   -81,     0,     0,     0,     0,   -81,
     -81,     0,     0,   -81,     0,     0,   -81,   -81,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,   -82,   -82,     0,     0,   -82,     0,     0,
     -82,   -82,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,   -84,     0,     0,     0,     0,   -84,   -84,     0,
       0,   -84,     0,     0,   -84,   -84,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
       0,     0,     0,     0,     0,     0,   -93,     0,     0,     0,
       0,   -93,   -93,     0,     0,   -93,     0,     0,   -93,   -93,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
     -89,     0,     0,     0,     0,   -89,   -89,     0,     0,   -89,
       0,     0,   -89,   -89,   -92,   -92,   -92,   -92,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,     0,     0,     0,   -92,     0,     0,     0,     0,   -92,
     -92,     0,     0,   -92,     0,     0,   -92,   -92,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,     0,     0,     0,     0,     0,   -91,     0,
       0,     0,     0,   -91,   -91,     0,     0,   -91,     0,     0,
     -91,   -91,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,
       0,     0,   -90,     0,     0,     0,     0,   -90,   -90,     0,
       0,   -90,     0,     0,   -90,   -90,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,     0,     0,
       0,   -87,   -87,     0,     0,   -87,     0,     0,   -87,   -87,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,     0,     0,     0,
     -88,     0,     0,     0,     0,   -88,   -88,     0,     0,   -88,
       0,     0,   -88,   -88,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,   -77,
     -77,     0,     0,   -77,     0,     0,   -77,   -77,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,   -73,     0,
       0,     0,     0,   -73,   -73,     0,     0,   -73,     0,     0,
     -73,   -73,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,     0,     0,   -74,   -74,     0,
       0,   -74,     0,     0,   -74,   -74,     1,     2,     3,     4,
      25,     0,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    35,   172,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,    42,    43,     0,     0,    44,     0,     0,   557,   -53,
       1,     2,     3,     4,    25,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    35,   172,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,    42,    43,     0,     0,    44,
       0,     0,   559,   -53,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,   -72,
     -72,     0,     0,   -72,     0,     0,   -72,   -72,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,   -86,     0,
       0,     0,     0,   -86,   -86,   -43,     0,   -86,     0,     0,
     -86,   -86,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -34,
       0,     0,     0,   -43,     0,     0,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -32,     0,     0,     0,   -34,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,   -32,   -32,   -32,   102,   103,   -33,     0,     0,
       0,   -32,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,   102,
     103,   -35,     0,     0,     0,   -33,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -36,     0,     0,     0,   -35,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -38,
       0,     0,     0,   -36,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -94,     0,     0,     0,   -38,     0,     0,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -47,   -94,     0,
       0,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -48,   -47,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -49,   -48,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -51,
     -49,     0,     0,     0,     0,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -50,   -51,     0,     0,     0,     0,     0,
       0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -37,   -50,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   407,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -42,   -37,     0,     0,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -45,   -42,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -44,
     -45,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   408,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -46,   -44,     0,
       0,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -43,   -46,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -47,   -43,     0,     0,     0,
       0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -48,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -49,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -51,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -50,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -51,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -37,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -37,
     -37,   -37,   -37,   -37,   -37,   343,   -37,   -42,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -45,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -44,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -44,   -44,   -44,   -44,   -44,   -44,   344,   -44,   -34,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -44,   404,     0,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -38,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -46,   -38,     0,     0,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -43,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -34,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -94,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   340,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -47,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -48,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -49,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -51,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -50,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -37,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -50,   -37,   -37,   -37,   -37,   -37,
     -37,   365,     0,   -42,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -45,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -44,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -44,   -44,   -44,   -44,
     -44,   -44,   366,     0,   -38,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -44,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -46,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -43,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -34,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -38,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   362,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -49,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -51,     0,     0,     0,     0,     0,     0,     0,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   589,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -44,     0,     0,     0,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -46,     0,     0,     0,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -43,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -94,   -31,   -31,
     -31,   -31,   -31,   -31,   402,   403,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -47,   -94,   -94,   -94,   -94,   -94,
     -94,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -48,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -49,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -51,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -50,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -37,
     -50,   -50,   -50,   -50,   -50,   -50,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   566,   -37,   -42,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -45,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -44,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -34,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -32,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -32,   -32,   -32,   -32,   -32,   -32,   -33,   -32,   -32,
     -32,   -32,   -32,   -32,   402,   403,   -33,   -33,   -33,   -33,
     -33,   -33,   -35,   -33,   -33,   -33,   -33,   -33,   -33,   402,
     403,   -35,   -35,   -35,   -35,   -35,   -35,   -36,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -36,   -36,   -36,   -36,
     -36,   -36,   -38,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -38,   -38,   -38,   -38,   -38,   -38,   -46,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -43,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -34,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -32,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -32,   -32,   -32,   -32,   -32,
     -32,   -33,   -32,     0,   -32,   -32,   -32,   -32,   338,   339,
     -33,   -33,   -33,   -33,   -33,   -33,   -35,   -33,     0,   -33,
     -33,   -33,   -33,   338,   339,   -35,   -35,   -35,   -35,   -35,
     -35,   -36,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -36,   -36,   -36,   -36,   -36,   -36,   -94,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -47,     0,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,     0,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -49,     0,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -51,     0,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -50,     0,   -51,   -51,
     -51,   -51,   -51,   -51,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -37,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   575,   -42,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -45,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -44,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -38,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -46,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -43,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -31,     0,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -34,     0,
       0,   -31,   -31,   -31,   -31,   360,   361,   -34,   -34,   -34,
     -34,   -34,   -34,   -32,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -32,   -32,   -32,   -32,   -32,   -32,   -33,     0,
       0,   -32,   -32,   -32,   -32,   360,   361,   -33,   -33,   -33,
     -33,   -33,   -33,   -35,     0,     0,   -33,   -33,   -33,   -33,
     360,   361,   -35,   -35,   -35,   -35,   -35,   -35,   -36,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -36,   -36,   -36,
     -36,   -36,   -36,   -38,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -38,   -38,   -38,   -38,   -38,   -38,   -26,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -26,   -26,   -26,
     -26,   -26,   -26,   -29,   -26,     0,   -26,   -26,   336,   337,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -30,   -29,
       0,   -29,   -29,   336,   337,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -27,   -30,     0,   -30,   -30,   336,   337,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -28,   -27,
       0,   -27,   -27,   336,   337,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -29,   -28,     0,   -28,   -28,   336,   337,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -30,     0,
       0,   -29,   -29,   358,   359,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -27,     0,     0,   -30,   -30,   358,   359,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -28,     0,
       0,   -27,   -27,   358,   359,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,   -28,   358,   359,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,
     -94,   -94,   -94,   -94,   -94,     0,   -94,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -51,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -37,   -37,   -37,   -37,   -37,   -37,   386,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     384,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -37,   -37,
     -37,   -37,   -37,   -37,   581,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
     -31,   382,   383,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
     -32,   382,   383,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,   382,   383,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,     0,   -26,   -26,   380,   381,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   380,   381,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,   -30,
     380,   381,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
       0,   -27,   -27,   380,   381,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   380,   381,   -25,   -25,
     -25,   -25,   376,   377,     0,   -25,     0,   378,   379
};

static const yytype_int16 yycheck[] =
{
       0,     0,   144,     9,    20,    14,     6,     6,   146,   344,
      18,    33,    44,   144,    20,    21,   144,   144,    18,    27,
     144,    27,    20,    20,    46,    20,    34,    35,   166,    18,
      18,   366,   170,     3,     4,     5,     6,    20,    27,    28,
      46,    18,    18,     0,    18,    20,    34,    18,    20,    55,
      27,    28,    29,    30,    31,    32,    27,    46,    20,    36,
      37,    38,    39,    44,    34,    27,    34,    35,    80,    46,
      46,    18,    46,   408,    80,    46,    82,    18,    78,    85,
      27,    28,    29,    30,    34,    18,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    46,
      18,   107,    18,   109,   110,    46,    18,    18,    18,    27,
      28,    29,    30,    46,    18,    27,    28,    34,    80,    33,
      82,    20,    18,    46,    18,    18,    18,    18,    46,    34,
      46,    18,   144,   145,    46,    46,    46,   146,   144,   145,
     146,    18,    46,    34,   144,   144,    18,   109,   110,   155,
      46,   146,    46,    46,    46,   167,    18,   166,    27,    46,
     166,   170,    18,    18,   170,    34,    18,    18,    33,    46,
      33,   166,    34,    35,    46,   170,    27,    28,    29,    30,
      31,    32,   144,   145,   146,    36,    37,   193,    18,    18,
      46,    46,    33,   155,    46,    46,    18,    27,    28,    29,
      30,    31,    32,    20,   166,    34,    36,    37,   170,    34,
      35,    46,    34,    35,     3,     4,     5,     6,     7,   225,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    33,
      19,    20,    21,    22,    23,    24,    25,    18,    18,    33,
     246,    33,    18,    33,    33,    33,    27,    27,    28,    38,
      39,    27,    28,    42,    34,    35,    45,    46,    34,    35,
     266,    12,    13,    18,    33,    18,    17,    33,    19,    20,
      21,    22,    23,    24,    25,    46,    18,    46,    18,    34,
      35,    34,    33,    18,   290,    18,    34,    38,    39,   310,
      34,    42,    34,    35,    34,    46,   302,    18,   319,   305,
      34,    34,    35,    34,    35,   311,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    34,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,    27,    28,   343,   344,    46,
     302,    18,    34,   305,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,    34,    35,   365,
     366,    46,    46,    18,   370,    18,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    34,
     386,    34,   344,    46,    18,    34,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   411,
      34,   407,   408,    18,   366,   411,    34,   413,   414,    33,
      18,   417,    27,    28,   420,    20,    21,    22,    23,    24,
      25,    33,   417,    18,    20,   420,    34,    35,    33,   435,
      33,    27,    18,    38,    39,    33,    46,    42,     6,    34,
      35,    27,    28,    29,    30,    33,   408,    18,    34,   411,
     592,   413,   594,    33,   592,   417,   594,    18,   420,    55,
      33,   592,   468,   594,   592,   592,   594,   594,   592,    18,
     594,    33,    18,    34,    35,    18,   618,    18,    27,    28,
     618,    18,    18,    18,    80,    34,    82,   618,    34,    35,
     618,   618,    18,   499,   618,    34,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    18,
      18,   107,    34,   109,   110,    33,    33,    18,    27,    28,
      29,    30,    31,    32,    34,   531,    34,    36,    37,    38,
      39,    12,    13,    34,    35,    18,    17,    46,    19,    20,
      21,    22,    23,    24,    25,    33,    33,    33,   144,   145,
     146,    34,    33,    34,    18,    18,    33,    38,    39,   155,
     566,    42,    18,    27,    28,    29,    30,    31,    32,   575,
     166,    34,    36,    37,   170,   581,    33,    46,    34,    35,
     592,   593,   594,   589,    27,    28,   592,   593,   594,    18,
      34,    34,   592,   592,   594,   594,    33,   193,    27,    28,
      29,    30,    31,    32,   616,    18,   618,    36,    37,    38,
      39,    33,   618,    33,    27,    12,    13,    46,   618,   618,
      17,    34,    19,    20,    21,    22,    23,    24,    25,   225,
     592,   593,   594,    18,    46,    18,    33,    34,    18,    34,
      34,    38,    39,    18,    34,    42,    18,    34,    18,    34,
     246,    34,    27,    28,    29,    30,   618,    27,    28,    34,
      35,    34,    34,    35,    34,     3,     4,     5,     6,     7,
     266,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      34,    19,    20,    21,    22,    23,    24,    25,    18,    18,
       3,     4,     5,     6,   290,    33,    46,    27,    28,    34,
      38,    39,    18,    18,    42,    34,   302,    45,    46,   305,
      18,    27,    28,    29,    30,    31,    32,    33,    18,    34,
      36,    37,    38,    39,    40,    41,    34,    43,    18,    34,
      46,    18,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,    34,    35,    18,   343,   344,    18,
      18,    18,    46,    46,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,    34,    35,   365,
     366,    46,    34,    18,   370,    18,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    34,
     386,    34,    35,    18,    18,    34,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,    34,
      34,   407,   408,    34,    34,   411,    46,   413,    20,    34,
      18,   417,    12,    13,   420,    27,    18,    17,    78,    19,
      20,    21,    22,    23,    24,    25,    34,   155,    18,   435,
      -1,    18,    34,    33,    -1,    18,    -1,    -1,    38,    39,
      -1,    -1,    42,    55,    34,    12,    13,    34,    18,    18,
      17,    34,    19,    20,    21,    22,    23,    24,    25,    -1,
      18,    18,   468,    18,    34,    34,    33,    -1,    80,    -1,
      82,    38,    39,    -1,    -1,    42,    34,    34,    18,    34,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   499,    34,   107,    -1,   109,   110,    -1,
      18,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    34,    19,    20,    21,
      22,    23,    24,    25,    -1,   531,    -1,    -1,    -1,    18,
      18,    33,   144,   145,   146,    -1,    38,    39,    -1,    18,
      42,    18,    44,   155,    46,    34,    34,    -1,    27,    28,
      29,    30,    18,    -1,   166,    34,    35,    34,   170,    -1,
     566,    27,    28,    29,    30,    31,    32,    18,    18,   575,
      36,    37,    38,    39,    -1,   581,    27,    28,    29,    30,
      46,    -1,    -1,   589,    34,    -1,   592,   593,   594,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,   618,   225,    18,    -1,    -1,    18,    -1,    33,
      27,    28,    29,    30,    38,    39,    18,    34,    42,    -1,
      34,    45,    46,    34,   246,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    18,     3,
       4,     5,     6,     7,   266,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    34,    19,    20,    21,    22,    23,
      24,    25,    -1,    18,    27,    28,    29,    30,   290,    33,
      -1,    34,    -1,    -1,    38,    39,    18,    18,    42,    34,
     302,    45,    46,   305,    18,    27,    28,    29,    30,    31,
      32,    33,    -1,    34,    36,    37,    38,    39,    40,    41,
      34,    43,    18,    18,    46,    -1,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,    34,    34,
      -1,   343,   344,    -1,    -1,    18,    18,    -1,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,    34,    34,   365,   366,    -1,    -1,    18,   370,    18,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    34,   386,    34,    -1,    18,    18,    -1,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,    34,    34,   407,   408,    -1,    -1,   411,
      -1,   413,    20,    -1,    18,   417,    12,    13,   420,    27,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      34,    -1,    -1,   435,    -1,     0,    -1,    33,     3,     4,
       5,     6,    38,    39,    -1,    -1,    42,    55,    -1,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,   468,    -1,    -1,    -1,
      33,    18,    80,    -1,    82,    38,    39,    -1,    -1,    42,
      27,    28,    29,    30,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   499,    -1,   107,
      -1,   109,   110,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,     0,   531,
      -1,     3,     4,     5,     6,    33,   144,   145,   146,    -1,
      38,    39,    -1,    18,    42,    -1,    44,   155,    46,    -1,
      -1,    -1,    27,    28,    29,    30,    18,    -1,   166,    34,
      -1,    -1,   170,    -1,   566,    27,    28,    29,    30,    31,
      32,    -1,    -1,   575,    36,    37,    38,    39,    -1,   581,
      -1,    -1,    -1,    -1,    46,    -1,    -1,   589,    -1,    -1,
     592,   593,   594,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,   618,   225,    -1,    -1,
      -1,     0,    -1,    33,     3,     4,     5,     6,    38,    39,
      18,    -1,    42,    -1,    -1,    45,    46,    -1,   246,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    -1,     3,     4,     5,     6,     7,   266,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,     0,   290,    33,     3,     4,     5,     6,    38,    39,
      18,    -1,    42,    -1,   302,    45,    46,   305,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    46,    -1,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,    -1,    -1,     0,   343,   344,     3,     4,     5,
       6,    -1,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,    -1,    -1,   365,   366,    -1,
      -1,    -1,   370,    -1,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,     0,   386,    -1,
       3,     4,     5,     6,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,    -1,    -1,   407,
     408,    -1,    -1,   411,    -1,   413,    20,    -1,    -1,   417,
      18,     0,   420,    27,     3,     4,     5,     6,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,   435,    36,    37,
      38,    39,    40,    41,    18,    43,    -1,    -1,    46,    -1,
      -1,    55,    -1,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
     468,    -1,    46,    -1,    -1,    -1,    80,     0,    82,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   499,    18,   107,    -1,   109,   110,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      46,    -1,    -1,   531,    -1,    18,    -1,    -1,    -1,    -1,
     144,   145,   146,    -1,    27,    28,    29,    30,    31,    32,
      33,   155,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    18,   166,    46,    -1,    -1,   170,    -1,   566,    -1,
      27,    28,    29,    30,    31,    32,    -1,   575,    -1,    36,
      37,    -1,    -1,   581,    -1,    -1,    -1,    -1,    -1,    46,
      -1,   589,    -1,    -1,   592,   593,   594,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
     618,   225,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    18,    -1,    42,    -1,    -1,    45,
      46,    -1,   246,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,     3,     4,     5,
       6,     7,   266,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,   290,    33,    -1,    -1,
      -1,    -1,    38,    39,    18,    -1,    42,    -1,   302,    45,
      46,   305,    -1,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    46,    -1,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,    -1,    -1,    -1,   343,
     344,    -1,    -1,    -1,    -1,    -1,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,    -1,
      -1,   365,   366,    -1,    -1,    -1,   370,    -1,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    -1,   386,    -1,    -1,    -1,    -1,    -1,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,    -1,    -1,   407,   408,    -1,    -1,   411,    -1,   413,
      20,    -1,    -1,   417,    18,    -1,   420,    27,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      -1,   435,    36,    37,    38,    39,    40,    41,    18,    43,
      -1,    -1,    46,    -1,    -1,    55,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,   468,    -1,    46,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   499,    18,   107,    -1,   109,
     110,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,   531,    -1,    18,
      -1,    -1,    -1,    -1,   144,   145,   146,    -1,    27,    28,
      29,    30,    31,    32,    33,   155,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    18,   166,    46,    -1,    -1,
     170,    -1,   566,    -1,    27,    28,    29,    30,    31,    32,
      -1,   575,    -1,    36,    37,    -1,    -1,   581,    -1,    -1,
      -1,    -1,    -1,    46,    -1,   589,    -1,    -1,   592,   593,
     594,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,   618,   225,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    18,    -1,
      42,    -1,    -1,    45,    46,    -1,   246,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      -1,     3,     4,     5,     6,     7,   266,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
     290,    33,    -1,    -1,    -1,    -1,    38,    39,    18,    -1,
      42,    -1,   302,    45,    46,   305,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    46,    -1,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
      -1,    -1,    -1,   343,   344,    -1,    -1,    -1,    -1,    -1,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,    -1,    -1,   365,   366,    -1,    -1,    -1,
     370,    -1,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,    -1,   386,    -1,    -1,    -1,
      -1,    -1,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,    -1,    -1,   407,   408,    -1,
      -1,   411,    -1,   413,    20,    18,    -1,   417,    -1,    -1,
     420,    27,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,   435,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,   468,    -1,
      -1,    38,    39,    -1,    80,    42,    82,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    18,    -1,   104,   499,
      -1,   107,    -1,   109,   110,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,   531,    -1,    -1,    18,    20,    -1,    -1,   144,   145,
     146,    -1,    27,    27,    28,    29,    30,    31,    32,   155,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
     166,    -1,    46,    -1,   170,    -1,   566,    -1,    -1,    20,
      21,    22,    23,    24,    25,   575,    -1,    -1,    -1,    -1,
      -1,   581,    33,    -1,    -1,    -1,    -1,    38,    39,   589,
      -1,    42,   592,   593,   594,    80,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,   618,   104,
      -1,    -1,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,   144,
     145,   146,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
     155,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,   302,    -1,    -1,   305,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     336,   337,    -1,    -1,    33,    -1,    -1,   343,   344,    38,
      39,    -1,    -1,    42,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,    -1,    -1,   362,    -1,    -1,   365,
     366,    -1,    -1,    -1,   370,    -1,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,    -1,    -1,   384,    -1,
     386,    -1,    -1,    -1,    -1,    -1,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,    -1,    -1,   404,    -1,
      -1,   407,   408,    -1,    -1,   411,    -1,   413,    -1,    -1,
      -1,   417,    -1,    -1,   420,    -1,    -1,   302,    -1,    -1,
     305,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,   332,   333,   334,
     335,    33,    -1,    -1,    -1,    -1,    38,    39,   343,   344,
      42,    -1,    -1,    45,    46,   350,   351,   352,   353,   354,
     355,   356,   357,    -1,    -1,    -1,    -1,   362,    -1,    -1,
     365,   366,    -1,    -1,    -1,   370,    -1,   372,   373,   374,
     375,   376,   377,   378,   379,    -1,    -1,    -1,    -1,   384,
      -1,   386,    -1,    -1,    -1,    -1,    -1,   392,   393,   394,
     395,   396,   397,   398,   399,    -1,    -1,    20,    -1,   404,
      -1,    -1,   407,   408,    27,    -1,   411,    18,   413,    -1,
      -1,    -1,   417,    -1,    -1,   420,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
     566,    -1,    -1,    20,    21,    22,    23,    24,    25,   575,
      -1,    -1,    -1,    -1,    -1,   581,    33,    80,    -1,    82,
      -1,    38,    39,   589,    -1,    42,   592,   593,   594,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    20,    -1,   107,    -1,   109,   110,    -1,    27,
      -1,    -1,   618,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,   144,   145,   146,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,   155,    42,    -1,    -1,    45,    46,    -1,    18,
      -1,    -1,    80,   166,    82,    -1,    -1,   170,    27,    28,
      29,    30,    31,    32,    92,    93,    -1,    36,    37,    38,
      39,   566,    -1,    -1,    -1,    -1,   104,    -1,    -1,   107,
     575,   109,   110,    -1,    -1,    -1,   581,    -1,    -1,    -1,
      -1,    -1,    18,    -1,   589,    -1,    -1,   592,   593,   594,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,   144,   145,   146,    20,
      46,    -1,    -1,   618,    -1,    -1,    27,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,   166,    -1,
      -1,    -1,   170,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    80,
      34,    82,    36,    37,    38,    39,    40,    41,    -1,   302,
      -1,    92,   305,    -1,    -1,    27,    28,    29,    30,    31,
      32,    18,    34,   104,    36,    37,   107,    -1,   109,   110,
      27,    28,    29,    30,    31,    32,    33,   330,   331,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,
     343,   344,    -1,    -1,    -1,    -1,    -1,   350,   351,   352,
     353,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,   362,
      -1,    -1,   365,   366,   155,    -1,    -1,   370,    -1,   372,
     373,   374,   375,    -1,    -1,   166,    -1,    -1,    -1,   170,
      -1,   384,    -1,   386,   302,    -1,    -1,   305,    -1,   392,
     393,   394,   395,    -1,    20,    21,    22,    23,    24,    25,
      -1,   404,    -1,    -1,   407,   408,    -1,    33,   411,    -1,
     413,   329,    38,    39,   417,    -1,    42,   420,    -1,    -1,
      -1,    -1,    -1,    20,    -1,   343,   344,    -1,    -1,    -1,
      27,    -1,   350,   351,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,   362,    -1,    -1,   365,   366,    -1,
      -1,    33,   370,    -1,   372,   373,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,   384,    -1,   386,    -1,
      -1,    -1,    -1,    -1,   392,   393,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,   404,    -1,    -1,   407,
     408,    -1,    -1,   411,    -1,   413,    -1,    -1,    -1,   417,
      -1,    -1,   420,    -1,    -1,    -1,    18,   104,    -1,    -1,
     107,   302,   109,   110,   305,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,   328,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,   144,   145,   146,
      27,    -1,   343,   344,    -1,    -1,    -1,    -1,   155,   350,
      -1,    -1,    -1,   566,    -1,    -1,    -1,    -1,    -1,   166,
      -1,   362,   575,   170,   365,   366,    -1,    -1,   581,   370,
      -1,   372,    -1,    -1,    -1,    -1,   589,    -1,    -1,   592,
     593,   594,    -1,   384,    -1,   386,    -1,    -1,    -1,    -1,
      -1,   392,    -1,    80,    -1,    82,    20,    21,    22,    23,
      24,    25,    -1,   404,    -1,   618,   407,   408,    -1,    33,
     411,    -1,   413,    -1,    38,    39,   417,   104,    42,   420,
     107,    -1,   109,   110,    -1,    20,    20,    21,    22,    23,
      24,    25,    27,    -1,    -1,    -1,    -1,    -1,   566,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,   575,    42,    -1,
      -1,    -1,    -1,   581,    -1,    -1,    -1,   144,   145,   146,
      -1,   589,    18,    -1,   592,   593,   594,    -1,   155,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,   166,
      36,    37,    -1,   170,    -1,    80,    -1,    82,    -1,    -1,
     618,    -1,    18,    -1,    -1,   302,    -1,    -1,   305,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    34,   104,
      36,    37,   107,    -1,   109,   110,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,   340,    -1,    46,   343,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,   144,
     145,   146,    27,    -1,    -1,   362,    -1,    -1,   365,   366,
     155,    -1,    -1,   370,    -1,   566,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,   575,   170,    -1,   384,    -1,   386,
     581,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   589,    -1,
      -1,   592,   593,   594,    -1,    -1,    -1,   404,    -1,    -1,
     407,   408,    -1,    -1,   411,    80,   413,    82,    -1,    -1,
     417,    -1,    -1,   420,    -1,   302,    -1,   618,   305,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,   109,   110,    -1,    33,    20,    -1,
      18,    -1,    38,    39,    -1,    27,    42,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,   343,   344,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,   144,
     145,   146,    -1,    -1,    -1,   362,    -1,    -1,   365,   366,
     155,    -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,   170,    -1,   384,    80,   386,
      82,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,
     407,   408,    -1,    -1,   411,    -1,   413,   109,   110,    -1,
     417,    -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    18,    -1,    -1,    -1,    27,    -1,   343,   344,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,   566,
      36,    37,   144,   145,   146,    -1,    -1,   362,   575,    -1,
     365,   366,    -1,   155,   581,   370,    -1,    -1,    -1,    -1,
      -1,    -1,   589,    -1,   166,   592,   593,   594,   170,   384,
      -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    82,    20,    21,    22,    23,    24,    25,    -1,   404,
      -1,   618,   407,   408,    -1,    33,   411,    -1,   413,    -1,
      38,    39,   417,    18,    42,   420,    -1,   302,   109,   110,
     305,    -1,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,   144,   145,   146,    33,    -1,    -1,   344,
      -1,    38,    39,    -1,   155,    42,    -1,    -1,    -1,   566,
      -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,   575,   170,
      -1,   366,    -1,    20,   581,    -1,    -1,    -1,    -1,    -1,
      27,    -1,   589,    -1,    -1,   592,   593,   594,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    33,    -1,   305,    -1,    -1,    38,    39,    -1,    -1,
      42,   618,    -1,   408,    -1,    -1,   411,    -1,   413,    -1,
      -1,    -1,   417,    20,    -1,   420,    -1,    18,    -1,    -1,
      27,    -1,    -1,    80,    -1,    82,    27,    28,    29,    30,
      31,    32,   344,    -1,    -1,    36,    37,    38,    39,    40,
      41,   566,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
     575,    -1,   109,   110,   366,    -1,   581,    -1,    20,    21,
      22,    23,    24,    25,   589,    -1,    -1,   592,   593,   594,
      -1,    33,    -1,    80,    -1,    82,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,   302,    -1,   618,   305,    -1,   408,    -1,   155,   411,
      -1,   413,   109,   110,    -1,   417,    18,    -1,   420,   166,
      -1,    -1,    -1,   170,    -1,    27,    28,    29,    30,    31,
      32,    33,    27,    -1,    36,    37,    38,    39,    40,    41,
      -1,    18,    -1,   344,    46,    -1,    41,   144,   145,   146,
      27,    28,    29,    30,    31,    32,    33,    34,   155,    36,
      37,    38,    39,    40,    41,   366,    43,    18,    -1,   166,
      -1,    -1,    -1,   170,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    79,    36,    37,    82,    83,    84,
      -1,    86,    87,    88,    89,    -1,    -1,   592,   593,   594,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,
     411,    -1,   413,    -1,   109,   110,   417,    -1,    -1,   420,
      -1,    -1,    -1,   618,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,   302,    33,    -1,   305,    -1,
     155,    38,    39,    -1,    18,    42,    -1,    -1,    45,    46,
      -1,    -1,   167,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,   184,
     592,   593,   594,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    18,    -1,    -1,   618,    -1,    -1,   366,
      -1,   216,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,   237,    -1,    -1,    -1,    -1,   344,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   408,   257,    -1,   411,    18,   413,    -1,    -1,   366,
     417,    -1,    -1,   420,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    18,   281,    -1,    -1,    -1,
      -1,   592,   593,   594,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,   302,    -1,    -1,
     305,   408,    -1,    -1,   411,    -1,   413,   618,    -1,    -1,
     417,    -1,    -1,   420,    18,    -1,    -1,    -1,   323,   324,
     325,   326,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,   344,
     345,   346,   347,   348,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    -1,     3,     4,     5,     6,
       7,   366,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,   387,   388,   389,   390,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
      -1,    -1,    -1,   408,    -1,   410,    -1,    -1,   413,    -1,
     415,   416,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   432,    19,    20,
      21,    22,    23,    24,    25,   592,   593,   594,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
     465,   618,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,   592,   593,   594,    -1,    -1,
      -1,   496,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    18,    45,    46,    -1,    -1,    -1,    -1,
      -1,   618,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,   528,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,   616,    45,    46,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    18,    -1,    42,    -1,    -1,
      45,    46,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    18,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    18,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    18,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    18,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    18,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    18,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    18,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    18,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    18,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    18,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    18,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    18,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    18,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    33,    34,    18,
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
      -1,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    33,    34,    18,    36,    37,    38,    39,    40,
      41,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    18,    36,    37,    38,    39,    40,    41,    -1,    -1,
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
      31,    32,    18,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    33,    34,    18,    36,    37,    38,    39,    40,
      41,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    18,    36,    37,    38,    39,    40,    41,    -1,    -1,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    18,    -1,    36,    37,    38,    39,    40,    41,
      -1,    27,    28,    29,    30,    31,    32,    33,    18,    -1,
      36,    37,    38,    39,    40,    41,    -1,    27,    28,    29,
      30,    31,    32,    33,    18,    -1,    36,    37,    38,    39,
      40,    41,    -1,    27,    28,    29,    30,    31,    32,    33,
      18,    -1,    36,    37,    38,    39,    40,    41,    -1,    27,
      28,    29,    30,    31,    32,    33,    18,    -1,    36,    37,
      38,    39,    40,    41,    -1,    27,    28,    29,    30,    31,
      32,    33,    18,    -1,    36,    37,    38,    39,    40,    41,
      -1,    27,    28,    29,    30,    31,    32,    33,    18,    -1,
      36,    37,    38,    39,    40,    41,    -1,    27,    28,    29,
      30,    31,    32,    33,    18,    -1,    36,    37,    38,    39,
      40,    41,    -1,    27,    28,    29,    30,    31,    32,    33,
      18,    -1,    36,    37,    38,    39,    40,    41,    -1,    27,
      28,    29,    30,    31,    32,    33,    18,    -1,    36,    37,
      38,    39,    40,    41,    -1,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    18,    -1,    36,
      37,    38,    39,    40,    41,    -1,    27,    28,    29,    30,
      31,    32,    33,    18,    -1,    36,    37,    38,    39,    40,
      41,    -1,    27,    28,    29,    30,    31,    32,    18,    -1,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    -1,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    -1,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    -1,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    -1,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    -1,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    -1,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    -1,    -1,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      -1,    -1,    27,    28,    29,    30,    31,    32,    18,    -1,
      -1,    36,    37,    38,    39,    -1,    -1,    27,    28,    29,
      30,    31,    32,    18,    -1,    -1,    36,    37,    38,    39,
      -1,    -1,    27,    28,    29,    30,    31,    32,    18,    -1,
      -1,    36,    37,    38,    39,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
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
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
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
      34,    -1,    36,    37,    38,    39,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      82,     0,    50,    20,    53,    90,    44,    79,    33,    46,
      81,    52,    54,    55,    56,     7,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    19,    21,    22,    23,    24,
      25,    33,    38,    39,    42,    45,    52,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    74,    75,    76,    77,    78,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    90,    34,    35,    33,
      33,    70,    33,    33,    33,    33,    33,    33,    33,    33,
      70,    90,    27,    28,    29,    30,    31,    32,    36,    37,
      38,    39,    40,    41,    43,    64,    90,    33,    46,    18,
      33,    55,    70,    69,    46,    70,    85,    70,    70,    90,
      70,    70,    70,    70,    34,    59,    64,    60,    61,    61,
      62,    62,    62,    62,    63,    63,    64,    64,    74,    74,
      70,    70,    72,    73,    34,    46,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    35,    34,    79,    80,    83,
      69,    80,    46,    46,    46,    73,     8,    46,    80,    69,
      34,    80,    20,    20,    12,    13,    17,    19,    20,    21,
      22,    23,    24,    25,    33,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    71,    74,    75,
      76,    77,    78,    85,    90,    20,    12,    13,    17,    19,
      20,    21,    22,    23,    24,    25,    33,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    71,
      74,    75,    76,    77,    78,    90,    20,    18,    46,    20,
      21,    22,    23,    24,    25,    33,    65,    66,    67,    68,
      90,    20,    21,    22,    23,    24,    25,    33,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      90,    12,    13,    17,    19,    20,    21,    22,    23,    24,
      25,    33,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    71,    74,    75,    76,    77,    78,
      85,    90,    18,     7,     9,    10,    11,    14,    15,    16,
      44,    52,    69,    82,    84,    86,    87,    88,    89,    44,
      79,    83,    70,    33,    33,    33,    33,    70,    27,    28,
      29,    30,    31,    32,    36,    37,    38,    39,    40,    41,
      43,    64,    90,    33,    33,    33,    33,    33,    33,    70,
      27,    28,    29,    30,    31,    32,    36,    37,    38,    39,
      40,    41,    43,    64,    90,    33,    33,    70,    70,    64,
      33,    70,    27,    28,    29,    30,    31,    32,    36,    37,
      38,    39,    40,    41,    43,    64,    33,    33,    33,    33,
      33,    70,    27,    28,    29,    30,    31,    32,    36,    37,
      38,    39,    40,    41,    43,    64,    90,    33,    33,    70,
      33,    33,    70,    33,    33,    33,    33,    81,    90,    46,
      81,    70,    70,    70,    70,    34,    20,    21,    22,    23,
      24,    25,    33,    59,    64,    65,    66,    67,    68,    90,
      60,    61,    61,    62,    62,    62,    62,    63,    63,    64,
      64,    74,    74,    72,    70,    70,    70,    70,    34,    20,
      21,    22,    23,    24,    25,    33,    59,    64,    65,    66,
      67,    68,    90,    60,    61,    61,    62,    62,    62,    62,
      63,    63,    64,    64,    74,    74,    72,    34,    74,    34,
      20,    21,    22,    23,    24,    25,    33,    59,    64,    65,
      66,    67,    68,    90,    60,    61,    61,    62,    62,    62,
      62,    63,    63,    64,    64,    74,    74,    70,    70,    70,
      70,    34,    20,    21,    22,    23,    24,    25,    33,    59,
      64,    65,    66,    67,    68,    90,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    64,    64,    74,    74,    72,
      70,    69,    46,    85,    90,    70,    70,    45,    46,    45,
      34,    34,    34,    34,    70,    64,    33,    34,    34,    34,
      34,    34,    34,    70,    64,    33,    34,    34,    34,    70,
      64,    33,    34,    34,    34,    34,    34,    70,    64,    33,
      34,    34,    34,    46,    34,    34,    34,    34,    34,    74,
      34,    74,    34,    74,    34,    74,    80,    69,    80,    46,
      46,    46,    34,    34,    34,    34,    46,    69,    34,    80
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
      83,    83,    83,    83,    84,    85,    86,    86,    87,    87,
      88,    88,    88,    89,    90
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
       1,     1,     1,     1,     2,     3,     5,     7,     9,     5,
       5,     5,     5,     3,     1
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
#line 41 "src/syntax/parser.y" /* yacc.c:1652  */
    { ast = (yyvsp[0].ast_node); }
#line 3155 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 45 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                          }
#line 3163 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 48 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3169 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 51 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3175 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 52 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3181 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 55 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, NULL, (yyvsp[-2].ast_node), (yyvsp[-1].ast_node), NULL);
                    }
#line 3189 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 60 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3195 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 61 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3201 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 62 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3207 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 63 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3213 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 12:
#line 66 "src/syntax/parser.y" /* yacc.c:1652  */
    {
              (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL);
            }
#line 3221 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 71 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3227 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 72 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = NULL; }
#line 3233 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 75 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                }
#line 3241 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 78 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3247 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 81 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                        (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                      }
#line 3255 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 86 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3261 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 89 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3267 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 90 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3275 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 95 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3281 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 96 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                        (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                      }
#line 3289 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 101 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3295 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 102 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3303 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 105 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3311 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 110 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3317 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 111 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3325 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 114 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3333 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 117 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3341 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 120 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3349 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 125 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3355 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 126 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3363 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 129 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3371 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 134 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3377 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 135 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                          (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                        }
#line 3385 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 138 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                          (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                        }
#line 3393 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 143 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3399 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 144 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                  (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                }
#line 3407 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 149 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3413 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 40:
#line 150 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3419 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 41:
#line 151 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3425 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 42:
#line 154 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3431 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 43:
#line 155 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3437 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 44:
#line 158 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3443 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 45:
#line 159 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3449 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 46:
#line 160 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3455 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 47:
#line 163 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3461 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 48:
#line 164 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3467 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 49:
#line 165 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3473 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 50:
#line 166 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3479 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 167 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3485 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 170 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3491 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 171 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3497 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 174 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3503 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 175 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3509 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 176 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3515 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 177 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3521 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 178 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3527 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 179 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3533 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 180 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3539 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 183 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3545 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 186 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3551 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 187 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3557 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 190 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3563 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 191 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3569 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 194 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3575 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 195 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3581 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 198 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3587 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 201 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3593 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 204 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3599 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 207 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3605 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 210 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3611 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 213 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3617 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 214 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3623 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 217 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3629 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 218 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3635 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 221 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3641 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 224 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3647 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 225 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3653 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 226 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3659 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 227 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3665 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 228 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3671 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 229 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3677 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 235 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3683 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 238 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3689 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 241 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3695 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 242 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3701 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 245 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3707 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 246 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3713 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 249 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3719 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 250 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3725 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 251 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3731 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 254 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3737 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 257 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(IDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3743 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;


#line 3747 "./src/syntax/parser.c" /* yacc.c:1652  */
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
#line 260 "src/syntax/parser.y" /* yacc.c:1918  */


void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}
