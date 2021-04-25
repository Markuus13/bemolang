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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8615

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  623

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
       0,    40,    40,    41,    44,    47,    50,    51,    54,    59,
      60,    61,    62,    65,    70,    71,    74,    77,    80,    85,
      88,    89,    94,    95,   100,   101,   104,   109,   110,   113,
     116,   119,   124,   125,   128,   133,   134,   137,   142,   143,
     148,   149,   150,   153,   154,   157,   158,   159,   162,   163,
     164,   165,   166,   169,   170,   173,   174,   175,   176,   177,
     178,   179,   182,   185,   186,   189,   190,   193,   194,   197,
     200,   203,   206,   209,   212,   213,   216,   217,   220,   223,
     224,   225,   226,   227,   228,   229,   234,   237,   240,   241,
     244,   245,   248,   249,   250,   253,   256
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

#define YYPACT_NINF -345

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-345)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1492,    12,    48,    52,   128,   131,   133,  1121,  1164,  1253,
     135,  1415,  -345,  1486,    29,   100,   166,  4625,  1513,    24,
    1556,  4773,   143,   119,   164,   306,  4819,   168,   172,   500,
     180,   197,   205,   206,   211,   235,   259,   262,    84,   989,
    1180,  1347,  1371,   796,   411,  2112,  2865,  1592,   145,     2,
      82,    23,   291,   517,   612,  2961,  2604,  2931,  1572,  1739,
    1763,   187,    13,    14,    38,    53,    59,    60,    64,  4865,
    4911,  4957,    89,  5003,  5049,  5095,  5141,  1964,   309,   203,
     886,   796,   204,    90,   824,   796,   796,   231,   796,   796,
     796,   796,   111,   252,  2938,  2938,  2938,  2938,  2938,  2938,
    2938,  2938,  2938,  2938,  2938,  2938,  2931,  2628,  2131,  3161,
    5187,   500,   404,   273,   124,   290,  5233,   367,   132,   186,
     188,   376,   276,   283,   346,   422,  2155,    37,  4541,   430,
    1209,  1601,   927,  1320,  1395,  1712,  5941,  5965,  5989,  6013,
     108,   377,   113,   200,   380,   385,  5279,   204,  5323,   116,
     125,   372,   374,   393,   149,   150,  2430,   971,   151,   169,
     266,   658,   401,  5367,  5413,  5459,  5505,   388,  5323,   595,
    5551,   417,  5323,  5597,  2467,   328,   419,   431,   436,   437,
    1793,  2185,  6373,  6390,  6407,  6424,   796,   493,    39,   680,
     576,  3033,  3254,  7470,  6608,  3217,  6441,  6458,  6475,   544,
     613,   677,   694,   695,   716,   717,  6492,   446,   467,   470,
     472,   473,  6625,  6642,  6659,  6676,  6693,  6710,   796,   489,
     -12,   182,  1173,  3987,  2496,  7767,  6863,  3280,  6727,  6744,
    6761,   491,   496,   511,   518,   519,   522,  6778,   484,   796,
    5643,     6,  2741,  2992,  3099,  3471,  3497,   796,  2938,  4145,
    4290,  4359,  4402,  8033,  8050,  8067,  8084,  8101,  8118,   796,
     516,    36,   -17,  1305,  3746,  4123,  8421,  8237,  3161,  8135,
    8152,  8169,  8186,   542,   547,   553,   557,  6061,  6085,  6109,
    6133,  6157,  6181,   796,   218,   214,   427,  1013,  7977,   227,
    7161,  6509,  3381,  6205,  6229,  6253,   279,   324,   348,   366,
     481,   525,   539,  6277,   971,   892,   559,   566,   500,   590,
     594,   602,   603,  4625,   145,   505,  1050,  1284,  1442,  1676,
    1834,  2068,  4625,  5689,  5735,   738,   796,   796,   796,   796,
     740,  3531,  3531,  3531,  3531,  3531,  3531,  3531,  3531,  3531,
    3531,  3531,  3531,  3217,  6795,  6533,  3161,   404,   796,   796,
     796,   796,   758,  3554,  3554,  3554,  3554,  3554,  3554,  3554,
    3554,  3554,  3554,  3554,  3554,  3280,  6880,  6812,  3161,   404,
     759,   778,  6037,  3161,   792,  3722,  3722,  3722,  3722,  3722,
    3722,  3722,  3722,  3722,  3722,  3722,  3722,  3161,  8254,  3161,
     796,   796,   796,   796,   793,  3896,  3896,  3896,  3896,  3896,
    3896,  3896,  3896,  3896,  3896,  3896,  3896,  3381,  6550,  6301,
    3161,   404,   548,   796,   204,   185,   824,   231,   796,   796,
    5781,   512,  2226,  5827,   805,   806,   833,   834,  6574,  7176,
    7193,  7210,  7227,  7244,  7261,   796,   901,  7485,  3531,  7278,
    7295,  7312,  7329,  1072,  3130,  3197,  4320,  7902,  7917,  7932,
    7500,  7515,  7530,  7545,   835,   543,   611,   876,   902,   908,
     909,  6829,  7560,  7576,  7592,  7608,  7624,  7640,   796,   275,
    7782,  3554,  7656,  7672,  7688,  7704,  1204,  4433,  8022,  2770,
    2887,  7947,  7962,  7797,  7812,  7827,  7842,   563,   619,   622,
    4457,   623,  8203,  3627,  4502,  8271,  8286,  8301,  8316,   796,
     288,  8436,  3722,  8331,  8346,  8361,  8376,  1410,  4570,  8578,
    8526,  8539,  8552,  8565,  8451,  8466,  8481,  8496,   626,   650,
     933,   943,   951,   952,  6325,  1988,  6897,  6921,  6945,  6969,
    6993,   796,   537,  7346,  3896,  7017,  7041,  7065,  7089,  2113,
    7992,  8007,  2349,  4526,  7872,  7887,  7361,  7376,  7391,  7406,
     567,   652,   653,   953,   554,  2391,   964,   656,   981,  1005,
    2574,  3077,  5873,  1015,  1016,  1018,  1059,  1060,  7720,  3161,
    6591,  1063,   606,   628,   676,   681,  1064,  7857,  3161,  6846,
     709,  4482,  1069,  8511,  3161,  8220,   591,   620,   667,   671,
    1086,  7421,  3161,  6349,   675,  5279,   204,  5279,   686,   687,
     690,  7436,   720,  7735,   721,  8391,   741,  7113,   744,  5919,
     753,  3335,  3421,  3847,  4679,  7453,  7751,  8406,  7137,   595,
     767,  5279,  4727
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -345,  -345,  -345,   795,  -345,     0,  -345,  -345,   723,  -345,
    3537,  3624,  3215,  2900,  2800,  2458,  2344,   384,   776,  1168,
    1560,  1952,   -28,  4198,  3641,  -344,   649,  3304,  3657,  3674,
    3955,  3999,   -11,   -87,  -304,     1,   -16,  -130,  4057,  -124,
    -123,  -120,   -93,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    48,    15,    23,    24,    25,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,    61,    62,   199,   144,   145,   200,   201,   202,
     203,   204,   159,   160,    21,    69,   161,    71,   205,    73,
      74,    75,    76,   206
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    11,    16,   456,    18,    70,   -19,    10,    11,   420,
     -20,   376,    -3,    77,    78,   353,   317,   -20,   423,    22,
     -67,    77,   318,   319,   -96,   489,   320,     2,     3,     4,
       5,   111,   -61,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
      93,   -20,   -96,   -96,   -96,   -96,   -96,   -96,   -67,   108,
     -20,    95,   -96,   321,   115,   -21,   -55,   -19,   -15,   -53,
     -61,   163,   -96,   375,   -21,    95,   331,   552,    -9,   -20,
     -19,   -56,   -10,   -19,    77,   -96,   237,   -57,   -58,   121,
      22,   170,   -59,   -21,   -55,   173,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   108,   -56,
     -19,   272,   -48,    77,   303,   -57,   -58,   -60,   111,    94,
     -59,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   315,   162,
     -48,   -48,   -48,   -48,   -48,   -48,   -68,   -48,   -19,   239,
     -48,   111,   324,    12,   -71,   -60,   116,   323,    77,    77,
      77,   171,   239,   -72,    17,   126,   314,   316,   -11,   303,
     -60,   -12,   324,    79,   -68,    14,   324,   323,   146,   -87,
      77,   323,   -71,   175,    77,   207,   148,   -69,   -70,   -62,
     -74,   -72,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   345,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -69,   -70,   -62,   -14,    19,
     -20,    81,   -74,   111,   239,    82,   239,   -74,   -74,   -20,
     354,   -74,    20,    84,   -74,   -74,    31,    32,   304,   367,
     149,    36,   150,    37,   174,    38,    39,    40,    41,    42,
      85,   555,   -19,   110,   -66,   157,   -67,    43,    86,    87,
     252,   395,    44,    45,    88,   -27,    46,   -13,   -19,   -19,
     -54,   238,   -67,   -67,   -27,   -27,   -27,   -27,   -27,   -27,
     272,   -27,   -27,   -27,   -27,   403,   404,   -88,    89,   -88,
     -88,   -88,   -88,   -88,   168,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   409,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,    90,   -21,   239,    91,   303,   -61,   240,   -88,
      77,   239,   -21,   354,   -88,   -88,   421,   -16,   -88,   -22,
     152,   -88,   -88,   -61,   -61,   -21,   376,   153,   -22,   -22,
      96,    97,   -21,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   345,   147,   -22,   272,   303,
     -17,    80,   -55,   -18,   -18,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   367,   -55,   -55,
     272,   303,   -96,   -96,   239,   272,   -56,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   272,
     154,   272,   -56,   -56,   -57,   239,   554,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   409,
     -57,   -57,   272,   303,    70,    56,    77,    70,   237,   557,
     151,   156,    77,    56,   158,    77,   273,   274,   164,   -63,
     165,   275,   -65,   276,   277,   278,   279,   280,   281,   282,
     442,   -40,   -40,   -40,   -40,   -40,   -40,   283,   -64,   166,
     239,   107,    44,    45,   -40,   -20,    46,   169,   -23,   -40,
     -40,   172,   326,   -40,   -20,   396,   155,   -23,   -23,    96,
      97,   -20,   -20,   475,   327,   317,    56,   317,   226,   328,
     329,   318,   319,   318,   319,   320,   -23,   320,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   138,   139,
      56,   317,   -96,   267,   506,    56,   291,   318,   319,   -58,
     348,   320,   321,   349,   321,   350,   351,   -67,   609,   -61,
     611,   -67,    31,    32,   -55,   -58,   -58,    36,   -96,    37,
     174,    38,    39,    40,    41,    42,   538,   -67,   321,   -56,
      56,    56,    56,    43,   622,   -24,   -57,   -58,    44,    45,
     -59,   291,    46,   -59,   -24,   -24,   -24,   -24,    98,    99,
     -67,   422,    56,   100,   101,   -21,    56,   -60,   561,   -59,
     -59,   272,   -61,   -24,   -21,   396,   304,   315,   610,   315,
     272,   -21,   -21,   -60,   -60,   390,   272,   570,   -61,   344,
     391,   -68,   -87,   -87,   272,   -68,   392,    77,    77,    77,
     393,   620,   413,   315,   -22,   314,   316,   314,   316,   414,
     596,   -68,   -68,   -22,   -22,   333,   334,   176,   177,   -71,
     -22,   366,   178,    77,   179,   180,   181,   182,   183,   184,
     185,   314,   316,   416,   -71,   -71,   -71,   417,   186,   -54,
     -27,   -55,   372,    44,    45,   418,   419,    46,   -72,   -27,
     -27,   -27,   -27,   -27,   -27,   571,   -72,   -55,   -27,   -27,
     102,   103,   388,   579,   -72,   -72,   580,   581,   -27,   -75,
     -68,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   408,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   585,   -69,   593,   594,   291,   -70,
     598,   -75,    56,   -62,   -69,   -56,   -75,   -75,   -20,   -70,
     -75,   -69,   -69,   -75,   -75,   -70,   -70,   -20,   332,   -62,
     -62,   -56,   -57,   -58,   -20,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   452,   453,   -62,   -57,   -58,
     267,   291,   612,   613,   -59,   -60,   614,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   485,   486,   226,
     -59,   -60,   267,   291,   615,   616,   239,   267,   239,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   516,
     517,   267,   -53,   267,   428,   617,   239,   239,   618,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   548,
     549,   291,   461,   -87,   267,   291,   239,    57,    56,   619,
     226,   621,    13,   113,    56,    57,   167,    56,   176,   177,
     239,   239,   490,   178,     0,   179,   180,   181,   182,   183,
     184,   185,   568,   239,   239,     0,   492,   524,     0,   186,
       0,     0,     0,    57,    44,    45,   208,   209,    46,   563,
     564,   210,     0,   211,   212,   213,   214,   215,   216,   217,
       0,   239,   239,   -68,     0,   577,     0,   218,    57,     0,
     227,     0,    44,    45,     0,     0,    46,   565,   566,   -68,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,    57,     0,     0,   268,   583,    57,   292,     2,
       3,     4,     5,   -85,   239,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     572,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   591,   -21,
     239,     0,    57,    57,    57,   -85,   239,   239,   -21,   332,
     -85,   -85,     0,   292,   -85,   -21,   573,   -85,   -85,     0,
       0,     0,   574,   575,    57,   -30,     0,     0,    57,     0,
       0,   239,     0,   267,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   239,   267,   -30,   -30,   102,   103,   586,   267,   239,
     239,   239,     0,   -30,     0,     0,   267,   587,     0,    56,
      56,    56,   -60,   273,   274,   588,   589,   595,   275,     0,
     276,   277,   278,   279,   280,   281,   282,     0,   597,   239,
       0,     0,     0,   227,   283,    56,     0,   -49,     0,    44,
      45,     0,     0,    46,     0,   599,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   239,   248,   -49,   -49,   -49,   -49,   -49,
     -49,   -22,   -49,   -71,   -72,   -49,   -69,     0,     0,   600,
     -22,   -22,   397,   398,   268,     0,     0,   -22,   -22,   -71,
     -72,   -84,   -69,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   292,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -70,   239,     0,
     292,   -62,   239,   -84,    57,     0,     0,   239,   -84,   -84,
     -23,     0,   -84,   -70,   601,   -84,   -84,   -62,   603,   -23,
     -23,   333,   334,   605,   239,     0,   -23,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,     0,
     607,    -2,   268,   292,     2,     3,     4,     5,     0,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   227,     0,     0,   268,   292,     0,     0,     0,   268,
       0,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   268,    -5,   268,     0,    -5,    -5,    -5,
      -5,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   292,     0,     0,   268,   292,     0,    58,
      57,   -22,   227,     0,     0,     0,    57,    58,   -50,    57,
     -22,   -22,   355,   356,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   438,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -23,   -50,     0,    58,   -50,   -25,     0,     0,
       0,   -23,   -23,   355,   356,     0,   -25,   -25,   -25,   -25,
      98,    99,     0,     0,     0,   100,   101,   471,     0,     0,
      58,     0,   228,    -6,     0,   -25,    -6,    -6,    -6,    -6,
       0,     0,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,    58,     0,     0,   269,   502,    58,
     293,     0,     0,     0,     0,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     534,     0,     0,     0,    58,    58,    58,   -79,     0,     0,
       0,     0,   -79,   -79,     0,   293,   -79,     0,     0,   -79,
     -79,     0,   -22,   -22,   377,   378,    58,     0,   -31,   -22,
      58,     0,     0,     0,     0,   268,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   268,     0,   -31,   -31,   102,   103,
     268,     0,     0,     0,     0,   -52,   -31,     0,   268,     0,
       0,    57,    57,    57,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -51,
     -52,     0,     0,   -52,     0,   228,     0,    57,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,     0,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -28,   -51,    -7,   249,   -51,    -7,    -7,
      -7,    -7,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,   -28,   -28,   102,   103,     0,   269,   -23,   -23,   377,
     378,   -28,     0,   -80,   -23,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     293,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,   293,     0,     0,   -80,    58,     0,     0,     0,
     -80,   -80,     0,     0,   -80,     0,    -4,   -80,   -80,    -4,
      -4,    -4,    -4,     1,     0,     2,     3,     4,     5,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,     0,     0,    -8,   269,   293,    -8,    -8,    -8,    -8,
       0,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   228,     0,     0,   269,   293,     0,     0,
       0,   269,     0,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   269,   -78,   269,     0,   -78,
     -78,   -78,   -78,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   293,     0,     0,   269,   293,
       0,    59,    58,     0,   228,     0,     0,     0,    58,    59,
     -38,    58,   -73,     0,     0,   -73,   -73,   -73,   -73,   -38,
     -38,   -38,   -38,   -38,   -38,   109,   439,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,    59,   -38,   -26,
       0,     0,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,    98,    99,     0,     0,     0,   100,   101,   472,
       0,     0,    59,     0,   229,     0,     0,   -26,     0,     0,
       0,     0,     0,     0,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,    59,     0,     0,   270,
     503,    59,   294,     0,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   535,     0,     0,     0,    59,    59,    59,   -81,
       0,     0,     0,     0,   -81,   -81,     0,   294,   -81,     0,
       0,   -81,   -81,     0,     0,     0,     0,     0,    59,     0,
     -29,     0,    59,     0,     0,     0,     0,   269,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   269,     0,   -29,   -29,
     102,   103,   269,     0,     0,     0,     0,   -43,   -29,     0,
     269,     0,     0,    58,    58,    58,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -46,   -43,     0,     0,   -43,     0,   229,     0,    58,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   250,   -46,
       0,   -96,     0,     0,     0,     0,     0,     0,     0,     0,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   270,   -96,
     -96,   -96,   -96,   -96,   -96,   -82,   -96,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   294,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,   294,     0,     0,   -82,    59,     0,
       0,     0,   -82,   -82,     0,     0,   -82,     0,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,     0,     0,     0,   270,   294,     0,     0,
       0,     0,     0,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   229,     0,     0,   270,   294,
       0,     0,     0,   270,     0,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   270,     0,   270,
       0,     0,     0,     0,     0,   536,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   536,   536,   294,     0,     0,
     270,   294,     0,    60,    59,     0,   229,     0,     0,     0,
      59,    60,   -45,    59,     0,     0,     0,     0,     0,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   112,   440,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -96,   -45,     0,    60,
     -45,     0,     0,     0,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
       0,   473,     0,     0,    60,     0,   230,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,    60,     0,
       0,   271,   504,    60,   295,     0,     0,     0,     0,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   536,     0,     0,     0,    60,    60,
      60,   -83,     0,     0,     0,     0,   -83,   -83,     0,   295,
     -83,     0,     0,   -83,   -83,     0,     0,     0,     0,     0,
      60,     0,     0,     0,    60,     0,     0,     0,     0,   270,
       0,   -23,   -41,   -41,   -41,   -41,   -41,   -41,   270,     0,
     -23,   -23,   397,   398,   270,   -41,     0,   -23,   -23,   -45,
     -41,   -41,   270,     0,   -41,    59,    59,    59,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -47,   -45,     0,     0,   -45,     0,   230,
       0,    59,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     251,   -47,     0,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     271,   -48,   -48,   -48,   -48,   -48,   -48,   -86,   -48,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   295,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,   295,     0,     0,   -86,
      60,     0,     0,     0,   -86,   -86,     0,     0,   -86,     0,
       0,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,     0,     0,     0,   271,   295,
       0,     0,     0,     0,     0,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   230,     0,     0,
     271,   295,     0,     0,     0,   271,     0,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   271,
       0,   271,     0,     0,     0,     0,     0,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   295,
       0,     0,   271,   295,     0,    55,    60,   -30,   230,     0,
       0,     0,    60,    55,     0,    60,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   403,   404,     0,
     441,     0,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
       0,     0,     0,   474,   -95,     0,    55,     0,   225,   -95,
     -95,     0,     0,   -95,     0,     0,   -95,   -95,    55,    55,
      55,    55,    55,    55,    55,    55,   136,   137,   -44,     0,
      55,     0,     0,   266,   505,    55,   290,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,     0,     0,   -44,     0,     0,    54,
       0,     0,     0,     0,     0,   -96,   537,    54,     0,     0,
      55,    55,    55,     0,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   290,     0,   -96,   -96,   -96,   -96,   -96,   -96,     0,
     -96,     0,    55,   -96,   -27,     0,    55,     0,     0,     0,
       0,   271,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     271,     0,   -27,   -27,   361,   362,   271,     0,     0,     0,
      54,     0,   224,     0,   271,     0,     0,    60,    60,    60,
       0,     0,    54,    54,    54,    54,   132,   133,   134,   135,
       0,     0,     0,     0,    54,     0,     0,   265,     0,    54,
     289,     0,     0,    60,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,    54,    54,    54,   -73,     0,     0,
       0,     0,   -73,   -73,     0,   289,   -73,     0,     0,   -73,
     -73,     0,   -35,     0,     0,     0,    54,     0,     0,     0,
      54,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -39,   106,   290,     0,
     -35,     0,    55,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,     0,     0,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,   450,   451,     0,     0,     0,     0,     0,
     266,   290,     0,     0,     0,     0,     0,   225,   225,   225,
     225,   225,   225,   225,   225,   483,   484,     0,     0,   225,
       0,     0,   266,   290,     0,     0,     0,   266,     0,   266,
     266,   266,   266,   266,   266,   266,   266,   514,   515,     0,
       0,   266,     0,   266,     0,     0,     0,     0,     0,   290,
     290,   290,   290,   290,   290,   290,   290,   546,   547,     0,
       0,   290,     0,     0,   266,   290,     0,     0,    55,   -48,
     225,     0,   289,     0,    55,     0,    54,    55,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,   -48,   -30,     0,
       0,     0,     0,   446,   447,   448,   449,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   265,   289,   -30,   -30,   361,   362,
       0,   224,   224,   224,   224,   479,   480,   481,   482,     0,
       0,    53,     0,   224,     0,     0,   265,   289,     0,    53,
       0,   265,     0,   265,   265,   265,   265,   510,   511,   512,
     513,     0,     0,     0,     0,   265,     0,   265,     0,     0,
       0,     0,     0,   289,   289,   289,   289,   542,   543,   544,
     545,     0,     0,     0,     0,   289,     0,     0,   265,   289,
       0,     0,    54,     0,   224,     0,     0,     0,    54,     0,
       0,    54,    53,     0,   223,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,    53,    53,   130,   131,   -42,     0,
       0,     0,     0,   -42,   -42,   -31,    53,   -42,     0,   264,
       0,    53,   288,   266,   -31,   -31,   -31,   -31,   -31,   -31,
       0,    52,   266,   -31,   -31,   361,   362,     0,   266,    52,
       0,     0,     0,     0,     0,     0,   266,     0,     0,    55,
      55,    55,     0,     0,     0,     0,    53,    53,    53,     0,
       0,   174,    38,    39,    40,    41,    42,   288,   241,   242,
     243,   244,   245,   246,    43,    55,     0,     0,    53,    44,
      45,   247,    53,    46,     0,     0,    44,    45,     0,   -32,
      46,     0,    52,     0,   222,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,    52,   129,     0,   -32,   -32,   -32,
     -32,   104,   105,     0,     0,     0,    52,   -32,     0,   263,
     -49,    52,   287,     0,     0,     0,     0,     0,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   265,   -49,   -49,
     -49,   -49,   -49,   -49,     0,     0,   265,     0,   -49,     0,
       0,     0,   265,     0,     0,     0,    52,    52,    52,     0,
     265,   -24,     0,    54,    54,    54,     0,   287,     0,     0,
     -24,   -24,   -24,   -24,   335,   336,     0,   -24,    52,   337,
     338,     0,    52,     0,     0,     0,     0,     0,   -78,    54,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   288,     0,     0,     0,    53,     0,
     -78,     0,     0,     0,     0,   -78,   -78,   -50,     0,   -78,
       0,     0,   -78,   -78,     0,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   444,   445,   -50,   -50,   -50,   -50,   -50,
     -50,     0,     0,     0,     0,   -50,   264,   288,   -25,     0,
       0,     0,     0,   223,   223,   477,   478,   -25,   -25,   -25,
     -25,   335,   336,     0,   -25,   223,   337,   338,   264,   288,
       0,     0,     0,   264,     0,   264,   264,   508,   509,     0,
       0,   253,   254,   255,   256,   257,   258,   264,     0,   264,
       0,     0,     0,     0,   259,   288,   288,   540,   541,    44,
      45,     0,     0,    46,   287,     0,     0,   288,    52,     0,
     264,   288,     0,     0,    53,   -26,   223,     0,     0,     0,
      53,     0,     0,    53,   -26,   -26,   -26,   -26,   335,   336,
       0,   -26,   443,   337,   338,     0,    51,   180,   181,   182,
     183,   184,   185,     0,    51,     0,   263,   287,     0,     0,
     186,     0,     0,   222,   476,    44,    45,     0,     0,    46,
       0,     0,     0,     0,     0,   222,     0,     0,   263,   287,
       0,     0,   -27,   263,     0,   263,   507,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   263,   -27,   263,
     -27,   -27,   339,   340,     0,   287,   539,    51,     0,   221,
     212,   213,   214,   215,   216,   217,     0,   287,     0,   127,
     263,   287,     0,   218,    52,     0,   222,     0,    44,    45,
      52,    51,    46,    52,   262,    64,    51,   286,     0,     0,
       0,     0,     0,    64,     0,     0,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,    51,    51,    51,     0,     0,     0,     0,   -91,   264,
       0,     0,   286,   -91,   -91,     0,     0,   -91,   264,     0,
     -91,   -91,     0,    51,   264,     0,    64,    51,   232,     0,
       0,     0,   264,     0,     0,    53,    53,    53,     0,     0,
       0,   277,   278,   279,   280,   281,   282,     0,     0,     0,
     140,     0,     0,   141,   283,    64,   297,     0,     0,    44,
      45,    53,   -94,    46,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,
      64,    64,    64,     0,   -94,     0,     0,     0,     0,   -94,
     -94,   297,     0,   -94,     0,     0,   -94,   -94,     0,   263,
       0,     0,    64,     0,     0,     0,    64,     0,   263,     0,
       0,     0,     0,     0,   263,     0,     0,     0,     0,   -52,
       0,     0,   263,     0,     0,    52,    52,    52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,     0,     0,   -52,   -52,   -52,
     -52,   -52,   -52,     0,     0,   -51,     0,   -52,     0,   286,
       0,    52,     0,    51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,   -51,     0,     0,   436,     0,     0,     0,
       0,   429,   430,   431,   432,   433,   434,     0,    49,     0,
       0,   262,   286,     0,   435,     0,    49,     0,   469,    44,
      45,     0,     0,    46,   462,   463,   464,   465,   466,   467,
     221,     0,     0,   262,   286,     0,     0,   468,   262,     0,
     500,     0,    44,    45,     0,     0,    46,     0,     0,     0,
       0,     0,   262,     0,   262,     0,     0,     0,   297,     0,
     532,     0,    64,     0,     0,     0,     0,     0,     0,    49,
       0,   219,   286,     0,     0,   262,   286,     0,     0,    51,
       0,   221,     0,     0,     0,    51,     0,     0,    51,     0,
       0,     0,     0,    49,     0,    50,   260,   454,    49,   284,
     455,   297,     0,    50,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,    63,   -96,   -96,   -96,   -96,   -96,   -96,   487,
      63,     0,   488,   297,     0,     0,     0,   491,    65,     0,
       0,     0,     0,    49,    49,    49,    65,     0,     0,     0,
       0,   518,     0,   519,   284,    66,     0,     0,     0,     0,
       0,     0,     0,    66,     0,    49,    50,     0,   220,    49,
       0,   550,     0,     0,   551,   297,     0,     0,    64,     0,
     232,     0,     0,    63,    64,   231,     0,    64,     0,     0,
      50,     0,     0,   261,     0,    50,   285,     0,     0,    65,
       0,   233,   493,   494,   495,   496,   497,   498,     0,     0,
       0,     0,    63,   296,     0,   499,    66,     0,   234,     0,
      44,    45,     0,     0,    46,     0,     0,     0,    65,   298,
      50,    50,    50,   -24,   -24,   -24,   -24,   379,   380,     0,
     -24,   285,   381,   382,   262,    66,   299,    63,    63,    63,
       0,     0,    50,   262,     0,     0,    50,     0,   296,   262,
       0,     0,     0,    65,    65,    65,     0,   262,     0,    63,
      51,    51,    51,    63,   298,     0,     0,     0,     0,     0,
      66,    66,    66,     0,     0,    65,     0,     0,     0,    65,
       0,   299,     0,     0,     0,     0,    51,     0,     0,     0,
       0,   284,    66,     0,     0,    49,    66,     0,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   602,     0,     0,     0,     0,     0,     0,
     -93,     0,   604,   260,   284,   -93,   -93,     0,   606,   -93,
       0,     0,   -93,   -93,     0,     0,   608,     0,     0,    64,
      64,    64,   219,     0,     0,   260,   284,     0,     0,     0,
     260,     0,     0,     0,     0,     0,   525,   526,   527,   528,
     529,   530,     0,     0,   260,    64,   260,     0,   285,   531,
       0,     0,    50,     0,    44,    45,     0,     0,    46,     0,
       0,     0,     0,     0,   284,   296,     0,   260,   284,    63,
       0,    49,     0,   219,     0,     0,     0,    49,     0,     0,
      49,   298,     0,     0,     0,    65,     0,     0,     0,     0,
     261,   285,     0,     0,     0,     0,    67,     0,   299,     0,
       0,     0,    66,     0,    67,     0,     0,     0,   296,   220,
       0,     0,   261,   285,     0,     0,     0,   261,     0,     0,
       0,     0,     0,     0,   298,   -24,     0,     0,     0,     0,
     296,   261,     0,   261,   -24,   -24,   -24,   -24,   357,   358,
      68,   299,     0,   359,   360,     0,   298,     0,    68,     0,
       0,   285,     0,     0,   261,   285,     0,    67,    50,   235,
     220,     0,     0,   299,    50,     0,     0,    50,     0,     0,
       0,     0,   296,     0,     0,    63,     0,   231,     0,     0,
       0,    63,     0,     0,    63,     0,    67,   300,   298,     0,
       0,    65,     0,   233,     0,     0,     0,    65,    72,     0,
      65,    68,     0,   236,     0,   299,    72,     0,    66,     0,
     234,     0,     0,     0,    66,     0,     0,    66,     0,     0,
       0,    67,    67,    67,     0,     0,   260,     0,     0,     0,
      68,   301,   300,     0,     0,   260,     0,     0,     0,     0,
       0,   260,     0,    67,     0,     0,     0,    67,     0,   260,
       0,     0,    49,    49,    49,     0,     0,     0,     0,    72,
       0,   118,     0,     0,     0,    68,    68,    68,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   301,   -27,    49,   -27,
     -27,   383,   384,   -38,     0,     0,     0,    68,    72,   302,
       0,    68,   -38,   -38,   -38,   -38,   -38,   -38,   373,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,   -38,     0,   261,     0,     0,     0,     0,     0,     0,
       0,     0,   261,    72,    72,    72,     0,     0,   261,     0,
       0,     0,     0,     0,   302,     0,   261,     0,     0,    50,
      50,    50,     0,     0,     0,    72,     0,    83,     0,    72,
       0,     0,     0,     0,     0,     0,    63,    63,    63,     0,
       0,    92,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,    65,    65,    65,     0,     0,     0,     0,   300,
       0,     0,    63,    67,     0,     0,     0,     0,     0,    66,
      66,    66,     0,     0,     0,     0,     0,     0,    65,   114,
       0,     0,   117,   119,   120,     0,   122,   123,   124,   125,
       0,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,   300,   301,     0,     0,     0,    68,   -43,   142,
     143,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   300,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,   -43,     0,   -30,     0,
       0,     0,     0,     0,     0,     0,   301,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   143,   -30,   -30,   339,   340,
       0,   302,     0,     0,     0,    72,   300,   325,   301,    67,
       0,   235,     0,     0,     0,    67,     0,   -46,    67,     0,
       0,     0,     0,     0,   330,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,   302,   -46,     0,     0,     0,     0,
     301,     0,     0,    68,     0,   236,   352,     0,     0,    68,
     -45,     0,    68,     0,     0,     0,   302,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   370,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   371,     0,     0,   -45,     0,
       0,   -25,     0,     0,     0,     0,     0,   374,     0,     0,
     -25,   -25,   -25,   -25,   357,   358,     0,     0,   302,   359,
     360,    72,     0,   556,     0,   -47,     0,    72,     0,     0,
      72,   394,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -44,     0,   412,   -47,     0,     0,   415,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   424,   425,   426,   427,   -44,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -31,   143,   457,   458,   459,   460,
      67,    67,    67,   -31,   -31,   -31,   -31,   -31,   -31,   -35,
     -31,   -31,   -31,   -31,   403,   404,     0,   143,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,    67,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,   -35,   520,   521,
     522,   523,     0,     0,    68,    68,    68,   -25,   -25,   -25,
     -25,   379,   380,     0,   -25,     0,   381,   382,     0,   143,
       0,   553,     0,     0,   117,     0,   558,   559,     0,     0,
      68,     0,     0,     0,     0,     0,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   567,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,    72,    72,    72,     0,     0,     0,   -77,     0,
       0,     0,     0,   -77,   -77,     0,   576,   -77,     0,     0,
     -77,   -77,     0,     0,     0,     0,     0,     0,    72,     0,
     -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   582,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,     0,
       0,     0,   -92,     0,     0,     0,     0,   -92,   -92,     0,
       0,   -92,     0,     0,   -92,   -92,     0,     0,   -90,   590,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,     0,     0,     0,
     -90,     0,     0,     0,     0,   -90,   -90,     0,     0,   -90,
       0,     0,   -90,   -90,    26,     0,     2,     3,     4,     5,
      27,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,   174,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,    46,     0,   325,    47,   -54,
     -85,     0,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,   -85,   -85,     0,
       0,   -85,     0,     0,   -85,   -85,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,   -84,   -84,     0,     0,   -84,     0,     0,
     -84,   -84,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -76,     0,     0,   -76,     0,     0,   -76,   -76,   -79,     0,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
     -79,     0,     0,     0,     0,   -79,   -79,     0,     0,   -79,
       0,     0,   -79,   -79,   -80,     0,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,   -80,     0,     0,     0,
       0,   -80,   -80,     0,     0,   -80,     0,     0,   -80,   -80,
     -81,     0,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,     0,   -81,   -81,     0,
       0,   -81,     0,     0,   -81,   -81,   -82,     0,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,   -82,   -82,     0,     0,   -82,     0,     0,
     -82,   -82,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,     0,     0,   -83,   -83,   -86,     0,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,     0,     0,     0,   -86,   -86,     0,     0,   -86,
       0,     0,   -86,   -86,   -95,     0,   -95,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
       0,     0,     0,     0,     0,     0,   -95,     0,     0,     0,
       0,   -95,   -95,     0,     0,   -95,     0,     0,   -95,   -95,
     305,     0,     2,     3,     4,     5,   306,     0,   307,   308,
     309,    31,    32,   310,   311,   312,    36,     0,    37,   174,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    44,    45,     0,
       0,    46,     0,   313,    26,   -54,     2,     3,     4,     5,
      27,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,   174,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,    46,     0,   322,   -91,   -54,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,     0,     0,     0,
     -91,     0,     0,     0,     0,   -91,   -91,     0,     0,   -91,
       0,     0,   -91,   -91,   -94,     0,   -94,   -94,   -94,   -94,
     -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,
       0,     0,     0,     0,     0,     0,   -94,     0,     0,     0,
       0,   -94,   -94,     0,     0,   -94,     0,     0,   -94,   -94,
     -93,     0,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,     0,
       0,     0,   -93,     0,     0,     0,     0,   -93,   -93,     0,
       0,   -93,     0,     0,   -93,   -93,   -92,     0,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,     0,     0,     0,     0,     0,   -92,     0,
       0,     0,     0,   -92,   -92,     0,     0,   -92,     0,     0,
     -92,   -92,   -89,     0,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,     0,     0,     0,   -89,     0,     0,     0,     0,   -89,
     -89,     0,     0,   -89,     0,     0,   -89,   -89,   -90,     0,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,     0,     0,     0,
     -90,     0,     0,     0,     0,   -90,   -90,     0,     0,   -90,
       0,     0,   -90,   -90,   -78,     0,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,   -78,     0,     0,     0,
       0,   -78,   -78,     0,     0,   -78,     0,     0,   -78,   -78,
     -74,     0,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,     0,     0,   -74,   -74,     0,
       0,   -74,     0,     0,   -74,   -74,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,   -75,     0,
       0,     0,     0,   -75,   -75,     0,     0,   -75,     0,     0,
     -75,   -75,    26,     0,     2,     3,     4,     5,    27,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,   174,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,    44,
      45,     0,     0,    46,     0,     0,   560,   -54,    26,     0,
       2,     3,     4,     5,    27,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,   174,    38,    39,
      40,    41,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,    44,    45,     0,     0,    46,
       0,     0,   562,   -54,   -73,     0,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,   -73,   -73,     0,     0,   -73,     0,     0,   -73,   -73,
     -88,     0,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,   -88,     0,     0,     0,     0,   -88,   -88,   -33,
       0,   -88,     0,     0,   -88,   -88,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,   -33,   -33,   -33,
     -33,   104,   105,   -34,     0,     0,     0,   -33,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,   -34,   -34,   -34,   -34,   104,   105,   -36,     0,     0,
       0,   -34,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -37,     0,     0,     0,   -36,     0,     0,     0,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -39,     0,     0,     0,   -37,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -96,
       0,     0,     0,   -39,     0,     0,     0,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -48,   -96,     0,     0,     0,     0,     0,
       0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -49,   -48,     0,
       0,     0,     0,     0,     0,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -50,   -49,     0,     0,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -52,   -50,     0,     0,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -51,
     -52,     0,     0,     0,     0,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -38,   -51,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   410,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -43,   -38,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -46,   -43,     0,     0,     0,     0,     0,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -45,   -46,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     411,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -47,   -45,     0,     0,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -44,   -47,     0,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -49,   -44,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -50,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -52,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -51,   -52,   -52,   -52,   -52,   -52,   -52,     0,
     -52,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -38,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -38,   -38,
     -38,   -38,   -38,   -38,   346,   -38,   -43,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -46,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -45,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -45,
     -45,   -45,   -45,   -45,   -45,   347,   -45,   -35,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -45,   407,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -39,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -47,   -39,     0,     0,     0,     0,     0,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -44,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -35,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -96,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   343,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,
     -48,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -49,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -50,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -52,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -51,   -52,
     -52,   -52,   -52,   -52,   -52,     0,   -52,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,     0,   -38,   -51,   -51,   -51,   -51,
     -51,   -51,     0,   -51,   -38,   -38,   -38,   -38,   -38,   -38,
     368,     0,   -43,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -46,
     -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -45,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -45,   -45,   -45,   -45,   -45,
     -45,   369,     0,   -39,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -45,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -47,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,   -44,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -35,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -39,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   365,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -48,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -49,
       0,     0,     0,     0,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -51,     0,     0,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     592,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -46,     0,     0,     0,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -47,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -44,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -96,   -32,   -32,   -32,   -32,   -32,
     -32,   405,   406,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -48,   -96,   -96,   -96,   -96,   -96,   -96,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -49,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -50,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -52,   -50,   -50,   -50,   -50,   -50,   -50,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -51,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -38,   -51,   -51,   -51,
     -51,   -51,   -51,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   569,   -38,   -43,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -46,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -45,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -35,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -33,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -33,   -33,
     -33,   -33,   -33,   -33,   -34,   -33,   -33,   -33,   -33,   -33,
     -33,   405,   406,   -34,   -34,   -34,   -34,   -34,   -34,   -36,
     -34,   -34,   -34,   -34,   -34,   -34,   405,   406,   -36,   -36,
     -36,   -36,   -36,   -36,   -37,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,   -39,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -39,   -39,
     -39,   -39,   -39,   -39,   -47,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -44,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -32,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -35,   -32,     0,   -32,   -32,   -32,   -32,
     341,   342,   -35,   -35,   -35,   -35,   -35,   -35,   -33,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -33,   -33,   -33,
     -33,   -33,   -33,   -34,   -33,     0,   -33,   -33,   -33,   -33,
     341,   342,   -34,   -34,   -34,   -34,   -34,   -34,   -36,   -34,
       0,   -34,   -34,   -34,   -34,   341,   342,   -36,   -36,   -36,
     -36,   -36,   -36,   -37,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,   -96,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -48,     0,   -96,   -96,   -96,   -96,
     -96,   -96,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -49,     0,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -50,     0,   -49,   -49,
     -49,   -49,   -49,   -49,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -52,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -51,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -38,     0,   -51,   -51,   -51,   -51,
     -51,   -51,     0,   -38,   -38,   -38,   -38,   -38,   -38,   578,
     -43,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -46,     0,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -45,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -39,     0,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -47,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -44,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -32,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -35,     0,     0,   -32,   -32,   -32,   -32,   363,   364,   -35,
     -35,   -35,   -35,   -35,   -35,   -33,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -33,   -33,   -33,   -33,   -33,   -33,
     -34,     0,     0,   -33,   -33,   -33,   -33,   363,   364,   -34,
     -34,   -34,   -34,   -34,   -34,   -36,     0,     0,   -34,   -34,
     -34,   -34,   363,   364,   -36,   -36,   -36,   -36,   -36,   -36,
     -37,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -37,
     -37,   -37,   -37,   -37,   -37,   -39,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -39,   -39,   -39,   -39,   -39,   -39,
     -28,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -28,
     -28,   -28,   -28,   -28,   -28,   -29,   -28,   -28,   -28,   -28,
     403,   404,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -31,   -29,   -29,   -29,   -29,   403,   404,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -28,   -31,     0,   -31,   -31,
     339,   340,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -29,   -28,     0,   -28,   -28,   339,   340,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -28,   -29,     0,   -29,   -29,
     339,   340,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -29,     0,     0,   -28,   -28,   361,   362,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -24,     0,     0,   -29,   -29,
     361,   362,     0,     0,   -24,   -24,   -24,   -24,   399,   400,
     -25,   -24,   -24,   401,   402,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,   399,   400,   -26,   -25,   -25,   401,   402,
       0,     0,     0,     0,   -26,   -26,   -26,   -26,   399,   400,
     -26,   -26,   -26,   401,   402,     0,     0,     0,     0,   -26,
     -26,   -26,   -26,   357,   358,     0,     0,     0,   359,   360,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,
     -96,   -96,   -96,   -96,   -96,     0,   -96,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,
     -52,   -52,   -52,     0,   -52,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -51,   -38,   -38,   -38,   -38,   -38,   -38,   389,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     387,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,
     -52,   -52,   -52,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -38,   -38,
     -38,   -38,   -38,   -38,   584,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
     -32,   385,   386,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,
     -33,   385,   386,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,   -34,   -34,   -34,   385,   386,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   383,   384,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,     0,   -31,   -31,   383,   384,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     383,   384,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,   -29,   -29,   383,   384,   -26,   -26,   -26,   -26,   379,
     380,     0,   -26,     0,   381,   382
};

static const yytype_int16 yycheck[] =
{
       0,     0,    10,   347,    15,    21,    18,     7,     7,   313,
      27,    28,     0,    21,    22,    27,   146,    34,   322,    19,
      18,    29,   146,   146,    18,   369,   146,     3,     4,     5,
       6,    18,    18,    27,    28,    29,    30,    31,    32,    33,
      48,    18,    36,    37,    38,    39,    40,    41,    46,    57,
      27,    28,    46,   146,    82,    18,    18,    18,    34,    46,
      46,   148,    33,    27,    27,    28,    27,   411,    20,    46,
      34,    18,    20,    34,    82,    46,    84,    18,    18,    87,
      80,   168,    18,    46,    46,   172,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    46,
      18,   109,    18,   111,   112,    46,    46,    18,    18,    27,
      46,    27,    28,    29,    30,    31,    32,    33,   146,   147,
      36,    37,    38,    39,    40,    41,    18,    43,    46,    18,
      46,    18,   148,     0,    18,    46,    46,   148,   146,   147,
     148,   169,    18,    18,    44,    34,   146,   146,    20,   157,
      18,    20,   168,    34,    46,    20,   172,   168,    34,    46,
     168,   172,    46,    20,   172,    20,    34,    18,    18,    18,
       1,    46,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   195,    19,    20,
      21,    22,    23,    24,    25,    46,    46,    46,    34,    33,
      18,    33,    33,    18,    18,    33,    18,    38,    39,    27,
      28,    42,    46,    33,    45,    46,    12,    13,    18,   227,
      34,    17,    34,    19,    20,    21,    22,    23,    24,    25,
      33,    46,    18,    46,    34,    35,    18,    33,    33,    33,
     248,    27,    38,    39,    33,    18,    42,    44,    34,    35,
      46,    20,    34,    35,    27,    28,    29,    30,    31,    32,
     268,    34,    35,    36,    37,    38,    39,     1,    33,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   292,    19,    20,    21,    22,    23,
      24,    25,    33,    18,    18,    33,   304,    18,    46,    33,
     308,    18,    27,    28,    38,    39,   314,    34,    42,    18,
      34,    45,    46,    34,    35,    27,    28,    34,    27,    28,
      29,    30,    34,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,    46,    46,   346,   347,
      34,    35,    18,    34,    35,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,    34,    35,
     368,   369,    34,    35,    18,   373,    18,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
      34,   389,    34,    35,    18,    18,   414,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
      34,    35,   410,   411,   420,    21,   414,   423,   416,   417,
      34,    34,   420,    29,    34,   423,    12,    13,    46,    34,
      46,    17,    34,    19,    20,    21,    22,    23,    24,    25,
     438,    20,    21,    22,    23,    24,    25,    33,    34,    46,
      18,    57,    38,    39,    33,    18,    42,    46,    18,    38,
      39,    34,    33,    42,    27,    28,    34,    27,    28,    29,
      30,    34,    35,   471,    33,   595,    82,   597,    84,    33,
      33,   595,   595,   597,   597,   595,    46,   597,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   621,    46,   109,   502,   111,   112,   621,   621,    18,
      33,   621,   595,    33,   597,    33,    33,    18,   595,    18,
     597,    18,    12,    13,    18,    34,    35,    17,    34,    19,
      20,    21,    22,    23,    24,    25,   534,    34,   621,    18,
     146,   147,   148,    33,   621,    18,    18,    18,    38,    39,
      18,   157,    42,    18,    27,    28,    29,    30,    31,    32,
      34,    46,   168,    36,    37,    18,   172,    18,    46,    34,
      35,   569,    18,    46,    27,    28,    18,   595,   596,   597,
     578,    34,    35,    34,    35,    33,   584,    34,    34,   195,
      33,    18,    34,    35,   592,    18,    33,   595,   596,   597,
      33,   619,    33,   621,    18,   595,   595,   597,   597,    33,
      46,    34,    35,    27,    28,    29,    30,    12,    13,    18,
      34,   227,    17,   621,    19,    20,    21,    22,    23,    24,
      25,   621,   621,    33,    18,    34,    35,    33,    33,    34,
      18,    18,   248,    38,    39,    33,    33,    42,    18,    27,
      28,    29,    30,    31,    32,    34,    18,    34,    36,    37,
      38,    39,   268,    34,    34,    35,    34,    34,    46,     1,
      34,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   292,    19,    20,    21,
      22,    23,    24,    25,    34,    18,    34,    34,   304,    18,
      34,    33,   308,    18,    18,    18,    38,    39,    18,    18,
      42,    34,    35,    45,    46,    34,    35,    27,    28,    34,
      35,    34,    18,    18,    34,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,    18,    34,    34,
     346,   347,    46,    46,    18,    18,    46,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
      34,    34,   368,   369,    34,    34,    18,   373,    18,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,    34,   389,    34,    34,    18,    18,    34,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,    34,    34,   410,   411,    18,    21,   414,    46,
     416,    34,     7,    80,   420,    29,   157,   423,    12,    13,
      18,    18,    34,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,   438,    18,    18,    -1,    34,    34,    -1,    33,
      -1,    -1,    -1,    57,    38,    39,    12,    13,    42,    34,
      34,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    18,    18,    18,    -1,   471,    -1,    33,    82,    -1,
      84,    -1,    38,    39,    -1,    -1,    42,    34,    34,    34,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,   109,   502,   111,   112,     3,
       4,     5,     6,     1,    18,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      34,    19,    20,    21,    22,    23,    24,    25,   534,    18,
      18,    -1,   146,   147,   148,    33,    18,    18,    27,    28,
      38,    39,    -1,   157,    42,    34,    34,    45,    46,    -1,
      -1,    -1,    34,    34,   168,    18,    -1,    -1,   172,    -1,
      -1,    18,    -1,   569,    27,    28,    29,    30,    31,    32,
      -1,    18,   578,    36,    37,    38,    39,    34,   584,    18,
      18,    18,    -1,    46,    -1,    -1,   592,    34,    -1,   595,
     596,   597,    18,    12,    13,    34,    34,    34,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    34,    18,
      -1,    -1,    -1,   227,    33,   621,    -1,    18,    -1,    38,
      39,    -1,    -1,    42,    -1,    34,    27,    28,    29,    30,
      31,    32,    33,    18,   248,    36,    37,    38,    39,    40,
      41,    18,    43,    18,    18,    46,    18,    -1,    -1,    34,
      27,    28,    29,    30,   268,    -1,    -1,    34,    35,    34,
      34,     1,    34,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   292,    19,
      20,    21,    22,    23,    24,    25,    -1,    18,    18,    -1,
     304,    18,    18,    33,   308,    -1,    -1,    18,    38,    39,
      18,    -1,    42,    34,    34,    45,    46,    34,    34,    27,
      28,    29,    30,    34,    18,    -1,    34,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
      34,     0,   346,   347,     3,     4,     5,     6,    -1,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,    -1,    -1,   368,   369,    -1,    -1,    -1,   373,
      -1,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,     0,   389,    -1,     3,     4,     5,
       6,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,    -1,    21,
     414,    18,   416,    -1,    -1,    -1,   420,    29,    18,   423,
      27,    28,    29,    30,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,   438,    -1,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    57,    46,    18,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,   471,    -1,    -1,
      82,    -1,    84,     0,    -1,    46,     3,     4,     5,     6,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,   109,   502,   111,
     112,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
     534,    -1,    -1,    -1,   146,   147,   148,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,   157,    42,    -1,    -1,    45,
      46,    -1,    27,    28,    29,    30,   168,    -1,    18,    34,
     172,    -1,    -1,    -1,    -1,   569,    -1,    27,    28,    29,
      30,    31,    32,    -1,   578,    -1,    36,    37,    38,    39,
     584,    -1,    -1,    -1,    -1,    18,    46,    -1,   592,    -1,
      -1,   595,   596,   597,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    18,
      43,    -1,    -1,    46,    -1,   227,    -1,   621,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    18,    43,     0,   248,    46,     3,     4,
       5,     6,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    -1,   268,    27,    28,    29,
      30,    46,    -1,     1,    34,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
     292,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    33,   308,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,     0,    45,    46,     3,
       4,     5,     6,     1,    -1,     3,     4,     5,     6,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,    -1,    -1,     0,   346,   347,     3,     4,     5,     6,
      -1,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,    -1,    -1,   368,   369,    -1,    -1,
      -1,   373,    -1,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,     0,   389,    -1,     3,
       4,     5,     6,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,    -1,    -1,   410,   411,
      -1,    21,   414,    -1,   416,    -1,    -1,    -1,   420,    29,
      18,   423,     0,    -1,    -1,     3,     4,     5,     6,    27,
      28,    29,    30,    31,    32,    33,   438,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    57,    46,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,   471,
      -1,    -1,    82,    -1,    84,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,   109,
     502,   111,   112,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,   534,    -1,    -1,    -1,   146,   147,   148,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,   157,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,   168,    -1,
      18,    -1,   172,    -1,    -1,    -1,    -1,   569,    -1,    27,
      28,    29,    30,    31,    32,    -1,   578,    -1,    36,    37,
      38,    39,   584,    -1,    -1,    -1,    -1,    18,    46,    -1,
     592,    -1,    -1,   595,   596,   597,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    18,    43,    -1,    -1,    46,    -1,   227,    -1,   621,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,   248,    46,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,   268,    36,
      37,    38,    39,    40,    41,     1,    43,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   292,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    33,   308,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,    -1,    -1,    -1,   346,   347,    -1,    -1,
      -1,    -1,    -1,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,    -1,    -1,   368,   369,
      -1,    -1,    -1,   373,    -1,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,    -1,   389,
      -1,    -1,    -1,    -1,    -1,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,    -1,    -1,
     410,   411,    -1,    21,   414,    -1,   416,    -1,    -1,    -1,
     420,    29,    18,   423,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,   438,    -1,
      36,    37,    38,    39,    40,    41,    18,    43,    -1,    57,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,   471,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,   109,   502,   111,   112,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,   534,    -1,    -1,    -1,   146,   147,
     148,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,   157,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,   569,
      -1,    18,    20,    21,    22,    23,    24,    25,   578,    -1,
      27,    28,    29,    30,   584,    33,    -1,    34,    35,    18,
      38,    39,   592,    -1,    42,   595,   596,   597,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    18,    43,    -1,    -1,    46,    -1,   227,
      -1,   621,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
     248,    46,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
     268,    36,    37,    38,    39,    40,    41,     1,    43,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   292,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,   304,    -1,    -1,    33,
     308,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,    -1,    -1,    -1,   346,   347,
      -1,    -1,    -1,    -1,    -1,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,    -1,    -1,
     368,   369,    -1,    -1,    -1,   373,    -1,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
      -1,   389,    -1,    -1,    -1,    -1,    -1,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
      -1,    -1,   410,   411,    -1,    21,   414,    18,   416,    -1,
      -1,    -1,   420,    29,    -1,   423,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    -1,
     438,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,   471,    33,    -1,    82,    -1,    84,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    18,    -1,
     106,    -1,    -1,   109,   502,   111,   112,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    18,   534,    29,    -1,    -1,
     146,   147,   148,    -1,    27,    28,    29,    30,    31,    32,
      33,   157,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,   168,    46,    18,    -1,   172,    -1,    -1,    -1,
      -1,   569,    -1,    27,    28,    29,    30,    31,    32,    -1,
     578,    -1,    36,    37,    38,    39,   584,    -1,    -1,    -1,
      82,    -1,    84,    -1,   592,    -1,    -1,   595,   596,   597,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,    -1,    -1,   109,    -1,   111,
     112,    -1,    -1,   621,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,   146,   147,   148,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,   157,    42,    -1,    -1,    45,
      46,    -1,    18,    -1,    -1,    -1,   168,    -1,    -1,    -1,
     172,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    18,    43,   304,    -1,
      46,    -1,   308,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,   340,    -1,    -1,    -1,    -1,    -1,
     346,   347,    -1,    -1,    -1,    -1,    -1,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,    -1,    -1,   365,
      -1,    -1,   368,   369,    -1,    -1,    -1,   373,    -1,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    -1,
      -1,   387,    -1,   389,    -1,    -1,    -1,    -1,    -1,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,    -1,
      -1,   407,    -1,    -1,   410,   411,    -1,    -1,   414,    18,
     416,    -1,   304,    -1,   420,    -1,   308,   423,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    18,    -1,
      -1,    -1,    -1,   335,   336,   337,   338,    27,    28,    29,
      30,    31,    32,    -1,   346,   347,    36,    37,    38,    39,
      -1,   353,   354,   355,   356,   357,   358,   359,   360,    -1,
      -1,    21,    -1,   365,    -1,    -1,   368,   369,    -1,    29,
      -1,   373,    -1,   375,   376,   377,   378,   379,   380,   381,
     382,    -1,    -1,    -1,    -1,   387,    -1,   389,    -1,    -1,
      -1,    -1,    -1,   395,   396,   397,   398,   399,   400,   401,
     402,    -1,    -1,    -1,    -1,   407,    -1,    -1,   410,   411,
      -1,    -1,   414,    -1,   416,    -1,    -1,    -1,   420,    -1,
      -1,   423,    82,    -1,    84,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    94,    95,    96,    97,    33,    -1,
      -1,    -1,    -1,    38,    39,    18,   106,    42,    -1,   109,
      -1,   111,   112,   569,    27,    28,    29,    30,    31,    32,
      -1,    21,   578,    36,    37,    38,    39,    -1,   584,    29,
      -1,    -1,    -1,    -1,    -1,    -1,   592,    -1,    -1,   595,
     596,   597,    -1,    -1,    -1,    -1,   146,   147,   148,    -1,
      -1,    20,    21,    22,    23,    24,    25,   157,    20,    21,
      22,    23,    24,    25,    33,   621,    -1,    -1,   168,    38,
      39,    33,   172,    42,    -1,    -1,    38,    39,    -1,    18,
      42,    -1,    82,    -1,    84,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    94,    95,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,   106,    46,    -1,   109,
      18,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,   569,    36,    37,
      38,    39,    40,    41,    -1,    -1,   578,    -1,    46,    -1,
      -1,    -1,   584,    -1,    -1,    -1,   146,   147,   148,    -1,
     592,    18,    -1,   595,   596,   597,    -1,   157,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,   168,    36,
      37,    -1,   172,    -1,    -1,    -1,    -1,    -1,     1,   621,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,   304,    -1,    -1,    -1,   308,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    18,    -1,    42,
      -1,    -1,    45,    46,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,   333,   334,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,   346,   347,    18,    -1,
      -1,    -1,    -1,   353,   354,   355,   356,    27,    28,    29,
      30,    31,    32,    -1,    34,   365,    36,    37,   368,   369,
      -1,    -1,    -1,   373,    -1,   375,   376,   377,   378,    -1,
      -1,    20,    21,    22,    23,    24,    25,   387,    -1,   389,
      -1,    -1,    -1,    -1,    33,   395,   396,   397,   398,    38,
      39,    -1,    -1,    42,   304,    -1,    -1,   407,   308,    -1,
     410,   411,    -1,    -1,   414,    18,   416,    -1,    -1,    -1,
     420,    -1,    -1,   423,    27,    28,    29,    30,    31,    32,
      -1,    34,   332,    36,    37,    -1,    21,    20,    21,    22,
      23,    24,    25,    -1,    29,    -1,   346,   347,    -1,    -1,
      33,    -1,    -1,   353,   354,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,   368,   369,
      -1,    -1,    18,   373,    -1,   375,   376,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,   387,    34,   389,
      36,    37,    38,    39,    -1,   395,   396,    82,    -1,    84,
      20,    21,    22,    23,    24,    25,    -1,   407,    -1,    94,
     410,   411,    -1,    33,   414,    -1,   416,    -1,    38,    39,
     420,   106,    42,   423,   109,    21,   111,   112,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,   146,   147,   148,    -1,    -1,    -1,    -1,    33,   569,
      -1,    -1,   157,    38,    39,    -1,    -1,    42,   578,    -1,
      45,    46,    -1,   168,   584,    -1,    82,   172,    84,    -1,
      -1,    -1,   592,    -1,    -1,   595,   596,   597,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     106,    -1,    -1,   109,    33,   111,   112,    -1,    -1,    38,
      39,   621,     1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     146,   147,   148,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,   157,    -1,    42,    -1,    -1,    45,    46,    -1,   569,
      -1,    -1,   168,    -1,    -1,    -1,   172,    -1,   578,    -1,
      -1,    -1,    -1,    -1,   584,    -1,    -1,    -1,    -1,    18,
      -1,    -1,   592,    -1,    -1,   595,   596,   597,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    18,    -1,    46,    -1,   304,
      -1,   621,    -1,   308,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,   331,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    21,    -1,
      -1,   346,   347,    -1,    33,    -1,    29,    -1,   353,    38,
      39,    -1,    -1,    42,    20,    21,    22,    23,    24,    25,
     365,    -1,    -1,   368,   369,    -1,    -1,    33,   373,    -1,
     375,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,   387,    -1,   389,    -1,    -1,    -1,   304,    -1,
     395,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    84,   407,    -1,    -1,   410,   411,    -1,    -1,   414,
      -1,   416,    -1,    -1,    -1,   420,    -1,    -1,   423,    -1,
      -1,    -1,    -1,   106,    -1,    21,   109,   343,   111,   112,
     346,   347,    -1,    29,    27,    28,    29,    30,    31,    32,
      33,    34,    21,    36,    37,    38,    39,    40,    41,   365,
      29,    -1,   368,   369,    -1,    -1,    -1,   373,    21,    -1,
      -1,    -1,    -1,   146,   147,   148,    29,    -1,    -1,    -1,
      -1,   387,    -1,   389,   157,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   168,    82,    -1,    84,   172,
      -1,   407,    -1,    -1,   410,   411,    -1,    -1,   414,    -1,
     416,    -1,    -1,    82,   420,    84,    -1,   423,    -1,    -1,
     106,    -1,    -1,   109,    -1,   111,   112,    -1,    -1,    82,
      -1,    84,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,   111,   112,    -1,    33,    82,    -1,    84,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,   111,   112,
     146,   147,   148,    27,    28,    29,    30,    31,    32,    -1,
      34,   157,    36,    37,   569,   111,   112,   146,   147,   148,
      -1,    -1,   168,   578,    -1,    -1,   172,    -1,   157,   584,
      -1,    -1,    -1,   146,   147,   148,    -1,   592,    -1,   168,
     595,   596,   597,   172,   157,    -1,    -1,    -1,    -1,    -1,
     146,   147,   148,    -1,    -1,   168,    -1,    -1,    -1,   172,
      -1,   157,    -1,    -1,    -1,    -1,   621,    -1,    -1,    -1,
      -1,   304,   168,    -1,    -1,   308,   172,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,   569,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,   578,   346,   347,    38,    39,    -1,   584,    42,
      -1,    -1,    45,    46,    -1,    -1,   592,    -1,    -1,   595,
     596,   597,   365,    -1,    -1,   368,   369,    -1,    -1,    -1,
     373,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,   387,   621,   389,    -1,   304,    33,
      -1,    -1,   308,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,   407,   304,    -1,   410,   411,   308,
      -1,   414,    -1,   416,    -1,    -1,    -1,   420,    -1,    -1,
     423,   304,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
     346,   347,    -1,    -1,    -1,    -1,    21,    -1,   304,    -1,
      -1,    -1,   308,    -1,    29,    -1,    -1,    -1,   347,   365,
      -1,    -1,   368,   369,    -1,    -1,    -1,   373,    -1,    -1,
      -1,    -1,    -1,    -1,   347,    18,    -1,    -1,    -1,    -1,
     369,   387,    -1,   389,    27,    28,    29,    30,    31,    32,
      21,   347,    -1,    36,    37,    -1,   369,    -1,    29,    -1,
      -1,   407,    -1,    -1,   410,   411,    -1,    82,   414,    84,
     416,    -1,    -1,   369,   420,    -1,    -1,   423,    -1,    -1,
      -1,    -1,   411,    -1,    -1,   414,    -1,   416,    -1,    -1,
      -1,   420,    -1,    -1,   423,    -1,   111,   112,   411,    -1,
      -1,   414,    -1,   416,    -1,    -1,    -1,   420,    21,    -1,
     423,    82,    -1,    84,    -1,   411,    29,    -1,   414,    -1,
     416,    -1,    -1,    -1,   420,    -1,    -1,   423,    -1,    -1,
      -1,   146,   147,   148,    -1,    -1,   569,    -1,    -1,    -1,
     111,   112,   157,    -1,    -1,   578,    -1,    -1,    -1,    -1,
      -1,   584,    -1,   168,    -1,    -1,    -1,   172,    -1,   592,
      -1,    -1,   595,   596,   597,    -1,    -1,    -1,    -1,    82,
      -1,    84,    -1,    -1,    -1,   146,   147,   148,    -1,    -1,
      27,    28,    29,    30,    31,    32,   157,    34,   621,    36,
      37,    38,    39,    18,    -1,    -1,    -1,   168,   111,   112,
      -1,   172,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,   569,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   578,   146,   147,   148,    -1,    -1,   584,    -1,
      -1,    -1,    -1,    -1,   157,    -1,   592,    -1,    -1,   595,
     596,   597,    -1,    -1,    -1,   168,    -1,    29,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,   595,   596,   597,    -1,
      -1,    43,    -1,    -1,    -1,   621,    -1,    -1,    -1,    -1,
      -1,    -1,   595,   596,   597,    -1,    -1,    -1,    -1,   304,
      -1,    -1,   621,   308,    -1,    -1,    -1,    -1,    -1,   595,
     596,   597,    -1,    -1,    -1,    -1,    -1,    -1,   621,    81,
      -1,    -1,    84,    85,    86,    -1,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,   621,    -1,    -1,    -1,    -1,
      -1,    -1,   347,   304,    -1,    -1,    -1,   308,    18,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,   369,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   347,    27,    28,    29,
      30,    31,    32,    -1,    34,   157,    36,    37,    38,    39,
      -1,   304,    -1,    -1,    -1,   308,   411,   169,   369,   414,
      -1,   416,    -1,    -1,    -1,   420,    -1,    18,   423,    -1,
      -1,    -1,    -1,    -1,   186,    -1,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,   347,    46,    -1,    -1,    -1,    -1,
     411,    -1,    -1,   414,    -1,   416,   218,    -1,    -1,   420,
      18,    -1,   423,    -1,    -1,    -1,   369,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,   239,    36,    37,
      38,    39,    40,    41,    -1,   247,    -1,    -1,    46,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,   411,    36,
      37,   414,    -1,   416,    -1,    18,    -1,   420,    -1,    -1,
     423,   283,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      18,    -1,   304,    46,    -1,    -1,   308,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,   326,   327,   328,   329,    46,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    18,   347,   348,   349,   350,   351,
     595,   596,   597,    27,    28,    29,    30,    31,    32,    18,
      34,    35,    36,    37,    38,    39,    -1,   369,    27,    28,
      29,    30,    31,    32,    -1,    -1,   621,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,   390,   391,
     392,   393,    -1,    -1,   595,   596,   597,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    -1,   411,
      -1,   413,    -1,    -1,   416,    -1,   418,   419,    -1,    -1,
     621,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   435,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,   595,   596,   597,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,   468,    42,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,   621,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   499,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    -1,    -1,     1,   531,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,   619,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,     1,    46,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,     1,    46,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    18,
      -1,    42,    -1,    -1,    45,    46,    -1,    -1,    27,    28,
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
      33,    34,    35,    36,    37,    38,    39,    40,    41,    18,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    18,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    18,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    33,    34,    18,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
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
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    18,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    18,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    18,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    -1,    34,    18,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    -1,
      18,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    -1,    18,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    -1,    18,    36,    37,    38,    39,    40,
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
      -1,    43,    27,    28,    29,    30,    31,    32,    -1,    34,
      18,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    -1,    18,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    -1,    18,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      -1,    18,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    -1,    -1,    18,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    -1,    -1,    18,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    18,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
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
      31,    32,    33,    34,    18,    36,    37,    38,    39,    40,
      41,    -1,    -1,    27,    28,    29,    30,    31,    32,    18,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    18,    36,    37,    38,    39,    40,    41,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    18,    36,
      37,    38,    39,    40,    41,    -1,    -1,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
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
      32,    33,    18,    -1,    36,    37,    38,    39,    40,    41,
      -1,    27,    28,    29,    30,    31,    32,    33,    18,    -1,
      36,    37,    38,    39,    40,    41,    -1,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    18,
      -1,    36,    37,    38,    39,    40,    41,    -1,    27,    28,
      29,    30,    31,    32,    33,    18,    -1,    36,    37,    38,
      39,    40,    41,    -1,    27,    28,    29,    30,    31,    32,
      18,    -1,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    -1,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    -1,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    -1,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    -1,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    -1,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    -1,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    -1,    -1,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    -1,    -1,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    -1,    -1,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    -1,    -1,    27,    28,    29,    30,    31,    32,
      18,    -1,    -1,    36,    37,    38,    39,    -1,    -1,    27,
      28,    29,    30,    31,    32,    18,    -1,    -1,    36,    37,
      38,    39,    -1,    -1,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,    37,
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
      32,    -1,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    48,    49,    50,    51,
      52,    82,     0,    50,    20,    53,    90,    44,    79,    33,
      46,    81,    52,    54,    55,    56,     1,     7,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    19,    21,    22,
      23,    24,    25,    33,    38,    39,    42,    45,    52,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    74,    75,    76,    77,    78,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    90,    34,
      35,    33,    33,    70,    33,    33,    33,    33,    33,    33,
      33,    33,    70,    90,    27,    28,    29,    30,    31,    32,
      36,    37,    38,    39,    40,    41,    43,    64,    90,    33,
      46,    18,    33,    55,    70,    69,    46,    70,    85,    70,
      70,    90,    70,    70,    70,    70,    34,    59,    64,    60,
      61,    61,    62,    62,    62,    62,    63,    63,    64,    64,
      74,    74,    70,    70,    72,    73,    34,    46,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    35,    34,    79,
      80,    83,    69,    80,    46,    46,    46,    73,     8,    46,
      80,    69,    34,    80,    20,    20,    12,    13,    17,    19,
      20,    21,    22,    23,    24,    25,    33,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    71,
      74,    75,    76,    77,    78,    85,    90,    20,    12,    13,
      17,    19,    20,    21,    22,    23,    24,    25,    33,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    71,    74,    75,    76,    77,    78,    90,    20,    18,
      46,    20,    21,    22,    23,    24,    25,    33,    65,    66,
      67,    68,    90,    20,    21,    22,    23,    24,    25,    33,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    90,    12,    13,    17,    19,    20,    21,    22,
      23,    24,    25,    33,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    71,    74,    75,    76,
      77,    78,    85,    90,    18,     1,     7,     9,    10,    11,
      14,    15,    16,    44,    52,    69,    82,    84,    86,    87,
      88,    89,    44,    79,    83,    70,    33,    33,    33,    33,
      70,    27,    28,    29,    30,    31,    32,    36,    37,    38,
      39,    40,    41,    43,    64,    90,    33,    33,    33,    33,
      33,    33,    70,    27,    28,    29,    30,    31,    32,    36,
      37,    38,    39,    40,    41,    43,    64,    90,    33,    33,
      70,    70,    64,    33,    70,    27,    28,    29,    30,    31,
      32,    36,    37,    38,    39,    40,    41,    43,    64,    33,
      33,    33,    33,    33,    70,    27,    28,    29,    30,    31,
      32,    36,    37,    38,    39,    40,    41,    43,    64,    90,
      33,    33,    70,    33,    33,    70,    33,    33,    33,    33,
      81,    90,    46,    81,    70,    70,    70,    70,    34,    20,
      21,    22,    23,    24,    25,    33,    59,    64,    65,    66,
      67,    68,    90,    60,    61,    61,    62,    62,    62,    62,
      63,    63,    64,    64,    74,    74,    72,    70,    70,    70,
      70,    34,    20,    21,    22,    23,    24,    25,    33,    59,
      64,    65,    66,    67,    68,    90,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    64,    64,    74,    74,    72,
      34,    74,    34,    20,    21,    22,    23,    24,    25,    33,
      59,    64,    65,    66,    67,    68,    90,    60,    61,    61,
      62,    62,    62,    62,    63,    63,    64,    64,    74,    74,
      70,    70,    70,    70,    34,    20,    21,    22,    23,    24,
      25,    33,    59,    64,    65,    66,    67,    68,    90,    60,
      61,    61,    62,    62,    62,    62,    63,    63,    64,    64,
      74,    74,    72,    70,    69,    46,    85,    90,    70,    70,
      45,    46,    45,    34,    34,    34,    34,    70,    64,    33,
      34,    34,    34,    34,    34,    34,    70,    64,    33,    34,
      34,    34,    70,    64,    33,    34,    34,    34,    34,    34,
      70,    64,    33,    34,    34,    34,    46,    34,    34,    34,
      34,    34,    74,    34,    74,    34,    74,    34,    74,    80,
      69,    80,    46,    46,    46,    34,    34,    34,    34,    46,
      69,    34,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    50,    51,    52,
      52,    52,    52,    53,    54,    54,    55,    55,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    61,    61,    61,
      61,    61,    62,    62,    62,    63,    63,    63,    64,    64,
      65,    65,    65,    66,    66,    67,    67,    67,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    71,    72,    72,    73,    73,    74,    74,    75,
      76,    77,    78,    79,    80,    80,    81,    81,    82,    83,
      83,    83,    83,    83,    83,    83,    84,    85,    86,    86,
      87,    87,    88,    88,    88,    89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     1,
       1,     1,     1,     4,     1,     0,     3,     1,     2,     1,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     4,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     0,     3,     1,     1,     3,     4,
       4,     4,     4,     3,     1,     1,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     5,     7,
       9,     5,     5,     5,     5,     3,     1
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
#line 3208 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 41 "src/syntax/parser.y" /* yacc.c:1652  */
    {  yyerrok; }
#line 3214 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 44 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                          }
#line 3222 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 47 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3228 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 50 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3234 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 51 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3240 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 54 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, NULL, (yyvsp[-2].ast_node), (yyvsp[-1].ast_node), NULL);
                    }
#line 3248 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 59 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3254 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 60 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3260 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 61 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3266 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 12:
#line 62 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3272 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 65 "src/syntax/parser.y" /* yacc.c:1652  */
    {
              (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL);
            }
#line 3280 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 70 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3286 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 71 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = NULL; }
#line 3292 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 74 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                }
#line 3300 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 77 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3306 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 80 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                        (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                      }
#line 3314 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 85 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3320 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 88 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3326 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 89 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3334 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 94 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3340 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 95 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                        (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                      }
#line 3348 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 100 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3354 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 101 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3362 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 104 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3370 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 109 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3376 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 110 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3384 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 113 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3392 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 116 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3400 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 119 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                      (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3408 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 124 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3414 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 125 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3422 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 128 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                    (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                  }
#line 3430 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 133 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3436 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 134 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                          (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                        }
#line 3444 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 137 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                          (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                        }
#line 3452 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 142 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3458 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 143 "src/syntax/parser.y" /* yacc.c:1652  */
    {
                  (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                }
#line 3466 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 40:
#line 148 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3472 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 41:
#line 149 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3478 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 42:
#line 150 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, NULL, NULL, NULL, NULL); }
#line 3484 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 43:
#line 153 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3490 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 44:
#line 154 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3496 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 45:
#line 157 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3502 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 46:
#line 158 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3508 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 47:
#line 159 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3514 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 48:
#line 162 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3520 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 49:
#line 163 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3526 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 50:
#line 164 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3532 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 165 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3538 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 166 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3544 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 169 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3550 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 170 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3556 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 173 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3562 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 174 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3568 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 57:
#line 175 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3574 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 58:
#line 176 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3580 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 59:
#line 177 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3586 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 60:
#line 178 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3592 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 61:
#line 179 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3598 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 62:
#line 182 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3604 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 63:
#line 185 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3610 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 64:
#line 186 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3616 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 65:
#line 189 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3622 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 66:
#line 190 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3628 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 67:
#line 193 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3634 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 68:
#line 194 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3640 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 69:
#line 197 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3646 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 70:
#line 200 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3652 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 203 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3658 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 206 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3664 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 209 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3670 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 212 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3676 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 213 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3682 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 216 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3688 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 217 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3694 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 220 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3700 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 223 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3706 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 224 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3712 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 225 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3718 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 226 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3724 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 227 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3730 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 228 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3736 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 229 "src/syntax/parser.y" /* yacc.c:1652  */
    {
          yyerrok;
        }
#line 3744 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 234 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3750 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 237 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3756 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 240 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3762 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 241 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3768 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 244 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3774 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 245 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3780 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 248 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3786 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 249 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3792 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 250 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3798 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 253 "src/syntax/parser.y" /* yacc.c:1652  */
    {}
#line 3804 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;

  case 96:
#line 256 "src/syntax/parser.y" /* yacc.c:1652  */
    { (yyval.ast_node) = create_ast_node(IDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL); }
#line 3810 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;


#line 3814 "./src/syntax/parser.c" /* yacc.c:1652  */
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
