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
#define YYLAST   6170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  411

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
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    34,    35,    38,    39,    42,    45,    46,
      47,    48,    51,    54,    55,    56,    59,    62,    65,    66,
      69,    70,    73,    74,    75,    78,    79,    80,    81,    82,
      85,    86,    87,    90,    91,    92,    95,    96,    99,   100,
     101,   104,   105,   108,   109,   110,   113,   114,   115,   116,
     117,   120,   121,   124,   125,   126,   127,   128,   129,   130,
     133,   134,   137,   140,   143,   146,   149,   152,   153,   156,
     157,   160,   163,   164,   165,   166,   167,   168,   171,   174,
     177,   178,   181,   182,   185,   186,   187,   190,   193
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
  "function_definition", "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "conditional_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "unary_operator",
  "postfix_expression", "primary_expression", "constant",
  "optional_expression", "expression", "assignment_expression",
  "type_check_expression", "exists_expression", "inclusion_expression",
  "removal_expression", "compound_statement",
  "compound_or_inline_statement", "statement_list", "declaration",
  "statement", "expression_statement", "membership_expression",
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
      42,    47,    33,    61,   123,   125,    59
};
# endif

#define YYPACT_NINF -221

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-221)))

#define YYTABLE_NINF -89

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     501,     3,    20,    22,    24,     8,   529,   669,   744,    41,
     884,  -221,   962,   -29,    36,   -17,  2948,  1019,     7,  1099,
    2992,    54,    -7,    44,    50,    71,    13,    73,    80,    90,
      94,    98,   109,   111,   121,   945,  1160,  1801,  2213,  2306,
     527,  1376,  2131,  2278,  1177,   136,    25,    27,   197,    89,
     758,   181,  1928,  4214,  5406,  2352,  4070,  4094,   112,    29,
      64,    79,   102,   149,   154,  3036,  3080,  3124,   187,  3168,
    3212,  3256,  3300,  4118,    77,   122,     7,   527,    13,   125,
     527,   527,   527,   161,   527,   527,   527,   527,   -13,   137,
    5413,  5413,  5413,  5413,  5413,  5413,  5413,  5413,  5413,  5413,
    5413,  5413,  5406,  4238,  5436,  3344,   742,  5406,   151,    35,
     142,  3388,    87,   162,   168,   170,   172,   377,   427,   519,
    4142,   540,  4526,   405,  1055,  1186,   369,   625,   840,   971,
    4550,  4574,  4598,  4622,   250,   189,   326,   333,  3432,    13,
    3476,   395,   396,   180,   185,   190,   419,   465,  4166,   600,
     815,  1030,   199,  3520,  3564,  3608,  3652,  3476,   140,  3696,
     214,  3476,  3740,  4190,   158,   216,   217,   234,   236,  4670,
    4694,  4718,  4742,  4766,  4790,   527,   537,    31,   555,   212,
    1510,  2173,  5294,  4958,  5443,  4814,  4838,  4862,   558,   614,
     632,   662,   734,   739,  4886,   244,   259,   527,  5443,  3784,
    1720,  4262,  4286,  4310,  4334,  4358,   527,  5413,  4382,  4406,
    4430,  4454,  5545,  5562,  5579,  5596,  5613,  5630,   527,   261,
      -3,   113,   335,  1399,  6068,  5963,  5749,  5436,  5647,  5664,
    5681,  5698,   265,   281,    13,   284,   289,   290,   292,  2948,
     136,   282,  1245,  1460,  1612,  2419,  2464,  2508,  2948,  3828,
    3872,   829,   527,   527,   527,   527,   847,  5466,  5466,  5466,
    5466,  5466,  5466,  5466,  5466,  5466,  5466,  5466,  5466,  5443,
    4982,  5436,   877,   961,   979,  4646,  5436,  1044,  5473,  5473,
    5473,  5473,  5473,  5473,  5473,  5473,  5473,  5473,  5473,  5473,
    5436,  5766,  5436,   527,    13,   283,   527,   161,   527,   527,
    3916,   295,  2552,  3960,  1059,  1062,  1092,  1176,  4910,  5006,
    5030,  5054,  5078,  5102,  5126,   527,   764,  5309,  5466,  5150,
    5174,  5198,  5222,   429,  2039,  5534,  2376,  5489,  5504,  5519,
    5324,  5339,  5354,  5369,  1194,   301,  4478,   302,  5715,  5783,
    5798,  5813,  5828,  5843,  5858,   527,   210,  5978,  5473,  5873,
    5888,  5903,  5918,   607,  1852,  6133,  6081,  6094,  6107,  6120,
    5993,  6008,  6023,  6038,   309,   311,  1254,   304,  2596,  1263,
     323,  1267,  1274,  2640,  2684,  4004,  1277,  1281,  1307,  1350,
    1371,  5384,  5436,  4934,  4502,  1385,  6053,  5436,  5732,  3432,
      13,  3432,   313,   321,   325,  5246,   341,  5933,   343,  4048,
     334,  2728,  2772,  2816,  2860,  5270,  5948,   140,   348,  3432,
    2904
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,   380,  -221,     0,  -221,   312,  -221,  1923,
    1987,  1714,  1629,  1503,  1418,  1284,   209,   424,   639,   854,
    1069,   188,  1237,  1838,    30,    37,  1883,  2028,   -12,   -31,
    -220,     1,   -11,   -71,  2057,   -70,   -57,   -36,   -35,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    45,    14,    22,    23,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,    58,    59,   188,   189,   190,   191,   192,   149,   150,
      20,    65,   151,    67,   193,    69,    70,    71,    72,   194
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,    17,    15,   -88,   197,     9,    10,    11,    66,
       1,     2,     3,     4,    73,    74,    18,   -88,    21,   300,
      73,   120,   198,    -8,   278,    28,    29,    75,   303,    19,
      33,   -17,    34,   163,    35,    36,    37,    38,    39,    89,
      -9,   -15,   -10,   -60,   -11,   -17,    40,   106,    73,   -17,
      61,    41,    42,   197,    90,    43,    61,    62,   257,   -52,
     -60,    13,   -17,    62,   107,   -17,   -17,   243,   244,   138,
     198,   -60,    73,   -17,   164,   -51,    21,   115,   -14,    76,
      16,   245,   -53,    77,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,    73,   -54,   231,   -53,
      73,    73,   246,   247,    78,   197,    80,   -20,    61,   153,
     -53,   -16,   -16,    81,   -54,    62,   -20,   -20,    92,    93,
     -55,   140,   198,    82,   -20,   -54,   159,    83,   249,   250,
     162,    84,    73,    73,    73,   -20,    61,   -55,   240,   242,
     -18,   279,    85,    62,    86,   249,   250,   -18,   -55,   249,
     250,    73,   165,   166,    87,    73,   195,   167,   105,   168,
     169,   170,   171,   172,   173,   174,   -12,   -56,    61,    61,
      61,   111,   -57,   175,   -52,    62,    62,    62,    41,    42,
     197,   196,    43,   199,   -56,   -13,   197,    61,   139,   -57,
     197,    61,   -88,   -88,    62,   -56,   141,   198,    62,   -25,
     -57,   211,   142,   198,   143,   -58,   144,   198,   -25,   -25,
     -25,   -25,   -25,   -25,    79,   -18,   -25,   -25,   -25,    98,
      99,   231,   -58,   148,   -18,    91,   154,   -25,    73,    53,
     -20,   155,   -18,   -58,   301,    53,   156,   -19,   279,   -20,
     -20,   259,   260,   -18,   -19,   158,   -20,   -20,   161,   252,
     253,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   103,    61,   231,   110,   254,   -61,   255,
     231,    62,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   231,   -61,   231,    53,    73,    66,
     -88,   370,    66,   -88,    73,   -60,   -61,    73,   293,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   132,
     133,    53,   322,   226,   294,    53,    53,   296,   243,   244,
     243,   244,   297,   298,    61,   299,   241,   152,   302,   368,
      61,    62,   245,    61,   245,   383,   384,    62,   243,   244,
      62,   374,   352,   -61,   106,   388,   160,    53,    53,    53,
     390,   -59,   245,   246,   247,   246,   247,   392,   399,   402,
     401,   107,   -20,   -20,   280,   281,    53,   403,   -59,   -20,
      53,   404,   -79,   246,   247,   405,   231,   406,   410,   -59,
     407,   231,   409,    73,    73,    73,    12,   -28,   108,   240,
     242,   240,   242,   270,     0,   197,   -28,   -28,   -28,   -28,
     -28,   -28,     0,    73,   -28,   -28,   -28,    98,    99,   240,
     242,   145,   198,   -64,   -65,   -28,   275,     0,     0,    61,
      61,    61,   295,   -21,     0,     0,    62,    62,    62,     0,
     -64,   -65,   -21,   -21,    92,    93,   291,   -62,     0,    61,
     -21,   -64,   -65,    53,    54,   197,    62,   -21,     0,     0,
      54,   -21,     0,     0,   -62,     0,   -21,   -21,   259,   260,
       0,   146,   198,   -21,   -21,   -62,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   332,   333,    54,     0,
     226,     0,   367,   -63,     0,   226,     0,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   362,   363,   226,
     -63,   226,    54,    53,     1,     2,     3,     4,     0,    53,
       0,   -63,    53,     0,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,    54,   381,   227,    -2,
      54,    54,     1,     2,     3,     4,     0,   197,     0,   165,
     166,     0,     0,     0,   167,     0,   168,   169,   170,   171,
     172,   173,   174,   147,   198,   -60,     0,   386,   -19,     0,
     175,     0,    54,    54,    54,    41,    42,   -19,    91,    43,
       0,   -60,   -60,   -18,     0,   -19,   -53,   241,   400,   241,
       0,    54,   -18,   258,     0,    54,   -19,     0,     0,   -18,
     -18,   226,   -53,   -53,     0,   408,   226,   241,    53,    53,
      53,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,    53,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,   207,   -54,   -67,   -21,   -21,   280,   281,   -67,   -67,
       0,   -21,   -67,   -29,     0,   -67,   -67,     0,   -54,   -54,
     -55,   227,   -29,   -29,   -29,   -29,   -29,   -29,    54,    55,
     -29,   -29,   -29,    98,    99,    55,   -55,   -55,     0,    -4,
       0,   -29,    -4,    -4,    -4,    -4,     0,     0,     0,     0,
     -56,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,    55,     0,   227,   -56,   -56,     0,     0,
     227,     0,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   227,     0,   227,    55,    54,     0,
       0,     0,     0,     0,    54,     0,     0,    54,     0,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,    55,   318,   228,    -5,    55,    55,    -5,    -5,    -5,
      -5,     0,   -57,     0,    28,    29,     0,   -58,     0,    33,
       0,    34,   163,    35,    36,    37,    38,    39,   -57,   -57,
       0,     0,   348,   -58,   -58,    40,   -22,    55,    55,    55,
      41,    42,   -19,     0,    43,   -22,   -22,   -22,   -22,    94,
      95,   -19,   258,   -22,    96,    97,    55,     0,   -19,   -19,
      55,     0,     0,     0,   -22,     0,   227,     0,     0,     0,
       0,   227,     0,    54,    54,    54,     0,     0,   -80,   -80,
     -80,   -80,   -80,   157,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,    54,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,   208,   197,   -80,     0,
       0,     0,     0,   -80,   -80,     0,     0,   -80,   -26,     0,
     -80,   -80,     0,   -51,   198,   197,   228,   -26,   -26,   -26,
     -26,   -26,   -26,    55,    56,   -26,   -26,   -26,    98,    99,
      56,   308,   198,     0,    -6,     0,   -26,    -6,    -6,    -6,
      -6,     0,     0,     0,     0,   197,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,    56,     0,
     228,   -79,   198,     0,     0,   228,     0,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   228,
       0,   228,    56,    55,     0,     0,     0,     0,     0,    55,
       0,     0,    55,     0,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,    56,   319,   229,     0,
      56,    56,    -3,   -46,     0,    -3,    -3,    -3,    -3,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -59,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   349,   -46,   -27,
       0,   -46,    56,    56,    56,   -59,   -59,   197,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -27,   -27,    98,
      99,    56,     0,   336,   198,    56,     0,   -27,     0,    -7,
       0,   228,    -7,    -7,    -7,    -7,   228,     0,    55,    55,
      55,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,    55,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
       0,   209,   197,   -68,     0,     0,     0,     0,   -68,   -68,
       0,     0,   -68,   -23,     0,   -68,   -68,   197,   338,   198,
     197,   229,   -23,   -23,   -23,   -23,    94,    95,    56,    57,
     -23,    96,    97,   376,   198,    57,   377,   198,     0,   -71,
       0,   -23,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
     197,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,    57,     0,   229,   378,   198,     0,     0,
     229,     0,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   229,     0,   229,    57,    56,     0,
       0,     0,     0,     0,    56,     0,     0,    56,     0,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,    57,   320,   230,     0,    57,    57,   -66,   -47,     0,
     -66,   -66,   -66,   -66,     0,     0,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   197,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   350,   -47,   -24,     0,   -47,    57,    57,    57,
     379,   198,   -61,   -24,   -24,   -24,   -24,    94,    95,     0,
       0,   -24,    96,    97,     0,     0,    57,     0,   -61,   -61,
      57,     0,   -24,     0,     0,     0,   229,     0,     0,     0,
       0,   229,     0,    56,    56,    56,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,    56,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   197,     0,     0,     0,   210,    88,   -77,     0,
       0,   197,     0,   -77,   -77,   197,     0,   -77,   389,   198,
     -77,   -77,   197,     0,     0,   -64,   230,   391,   198,   -65,
       0,   393,   198,    57,    52,     0,     0,     0,   394,   198,
      52,   -64,   -64,     0,   109,   -65,   -65,   112,   113,   114,
       0,   116,   117,   118,   119,   -62,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,     0,     0,
     230,   -62,   -62,   136,     0,   230,     0,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   230,
       0,   230,    52,    57,     0,     0,     0,     0,   -63,    57,
       0,     0,    57,     0,    52,    52,    52,    52,    52,    52,
      52,    52,   130,   131,   -63,   -63,    52,   321,   225,   197,
      52,    52,     0,     0,     0,   251,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   197,     0,   395,   198,     0,     0,   -38,
       0,     0,   256,     0,   -38,   -38,     0,   351,   -38,   397,
     198,     0,    52,    52,    52,     0,   -22,   -22,   -22,   -22,
     282,   283,     0,   -22,   272,   284,   285,     0,    51,     0,
       0,    52,     0,   274,    51,    52,     0,     0,     0,     0,
       0,   230,     0,     0,     0,   277,   230,     0,    57,    57,
      57,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,    57,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,   304,
     305,   306,   307,   -72,     0,     0,    51,     0,   -72,   -72,
       0,     0,   -72,     0,     0,   -72,   -72,     0,    51,    51,
      51,    51,   126,   127,   128,   129,     0,     0,    52,     0,
      51,     0,   224,    50,    51,    51,     0,     0,   -22,    50,
     366,     0,     0,   369,     0,   371,   372,   -22,   -22,   -22,
     -22,   261,   262,     0,   -22,   -22,   263,   264,     0,   330,
     331,     0,   380,     0,     0,   225,    51,    51,    51,     0,
     225,     0,   225,   225,   225,   225,   225,   225,   225,   225,
     360,   361,     0,     0,   225,    51,   225,     0,    52,    51,
       0,    50,   385,     0,    52,     0,     0,    52,     0,     0,
       0,     0,     0,    50,    50,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,   223,     0,    50,
      50,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,    50,    50,    50,   251,   -73,     0,     0,     0,    49,
     -73,   -73,    51,     0,   -73,    49,     0,   -73,   -73,     0,
      50,     0,     0,     0,    50,     0,   225,     0,     0,     0,
       0,   225,     0,    52,    52,    52,     0,     0,     0,   326,
     327,   328,   329,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,    52,   224,     0,   224,   224,   224,   224,
     356,   357,   358,   359,     0,     0,     0,    49,   224,     0,
     224,     0,    51,     0,     0,     0,     0,     0,    51,    49,
     123,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,   222,    48,    49,    49,    50,   -88,     0,
      48,     0,     0,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   324,   325,     0,     0,   -88,    49,    49,    49,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   223,
       0,   223,   223,   354,   355,     0,    49,     0,     0,     0,
      49,     0,    48,   223,     0,   223,     0,    50,     0,     0,
     224,     0,     0,    50,   121,   224,    50,    51,    51,    51,
       0,     0,     0,     0,     0,     0,    48,     0,   221,   -48,
      48,    48,     0,     0,     0,     0,     0,    51,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,     0,     0,   -48,     0,     0,
       0,     0,    48,    48,    48,     0,     0,     0,    60,     0,
       0,     0,     0,    49,    60,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,    48,     0,     0,     0,   -23,
     -23,   -23,   -23,   282,   283,   223,   -23,   323,   284,   285,
     223,     0,    50,    50,    50,     0,     0,     0,     0,     0,
     222,     0,     0,    63,     0,   222,     0,   222,   353,    63,
       0,     0,    50,     0,     0,     0,    60,     0,     0,   222,
       0,   222,     0,    49,     0,     0,     0,     0,     0,    49,
       0,     0,    49,     0,     0,     0,     0,     0,     0,     0,
     134,     0,   135,    46,    60,   137,   -30,     0,    48,    46,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,    63,     0,   -30,   -30,   -30,   -30,   -30,   100,   101,
       0,   316,     0,     0,   -30,     0,    60,    60,    60,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,    63,
     221,     0,   346,     0,     0,    60,     0,     0,     0,    60,
       0,    46,     0,     0,   221,     0,   221,    47,    48,     0,
       0,   222,     0,    47,    48,     0,   222,    48,    49,    49,
      49,    63,    63,    63,     0,    46,     0,   219,     0,    46,
      46,     0,     0,     0,     0,     0,   273,     0,    49,     0,
      63,     0,     0,     0,    63,     0,     0,     0,    64,     0,
       0,     0,     0,     0,    64,     0,     0,   -23,     0,     0,
       0,    46,    46,    46,     0,    47,   -23,   -23,   -23,   -23,
     261,   262,    60,   -23,   -23,   263,   264,    68,     0,     0,
      46,     0,     0,    68,    46,     0,     0,     0,     0,    47,
       0,   220,     0,    47,    47,     0,   221,     0,     0,     0,
       0,   221,     0,    48,    48,    48,    64,   334,     0,   335,
       0,     0,     0,     0,   337,     0,     0,    63,     0,     0,
       0,     0,     0,    48,     0,    47,    47,    47,   364,     0,
     365,     0,    60,     0,    64,    68,     0,     0,    60,     0,
       0,    60,     0,     0,    47,     0,     0,     0,    47,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,    46,     0,     0,
       0,     0,     0,    68,   -39,     0,    64,    64,    64,   -39,
     -39,     0,     0,   -39,     0,     0,     0,    63,     0,     0,
       0,     0,     0,    63,     0,    64,    63,     0,     0,    64,
       0,   -25,     0,     0,   219,    68,    68,    68,     0,   219,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   265,   266,   219,    68,   219,     0,    46,    68,     0,
     396,    47,     0,    46,     0,   398,    46,    60,    60,    60,
       0,   -50,     0,     0,     0,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,    60,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,     0,   220,   -50,
       0,     0,    64,   220,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    63,    63,     0,     0,   220,     0,   220,
       0,    47,     0,     0,     0,     0,     0,    47,     0,     0,
      47,    68,    63,     0,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   219,     0,     0,     0,     0,
     219,   -40,    46,    46,    46,     0,   -40,   -40,     0,     0,
     -40,     0,    64,     0,   -49,     0,     0,     0,    64,     0,
       0,    64,    46,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,
       0,    68,   -49,     0,     0,     0,     0,    68,     0,     0,
      68,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     -36,     0,     0,     0,   220,     0,    47,    47,    47,   -36,
     -36,   -36,   -36,   -36,   -36,   104,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -28,   -36,    47,     0,   -36,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   265,   266,     0,    64,    64,    64,
       0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,    64,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,    68,    68,    68,     0,
       0,     0,   -74,     0,     0,     0,     0,   -74,   -74,     0,
       0,   -74,     0,     0,   -74,   -74,    68,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,     0,
       0,     0,   -75,   -75,     0,     0,   -75,     0,     0,   -75,
     -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,   -76,   -76,     0,     0,
     -76,     0,     0,   -76,   -76,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,     0,   -78,     0,     0,     0,     0,
     -78,   -78,     0,     0,   -78,     0,     0,   -78,   -78,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,     0,     0,     0,   -87,   -87,     0,     0,   -87,     0,
       0,   -87,   -87,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,   -66,     0,     0,     0,     0,   -66,   -66,
       0,     0,   -66,     0,     0,   -66,   -66,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,   -71,   -71,     0,     0,   -71,     0,     0,   -71,
     -71,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,     0,   -83,   -83,     0,     0,
     -83,     0,     0,   -83,   -83,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,   -86,     0,     0,     0,     0,
     -86,   -86,     0,     0,   -86,     0,     0,   -86,   -86,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,     0,   -85,   -85,     0,     0,   -85,     0,
       0,   -85,   -85,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,     0,   -84,   -84,
       0,     0,   -84,     0,     0,   -84,   -84,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,     0,   -82,   -82,     0,     0,   -82,     0,     0,   -82,
     -82,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,     0,     0,   -70,   -70,     0,     0,
     -70,     0,     0,   -70,   -70,     1,     2,     3,     4,    24,
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       0,    34,   163,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,   -52,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,     0,     0,     0,   -77,   -77,     0,     0,   -77,     0,
       0,   -77,   -77,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,   -69,     0,     0,     0,     0,   -69,   -69,
       0,     0,   -69,     0,     0,   -69,   -69,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,   -72,   -72,     0,     0,   -72,     0,     0,   -72,
     -72,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,   -73,   -73,     0,     0,
     -73,     0,     0,   -73,   -73,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,   -74,     0,     0,     0,     0,
     -74,   -74,     0,     0,   -74,     0,     0,   -74,   -74,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,     0,     0,   -75,   -75,     0,     0,   -75,     0,
       0,   -75,   -75,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,   -76,   -76,
       0,     0,   -76,     0,     0,   -76,   -76,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,   -78,     0,     0,
       0,     0,   -78,   -78,     0,     0,   -78,     0,     0,   -78,
     -78,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,   -87,     0,     0,     0,     0,   -87,   -87,     0,     0,
     -87,     0,     0,   -87,   -87,     1,     2,     3,     4,   232,
       0,   233,   234,   235,    28,    29,   236,   237,   238,    33,
       0,    34,   163,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,   239,     0,   -52,     1,
       2,     3,     4,    24,     0,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     0,    34,   163,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
     248,     0,   -52,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,   -83,     0,     0,     0,     0,   -83,   -83,
       0,     0,   -83,     0,     0,   -83,   -83,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,   -86,   -86,     0,     0,   -86,     0,     0,   -86,
     -86,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,   -85,   -85,     0,     0,
     -85,     0,     0,   -85,   -85,   -84,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,   -84,     0,     0,     0,     0,
     -84,   -84,     0,     0,   -84,     0,     0,   -84,   -84,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,   -81,   -81,     0,     0,   -81,     0,
       0,   -81,   -81,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,     0,   -82,     0,     0,     0,     0,   -82,   -82,
       0,     0,   -82,     0,     0,   -82,   -82,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,   -71,   -71,     0,     0,   -71,     0,     0,   -71,
     -71,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,     0,   -67,   -67,     0,     0,
     -67,     0,     0,   -67,   -67,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,     0,   -68,     0,     0,     0,     0,
     -68,   -68,     0,     0,   -68,     0,     0,   -68,   -68,     1,
       2,     3,     4,    24,     0,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     0,    34,   163,    35,    36,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,   373,   -52,     1,     2,     3,     4,    24,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,    34,
     163,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,   375,   -52,   -66,   -66,   -66,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,   -66,     0,     0,
       0,     0,   -66,   -66,     0,     0,   -66,     0,     0,   -66,
     -66,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,     0,     0,     0,   -80,   -80,   -41,     0,
     -80,     0,     0,   -80,   -80,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -44,   -41,     0,     0,   -41,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -43,   -44,     0,     0,
     -44,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -45,   -43,     0,     0,   -43,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -42,   -45,     0,     0,   -45,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -88,   -42,
       0,     0,   -42,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -33,   -88,     0,     0,   -88,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -37,   102,     0,     0,
     -33,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -46,   -37,     0,     0,   -37,     0,     0,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -47,     0,     0,     0,   -46,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,     0,
       0,     0,   -47,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -50,     0,     0,     0,   -48,     0,     0,     0,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -49,     0,     0,     0,
     -50,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -36,     0,     0,     0,   -49,     0,     0,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   276,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -41,     0,     0,     0,   -36,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -44,     0,
       0,     0,   -41,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -43,     0,     0,     0,   -44,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -45,     0,     0,     0,
     -43,     0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -42,     0,     0,     0,   -45,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -33,     0,     0,     0,   -42,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -31,     0,
       0,     0,   -33,     0,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,
     100,   101,   -32,     0,     0,     0,   -31,     0,     0,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -32,   -32,   -32,   -32,   100,   101,   -34,     0,     0,     0,
     -32,     0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -35,     0,     0,     0,   -34,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -37,     0,     0,     0,   -35,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -88,     0,
       0,     0,   -37,     0,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -46,   -88,     0,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -47,   -46,     0,     0,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -48,   -47,     0,     0,     0,     0,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -50,   -48,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -49,   -50,
       0,     0,     0,     0,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -36,   -49,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   271,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -41,   -36,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -44,   -41,     0,     0,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -43,   -44,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -45,   -43,
       0,     0,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -42,   -45,     0,     0,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -33,   -42,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -37,   269,     0,     0,     0,     0,     0,     0,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -88,   -37,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -48,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -49,     0,     0,     0,     0,     0,
       0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -36,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   382,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -41,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -43,     0,     0,     0,     0,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -30,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -33,   -30,   -30,
     -30,   -30,   -30,   -30,   267,   268,   -33,   -33,   -33,   -33,
     -33,   -33,   -31,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -31,   -31,   -31,   -31,   -31,   -31,   -32,   -31,   -31,
     -31,   -31,   -31,   -31,   267,   268,   -32,   -32,   -32,   -32,
     -32,   -32,   -34,   -32,   -32,   -32,   -32,   -32,   -32,   267,
     268,   -34,   -34,   -34,   -34,   -34,   -34,   -35,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -35,   -35,   -35,   -35,
     -35,   -35,   -37,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   163,    35,    36,    37,
      38,    39,     0,   200,   201,   202,   203,   204,   205,    40,
       0,     0,     0,     0,    41,    42,   206,     0,    43,     0,
       0,    41,    42,     0,     0,    43,   212,   213,   214,   215,
     216,   217,     0,   169,   170,   171,   172,   173,   174,   218,
       0,     0,     0,     0,    41,    42,   175,     0,    43,     0,
       0,    41,    42,     0,     0,    43,   309,   310,   311,   312,
     313,   314,     0,   339,   340,   341,   342,   343,   344,   315,
       0,     0,     0,     0,    41,    42,   345,   -29,    43,     0,
       0,    41,    42,     0,     0,    43,   -29,   -29,   -29,   -29,
     -29,   -29,   -26,   -29,   -29,   -29,   -29,   265,   266,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -27,   -26,   -26,
     -26,   -26,   265,   266,     0,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -24,   -27,   -27,   -27,   -27,   265,   266,     0,
       0,   -24,   -24,   -24,   -24,   261,   262,     0,   -24,   -24,
     263,   264,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -36,   -36,   -36,   -36,   -36,   -36,
     292,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   290,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -36,   -36,   -36,   -36,   -36,   -36,   387,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,
     -30,   -30,   -30,   288,   289,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,
     -31,   -31,   -31,   288,   289,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   288,   289,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,     0,   -25,   -25,   286,   287,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,   286,
     287,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,
     -29,   -29,   286,   287,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,     0,   -26,   -26,   286,   287,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   286,   287,
     -24,   -24,   -24,   -24,   282,   283,     0,   -24,     0,   284,
     285
};

static const yytype_int16 yycheck[] =
{
       0,     0,    14,     9,    33,    18,     6,     6,     0,    20,
       3,     4,     5,     6,    20,    21,    33,    46,    18,   239,
      26,    34,    35,    20,    27,    12,    13,    34,   248,    46,
      17,    34,    19,    20,    21,    22,    23,    24,    25,    45,
      20,    34,    20,    18,    20,    18,    33,    18,    54,    18,
      20,    38,    39,    18,    27,    42,    26,    20,    27,    46,
      35,    20,    35,    26,    35,    34,    35,   138,   138,    34,
      35,    46,    78,    46,    20,    46,    76,    83,    34,    35,
      44,   138,    18,    33,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    18,   104,    35,
     106,   107,   138,   138,    33,    18,    33,    18,    78,   140,
      46,    34,    35,    33,    35,    78,    27,    28,    29,    30,
      18,    34,    35,    33,    35,    46,   157,    33,   140,   140,
     161,    33,   138,   139,   140,    46,   106,    35,   138,   138,
      27,    28,    33,   106,    33,   157,   157,    34,    46,   161,
     161,   157,    12,    13,    33,   161,    20,    17,    46,    19,
      20,    21,    22,    23,    24,    25,    44,    18,   138,   139,
     140,    46,    18,    33,    34,   138,   139,   140,    38,    39,
      18,    20,    42,    46,    35,    34,    18,   157,    46,    35,
      18,   161,    34,    35,   157,    46,    34,    35,   161,    18,
      46,   207,    34,    35,    34,    18,    34,    35,    27,    28,
      29,    30,    31,    32,    26,    18,    35,    36,    37,    38,
      39,   227,    35,    34,    27,    28,    46,    46,   234,    20,
      18,    46,    35,    46,   240,    26,    46,    27,    28,    27,
      28,    29,    30,    46,    34,    46,    34,    35,    34,    33,
      33,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    54,   234,   271,    78,    33,    18,    33,
     276,   234,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    35,   292,    78,   294,   300,
      46,   297,   303,    34,   300,    34,    46,   303,    33,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   318,   104,    33,   106,   107,    33,   389,   389,
     391,   391,    33,    33,   294,    33,   138,   139,    46,    46,
     300,   294,   389,   303,   391,    34,    34,   300,   409,   409,
     303,    46,   348,    34,    18,    34,   158,   138,   139,   140,
      46,    18,   409,   389,   389,   391,   391,    34,   389,    46,
     391,    35,    27,    28,    29,    30,   157,    46,    35,    34,
     161,    46,    46,   409,   409,    34,   382,    34,   409,    46,
      46,   387,    34,   389,   390,   391,     6,    18,    76,   389,
     389,   391,   391,   184,    -1,    18,    27,    28,    29,    30,
      31,    32,    -1,   409,    35,    36,    37,    38,    39,   409,
     409,    34,    35,    18,    18,    46,   207,    -1,    -1,   389,
     390,   391,   234,    18,    -1,    -1,   389,   390,   391,    -1,
      35,    35,    27,    28,    29,    30,   227,    18,    -1,   409,
      35,    46,    46,   234,    20,    18,   409,    18,    -1,    -1,
      26,    46,    -1,    -1,    35,    -1,    27,    28,    29,    30,
      -1,    34,    35,    34,    35,    46,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    54,    -1,
     271,    -1,   294,    18,    -1,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
      35,   292,    78,   294,     3,     4,     5,     6,    -1,   300,
      -1,    46,   303,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   318,   104,     0,
     106,   107,     3,     4,     5,     6,    -1,    18,    -1,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    34,    35,    18,    -1,   348,    18,    -1,
      33,    -1,   138,   139,   140,    38,    39,    27,    28,    42,
      -1,    34,    35,    18,    -1,    35,    18,   389,   390,   391,
      -1,   157,    27,    28,    -1,   161,    46,    -1,    -1,    34,
      35,   382,    34,    35,    -1,   407,   387,   409,   389,   390,
     391,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   409,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,   207,    18,    33,    27,    28,    29,    30,    38,    39,
      -1,    34,    42,    18,    -1,    45,    46,    -1,    34,    35,
      18,   227,    27,    28,    29,    30,    31,    32,   234,    20,
      35,    36,    37,    38,    39,    26,    34,    35,    -1,     0,
      -1,    46,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      18,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    54,    -1,   271,    34,    35,    -1,    -1,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    -1,   292,    78,   294,    -1,
      -1,    -1,    -1,    -1,   300,    -1,    -1,   303,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   318,   104,     0,   106,   107,     3,     4,     5,
       6,    -1,    18,    -1,    12,    13,    -1,    18,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    34,    35,
      -1,    -1,   348,    34,    35,    33,    18,   138,   139,   140,
      38,    39,    18,    -1,    42,    27,    28,    29,    30,    31,
      32,    27,    28,    35,    36,    37,   157,    -1,    34,    35,
     161,    -1,    -1,    -1,    46,    -1,   382,    -1,    -1,    -1,
      -1,   387,    -1,   389,   390,   391,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   409,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,   207,    18,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    18,    -1,
      45,    46,    -1,    34,    35,    18,   227,    27,    28,    29,
      30,    31,    32,   234,    20,    35,    36,    37,    38,    39,
      26,    34,    35,    -1,     0,    -1,    46,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    18,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    54,    -1,
     271,    34,    35,    -1,    -1,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
      -1,   292,    78,   294,    -1,    -1,    -1,    -1,    -1,   300,
      -1,    -1,   303,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   318,   104,    -1,
     106,   107,     0,    18,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    18,
      35,    36,    37,    38,    39,    40,    41,   348,    43,    18,
      -1,    46,   138,   139,   140,    34,    35,    18,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,   157,    -1,    34,    35,   161,    -1,    46,    -1,     0,
      -1,   382,     3,     4,     5,     6,   387,    -1,   389,   390,
     391,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   409,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,   207,    18,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    18,    -1,    45,    46,    18,    34,    35,
      18,   227,    27,    28,    29,    30,    31,    32,   234,    20,
      35,    36,    37,    34,    35,    26,    34,    35,    -1,     0,
      -1,    46,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      18,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    54,    -1,   271,    34,    35,    -1,    -1,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    -1,   292,    78,   294,    -1,
      -1,    -1,    -1,    -1,   300,    -1,    -1,   303,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   318,   104,    -1,   106,   107,     0,    18,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    18,    35,    36,    37,    38,    39,
      40,    41,   348,    43,    18,    -1,    46,   138,   139,   140,
      34,    35,    18,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    -1,    -1,   157,    -1,    34,    35,
     161,    -1,    46,    -1,    -1,    -1,   382,    -1,    -1,    -1,
      -1,   387,    -1,   389,   390,   391,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   409,    19,    20,    21,    22,    23,    24,
      25,    -1,    18,    -1,    -1,    -1,   207,    40,    33,    -1,
      -1,    18,    -1,    38,    39,    18,    -1,    42,    34,    35,
      45,    46,    18,    -1,    -1,    18,   227,    34,    35,    18,
      -1,    34,    35,   234,    20,    -1,    -1,    -1,    34,    35,
      26,    34,    35,    -1,    77,    34,    35,    80,    81,    82,
      -1,    84,    85,    86,    87,    18,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,    -1,    -1,
     271,    34,    35,   106,    -1,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
      -1,   292,    78,   294,    -1,    -1,    -1,    -1,    18,   300,
      -1,    -1,   303,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    34,    35,   102,   318,   104,    18,
     106,   107,    -1,    -1,    -1,   158,    20,    21,    22,    23,
      24,    25,    -1,    18,    -1,    34,    35,    -1,    -1,    33,
      -1,    -1,   175,    -1,    38,    39,    -1,   348,    42,    34,
      35,    -1,   138,   139,   140,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,   197,    36,    37,    -1,    20,    -1,
      -1,   157,    -1,   206,    26,   161,    -1,    -1,    -1,    -1,
      -1,   382,    -1,    -1,    -1,   218,   387,    -1,   389,   390,
     391,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   409,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,   252,
     253,   254,   255,    33,    -1,    -1,    78,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,   234,    -1,
     102,    -1,   104,    20,   106,   107,    -1,    -1,    18,    26,
     293,    -1,    -1,   296,    -1,   298,   299,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    -1,   265,
     266,    -1,   315,    -1,    -1,   271,   138,   139,   140,    -1,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,    -1,   290,   157,   292,    -1,   294,   161,
      -1,    78,   345,    -1,   300,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,    -1,   106,
     107,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,   138,   139,   140,   407,    33,    -1,    -1,    -1,    20,
      38,    39,   234,    -1,    42,    26,    -1,    45,    46,    -1,
     157,    -1,    -1,    -1,   161,    -1,   382,    -1,    -1,    -1,
      -1,   387,    -1,   389,   390,   391,    -1,    -1,    -1,   261,
     262,   263,   264,    -1,    -1,    -1,    -1,    -1,    -1,   271,
      -1,    -1,    -1,   409,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,    -1,    -1,    -1,    78,   290,    -1,
     292,    -1,   294,    -1,    -1,    -1,    -1,    -1,   300,    90,
      91,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   104,    20,   106,   107,   234,    18,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,   259,   260,    -1,    -1,    46,   138,   139,   140,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,   276,
      -1,   278,   279,   280,   281,    -1,   157,    -1,    -1,    -1,
     161,    -1,    78,   290,    -1,   292,    -1,   294,    -1,    -1,
     382,    -1,    -1,   300,    90,   387,   303,   389,   390,   391,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   104,    18,
     106,   107,    -1,    -1,    -1,    -1,    -1,   409,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,   138,   139,   140,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,   234,    26,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,   161,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,   382,    34,   258,    36,    37,
     387,    -1,   389,   390,   391,    -1,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    20,    -1,   276,    -1,   278,   279,    26,
      -1,    -1,   409,    -1,    -1,    -1,    78,    -1,    -1,   290,
      -1,   292,    -1,   294,    -1,    -1,    -1,    -1,    -1,   300,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,   104,    20,   106,   107,    18,    -1,   234,    26,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    78,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,   257,    -1,    -1,    46,    -1,   138,   139,   140,    -1,
      -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,   106,
     276,    -1,   278,    -1,    -1,   157,    -1,    -1,    -1,   161,
      -1,    78,    -1,    -1,   290,    -1,   292,    20,   294,    -1,
      -1,   382,    -1,    26,   300,    -1,   387,   303,   389,   390,
     391,   138,   139,   140,    -1,   102,    -1,   104,    -1,   106,
     107,    -1,    -1,    -1,    -1,    -1,   198,    -1,   409,    -1,
     157,    -1,    -1,    -1,   161,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    18,    -1,    -1,
      -1,   138,   139,   140,    -1,    78,    27,    28,    29,    30,
      31,    32,   234,    34,    35,    36,    37,    20,    -1,    -1,
     157,    -1,    -1,    26,   161,    -1,    -1,    -1,    -1,   102,
      -1,   104,    -1,   106,   107,    -1,   382,    -1,    -1,    -1,
      -1,   387,    -1,   389,   390,   391,    78,   269,    -1,   271,
      -1,    -1,    -1,    -1,   276,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,   409,    -1,   138,   139,   140,   290,    -1,
     292,    -1,   294,    -1,   106,    78,    -1,    -1,   300,    -1,
      -1,   303,    -1,    -1,   157,    -1,    -1,    -1,   161,    -1,
      -1,    20,    21,    22,    23,    24,    25,   234,    -1,    -1,
      -1,    -1,    -1,   106,    33,    -1,   138,   139,   140,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,   294,    -1,    -1,
      -1,    -1,    -1,   300,    -1,   157,   303,    -1,    -1,   161,
      -1,    18,    -1,    -1,   271,   138,   139,   140,    -1,   276,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,   290,   157,   292,    -1,   294,   161,    -1,
     382,   234,    -1,   300,    -1,   387,   303,   389,   390,   391,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,   409,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,   271,    46,
      -1,    -1,   234,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   389,   390,   391,    -1,    -1,   290,    -1,   292,
      -1,   294,    -1,    -1,    -1,    -1,    -1,   300,    -1,    -1,
     303,   234,   409,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,   382,    -1,    -1,    -1,    -1,
     387,    33,   389,   390,   391,    -1,    38,    39,    -1,    -1,
      42,    -1,   294,    -1,    18,    -1,    -1,    -1,   300,    -1,
      -1,   303,   409,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,   294,    46,    -1,    -1,    -1,    -1,   300,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,
      18,    -1,    -1,    -1,   387,    -1,   389,   390,   391,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    43,   409,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    -1,   389,   390,   391,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   409,    19,    20,
      21,    22,    23,    24,    25,    -1,   389,   390,   391,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,   409,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    -1,    46,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    -1,    46,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    18,    -1,
      42,    -1,    -1,    45,    46,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    18,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      18,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    43,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    18,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      18,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
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
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    18,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      18,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    18,    43,    -1,    -1,    -1,    -1,
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
      31,    32,    18,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    20,    21,    22,    23,
      24,    25,    -1,    20,    21,    22,    23,    24,    25,    33,
      -1,    -1,    -1,    -1,    38,    39,    33,    -1,    42,    -1,
      -1,    38,    39,    -1,    -1,    42,    20,    21,    22,    23,
      24,    25,    -1,    20,    21,    22,    23,    24,    25,    33,
      -1,    -1,    -1,    -1,    38,    39,    33,    -1,    42,    -1,
      -1,    38,    39,    -1,    -1,    42,    20,    21,    22,    23,
      24,    25,    -1,    20,    21,    22,    23,    24,    25,    33,
      -1,    -1,    -1,    -1,    38,    39,    33,    18,    42,    -1,
      -1,    38,    39,    -1,    -1,    42,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    38,    39,    -1,
      -1,    27,    28,    29,    30,    31,    32,    18,    34,    35,
      36,    37,    38,    39,    -1,    -1,    27,    28,    29,    30,
      31,    32,    18,    34,    35,    36,    37,    38,    39,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    27,    28,    29,    30,    31,    32,    33,    34,
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
      43,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
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
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
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
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      78,     0,    50,    20,    53,    86,    44,    75,    33,    46,
      77,    52,    54,    55,     7,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    19,    21,    22,    23,    24,    25,
      33,    38,    39,    42,    45,    52,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    86,    34,    35,    33,    33,    68,
      33,    33,    33,    33,    33,    33,    33,    33,    69,    86,
      27,    28,    29,    30,    31,    32,    36,    37,    38,    39,
      40,    41,    43,    63,    33,    46,    18,    35,    54,    69,
      68,    46,    69,    69,    69,    86,    69,    69,    69,    69,
      34,    58,    63,    59,    60,    60,    61,    61,    61,    61,
      62,    62,    63,    63,    70,    70,    69,    70,    34,    46,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    75,
      76,    79,    68,    76,    46,    46,    46,     8,    46,    76,
      68,    34,    76,    20,    20,    12,    13,    17,    19,    20,
      21,    22,    23,    24,    25,    33,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    70,    71,
      72,    73,    74,    81,    86,    20,    20,    18,    35,    46,
      20,    21,    22,    23,    24,    25,    33,    64,    65,    66,
      67,    86,    20,    21,    22,    23,    24,    25,    33,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    86,     7,     9,    10,    11,    14,    15,    16,    44,
      52,    68,    78,    80,    82,    83,    84,    85,    44,    75,
      79,    69,    33,    33,    33,    33,    69,    27,    28,    29,
      30,    31,    32,    36,    37,    38,    39,    40,    41,    43,
      63,    33,    69,    70,    69,    63,    33,    69,    27,    28,
      29,    30,    31,    32,    36,    37,    38,    39,    40,    41,
      43,    63,    33,    33,    33,    68,    33,    33,    33,    33,
      77,    86,    46,    77,    69,    69,    69,    69,    34,    20,
      21,    22,    23,    24,    25,    33,    58,    63,    64,    65,
      66,    67,    86,    59,    60,    60,    61,    61,    61,    61,
      62,    62,    63,    63,    70,    70,    34,    70,    34,    20,
      21,    22,    23,    24,    25,    33,    58,    63,    64,    65,
      66,    67,    86,    59,    60,    60,    61,    61,    61,    61,
      62,    62,    63,    63,    70,    70,    69,    68,    46,    69,
      86,    69,    69,    45,    46,    45,    34,    34,    34,    34,
      69,    63,    33,    34,    34,    69,    63,    33,    34,    34,
      46,    34,    34,    34,    34,    34,    70,    34,    70,    76,
      68,    76,    46,    46,    46,    34,    34,    46,    68,    34,
      76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    54,    54,    54,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    66,    66,    66,    67,    67,    67,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    72,    73,    74,    75,    76,    76,    77,
      77,    78,    79,    79,    79,    79,    79,    79,    80,    81,
      82,    82,    83,    83,    84,    84,    84,    85,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     3,     1,     0,     2,     1,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     4,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     4,     4,     4,     4,     3,     1,     1,     2,
       0,     3,     1,     1,     1,     1,     1,     1,     2,     3,
       5,     7,     9,     5,     5,     5,     5,     3,     1
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
      
#line 2650 "./src/syntax/parser.c" /* yacc.c:1652  */
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
#line 196 "src/syntax/parser.y" /* yacc.c:1918  */


void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}



