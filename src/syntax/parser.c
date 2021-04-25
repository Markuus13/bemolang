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
  #include "../main.h"

  struct ast_node *ast = NULL;

#line 79 "./src/syntax/parser.c" /* yacc.c:337  */
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

#line 160 "./src/syntax/parser.c" /* yacc.c:352  */
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
#define YYLAST   5218

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  470

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
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    33,    34,    37,    38,    41,    44,    45,
      46,    47,    50,    53,    54,    57,    58,    61,    64,    65,
      68,    69,    72,    73,    74,    77,    78,    79,    80,    81,
      82,    85,    86,    89,    90,    91,    94,    95,    96,    99,
     100,   103,   104,   105,   108,   109,   110,   111,   112,   115,
     116,   119,   120,   123,   124,   125,   128,   129,   130,   133,
     134,   135,   136,   139,   140,   141,   144,   145,   148,   149,
     152,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     166,   169,   172,   175,   176,   179,   180,   183,   184,   185,
     188,   191
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
  "'{'", "'}'", "';'", "'='", "$accept", "translation_unit",
  "external_declaration_list", "external_declaration",
  "function_definition", "type_specifier", "declarator", "parameters",
  "parameter_list", "parameter_declaration", "logical_or_expression",
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
      42,    47,    33,   123,   125,    59,    61
};
# endif

#define YYPACT_NINF -294

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-294)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1292,    -9,    -4,    23,    29,    19,  2230,  2309,  2380,    59,
    2460,  -294,  2574,   -30,    -2,   -16,   719,  2709,    20,  2741,
    1017,    61,    67,   821,    77,    91,   110,   112,   118,   123,
     135,   147,   458,   591,   161,   167,   203,   953,   273,   462,
    1119,  2981,   102,    -1,   739,   757,  1246,   831,   216,   235,
     239,   895,   922,  1315,  1613,  1911,  3540,  3585,  3630,  3675,
    3720,  3765,  3810,    66,   183,   218,   253,    18,   177,   162,
     269,   507,  1052,  1052,  1052,   289,   953,   953,   289,  1052,
     175,   255,   271,  1246,  1246,  1246,  1246,  1048,  3855,  3026,
    3900,   205,   821,    28,   276,  1292,   393,    -7,    81,  1140,
    1682,   788,  1542,   277,  3945,   306,   294,   300,   311,   314,
     332,   343,   344,   354,  1193,  1311,  1335,  1346,  1378,  1427,
      58,    93,   331,   358,   177,  4665,   177,   177,   177,  1261,
    1261,  1261,  1261,  1350,   162,   953,  4708,  1491,  1725,   350,
     352,   361,  1789,  1907,  2023,  1084,  3990,    89,   511,  2098,
    1720,  1934,  1117,  1415,  1560,  1653,  1636,   367,   371,  4035,
    4080,  4125,  4170,   127,  4708,   601,  4215,   379,  4708,  4260,
     114,  4305,   817,   383,   399,   402,   406,   960,    37,  1609,
     410,   411,   413,   953,  2120,  2319,  1382,  2386,  2402,  2450,
    1013,   407,   137,   428,   433,   439,   447,  1705,  1856,  2003,
     953,  2139,  2154,  1350,  2220,  2302,  2492,  1839,   453,   455,
     456,   461,    17,    46,    80,   467,   484,   487,   953,    -8,
     126,   193,  1417,   217,   490,   227,   236,    27,   475,   212,
     477,  1382,  1382,  4350,   496,   506,   508,   518,   556,   636,
    1080,   143,   158,   186,   953,   244,  1252,  1373,  1544,  1661,
     207,  1687,  1820,   949,  1350,  1350,   560,   529,   545,   821,
     553,   555,   559,   567,  4395,   102,   572,  2548,  2619,  2764,
    2809,  2865,  2910,  2955,  3000,   748,   579,   594,   600,   605,
    4877,  4907,  4922,   953,  4937,  4952,  1261,  4967,  4982,  4997,
    4892,  1261,  1261,   607,  4440,  4485,  1052,  1052,   289,  1052,
     287,   610,  1382,  1382,  2466,   205,  1052,  1052,   289,  1052,
     301,   611,  1350,  1350,  2576,   205,  1052,  1052,   289,  1052,
     360,   612,  1417,  1417,  1417,  1417,   334,   205,  2501,  2647,
    1052,  1052,   289,  1052,   504,   614,  1544,  1544,  1544,  1544,
    1941,   205,  2638,  4727,   177,   162,   604,  1052,   289,   953,
     953,  3045,  4530,   606,  3090,   821,  1052,  1052,   289,  1052,
     577,   618,  1261,  1261,  5012,   205,  5027,  5042,  4575,   619,
     626,   632,   638,  2655,  2685,  2699,  2715,   228,   645,   646,
     647,   650,  4742,  4757,  4772,  4787,   237,   651,   652,   654,
     655,   369,   419,   424,   452,   519,   569,   264,   656,   659,
     661,   662,  1949,  1959,  1969,  1985,  2011,  2174,   267,     6,
     671,  3135,   684,   685,   687,   703,  3180,  3225,   700,   712,
     714,   716,   717,  5057,  5072,  5087,  5102,   270,  2760,  2805,
    2821,  2861,  2906,  4802,  4817,  4832,  4847,  4862,   624,   660,
     664,   731,   735,  2228,  2254,  2267,  2284,  2310,  4665,   162,
    4665,   709,   710,   711,  3270,  5117,  5132,  5147,  5162,  5177,
    4620,   715,  3315,  3360,  3405,  3450,   601,   725,  4665,  3495
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -294,  -294,  -294,   760,  -294,     0,  -294,  -294,   672,  -294,
     457,   675,   657,    21,  -294,  2152,  2072,   582,   880,  1178,
     -64,   342,  2401,  1476,  1774,  -293,   -12,  -162,     1,   -22,
    -121,  -117,    84,  -112,   -89,   -86,   -79,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    42,    14,    65,    66,    67,
      97,    98,    99,   100,   101,    43,    44,    45,    46,    47,
      48,   105,    50,    51,    52,   121,    53,    54,    55,    56,
      57,    58,   106,    59,    60,    61,    62,   227
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,    17,   -91,   269,   103,     9,    10,   270,   295,
     -51,    -8,   377,   271,    15,   -91,    -9,    18,    64,    11,
     124,    63,   386,     1,     2,     3,     4,   125,    71,    19,
     322,   323,    90,   124,   397,   -91,   272,    83,    84,   273,
     448,    16,   190,   -10,   -51,   -44,   274,    82,   408,   -11,
     -91,    71,   -16,    95,   -14,   -91,   -91,   -91,   -91,    63,
     327,   266,   -17,   -17,   -45,   -44,   -44,   -44,   -44,    93,
     157,   -45,   427,   207,    71,   -45,   -45,   -45,   -45,    13,
     109,   190,   190,   112,   -45,   -45,   -45,   -45,    71,    71,
      71,    71,   -64,   -64,    68,    64,   253,    71,   -46,    91,
      69,   167,   352,   148,   -44,   -44,   -44,   -44,   -18,   126,
      72,   -44,    92,   267,   159,   -18,   -19,   126,   -46,   -46,
     -46,   -46,   191,   -19,    73,   265,   268,   144,   145,   207,
     275,   207,   207,   207,   290,   290,   290,   290,   207,    71,
     190,    63,   166,    74,   -33,    75,   169,   -91,   150,   151,
     253,    76,   -91,   -91,   -91,   -91,    77,   107,   108,   -91,
     -91,   -63,   -63,   113,   -33,   -33,   324,   325,    78,    63,
     190,   -91,   -91,    63,    25,    26,    63,   -55,   -55,    30,
      79,    31,   172,    32,    33,    34,    35,    36,   190,   193,
     194,   190,   -54,   -54,   195,    37,   196,   197,   198,   199,
      38,    39,    96,   192,    40,   190,   -55,   -50,   207,   114,
     200,   -36,   -54,   231,   232,    38,    39,   234,   235,    40,
     -53,   -53,   236,   190,   237,   238,   239,   240,   241,   242,
     243,   -36,   -36,   -36,   -36,   -39,   190,   190,   244,   -65,
     -65,   -52,   -52,    38,    39,   -48,   -51,    40,   -53,   190,
     231,   232,    94,   253,   -57,   -39,   -39,   -39,   -39,   207,
     207,    88,   432,   145,    71,   -48,   -48,   -48,   -48,    63,
     353,   437,   145,    90,   -57,   -57,   -57,   -57,   -51,   -51,
     -49,   410,   336,   337,   -52,   -41,   -41,   -13,   190,   115,
     -41,   290,   -41,   -41,   -41,   -41,   290,   290,   442,   145,
      63,   447,   145,   371,   459,   145,   -41,   190,   190,   228,
     253,   -41,   -41,   380,   104,   -41,   233,   207,   207,   -12,
     253,   373,   134,   389,   135,   231,   232,   269,   136,   269,
      90,   270,   253,   270,   137,   382,   271,   400,   271,   231,
     232,   253,   253,   253,   253,   138,   253,   269,   139,   207,
      71,   270,   -40,   413,   190,   190,   271,    63,    49,   272,
      71,   272,   273,   421,   273,    70,   140,   290,   290,   274,
     253,   274,   -40,   -40,   -40,   -40,   146,   141,   142,   272,
     369,   370,   273,   372,   266,   461,   266,   -47,   143,   274,
     378,   379,   -15,   381,   391,   160,    49,   161,   231,   232,
     387,   388,   467,   390,   266,   -82,   162,   -47,   -47,   -47,
     -47,    49,   165,   168,   398,   399,   296,   401,   110,   111,
     -26,   -26,   -26,   -26,   -26,   -26,   460,   -26,   462,   -26,
     -26,   412,   297,   120,   122,   298,   267,   -58,   267,   299,
     419,   420,   -34,   422,   -55,   -54,   469,   -53,   265,   268,
     265,   268,   -91,   275,    71,   275,   267,   -58,   -58,   -58,
     -58,   306,   -34,   -34,   324,   325,   307,    49,   265,   268,
     -35,   190,   308,   275,   -42,   -42,    49,   158,    49,   -42,
     309,   -42,   -42,   -42,   -42,   -55,   316,   163,   317,   318,
     -35,   -35,   324,   325,   319,   -42,   -45,   -45,   -45,   -45,
     -42,   -42,   -54,   -45,   -42,   -53,    49,   293,   -52,   -91,
      49,   -52,   -83,    49,   -83,   -83,   -83,   -83,   -83,   164,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   330,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -37,   402,   331,
      91,   332,   231,   232,   -83,   -44,   -44,   -44,   -44,   -83,
     -83,   333,   -44,   -83,   -83,   -83,   -83,   -37,   -37,   -37,
     -37,   -79,   344,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   345,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   347,   -38,   348,   -91,
     -91,   -91,   349,   -79,   -91,   -91,   -91,   -91,   -79,   -79,
     350,   346,   -79,   -79,   -79,   -79,    49,   -38,   -38,   -38,
     -38,   423,   356,   173,   174,   231,   232,   354,   175,   185,
     176,   177,   178,   179,   180,   181,   182,   357,    87,   -46,
     -46,   -46,   -46,   358,   183,   -50,   -46,    49,   359,    38,
      39,   -49,   -60,    40,   374,   383,   392,   120,   403,   411,
     202,   417,   424,   428,   221,   221,   221,   120,   185,   185,
     429,   221,   -60,   -60,   -60,   -60,   430,   118,   119,   120,
     -45,   -45,   431,   247,   -45,   -45,   -45,   -45,   -61,   433,
     434,   435,   -59,   120,   436,   438,   439,    49,   440,   441,
     443,   414,   415,   444,    49,   445,   446,   418,   -61,   -61,
     -61,   -61,   -59,   -59,   -59,   -59,   202,   120,   202,   202,
     202,   285,   285,   285,   285,   202,   449,   185,   450,   451,
      20,   452,     1,     2,     3,     4,    21,   247,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   453,    31,   170,
      32,    33,    34,    35,    36,   454,   455,   185,   456,   -62,
     457,   458,    37,   -56,   463,   464,   465,    38,    39,   468,
     466,    40,   171,    41,   -50,   185,    12,   123,   304,   -62,
     -62,   -62,   -62,   -56,   -56,   -56,   -56,   -33,   -33,    85,
      86,    91,   185,   149,   -33,   314,   -44,   -44,   -44,   -44,
      49,    49,    49,   -44,   355,   -36,   -36,   -36,   -36,   147,
     185,   409,   -36,     0,   326,     0,   133,     0,   293,     0,
      49,     0,     0,   185,   185,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,     0,   -25,   -25,   185,     0,     0,     0,
     340,     0,     0,    25,    26,     0,   202,   202,    30,     0,
      31,   172,    32,    33,    34,    35,    36,     0,     0,     0,
     -91,     0,     0,     0,    37,   -91,   -91,   -91,   -91,    38,
      39,     0,   -91,    40,     0,   185,     0,     0,   364,   -39,
     -39,   -39,   -39,   285,   285,     0,   -39,     0,   221,   221,
       0,   221,     0,     0,   375,   376,     0,   247,   221,   221,
       0,   221,     0,     0,   384,   385,     0,   247,   221,   221,
       0,   221,     0,     0,   221,   221,   395,   396,     0,   247,
       0,     0,   221,   221,     0,   221,     0,   186,   247,   247,
     406,   407,     0,   247,     0,     0,   202,     0,     0,   221,
       0,   185,   185,   -48,   -48,   -48,   -48,     0,   221,   221,
     -48,   221,     0,     0,   425,   426,     0,   247,   203,     0,
       0,     0,   222,   222,   222,     0,   186,   186,     0,   222,
     -57,   -57,   -57,   -57,     0,   173,   174,   -57,     0,     0,
     175,   248,   176,   177,   178,   179,   180,   181,   182,     0,
       0,     0,   341,   -44,   -44,     0,   183,   -44,   -44,   -44,
     -44,    38,    39,   -91,   -91,    40,     0,     0,   -91,   -91,
     -91,   -91,     0,     0,   203,     0,   203,   203,   203,   286,
     286,   286,   286,   203,     0,   186,     0,     0,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   248,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,   186,   305,   -44,   185,     0,
     -79,   -44,   -44,   -44,   -44,   -79,   -79,     0,     0,   -79,
     -79,   -79,   -79,   186,   208,   209,   186,     0,     0,   210,
       0,   211,   212,   213,   214,   215,   216,   217,     0,     0,
     186,     0,     0,   203,     0,   218,   -40,   -40,   -40,   -40,
      38,    39,     0,   -40,    40,     0,   234,   235,   186,     0,
       0,   236,   222,   237,   238,   239,   240,   241,   242,   243,
       0,   186,   186,     0,   -46,   -46,     0,   244,   -46,   -46,
     -46,   -46,    38,    39,   186,     0,    40,     0,   248,     0,
       0,   -43,   -43,     0,   203,   203,   -43,     0,   -43,   -43,
     -43,   -43,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -43,   -29,   -29,   291,   292,   -43,   -43,     0,
       0,   -43,     0,   186,     0,     0,   286,   -20,   -20,   127,
     128,   286,   286,     0,   -20,     0,   222,   222,     0,   222,
       0,     0,   186,   186,     0,   248,   222,   222,     0,   222,
       0,     0,   203,   203,     0,   248,   222,   222,     0,   222,
       0,     0,   222,   222,   222,   222,     0,   248,     0,     0,
     222,   222,     0,   222,     0,   187,   248,   248,   248,   248,
       0,   248,     0,     0,   203,     0,     0,   222,     0,   186,
     186,   -47,   -47,   -47,   -47,     0,   222,   222,   -47,   222,
       0,     0,   286,   286,     0,   248,   204,     0,     0,     0,
     223,   223,   223,     0,   187,   187,     0,   223,    25,    26,
       0,     0,     0,    30,     0,    31,   172,    32,    33,   249,
       0,     0,     0,   276,   277,     0,     0,     0,   278,    37,
     279,   280,   281,   282,    38,    39,   -33,   -33,    40,     0,
     -33,   -33,   338,   339,   283,     1,     2,     3,     4,    38,
      39,     0,   204,    40,   204,   204,   204,   287,   287,   287,
     287,   204,     0,   187,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   249,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,   187,     0,     0,   186,     0,   -72,   -58,
     -58,   -58,   -58,   -72,   -72,     0,   -58,   -72,   -72,   -72,
     -72,   187,   193,   194,   187,     0,     0,   195,     0,   196,
     197,   198,   199,   -34,   -34,    85,    86,     0,   187,     0,
     -34,   204,     0,   200,   -35,   -35,    85,    86,    38,    39,
       0,   -35,    40,     0,   173,   174,   187,     0,     0,   175,
     223,   176,   177,   178,   179,     0,     0,   -36,   -36,   187,
     187,   -36,   -36,   -36,   -36,   183,   -37,   -37,   -37,   -37,
      38,    39,   187,   -37,    40,     0,   249,     0,     0,   208,
     209,     0,   204,   204,   210,     0,   211,   212,   213,   214,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     218,   -30,   -30,   291,   292,    38,    39,     0,     0,    40,
       0,   187,     0,     0,   287,   -38,   -38,   -38,   -38,   287,
     287,     0,   -38,     0,   223,   223,     0,   223,     0,     0,
     187,   187,     0,   249,   223,   223,     0,   223,     0,     0,
     204,   204,     0,   249,   223,   223,     0,   223,     0,     0,
     223,   223,   223,   223,     0,   249,     0,     0,   223,   223,
       0,   223,     0,   188,   249,   249,   249,   249,     0,   249,
       0,     0,   204,     0,     0,   223,     0,   187,   187,   -60,
     -60,   -60,   -60,     0,   223,   223,   -60,   223,     0,     0,
     287,   287,     0,   249,   205,     0,     0,     0,   225,   225,
     225,     0,   188,   188,     0,   225,   234,   235,     0,     0,
     -32,   236,     0,   237,   238,   239,   240,   251,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   244,   -32,   -32,
     254,   255,    38,    39,     0,     0,    40,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   291,   292,
     205,     0,   205,   205,   205,   288,   288,   288,   288,   205,
       0,   188,     0,     0,    20,     0,     1,     2,     3,     4,
      21,   251,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,    31,   170,    32,    33,    34,    35,    36,     0,
       0,   188,     0,   -46,   187,     0,    37,   -46,   -46,   -46,
     -46,    38,    39,     0,   -31,    40,   171,    89,   -50,   188,
       0,     0,   188,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,     0,   -31,   -31,   254,   255,   188,     0,     0,   205,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,   -28,
     -28,   291,   292,     0,   188,   -39,   -39,     0,   225,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,   188,   188,   -22,
     -22,   -22,   -22,   129,   130,     0,   -22,     0,   131,   132,
     188,   -48,   -48,   -91,   251,   -48,   -48,   -48,   -48,     0,
     205,   205,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -23,   -23,   -23,
     -23,   129,   130,     0,   -23,     0,   131,   132,     0,   188,
       0,     0,   288,   -61,   -61,   -61,   -61,   288,   288,     0,
     -61,     0,   225,   225,     0,   225,     0,     0,   188,   188,
       0,   251,   225,   225,     0,   225,     0,     0,   205,   205,
       0,   251,   225,   225,     0,   225,     0,     0,   225,   225,
     225,   225,     0,   251,     0,     0,   225,   225,     0,   225,
       0,   189,   251,   251,   251,   251,     0,   251,     0,     0,
     205,     0,     0,   225,     0,   188,   188,   -59,   -59,   -59,
     -59,     0,   225,   225,   -59,   225,     0,     0,   288,   288,
       0,   251,   206,     0,     0,     0,   226,   226,   226,     0,
     189,   189,     0,   226,   -57,   -57,     0,   -44,   -57,   -57,
     -57,   -57,     0,     0,     0,   252,   -44,   -44,   -44,   -44,
     -44,   -44,   315,   -44,   -45,   -44,   -44,   -44,   -44,   -44,
     -44,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   206,     0,
     206,   206,   206,   289,   289,   289,   289,   206,     0,   189,
       0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   252,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,   189,
       0,     0,   188,     0,   -71,   -62,   -62,   -62,   -62,   -71,
     -71,     0,   -62,   -71,   -71,   -71,   -71,   189,     0,     0,
     189,   -24,   -24,   -24,   -24,   129,   130,     0,   -24,     0,
     131,   132,     0,     0,   189,   -40,   -40,   206,     0,   -40,
     -40,   -40,   -40,   -47,   -47,     0,     0,   -47,   -47,   -47,
     -47,     0,   189,   -58,   -58,     0,   226,   -58,   -58,   -58,
     -58,     0,     0,   -34,   -34,   189,   189,   -34,   -34,   338,
     339,     0,     0,     0,     0,     0,     0,     0,   189,   -35,
     -35,   -46,   252,   -35,   -35,   338,   339,     0,   206,   206,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -37,   -37,     0,     0,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,   189,     0,     0,
     289,   -56,   -56,   -56,   -56,   289,   289,     0,   -56,     0,
     226,   226,     0,   226,     0,     0,   189,   189,     0,   252,
     226,   226,     0,   226,     0,     0,   206,   206,     0,   252,
     226,   226,     0,   226,     0,     0,   226,   226,   226,   226,
       0,   252,     0,     0,   226,   226,     0,   226,     0,   184,
     252,   252,   252,   252,     0,   252,     0,     0,   206,     0,
       0,   226,     0,   189,   189,   -21,   -21,   127,   128,     0,
     226,   226,   -21,   226,     0,     0,   289,   289,     0,   252,
     201,     0,     0,     0,   220,   220,   220,     0,   184,   184,
       0,   220,     0,     0,   -33,   116,   117,   -33,   -33,   -33,
     302,   303,     0,   246,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -36,   -33,     0,   -33,   -33,   -33,   -33,   312,
     313,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,    80,
     -36,   -36,   -36,   -36,   -36,   -36,   201,     0,   201,   201,
     201,   284,   284,   284,   284,   201,     0,   184,   -38,   -38,
       0,     0,   -38,   -38,   -38,   -38,     0,   246,     0,     0,
     102,     0,     0,     0,   219,   219,   219,     0,   229,   229,
      -2,   219,     0,     1,     2,     3,     4,   184,   -39,     0,
     189,     0,     0,   245,     0,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   184,   -39,   -39,   -39,   -39,
     -39,   -39,   -60,   -60,     0,     0,   -60,   -60,   -60,   -60,
       0,     0,   184,     0,     0,     0,   102,     0,   102,   102,
     102,   152,   153,   154,   155,   156,     0,   229,   -61,   -61,
     184,     0,   -61,   -61,   -61,   -61,     0,   245,     0,     0,
       0,   -59,   -59,   328,   329,   -59,   -59,   -59,   -59,    -4,
       0,     0,    -4,    -4,    -4,    -4,   184,   229,   -62,   -62,
     -48,     0,   -62,   -62,   -62,   -62,   342,   343,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   300,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -56,   -56,     0,     0,   -56,   -56,
     -56,   -56,   310,   -36,     0,   184,     0,   -36,   -36,   -36,
     -36,     0,     0,   366,   367,     0,     0,     0,   220,   220,
     320,   220,     0,     0,     0,     0,     0,   246,   220,   220,
      -5,   220,     0,    -5,    -5,    -5,    -5,   246,   220,   220,
       0,   220,     0,     0,   393,   394,   334,     0,     0,   246,
       0,     0,   220,   220,     0,   220,     0,     0,   404,   405,
       0,     0,     0,   246,     0,     0,   201,     0,     0,   220,
     -39,   184,   184,     0,   -39,   -39,   -39,   -39,   220,   220,
       0,   220,     0,     0,     0,   360,   -48,   246,    81,     0,
     -48,   -48,   -48,   -48,     0,     0,     0,     0,   219,   219,
       0,   219,     0,     0,     0,     0,     0,   245,   219,   219,
      -6,   219,     0,    -6,    -6,    -6,    -6,   245,   219,   219,
       0,   219,     0,   224,   224,   224,     0,   230,   230,   245,
     224,     0,   219,   219,   -57,   219,     0,     0,   -57,   -57,
     -57,   -57,   250,   245,     0,     0,   102,     0,     0,   219,
     -40,   229,   229,     0,   -40,   -40,   -40,   -40,   219,   219,
     -57,   219,     0,     0,     0,     0,     0,   245,     0,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -34,   230,     0,   184,   -34,
     -34,   302,   303,     0,     0,     0,   250,     0,     0,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   230,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,    -3,     0,     0,    -3,    -3,    -3,
      -3,   -72,     0,     0,   301,     0,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -40,     0,     0,     0,     0,     0,
       0,   311,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   229,   321,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   335,     0,     0,     0,     0,
       0,     0,   -71,     0,     0,     0,   -34,   -71,   -71,     0,
       0,   -71,   -71,   -71,   -71,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   312,   313,
       0,   -35,     0,     0,   361,   -35,   -35,   302,   303,   -47,
       0,     0,     0,   -47,   -47,   -47,   -47,   224,   224,     0,
     224,     0,     0,     0,     0,     0,   250,   224,   224,    -7,
     224,     0,    -7,    -7,    -7,    -7,   250,   224,   224,   -58,
     224,     0,     0,   -58,   -58,   -58,   -58,     0,   250,     0,
       0,   224,   224,   -37,   224,     0,     0,   -37,   -37,   -37,
     -37,   -70,   250,     0,   -70,   -70,   -70,   -70,   224,   -38,
     230,   230,     0,   -38,   -38,   -38,   -38,   224,   224,     0,
     224,     0,     0,     0,     0,   -78,   250,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,   -60,     0,     0,   -78,   -60,   -60,
     -60,   -60,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,   -61,
       0,     0,   -73,   -61,   -61,   -61,   -61,   -73,   -73,     0,
       0,   -73,   -73,   -73,   -73,   -59,     0,     0,     0,   -59,
     -59,   -59,   -59,     0,     0,     0,   -74,   230,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,   -62,     0,     0,   -74,   -62,
     -62,   -62,   -62,   -74,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -56,     0,     0,   -75,   -56,   -56,   -56,   -56,   -75,   -75,
       0,     0,   -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -67,     0,     0,   -67,   -67,   -67,   -67,   -76,     0,
       0,     0,     0,   -76,   -76,     0,     0,   -76,   -76,   -76,
     -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -66,     0,     0,   -66,
     -66,   -66,   -66,   -77,     0,     0,     0,     0,   -77,   -77,
       0,     0,   -77,   -77,   -77,   -77,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,   -67,     0,
       0,     0,     0,   -67,   -67,     0,     0,   -67,   -67,   -67,
     -67,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   -81,     0,     0,     0,     0,   -81,   -81,
       0,     0,   -81,   -81,   -81,   -81,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,   -90,     0,
       0,     0,     0,   -90,   -90,     0,     0,   -90,   -90,   -90,
     -90,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,   -66,     0,     0,     0,     0,   -66,   -66,
       0,     0,   -66,   -66,   -66,   -66,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,   -70,   -70,     0,     0,   -70,   -70,   -70,
     -70,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,   -80,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,   -86,     0,
       0,     0,     0,   -86,   -86,     0,     0,   -86,   -86,   -86,
     -86,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,   -89,     0,     0,     0,     0,   -89,   -89,
       0,     0,   -89,   -89,   -89,   -89,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,     0,     0,   -88,   -88,     0,     0,   -88,   -88,   -88,
     -88,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,     0,     0,     0,     0,   -87,   -87,
       0,     0,   -87,   -87,   -87,   -87,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,     0,   -85,   -85,     0,     0,   -85,   -85,   -85,
     -85,   -69,     0,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,   -69,     0,     0,     0,     0,   -69,   -69,
       0,     0,   -69,   -69,   -69,   -69,   -78,     0,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,     0,     0,     0,     0,   -78,     0,
       0,     0,     0,   -78,   -78,     0,     0,   -78,   -78,   -78,
     -78,   -73,     0,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,   -73,   -73,
       0,     0,   -73,   -73,   -73,   -73,   -74,     0,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,     0,     0,   -74,     0,
       0,     0,     0,   -74,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,   -75,   -75,
       0,     0,   -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,   -76,   -76,     0,     0,   -76,   -76,   -76,
     -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,   -77,     0,     0,     0,     0,   -77,   -77,
       0,     0,   -77,   -77,   -77,   -77,   -81,     0,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,     0,   -81,   -81,     0,     0,   -81,   -81,   -81,
     -81,   -68,     0,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,   -68,   -68,
       0,     0,   -68,   -68,   -68,   -68,   -90,     0,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,     0,     0,     0,     0,     0,     0,   -90,     0,
       0,     0,     0,   -90,   -90,     0,     0,   -90,   -90,   -90,
     -90,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,   -80,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -86,     0,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,   -86,     0,
       0,     0,     0,   -86,   -86,     0,     0,   -86,   -86,   -86,
     -86,   -89,     0,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,   -89,     0,     0,     0,     0,   -89,   -89,
       0,     0,   -89,   -89,   -89,   -89,   -88,     0,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,   -88,     0,
       0,     0,     0,   -88,   -88,     0,     0,   -88,   -88,   -88,
     -88,   -87,     0,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,     0,     0,     0,     0,   -87,   -87,
       0,     0,   -87,   -87,   -87,   -87,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,   -84,   -84,     0,     0,   -84,   -84,   -84,
     -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,     0,   -85,   -85,
       0,     0,   -85,   -85,   -85,   -85,    20,     0,     1,     2,
       3,     4,    21,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,    31,   170,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,    40,   171,   294,
     -50,   -70,     0,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,     0,   -70,   -70,
       0,     0,   -70,   -70,   -70,   -70,    20,     0,     1,     2,
       3,     4,    21,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,    31,   170,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,    40,   171,   351,
     -50,   -67,     0,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,     0,   -67,     0,     0,     0,     0,   -67,   -67,
       0,     0,   -67,   -67,   -67,   -67,    20,     0,     1,     2,
       3,     4,    21,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,    31,   170,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,    40,   171,   368,
     -50,    20,     0,     1,     2,     3,     4,    21,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,    31,
     170,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,    39,
       0,     0,    40,   171,   416,   -50,   -66,     0,   -66,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,     0,     0,     0,   -66,     0,
       0,     0,     0,   -66,   -66,     0,     0,   -66,   -66,   -66,
     -66,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,     0,   -83,   -83,
       0,     0,   -83,   -83,   -83,   -83,   256,     0,     1,     2,
       3,     4,   257,     0,   258,   259,   260,    25,    26,   261,
     262,   263,    30,     0,    31,   170,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,    40,   264,    20,
     -50,     1,     2,     3,     4,    21,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,    31,   170,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,   -35,    38,    39,     0,     0,
      40,   171,     0,   -50,   -35,   -35,   -35,   -35,   -35,   -35,
     -47,   -35,     0,   -35,   -35,   -35,   -35,   312,   313,   -47,
     -47,   -47,   -47,   -47,   -47,   -58,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -58,   -58,   -58,   -58,   -58,   -58,
     -37,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -37,
     -37,   -37,   -37,   -37,   -37,   -38,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,   -38,   -38,
     -60,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -60,
     -60,   -60,   -60,   -60,   -60,   -61,   -60,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -61,   -61,   -61,   -61,   -61,   -61,
     -59,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -59,
     -59,   -59,   -59,   -59,   -59,   -62,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -62,   -62,   -62,   -62,   -62,   -62,
     -56,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -56,
     -56,   -56,   -56,   -56,   -56,     0,   -56,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -44,
     -44,   -44,   -44,   -44,   -44,   365,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,   -33,   -33,   -33,   -33,   362,   363,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -57,   -57,   -57,   -57,   -57,   -57,
       0,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,     0,   -34,   -34,   -34,   -34,   362,   363,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,
     -35,   -35,   362,   363,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -58,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -60,   -60,   -60,   -60,   -60,   -60,
       0,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -59,   -59,   -59,   -59,   -59,   -59,
       0,   -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -56,   -56,   -56,   -56,   -56,   -56,
       0,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,    33,   125,    69,     6,     6,   125,   171,
      18,    20,   305,   125,     9,    45,    20,    33,    18,     0,
      27,    16,   315,     3,     4,     5,     6,    34,    23,    45,
      38,    39,    54,    27,   327,    18,   125,    38,    39,   125,
      34,    43,    37,    20,    45,    18,   125,    42,   341,    20,
      33,    46,    34,    35,    34,    38,    39,    40,    41,    54,
      33,   125,    34,    35,    18,    38,    39,    40,    41,    64,
     134,    34,   365,    68,    69,    38,    39,    40,    41,    20,
      75,    76,    77,    78,    38,    39,    40,    41,    83,    84,
      85,    86,    34,    35,    33,    95,    91,    92,    18,    33,
      33,   165,   264,   125,    38,    39,    40,    41,    27,    28,
      33,    45,    46,   125,   136,    34,    27,    28,    38,    39,
      40,    41,    20,    34,    33,   125,   125,    34,    35,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   164,    33,    18,    33,   168,    33,   127,   128,
     145,    33,    38,    39,    40,    41,    33,    73,    74,    45,
      46,    34,    35,    79,    38,    39,    40,    41,    33,   164,
     165,    34,    35,   168,    12,    13,   171,    34,    35,    17,
      33,    19,    20,    21,    22,    23,    24,    25,   183,    12,
      13,   186,    34,    35,    17,    33,    19,    20,    21,    22,
      38,    39,    25,    20,    42,   200,    45,    45,   203,    34,
      33,    18,    45,    38,    39,    38,    39,    12,    13,    42,
      34,    35,    17,   218,    19,    20,    21,    22,    23,    24,
      25,    38,    39,    40,    41,    18,   231,   232,    33,    34,
      35,    34,    35,    38,    39,    18,    34,    42,    45,   244,
      38,    39,    34,   248,    18,    38,    39,    40,    41,   254,
     255,    45,    34,    35,   259,    38,    39,    40,    41,   264,
     265,    34,    35,   295,    38,    39,    40,    41,    34,    35,
      45,   345,    38,    39,    45,    12,    13,    34,   283,    34,
      17,   286,    19,    20,    21,    22,   291,   292,    34,    35,
     295,    34,    35,   298,    34,    35,    33,   302,   303,    20,
     305,    38,    39,   308,    45,    42,    45,   312,   313,    43,
     315,    34,    45,   318,    18,    38,    39,   448,    34,   450,
     352,   448,   327,   450,    34,    34,   448,   332,   450,    38,
      39,   336,   337,   338,   339,    34,   341,   468,    34,   344,
     345,   468,    18,   348,   349,   350,   468,   352,    16,   448,
     355,   450,   448,   358,   450,    23,    34,   362,   363,   448,
     365,   450,    38,    39,    40,    41,    45,    34,    34,   468,
     296,   297,   468,   299,   448,   449,   450,    18,    34,   468,
     306,   307,    34,   309,    34,    45,    54,    45,    38,    39,
     316,   317,   466,   319,   468,    34,    45,    38,    39,    40,
      41,    69,    45,    34,   330,   331,    33,   333,    76,    77,
      27,    28,    29,    30,    31,    32,   448,    34,   450,    36,
      37,   347,    33,    91,    92,    33,   448,    18,   450,    33,
     356,   357,    18,   359,    34,    34,   468,    34,   448,   448,
     450,   450,    45,   448,   449,   450,   468,    38,    39,    40,
      41,    33,    38,    39,    40,    41,    33,   125,   468,   468,
      18,   466,    33,   468,    12,    13,   134,   135,   136,    17,
      33,    19,    20,    21,    22,    18,    33,   145,    33,    33,
      38,    39,    40,    41,    33,    33,    38,    39,    40,    41,
      38,    39,    18,    45,    42,    18,   164,   165,    18,    34,
     168,    34,     1,   171,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    33,
      19,    20,    21,    22,    23,    24,    25,    18,    34,    33,
      33,    33,    38,    39,    33,    38,    39,    40,    41,    38,
      39,    33,    45,    42,    43,    44,    45,    38,    39,    40,
      41,     1,    33,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    33,    19,
      20,    21,    22,    23,    24,    25,    33,    18,    33,    33,
      34,    35,    33,    33,    38,    39,    40,    41,    38,    39,
      33,   259,    42,    43,    44,    45,   264,    38,    39,    40,
      41,    34,    33,    12,    13,    38,    39,    45,    17,    37,
      19,    20,    21,    22,    23,    24,    25,    33,    46,    38,
      39,    40,    41,    33,    33,    34,    45,   295,    33,    38,
      39,    34,    18,    42,    34,    34,    34,   305,    34,    45,
      68,    45,    34,    34,    72,    73,    74,   315,    76,    77,
      34,    79,    38,    39,    40,    41,    34,    85,    86,   327,
      34,    35,    34,    91,    38,    39,    40,    41,    18,    34,
      34,    34,    18,   341,    34,    34,    34,   345,    34,    34,
      34,   349,   350,    34,   352,    34,    34,   355,    38,    39,
      40,    41,    38,    39,    40,    41,   124,   365,   126,   127,
     128,   129,   130,   131,   132,   133,    45,   135,    34,    34,
       1,    34,     3,     4,     5,     6,     7,   145,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    34,    19,    20,
      21,    22,    23,    24,    25,    45,    34,   165,    34,    18,
      34,    34,    33,    18,    45,    45,    45,    38,    39,    34,
      45,    42,    43,    44,    45,   183,     6,    95,   186,    38,
      39,    40,    41,    38,    39,    40,    41,    38,    39,    40,
      41,    33,   200,   126,    45,   203,    38,    39,    40,    41,
     448,   449,   450,    45,    46,    38,    39,    40,    41,   124,
     218,   344,    45,    -1,   222,    -1,    18,    -1,   466,    -1,
     468,    -1,    -1,   231,   232,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,   244,    -1,    -1,    -1,
     248,    -1,    -1,    12,    13,    -1,   254,   255,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    45,    42,    -1,   283,    -1,    -1,   286,    38,
      39,    40,    41,   291,   292,    -1,    45,    -1,   296,   297,
      -1,   299,    -1,    -1,   302,   303,    -1,   305,   306,   307,
      -1,   309,    -1,    -1,   312,   313,    -1,   315,   316,   317,
      -1,   319,    -1,    -1,   322,   323,   324,   325,    -1,   327,
      -1,    -1,   330,   331,    -1,   333,    -1,    37,   336,   337,
     338,   339,    -1,   341,    -1,    -1,   344,    -1,    -1,   347,
      -1,   349,   350,    38,    39,    40,    41,    -1,   356,   357,
      45,   359,    -1,    -1,   362,   363,    -1,   365,    68,    -1,
      -1,    -1,    72,    73,    74,    -1,    76,    77,    -1,    79,
      38,    39,    40,    41,    -1,    12,    13,    45,    -1,    -1,
      17,    91,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    33,    34,    35,    -1,    33,    38,    39,    40,
      41,    38,    39,    33,    34,    42,    -1,    -1,    38,    39,
      40,    41,    -1,    -1,   124,    -1,   126,   127,   128,   129,
     130,   131,   132,   133,    -1,   135,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,   145,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,   165,    33,    34,   466,    -1,
      33,    38,    39,    40,    41,    38,    39,    -1,    -1,    42,
      43,    44,    45,   183,    12,    13,   186,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
     200,    -1,    -1,   203,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    45,    42,    -1,    12,    13,   218,    -1,
      -1,    17,   222,    19,    20,    21,    22,    23,    24,    25,
      -1,   231,   232,    -1,    34,    35,    -1,    33,    38,    39,
      40,    41,    38,    39,   244,    -1,    42,    -1,   248,    -1,
      -1,    12,    13,    -1,   254,   255,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    33,    36,    37,    38,    39,    38,    39,    -1,
      -1,    42,    -1,   283,    -1,    -1,   286,    27,    28,    29,
      30,   291,   292,    -1,    34,    -1,   296,   297,    -1,   299,
      -1,    -1,   302,   303,    -1,   305,   306,   307,    -1,   309,
      -1,    -1,   312,   313,    -1,   315,   316,   317,    -1,   319,
      -1,    -1,   322,   323,   324,   325,    -1,   327,    -1,    -1,
     330,   331,    -1,   333,    -1,    37,   336,   337,   338,   339,
      -1,   341,    -1,    -1,   344,    -1,    -1,   347,    -1,   349,
     350,    38,    39,    40,    41,    -1,   356,   357,    45,   359,
      -1,    -1,   362,   363,    -1,   365,    68,    -1,    -1,    -1,
      72,    73,    74,    -1,    76,    77,    -1,    79,    12,    13,
      -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,    91,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,    33,
      19,    20,    21,    22,    38,    39,    34,    35,    42,    -1,
      38,    39,    40,    41,    33,     3,     4,     5,     6,    38,
      39,    -1,   124,    42,   126,   127,   128,   129,   130,   131,
     132,   133,    -1,   135,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   145,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,   165,    -1,    -1,   466,    -1,    33,    38,
      39,    40,    41,    38,    39,    -1,    45,    42,    43,    44,
      45,   183,    12,    13,   186,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    38,    39,    40,    41,    -1,   200,    -1,
      45,   203,    -1,    33,    38,    39,    40,    41,    38,    39,
      -1,    45,    42,    -1,    12,    13,   218,    -1,    -1,    17,
     222,    19,    20,    21,    22,    -1,    -1,    34,    35,   231,
     232,    38,    39,    40,    41,    33,    38,    39,    40,    41,
      38,    39,   244,    45,    42,    -1,   248,    -1,    -1,    12,
      13,    -1,   254,   255,    17,    -1,    19,    20,    21,    22,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
      33,    36,    37,    38,    39,    38,    39,    -1,    -1,    42,
      -1,   283,    -1,    -1,   286,    38,    39,    40,    41,   291,
     292,    -1,    45,    -1,   296,   297,    -1,   299,    -1,    -1,
     302,   303,    -1,   305,   306,   307,    -1,   309,    -1,    -1,
     312,   313,    -1,   315,   316,   317,    -1,   319,    -1,    -1,
     322,   323,   324,   325,    -1,   327,    -1,    -1,   330,   331,
      -1,   333,    -1,    37,   336,   337,   338,   339,    -1,   341,
      -1,    -1,   344,    -1,    -1,   347,    -1,   349,   350,    38,
      39,    40,    41,    -1,   356,   357,    45,   359,    -1,    -1,
     362,   363,    -1,   365,    68,    -1,    -1,    -1,    72,    73,
      74,    -1,    76,    77,    -1,    79,    12,    13,    -1,    -1,
      18,    17,    -1,    19,    20,    21,    22,    91,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,    33,    36,    37,
      38,    39,    38,    39,    -1,    -1,    42,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
     124,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
      -1,   135,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,   145,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,   165,    -1,    34,   466,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    18,    42,    43,    44,    45,   183,
      -1,    -1,   186,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,   200,    -1,    -1,   203,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    -1,   218,    34,    35,    -1,   222,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,   231,   232,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
     244,    34,    35,    18,   248,    38,    39,    40,    41,    -1,
     254,   255,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    -1,   283,
      -1,    -1,   286,    38,    39,    40,    41,   291,   292,    -1,
      45,    -1,   296,   297,    -1,   299,    -1,    -1,   302,   303,
      -1,   305,   306,   307,    -1,   309,    -1,    -1,   312,   313,
      -1,   315,   316,   317,    -1,   319,    -1,    -1,   322,   323,
     324,   325,    -1,   327,    -1,    -1,   330,   331,    -1,   333,
      -1,    37,   336,   337,   338,   339,    -1,   341,    -1,    -1,
     344,    -1,    -1,   347,    -1,   349,   350,    38,    39,    40,
      41,    -1,   356,   357,    45,   359,    -1,    -1,   362,   363,
      -1,   365,    68,    -1,    -1,    -1,    72,    73,    74,    -1,
      76,    77,    -1,    79,    34,    35,    -1,    18,    38,    39,
      40,    41,    -1,    -1,    -1,    91,    27,    28,    29,    30,
      31,    32,    33,    34,    18,    36,    37,    38,    39,    40,
      41,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,   124,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,    -1,   135,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,   145,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,   165,
      -1,    -1,   466,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    45,    42,    43,    44,    45,   183,    -1,    -1,
     186,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    -1,    -1,   200,    34,    35,   203,    -1,    38,
      39,    40,    41,    34,    35,    -1,    -1,    38,    39,    40,
      41,    -1,   218,    34,    35,    -1,   222,    38,    39,    40,
      41,    -1,    -1,    34,    35,   231,   232,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    34,
      35,    18,   248,    38,    39,    40,    41,    -1,   254,   255,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    34,    35,    -1,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,   283,    -1,    -1,
     286,    38,    39,    40,    41,   291,   292,    -1,    45,    -1,
     296,   297,    -1,   299,    -1,    -1,   302,   303,    -1,   305,
     306,   307,    -1,   309,    -1,    -1,   312,   313,    -1,   315,
     316,   317,    -1,   319,    -1,    -1,   322,   323,   324,   325,
      -1,   327,    -1,    -1,   330,   331,    -1,   333,    -1,    37,
     336,   337,   338,   339,    -1,   341,    -1,    -1,   344,    -1,
      -1,   347,    -1,   349,   350,    27,    28,    29,    30,    -1,
     356,   357,    34,   359,    -1,    -1,   362,   363,    -1,   365,
      68,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    77,
      -1,    79,    -1,    -1,    34,    83,    84,    18,    38,    39,
      40,    41,    -1,    91,    -1,    -1,    27,    28,    29,    30,
      31,    32,    18,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    37,
      36,    37,    38,    39,    40,    41,   124,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,   135,    34,    35,
      -1,    -1,    38,    39,    40,    41,    -1,   145,    -1,    -1,
      68,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    77,
       0,    79,    -1,     3,     4,     5,     6,   165,    18,    -1,
     466,    -1,    -1,    91,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    34,   183,    36,    37,    38,    39,
      40,    41,    34,    35,    -1,    -1,    38,    39,    40,    41,
      -1,    -1,   200,    -1,    -1,    -1,   124,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,   135,    34,    35,
     218,    -1,    38,    39,    40,    41,    -1,   145,    -1,    -1,
      -1,    34,    35,   231,   232,    38,    39,    40,    41,     0,
      -1,    -1,     3,     4,     5,     6,   244,   165,    34,    35,
      18,    -1,    38,    39,    40,    41,   254,   255,    -1,    27,
      28,    29,    30,    31,    32,   183,    34,    -1,    36,    37,
      38,    39,    40,    41,    34,    35,    -1,    -1,    38,    39,
      40,    41,   200,    34,    -1,   283,    -1,    38,    39,    40,
      41,    -1,    -1,   291,   292,    -1,    -1,    -1,   296,   297,
     218,   299,    -1,    -1,    -1,    -1,    -1,   305,   306,   307,
       0,   309,    -1,     3,     4,     5,     6,   315,   316,   317,
      -1,   319,    -1,    -1,   322,   323,   244,    -1,    -1,   327,
      -1,    -1,   330,   331,    -1,   333,    -1,    -1,   336,   337,
      -1,    -1,    -1,   341,    -1,    -1,   344,    -1,    -1,   347,
      34,   349,   350,    -1,    38,    39,    40,    41,   356,   357,
      -1,   359,    -1,    -1,    -1,   283,    34,   365,    37,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,   296,   297,
      -1,   299,    -1,    -1,    -1,    -1,    -1,   305,   306,   307,
       0,   309,    -1,     3,     4,     5,     6,   315,   316,   317,
      -1,   319,    -1,    72,    73,    74,    -1,    76,    77,   327,
      79,    -1,   330,   331,    34,   333,    -1,    -1,    38,    39,
      40,    41,    91,   341,    -1,    -1,   344,    -1,    -1,   347,
      34,   349,   350,    -1,    38,    39,    40,    41,   356,   357,
      18,   359,    -1,    -1,    -1,    -1,    -1,   365,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    34,   135,    -1,   466,    38,
      39,    40,    41,    -1,    -1,    -1,   145,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   165,    19,    20,    21,
      22,    23,    24,    25,     0,    -1,    -1,     3,     4,     5,
       6,    33,    -1,    -1,   183,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,    18,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,   466,   218,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,   244,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    18,    38,    39,    -1,
      -1,    42,    43,    44,    45,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,    34,    -1,    -1,   283,    38,    39,    40,    41,    34,
      -1,    -1,    -1,    38,    39,    40,    41,   296,   297,    -1,
     299,    -1,    -1,    -1,    -1,    -1,   305,   306,   307,     0,
     309,    -1,     3,     4,     5,     6,   315,   316,   317,    34,
     319,    -1,    -1,    38,    39,    40,    41,    -1,   327,    -1,
      -1,   330,   331,    34,   333,    -1,    -1,    38,    39,    40,
      41,     0,   341,    -1,     3,     4,     5,     6,   347,    34,
     349,   350,    -1,    38,    39,    40,    41,   356,   357,    -1,
     359,    -1,    -1,    -1,    -1,     1,   365,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    43,    44,    45,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    43,    44,    45,    34,    -1,    -1,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,     1,   466,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,
      39,    40,    41,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    33,    38,    39,    40,    41,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,     0,    -1,    -1,     3,     4,     5,     6,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,     0,    -1,    -1,     3,
       4,     5,     6,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,     1,
      45,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    18,    38,    39,    -1,    -1,
      42,    43,    -1,    45,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      75,     0,    50,    20,    53,    84,    43,    73,    33,    45,
       1,     7,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    19,    21,    22,    23,    24,    25,    33,    38,    39,
      42,    44,    52,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    73,    74,    75,    76,    77,    78,    80,
      81,    82,    83,    84,    52,    54,    55,    56,    33,    33,
      68,    84,    33,    33,    33,    33,    33,    33,    33,    33,
      62,    69,    84,    38,    39,    40,    41,    64,    45,    44,
      76,    33,    46,    84,    34,    35,    25,    57,    58,    59,
      60,    61,    62,    67,    45,    68,    79,    79,    79,    84,
      68,    68,    84,    79,    34,    34,    63,    63,    64,    64,
      68,    72,    68,    55,    27,    34,    28,    29,    30,    31,
      32,    36,    37,    18,    45,    18,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    35,    45,    58,    76,    59,
      60,    60,    62,    62,    62,    62,    62,    67,    68,    76,
      45,    45,    45,    68,     8,    45,    76,    67,    34,    76,
      20,    43,    20,    12,    13,    17,    19,    20,    21,    22,
      23,    24,    25,    33,    63,    64,    65,    66,    70,    71,
      84,    20,    20,    12,    13,    17,    19,    20,    21,    22,
      33,    63,    64,    65,    66,    70,    71,    84,    12,    13,
      17,    19,    20,    21,    22,    23,    24,    25,    33,    62,
      63,    64,    65,    66,    69,    70,    71,    84,    20,    62,
      69,    38,    39,    45,    12,    13,    17,    19,    20,    21,
      22,    23,    24,    25,    33,    62,    63,    64,    65,    66,
      69,    70,    71,    84,    38,    39,     1,     7,     9,    10,
      11,    14,    15,    16,    43,    52,    67,    73,    75,    77,
      78,    80,    81,    82,    83,    84,    12,    13,    17,    19,
      20,    21,    22,    33,    63,    64,    65,    66,    70,    71,
      84,    38,    39,    68,    44,    74,    33,    33,    33,    33,
      62,    69,    40,    41,    64,    33,    33,    33,    33,    33,
      62,    69,    40,    41,    64,    33,    33,    33,    33,    33,
      62,    69,    38,    39,    40,    41,    64,    33,    63,    63,
      33,    33,    33,    33,    62,    69,    38,    39,    40,    41,
      64,    33,    63,    63,    33,    33,    68,    33,    33,    33,
      33,    44,    74,    84,    45,    46,    33,    33,    33,    33,
      62,    69,    40,    41,    64,    33,    63,    63,    44,    79,
      79,    84,    79,    34,    34,    64,    64,    72,    79,    79,
      84,    79,    34,    34,    64,    64,    72,    79,    79,    84,
      79,    34,    34,    63,    63,    64,    64,    72,    79,    79,
      84,    79,    34,    34,    63,    63,    64,    64,    72,    57,
      67,    45,    79,    84,    68,    68,    44,    45,    68,    79,
      79,    84,    79,    34,    34,    64,    64,    72,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    45,
      34,    34,    34,    34,    45,    34,    34,    34,    34,    34,
      76,    67,    76,    45,    45,    45,    45,    67,    34,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    61,    61,    62,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    70,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    73,    73,    74,    74,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      77,    78,    79,    80,    80,    81,    81,    82,    82,    82,
      83,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     0,     3,     1,     2,     1,     3,
       1,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       0,     1,     1,     1,     1,     1,     4,     1,     3,     4,
       4,     4,     4,     3,     1,     0,     3,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     3,     5,     7,     9,     5,     5,     5,     5,
       3,     1
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
        case 79:
#line 163 "src/syntax/parser.y" /* yacc.c:1652  */
    { yyerrok; }
#line 2478 "./src/syntax/parser.c" /* yacc.c:1652  */
    break;


#line 2482 "./src/syntax/parser.c" /* yacc.c:1652  */
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
#line 194 "src/syntax/parser.y" /* yacc.c:1918  */


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
