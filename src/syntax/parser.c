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

  struct ast_node *ast = NULL

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
    FOO = 262,
    IF = 263,
    ELSE = 264,
    FOR = 265,
    FORALL = 266,
    ADD = 267,
    REMOVE = 268
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "src/syntax/parser.y" /* yacc.c:352  */

  struct ast_node *ast_node;

#line 139 "./src/syntax/parser.c" /* yacc.c:352  */
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
#define YYLAST   8752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  517

#define YYUNDEFTOK  2
#define YYMAXUTOK   286

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
       2,     2,     2,    29,     2,     2,     2,     2,     2,     2,
      14,    15,    27,    25,    16,    26,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
      21,    35,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    17,
      18,    19,    20,    23,    24,    30,    31,    32,    33,    34,
      36,    40,    41,    42,    43,    44,    45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    29,    30,    33,    34,    37,    40,    41,
      42,    43,    46,    49,    50,    51,    54,    57,    60,    61,
      64,    65,    68,    69,    70,    73,    74,    75,    76,    77,
      80,    81,    82,    85,    86,    87,    90,    91,    94,    95,
      96,    99,   100,   103,   104,   105,   108,   109,   110,   111,
     112,   115,   118,   121,   124,   127,   130,   131,   134,   135,
     136,   139,   140,   143,   146,   149,   150,   153,   154,   157,
     158,   161,   164,   165,   166,   167,   168,   169,   170,   173,
     176,   179,   180,   183,   184,   187,   190,   193,   194,   195,
     198,   201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ELEM", "SET", "FOO",
  "IF", "ELSE", "FOR", "FORALL", "ADD", "REMOVE", "'('", "')'", "','",
  "\"||\"", "\"&&\"", "\"==\"", "\"!=\"", "'<'", "'>'", "\"<=\"", "\">=\"",
  "'+'", "'-'", "'*'", "'/'", "'!'", "\"integer_constant\"",
  "\"character_constant\"", "\"float_constant\"", "\"empty_constant\"",
  "\"string_constant\"", "'='", "\"is_set\"", "'{'", "'}'", "';'",
  "\"in\"", "\"write\"", "\"writeln\"", "\"read\"", "\"return\"",
  "\"identifier\"", "$accept", "translation_unit",
  "external_declaration_list", "external_declaration",
  "function_definition", "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "conditional_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "unary_operator",
  "postfix_expression", "primary_expression", "constant",
  "integer_constant", "character_constant", "float_constant",
  "empty_constant", "string_constant", "optional_expression", "expression",
  "assignment_expression", "type_check_expression", "compound_statement",
  "declaration_list", "compound_or_inline_statement", "statement_list",
  "declaration", "statement", "expression_statement",
  "membership_expression", "selection_statement", "iteration_statement",
  "inclusion_statement", "removal_statement", "io_statement",
  "jump_statement", "identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    40,    41,    44,   269,   270,   271,
     272,    60,    62,   273,   274,    43,    45,    42,    47,    33,
     275,   276,   277,   278,   279,    61,   280,   123,   125,    59,
     281,   282,   283,   284,   285,   286
};
# endif

#define YYPACT_NINF -299

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-299)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     266,   -40,   -36,   -25,    18,   114,   367,   551,   568,    49,
     598,  -299,   752,   248,    62,   427,   266,   789,   490,    85,
    1778,  1822,    96,   132,    41,  2045,   137,   172,   175,   179,
     191,    36,   501,   533,   562,  1195,  1520,  6039,  6063,  6087,
     203,   207,   219,   224,    13,    12,   -10,   138,   148,   258,
    4467,  7080,  7032,   745,  6111,  6135,  6159,  6183,  6207,  6231,
    6255,  6279,   120,    94,   134,   145,  1395,  2103,  2370,  2695,
    3020,  3345,  3998,  4036,  4561,  4599,  6303,   199,   210,   490,
      36,    13,   149,   149,   149,   229,   204,    36,    36,   204,
     216,   773,   773,   773,   773,   773,   773,   773,   773,   773,
     773,   773,   773,   745,  7056,   783,  4648,   745,   829,  4686,
     246,   249,   260,    -4,   303,   305,   319,  6327,   321,   301,
     390,   323,  4724,   174,  7104,   183,  2044,  2185,  7248,  7259,
    7283,  7294,  7128,  7152,  7176,  7200,   156,   327,   180,  4762,
      13,    36,  4800,  4838,  4876,   181,   307,   309,   311,  6351,
     198,   478,  1970,   314,   419,  4914,  4952,  4990,  5028,  4800,
      13,  5066,   318,   344,  4800,  5104,  2147,  6375,   434,    36,
    2522,  2847,  3172,  3497,  7320,   347,  7342,   452,   242,   521,
     827,  4358,  1546,  8482,  1221,   826,  7364,  7386,  7408,  7430,
    7452,  7474,  7496,  7518,   462,   465,  7540,    36,  1714,  4264,
    4309,  4426,  4517,   352,  5364,    84,     0,    86,    14,  1322,
     671,  6857,  6807,   858,  5389,  5414,  5439,  5464,  5489,  5514,
    5539,  5564,    89,    99,  5589,   826,   353,    36,  6399,  6423,
    6447,  6471,  6495,  6519,   773,  6543,  6567,  6591,  6615,  6639,
    6663,  6687,  6711,  6735,    36,  7603,  7622,  7641,  7660,  7679,
    7698,   368,   154,     6,   862,  1150,  4333,  8580,  7947,   783,
    7717,  7736,  7755,  7774,  7793,  7812,  7831,  7850,  7869,   858,
     374,   379,   381,   383,   387,   266,   405,   408,   411,    13,
     389,  2295,  2428,  2473,  2620,  2753,  2798,  2945,   266,  5142,
    5180,   468,   204,   887,   887,   887,   887,   887,   887,   887,
     887,   887,   887,   887,   887,   826,  7928,   783,   483,   204,
    1070,  1070,  1070,  1070,  1070,  1070,  1070,  1070,  1070,  1070,
    1070,  1070,   858,  6832,   783,   529,   554,  7224,   783,   564,
    1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,
    1098,  1098,   783,  7966,   783,   106,    36,    13,   149,   149,
     149,  1778,    36,    36,   204,   398,  3078,  1778,  7562,   436,
      36,  7988,  8003,  8018,  8033,  8048,  8063,   846,  8496,   887,
    8078,  8093,  8108,  8123,  8138,  8153,  8168,  8183,  8198,   878,
    5678,  5703,  2196,  8678,  8690,  8702,  8510,  8524,  8538,  8552,
     574,   438,  5614,   445,    36,  1647,  3930,  5664,  5689,  5714,
    5739,   103,  6882,  1070,  5764,  5789,  5814,  5839,  5864,  5889,
    5914,  5939,  5964,   118,  1445,  1559,   996,  1164,  1489,  1882,
    6907,  6932,  6957,  6982,   109,   447,  6759,   450,  7888,    36,
    1869,  8243,  8258,  8273,  8288,  8303,   127,  8594,  1098,  8318,
    8333,  8348,  8363,  8378,  8393,  8408,  8423,  8438,   909,  1435,
    1635,  7271,  7306,  8714,  8726,  8608,  8622,  8636,  8650,   455,
     457,   590,   403,   460,   485,   487,  5218,   626,   655,   491,
    3123,  5256,   658,   666,  8566,   783,  7584,   112,   698,  7007,
     783,  5639,  6783,   702,  8664,   783,  7907,  4762,    13,  4762,
    3270,  3403,  3448,   479,   489,   503,  5294,  8213,   509,  5989,
     525,  8453,   534,  5332,   513,  3617,  3663,  3720,  3758,  8228,
    6014,  8468,    13,   522,   567,  4762,  3892
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -299,  -299,  -299,   257,  -299,    19,  -299,   469,  -299,   681,
    1006,  4172,  4078,  3885,  3791,  3516,   316,   641,   966,  1291,
    1616,  1941,  2266,  2591,  2916,  3241,   -33,    29,   356,  1330,
     -11,  -180,   -41,  -298,    35,    -2,  -135,   -82,  -131,  -125,
    -124,  -113,   -63,   -42,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    19,    14,    23,    24,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
     150,    20,   151,    66,    21,   152,    69,   114,    70,    71,
      72,    73,    74,    75,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   115,   116,    17,   281,    -8,   -17,    91,   282,    -9,
      25,    90,   269,    77,   283,   284,   -17,   310,    68,     9,
     -10,   -18,   196,   -18,   331,     9,   285,    31,   -61,   -17,
     -20,   -20,   -20,   312,   313,    10,   141,    22,    32,    33,
     -17,    10,    34,    35,    36,    37,    38,    39,   112,    40,
     169,   -61,   -57,   466,   -20,    67,   -14,    79,   167,   471,
      85,    32,    33,   -11,   109,    34,   170,   171,   172,   173,
     174,   196,   175,   224,   224,   224,   286,   118,   196,   196,
     121,   176,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,    13,   351,   268,   287,    22,    16,
     -61,   155,   -18,   -18,   311,   -58,   280,   153,   357,   111,
     107,   113,   113,   113,    11,   -59,   119,   120,   161,   -19,
     -19,   311,   -60,   165,   -61,   -62,   -18,   162,   -63,   -58,
     166,   289,   196,   -56,   -21,   -21,   -21,   312,   313,   -59,
     290,   168,   -19,   -19,   -19,   331,   -60,    78,   289,   -62,
     -58,    80,   -63,   289,   -18,   -18,    92,   290,   -21,   106,
     196,   -59,   290,   197,   -20,   -20,   -20,    93,    94,   -17,
     154,   330,   -62,   -58,    32,    33,   196,   -18,    34,   198,
     199,   200,   201,   202,   -59,   203,    81,   -20,   196,    82,
     -19,   -19,    92,    83,   204,   -62,   -60,   -63,   291,   -21,
     -21,   -21,    93,    94,   224,    84,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -19,   -16,   -16,   196,    86,   196,   -60,
     -63,    87,   -21,   -67,   -67,   243,   308,   -67,   -67,   -67,
     -67,   -67,   -67,    88,   -67,   196,   -67,   -67,    89,   -67,
     -67,   -67,   -67,   -67,   117,   225,   355,   -12,   -91,   226,
     268,   -91,   -91,   -91,   -91,   122,   326,   -17,   -17,   293,
     224,   -13,   -91,    12,   139,   225,   463,   464,   465,     1,
       2,     3,     4,   329,   -22,   -22,   -22,   -22,   -22,    95,
      96,    97,    98,   359,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   196,   -22,   268,   140,
     393,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   224,   462,   268,   146,   225,   142,   268,
     143,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   268,   144,   268,   145,   196,   148,   224,
     224,   224,   149,   196,   196,   469,   156,   184,   157,    68,
     158,   196,   281,   160,   281,    68,   282,   163,   282,   164,
     378,   292,   283,   284,   283,   284,   309,    -2,   -91,   104,
       1,     2,     3,     4,   285,   461,   285,   113,   113,   113,
     281,   467,   468,   -61,   282,   196,    67,   194,   346,   473,
     283,   284,    67,   347,   412,   348,   184,   349,   212,   212,
     212,   350,   285,   184,   184,   147,   225,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   134,   135,   352,
     196,   258,   353,   478,   286,   354,   286,   -71,   356,   447,
     -71,   -71,   -71,   -71,   -80,   225,   194,   470,   222,   222,
     222,    18,   488,   194,   194,   287,   503,   287,   505,   -91,
     -91,   472,   286,   476,   280,   504,   280,   184,   483,   136,
     477,   137,   481,   138,   109,   482,   268,   -61,   -61,   109,
     -62,   268,   486,   287,   516,   489,   268,   -58,   -58,   513,
     -59,   -59,   280,   358,   225,   184,   -81,   159,   -81,   -81,
     -81,   -81,   -81,     1,     2,     3,     4,   194,   392,   225,
     490,   306,   491,   -81,   -81,   -15,   495,   -81,   -81,   -81,
     -81,   -81,   -81,   184,   -81,   -38,   -81,   -81,   506,   -81,
     -81,   -81,   -81,   -81,   509,   194,   -38,   -38,   507,   323,
     -38,   -38,   -38,   -38,   -38,   -38,   -18,   -18,   -18,   294,
     510,   184,   508,   184,   -60,   -60,   -38,   -39,   110,   511,
     327,    -4,   512,   194,    -4,    -4,    -4,    -4,   -39,   -39,
     184,   514,   -39,   -39,   -39,   -39,   -39,   -39,    -5,   426,
     225,    -5,    -5,    -5,    -5,   343,   -40,     0,   -39,   428,
     225,   325,   515,   194,     0,   212,     0,   -40,   -40,   -62,
     -62,   -40,   -40,   -40,   -40,   -40,   -40,     0,    -6,     0,
     194,    -6,    -6,    -6,    -6,   487,   225,   -40,     0,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   388,
     389,   184,     0,   258,     0,   345,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   422,   423,   212,     0,
     258,   493,   225,     0,   258,     0,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   457,   458,   258,     0,
     258,   390,   184,   391,   212,   212,   212,     0,   184,   184,
     494,   225,   185,   -63,   -63,     0,   184,     0,   424,     0,
     425,   497,   225,     0,   427,   474,     0,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   318,   319,   459,     0,
     460,     0,   194,     0,   222,   222,   222,     0,   194,   194,
     184,   -25,   177,   499,   225,     0,   194,   501,   225,   479,
       0,   185,     0,   213,   213,   213,     0,     0,   185,   185,
       0,     0,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,     0,   184,   259,     0,     0,     0,
     194,     0,    -3,     0,   484,    -3,    -3,    -3,    -3,    31,
       0,   177,     0,   205,   205,   205,     0,     0,   177,   177,
      32,    33,     0,     0,    34,    35,    36,    37,    38,    39,
       0,     0,   185,     0,     0,   194,   251,   227,     0,    -7,
     167,   258,    -7,    -7,    -7,    -7,   258,   244,    32,    33,
       0,   258,    34,   228,   229,   230,   231,   232,    32,    33,
     185,     0,    34,   245,   246,   247,   248,   249,   233,     0,
       0,     0,   177,     0,     0,     0,   185,     0,   250,   -64,
       0,   498,   -64,   -64,   -64,   -64,   500,     0,   185,     0,
     169,   502,   -20,   -20,   -20,   -20,   295,   296,     0,     0,
     177,    32,    33,     0,   213,    34,   170,   171,   172,   173,
     174,   -19,   -19,   -19,   294,     0,   185,     0,   185,     0,
       0,   176,   197,     0,     0,   234,     0,   -20,   177,   -20,
     -20,   332,   333,    32,    33,   185,     0,    34,   198,   199,
     200,   201,   202,   -21,   -21,   -21,   -21,   295,   296,     0,
     259,   360,     0,   204,     0,     0,   177,     0,   177,     0,
     213,     0,    32,    33,     0,     0,    34,   361,   362,   363,
     364,   365,     0,     0,   -21,   177,   -21,   -21,   332,   333,
       0,     0,   366,     0,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   185,     0,   259,     0,
     205,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   213,     0,   259,     0,     0,     0,   259,
       0,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   259,     0,   259,   177,   185,   251,   213,
     213,   213,     0,   185,   185,     0,     0,   186,     0,     0,
       0,   185,     0,   205,     0,   251,     0,     0,     0,   251,
     369,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   318,   319,   251,     0,   251,     0,   177,     0,   205,
     205,   205,     0,   177,   177,   185,   -26,   178,     0,     0,
       0,   177,     0,     0,   403,     0,   186,     0,   214,   214,
     214,     0,     0,   186,   186,     0,     0,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,     0,
     185,   260,     0,     0,     0,   177,     0,     0,     0,   438,
       0,     0,     0,     0,   394,     0,   178,     0,   206,   206,
     206,     0,     0,   178,   178,    32,    33,     0,     0,    34,
     395,   396,   397,   398,   399,     0,     0,   186,     0,     0,
     177,   252,   429,     0,     0,   400,   259,     0,     0,     0,
       0,   259,     0,    32,    33,     0,   259,    34,   430,   431,
     432,   433,   434,     0,     0,   186,     0,     0,     0,     0,
       0,     0,     0,   435,     0,     0,     0,   178,     0,     0,
       0,   186,     0,     0,     0,     0,   251,     0,     0,     0,
       0,   251,     0,   186,     0,   -22,   251,   -22,   -22,   -22,
     -22,   334,   335,   336,   337,   178,     0,     0,     0,   214,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   318,
     319,   186,     0,   186,     0,     0,     0,     0,     0,     0,
     235,     0,     0,   178,   -27,     0,     0,     0,     0,   -51,
     186,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,     0,   260,     0,     0,     0,     0,
     -51,   178,     0,   178,   -51,   214,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     178,     0,     0,     0,     0,     0,   305,     0,     0,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   186,     0,   260,     0,   206,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   214,     0,
     260,     0,     0,     0,   260,     0,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   260,     0,
     260,   178,   186,   252,   214,   214,   214,     0,   186,   186,
       0,     0,   187,     0,     0,     0,   186,     0,   206,     0,
     252,     0,     0,     0,   252,   370,     0,     0,   -22,   -22,
     -22,   -22,   -22,   314,   315,   316,   317,     0,   252,     0,
     252,     0,   178,     0,   206,   206,   206,     0,   178,   178,
     186,   195,   -22,     0,     0,     0,   178,     0,     0,   404,
       0,   187,     0,   215,   215,   215,     0,     0,   187,   187,
       0,     0,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,     0,   186,   261,     0,     0,     0,
     178,     0,     0,    26,   439,    27,    28,    29,    30,    31,
     195,     0,   223,   223,   223,     0,     0,   195,   195,     0,
      32,    33,     0,     0,    34,    35,    36,    37,    38,    39,
       0,    40,   187,   108,   -57,   178,    41,    42,    43,    44,
     167,   260,     0,     0,     0,     0,   260,     0,     0,     0,
     -23,   260,   -23,   -23,   -23,   -23,   334,   335,   336,   337,
     187,   -23,   -23,   -23,   -23,   -23,   314,   315,   316,   317,
       0,   195,     0,     0,     0,     0,   187,     0,     0,     0,
       0,   252,     0,     0,     0,   -23,   252,     0,   187,     0,
       0,   252,     0,     0,     0,     0,     0,     0,     0,   195,
       0,     0,     0,     0,   215,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   318,   319,   187,     0,   187,     0,
       0,     0,     0,     0,     0,   236,     0,   195,     0,   -28,
       0,     0,     0,     0,   -52,   187,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
     261,     0,     0,     0,     0,   -52,     0,   195,     0,   -52,
     215,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   301,   302,     0,   195,   -24,   -24,   -24,   -24,   -24,
     314,   315,   316,   317,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   187,     0,   261,   -24,
       0,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   215,     0,   261,     0,     0,     0,   261,
       0,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   261,     0,   261,     0,   187,     0,   215,
     215,   215,     0,   187,   187,     0,     0,   188,     0,     0,
     -24,   187,   -24,   -24,   -24,   -24,   334,   335,   336,   337,
     371,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   195,     0,   223,   223,
     223,     0,   195,   195,     0,   187,     0,   -51,     0,     0,
     195,     0,     0,     0,   405,     0,   188,     0,   216,   216,
     216,     0,     0,   188,   188,     0,     0,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,     0,
     187,   262,     0,     0,   195,     0,     0,     0,   -51,   440,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,     0,     0,     0,     0,     0,     0,   -51,
       0,     0,     0,     0,   -51,     0,     0,   188,     0,   195,
       0,     0,     0,     0,     0,     0,   261,     0,     0,     0,
       0,   261,     0,     0,     0,     0,   261,     0,     0,     0,
       0,     1,     2,     3,     4,   188,    26,     0,    27,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,   188,     0,    32,    33,     0,     0,    34,    35,    36,
      37,    38,    39,   188,    40,     0,     0,   -57,     0,    41,
      42,    43,    44,   167,     0,   -66,   -66,   -66,   -66,   216,
     -66,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   188,     0,   188,     0,     0,     0,   -66,   -66,     0,
     237,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,     0,
     188,   -66,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,   262,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,   216,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   318,   319,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   188,   -29,   262,     0,     0,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   216,     0,
     262,     0,     0,     0,   262,     0,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   262,     0,
     262,     0,   188,     0,   216,   216,   216,     0,   188,   188,
       0,     0,   189,     0,     0,     0,   188,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -68,   -68,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -68,     0,   -68,   -68,
     188,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,   406,
       0,   189,     0,   217,   217,   217,     0,     0,   189,   189,
       0,     0,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,     0,   188,   263,     0,   -71,   -71,
     -71,   -71,     0,   -71,   441,   -71,   -71,   -71,   -71,   -71,
     -23,   -23,   -23,   -23,   -23,    95,    96,    97,    98,     0,
     -71,   -71,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
       0,   -71,   189,   -23,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   262,     0,     0,     0,     0,   262,     0,     0,     0,
       0,   262,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     189,   -65,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,     0,     0,   189,     0,   -65,   -65,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   189,   -65,
       0,     0,   -65,     0,   -65,   -65,   -65,   -65,   -65,     0,
     -91,   -91,   -91,   -91,   217,   -91,     0,   -91,   -91,   -91,
     -91,   -91,     0,     0,     0,     0,   189,     0,   189,     0,
       0,     0,   -91,   -91,     0,   238,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,     0,   189,   -91,     0,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,     0,     0,     0,
     263,   -24,   -24,   -24,   -24,   -24,    95,    96,    97,    98,
     217,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   301,   302,     0,   -24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   189,     0,   263,     0,
       0,   407,   407,   407,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   217,     0,   263,     0,     0,     0,   263,
       0,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   263,     0,   263,     0,   189,     0,   217,
     217,   217,     0,   189,   189,     0,     0,   190,     0,     0,
       0,   189,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     373,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -72,     0,   -72,   -72,   189,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   407,     0,   190,     0,   218,   218,
     218,     0,     0,   190,   190,     0,     0,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,     0,
     189,   264,     0,     0,     0,     0,     0,     0,   -70,   442,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   190,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   263,     0,     0,     0,
       0,   263,     0,     0,     0,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,   190,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,   190,     0,   -73,   -73,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   190,   -73,     0,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,   218,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,   190,     0,   190,     0,     0,     0,     0,   -74,   -74,
     239,     0,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     190,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,     0,     0,     0,     0,     0,   -51,     0,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   190,     0,   264,     0,     0,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   218,     0,
     264,     0,     0,     0,   264,     0,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   264,     0,
     264,     0,   190,     0,   218,   218,   218,     0,   190,   190,
       0,     0,   191,     0,     0,     0,   190,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   374,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,     0,   -75,     0,   -75,   -75,
     190,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,   408,
       0,   191,     0,   219,   219,   219,     0,     0,   191,   191,
       0,     0,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,     0,   190,   265,     0,     0,     0,
       0,     0,     0,   -72,   443,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,     0,     0,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -72,   191,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   264,     0,     0,     0,     0,   264,     0,     0,     0,
       0,   264,     0,     0,     0,     0,     0,     0,     0,     0,
     191,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,   -76,   -76,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   191,   -76,
       0,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,   219,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,   191,     0,   191,     0,
       0,     0,     0,   -77,   -77,   240,     0,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   191,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,     0,
     265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,     0,     0,
       0,     0,   -52,     0,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   191,     0,   265,     0,
       0,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   219,     0,   265,     0,     0,     0,   265,
       0,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   265,     0,   265,     0,   191,     0,   219,
     219,   219,     0,   191,   191,     0,     0,   192,     0,     0,
       0,   191,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     375,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,     0,   -78,   -78,   191,   -78,   -78,   -78,   -78,
     -78,     0,     0,     0,   409,     0,   192,     0,   220,   220,
     220,     0,     0,   192,   192,     0,     0,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,     0,
     191,   266,     0,     0,     0,     0,     0,     0,   -73,   444,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   192,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   265,     0,     0,     0,
       0,   265,     0,     0,     0,     0,   265,     0,     0,     0,
       0,     0,     0,     0,     0,   192,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,   -79,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   192,   -79,     0,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,   220,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
       0,   192,     0,   192,     0,     0,     0,     0,   -90,   -90,
     241,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     192,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   220,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,     0,     0,     0,   -53,     0,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   192,     0,   266,     0,     0,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   220,     0,
     266,     0,     0,     0,   266,     0,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   266,     0,
     266,     0,   192,     0,   220,   220,   220,     0,   192,   192,
       0,     0,   193,     0,     0,     0,   192,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   376,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,   -85,
     192,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,   410,
       0,   193,     0,   221,   221,   221,     0,     0,   193,   193,
       0,     0,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,     0,   192,   267,     0,     0,     0,
       0,     0,     0,   -74,   445,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -74,   -74,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   193,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   266,     0,     0,     0,     0,   266,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,     0,   193,     0,   -86,   -86,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   193,   -86,
       0,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,   221,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   193,     0,   193,     0,
       0,     0,     0,   -64,   -64,   242,     0,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   -64,   193,   -64,   -64,     0,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     221,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,     0,     0,     0,     0,
       0,     0,   -54,     0,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   193,   183,   267,     0,
       0,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   221,     0,   267,     0,     0,     0,   267,
       0,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   267,     0,   267,     0,   193,     0,   221,
     221,   221,     0,   193,   193,     0,   183,     0,   211,   211,
     211,   193,     0,   183,   183,     0,     0,     0,     0,     0,
     377,     0,     0,     0,     0,   132,   133,     0,     0,     0,
       0,   257,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,   -84,   -84,   411,     0,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,     0,   -84,   -84,   183,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
     193,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   446,
       0,     0,     0,     0,     0,   183,     0,     0,   -87,   -87,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
       0,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,   183,     0,     0,   267,     0,     0,     0,
       0,   267,     0,     0,     0,     0,   267,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,   183,     0,   183,     0,   -88,   -88,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,     0,   -88,   -88,
     183,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,   211,     0,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,     0,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,   183,
     183,   183,   183,   183,   183,   183,   183,   386,   387,     0,
       0,   183,   182,   257,     0,     0,   211,   211,   211,   211,
     211,   211,   211,   211,   420,   421,     0,     0,   211,     0,
     257,     0,     0,     0,   257,     0,   257,   257,   257,   257,
     257,   257,   257,   257,   455,   456,     0,     0,   257,     0,
     257,     0,   183,     0,   211,   211,   211,     0,   183,   183,
       0,   182,     0,   210,   210,   210,   183,     0,   182,   182,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
       0,     0,     0,     0,     0,     0,   256,     0,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
     183,     0,     0,     0,     0,     0,   181,   -83,   -83,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,     0,
     -83,   -83,   182,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,   -52,   183,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
     182,     0,     0,     0,     0,   181,     0,   209,   209,   209,
     -52,     0,   181,   181,     0,     0,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,   182,     0,
     255,   257,     0,     0,     0,     0,   257,     0,     0,     0,
       0,   257,     0,     0,     0,     0,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,   182,     0,   182,     0,
       0,     0,     0,   -75,   -75,     0,   181,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   182,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,   181,     0,     0,     0,     0,     0,
     210,   -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,     0,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   181,     0,   182,   182,   182,   182,   382,   383,
     384,   385,     0,     0,     0,     0,   182,     0,   256,     0,
       0,   210,   210,   210,   210,   416,   417,   418,   419,   180,
     181,     0,   181,   210,     0,   256,     0,     0,     0,   256,
       0,   256,   256,   256,   256,   451,   452,   453,   454,   181,
       0,     0,     0,   256,     0,   256,     0,   182,     0,   210,
     210,   210,     0,   182,   182,     0,     0,     0,     0,     0,
       0,   182,     0,     0,   209,     0,     0,     0,   180,     0,
     208,   208,   208,     0,     0,   180,   180,     0,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,   181,   181,
     380,   381,     0,   254,     0,   182,     0,     0,     0,     0,
     181,     0,   255,     0,     0,   209,   209,   414,   415,     0,
       0,     0,     0,   179,     0,     0,     0,   209,     0,   255,
       0,     0,     0,   255,     0,   255,   255,   449,   450,   180,
     182,     0,     0,     0,     0,     0,     0,   255,     0,   255,
       0,   181,     0,   209,   209,   209,     0,   181,   181,     0,
       0,     0,     0,     0,     0,   181,     0,   180,     0,     0,
       0,     0,   179,     0,   207,   207,   207,     0,     0,   179,
     179,     0,     0,   123,     0,     0,   256,     0,     0,     0,
       0,   256,     0,     0,     0,   180,   256,   253,   -52,   181,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,     0,     0,     0,     0,     0,     0,   -52,
       0,     0,     0,   180,   -52,   180,     0,     0,     0,     0,
       0,     0,     0,   179,   181,     0,     0,     0,     0,     0,
       0,     0,   180,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,   179,     0,     0,   -53,     0,     0,   208,   -25,   -53,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   338,   339,
     255,     0,     0,     0,     0,   255,     0,     0,     0,   179,
     255,   180,   379,   -22,   -22,   -22,   -22,   -22,   -22,   297,
     298,   299,   300,   180,     0,   254,     0,     0,   208,   413,
       0,     0,     0,     0,     0,     0,     0,   179,     0,   179,
     208,     0,   254,     0,     0,     0,   254,     0,   254,   448,
       0,     0,     0,     0,     0,     0,   179,     0,     0,     0,
     254,     0,   254,     0,   180,     0,   208,   208,   208,     0,
     180,   180,     0,     0,     0,     0,     0,     0,   180,     0,
     -54,   207,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,     0,     0,     0,     0,     0,
       0,   -54,     0,     0,     0,   367,   -54,     0,     0,     0,
       0,     0,   180,     0,     0,     0,     0,   179,     0,   253,
       0,     0,   401,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,    99,   100,   207,     0,   253,     0,     0,     0,
     253,     0,   436,     0,     0,     0,   -25,   180,     0,     0,
       0,     0,     0,     0,   253,     0,   253,     0,   179,     0,
     207,   207,   207,     0,   179,   179,     0,     0,     0,     0,
       0,   -55,   179,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,
       0,     0,   -55,   254,     0,     0,     0,   -55,   254,     0,
       0,     0,     0,   254,     0,     0,   179,     0,     0,   -77,
       0,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -77,   -77,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,     0,   -77,
     -77,   179,   -77,   -77,   -77,   -77,   -77,   -78,     0,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,     0,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,     0,     0,   253,     0,     0,
       0,     0,   253,     0,     0,     0,   -79,   253,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,     0,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -69,     0,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -90,
     -90,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,
     -90,     0,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     270,     0,   271,   272,   273,   274,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,     0,
       0,    34,    35,    36,    37,    38,    39,     0,    40,   275,
       0,   -57,     0,   276,   277,   278,   279,   167,    26,     0,
      27,    28,    29,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,    34,
      35,    36,    37,    38,    39,     0,    40,   288,     0,   -57,
       0,    41,    42,    43,    44,   167,   -85,     0,   -85,   -85,
     -85,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85,   -85,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,     0,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -86,     0,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,     0,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,     0,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -87,     0,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -87,   -87,     0,
       0,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,     0,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -88,     0,
     -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -88,   -88,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,     0,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -89,     0,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -89,   -89,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,     0,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,     0,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,     0,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -67,     0,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -67,   -67,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,     0,
     -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -68,     0,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -68,   -68,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -68,     0,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,    26,     0,    27,    28,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,     0,     0,    34,    35,    36,
      37,    38,    39,     0,    40,     0,   492,   -57,     0,    41,
      42,    43,    44,   167,    26,     0,    27,    28,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    33,     0,     0,    34,    35,    36,    37,    38,
      39,     0,    40,     0,   496,   -57,     0,    41,    42,    43,
      44,   167,   -64,     0,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -64,
     -64,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -81,     0,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,     0,     0,   -91,
       0,     0,     0,   324,   -91,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,     0,     0,   -36,     0,     0,     0,   -41,   -36,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,     0,     0,   -41,
       0,     0,     0,   -44,   -41,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,   -44,     0,     0,     0,   -46,   -44,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,     0,     0,   -46,
       0,     0,     0,   -47,   -46,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,     0,     0,   -47,     0,     0,     0,   -48,   -47,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,     0,   -48,
       0,     0,     0,   -49,   -48,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,
       0,     0,     0,     0,   -49,     0,     0,     0,   -50,   -49,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,     0,     0,     0,     0,     0,   -50,
       0,     0,     0,   -43,   -50,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,     0,     0,   -43,     0,     0,     0,   -45,   -43,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,     0,   -45,
       0,     0,     0,   -42,   -45,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,   -42,     0,     0,     0,   -53,   -42,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -23,   -23,   -23,   -23,   -23,   -23,   297,
     298,   299,   300,   -54,   -53,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -24,   -24,
     -24,   -24,   -24,   -24,   297,   298,   299,   300,   -55,   -54,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -91,   -55,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   480,   -91,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,   -36,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -41,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -46,   -44,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -47,   -46,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -48,   -47,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -49,   -48,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -50,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -45,   -43,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -45,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -53,   -42,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,
       0,     0,     0,     0,   -53,     0,     0,   -54,   -53,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,     0,     0,   -54,     0,
       0,   -55,   -54,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,
       0,     0,   -55,     0,     0,   105,   -55,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,     0,     0,   -36,     0,     0,   -41,
     -36,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
     -41,     0,     0,   -44,   -41,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,   -44,     0,     0,   -46,   -44,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,   -46,     0,
       0,   -47,   -46,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,
       0,     0,   -47,     0,     0,   -48,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,   -48,     0,     0,   -49,
     -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,     0,
     -49,     0,     0,   -50,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,
       0,     0,     0,     0,   -50,     0,     0,   -43,   -50,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,     0,   -43,     0,
       0,   -45,   -43,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,   -45,     0,     0,   -42,   -45,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,   -42,     0,     0,   -91,
     -42,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,     0,
     -91,     0,     0,   -51,   -91,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -52,   -51,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,   -52,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -54,   -53,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -55,
     -54,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -91,   -55,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,   -91,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -36,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -41,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -46,
     -44,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,   -46,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -48,   -47,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -49,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -50,   -49,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -43,
     -50,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -45,   -43,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -45,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
       0,     0,   322,     0,     0,     0,     0,   -33,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,     0,     0,   -37,     0,     0,
       0,     0,   -37,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   320,   321,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -33,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   320,   321,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   320,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -32,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,   -33,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,
       0,   -37,     0,     0,     0,   -37,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -30,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -32,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -37,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,    99,   100,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,    99,   100,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   338,   339,   -27,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,    99,   100,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,    99,
     100,   -27,   -28,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   338,   339,   -29,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,
       0,     0,     0,     0,     0,   -55,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,     0,     0,     0,     0,   -91,   307,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,   -36,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -41,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,   -44,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,     0,     0,     0,   -46,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,     0,     0,     0,     0,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,     0,   -48,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,     0,     0,     0,     0,
       0,   -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,     0,     0,
       0,     0,     0,   -50,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,     0,   -43,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,   -45,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,   -51,   -51,   -42,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,     0,     0,     0,     0,   -52,   -52,   -51,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,     0,     0,     0,     0,   -53,   -53,   -52,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,   -54,   -54,   -53,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
       0,     0,     0,   -55,   -55,   -54,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,     0,
       0,     0,   -91,   -91,   -55,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,     0,
       0,   344,   -36,   -91,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     -41,   -41,   -36,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,   -44,
     -44,   -41,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,   -46,   -46,
     -44,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,   -47,   -47,   -46,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,   -48,   -48,   -47,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,     0,     0,     0,   -49,   -49,   -48,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,     0,     0,     0,   -50,   -50,   -49,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
       0,     0,     0,   -43,   -43,   -50,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,   -45,   -45,   -43,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,   -42,   -42,   -45,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,     0,   -42,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,     0,   -33,   -37,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
       0,   -37,   342,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,
       0,   -37,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   475,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -52,   -52,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -54,   -54,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -91,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   485,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   303,
     304,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   303,   304,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   303,   304,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   340,   341,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   340,   341,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   340,
     341,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   301,   302,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   301,   302,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   301,   302,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   338,
     339,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   338,   339
};

static const yytype_int16 yycheck[] =
{
       9,    83,    84,    14,   139,    45,    16,    17,   139,    45,
      19,    44,    16,    22,   139,   139,    16,    17,    20,     0,
      45,    15,    31,    17,    18,     6,   139,    14,    16,    39,
      16,    17,    18,    19,    20,     0,    40,    18,    25,    26,
      40,     6,    29,    30,    31,    32,    33,    34,    81,    36,
      14,    39,    39,   351,    40,    20,    15,    16,    45,   357,
      31,    25,    26,    45,    66,    29,    30,    31,    32,    33,
      34,    80,    36,    82,    83,    84,   139,    86,    87,    88,
      89,    45,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    45,   275,   105,   139,    79,    37,
      16,   142,    16,    17,    18,    16,   139,   140,   288,    80,
      16,    82,    83,    84,     0,    16,    87,    88,   159,    16,
      17,    18,    16,   164,    40,    16,    40,   160,    16,    40,
      45,   142,   141,    39,    16,    17,    18,    19,    20,    40,
     142,    45,    15,    40,    17,    18,    40,    15,   159,    40,
      16,    14,    40,   164,    16,    17,    18,   159,    40,    39,
     169,    16,   164,    14,    16,    17,    18,    19,    20,    15,
     141,    17,    16,    39,    25,    26,   185,    39,    29,    30,
      31,    32,    33,    34,    39,    36,    14,    39,   197,    14,
      16,    17,    18,    14,    45,    39,    16,    16,   169,    16,
      17,    18,    19,    20,   213,    14,     8,     9,    10,    11,
      12,    13,    14,    39,    15,    16,   225,    14,   227,    39,
      39,    14,    39,    25,    26,   234,   197,    29,    30,    31,
      32,    33,    34,    14,    36,   244,    38,    39,    14,    41,
      42,    43,    44,    45,    15,    16,   279,    37,     0,    45,
     259,     3,     4,     5,     6,    39,   227,    15,    16,    17,
     269,    15,    14,     6,    15,    16,   348,   349,   350,     3,
       4,     5,     6,   244,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    39,   307,    39,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   347,   324,    15,    16,    15,   328,
      15,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    15,   344,    15,   346,    15,   348,
     349,   350,    15,   352,   353,   354,    39,    31,    39,   351,
      39,   360,   487,    39,   489,   357,   487,    39,   489,    15,
     369,    14,   487,   487,   489,   489,    14,     0,    15,    53,
       3,     4,     5,     6,   487,   346,   489,   348,   349,   350,
     515,   352,   353,    15,   515,   394,   351,    31,    14,   360,
     515,   515,   357,    14,   403,    14,    80,    14,    82,    83,
      84,    14,   515,    87,    88,    15,    16,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    14,
     429,   105,    14,   394,   487,    14,   489,     0,    39,   438,
       3,     4,     5,     6,    15,    16,    80,    39,    82,    83,
      84,    14,    39,    87,    88,   487,   487,   489,   489,    15,
      16,    15,   515,    15,   487,   488,   489,   141,   429,   103,
      15,   105,    15,   107,   466,    15,   475,    15,    16,   471,
      15,   480,    15,   515,   515,    15,   485,    15,    16,   512,
      15,    16,   515,    15,    16,   169,     8,     9,    10,    11,
      12,    13,    14,     3,     4,     5,     6,   141,    15,    16,
      15,   185,    15,    25,    26,    15,    15,    29,    30,    31,
      32,    33,    34,   197,    36,    14,    38,    39,    39,    41,
      42,    43,    44,    45,    15,   169,    25,    26,    39,   213,
      29,    30,    31,    32,    33,    34,    15,    16,    17,    18,
      15,   225,    39,   227,    15,    16,    45,    14,    79,    15,
     234,     0,    39,   197,     3,     4,     5,     6,    25,    26,
     244,    39,    29,    30,    31,    32,    33,    34,     0,    15,
      16,     3,     4,     5,     6,   259,    14,    -1,    45,    15,
      16,   225,    15,   227,    -1,   269,    -1,    25,    26,    15,
      16,    29,    30,    31,    32,    33,    34,    -1,     0,    -1,
     244,     3,     4,     5,     6,    15,    16,    45,    -1,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    -1,   307,    -1,   269,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    -1,
     324,    15,    16,    -1,   328,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
     344,   305,   346,   307,   348,   349,   350,    -1,   352,   353,
      15,    16,    31,    15,    16,    -1,   360,    -1,   322,    -1,
     324,    15,    16,    -1,   328,   369,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   342,    -1,
     344,    -1,   346,    -1,   348,   349,   350,    -1,   352,   353,
     394,    40,    31,    15,    16,    -1,   360,    15,    16,   403,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,   429,   105,    -1,    -1,    -1,
     394,    -1,     0,    -1,   438,     3,     4,     5,     6,    14,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,   141,    -1,    -1,   429,   105,    14,    -1,     0,
      45,   475,     3,     4,     5,     6,   480,    14,    25,    26,
      -1,   485,    29,    30,    31,    32,    33,    34,    25,    26,
     169,    -1,    29,    30,    31,    32,    33,    34,    45,    -1,
      -1,    -1,   141,    -1,    -1,    -1,   185,    -1,    45,     0,
      -1,   475,     3,     4,     5,     6,   480,    -1,   197,    -1,
      14,   485,    15,    16,    17,    18,    19,    20,    -1,    -1,
     169,    25,    26,    -1,   213,    29,    30,    31,    32,    33,
      34,    15,    16,    17,    18,    -1,   225,    -1,   227,    -1,
      -1,    45,    14,    -1,    -1,   234,    -1,    15,   197,    17,
      18,    19,    20,    25,    26,   244,    -1,    29,    30,    31,
      32,    33,    34,    15,    16,    17,    18,    19,    20,    -1,
     259,    14,    -1,    45,    -1,    -1,   225,    -1,   227,    -1,
     269,    -1,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    -1,    -1,    15,   244,    17,    18,    19,    20,
      -1,    -1,    45,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    -1,   307,    -1,
     269,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    -1,   324,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,   305,   346,   307,   348,
     349,   350,    -1,   352,   353,    -1,    -1,    31,    -1,    -1,
      -1,   360,    -1,   322,    -1,   324,    -1,    -1,    -1,   328,
     369,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   342,    -1,   344,    -1,   346,    -1,   348,
     349,   350,    -1,   352,   353,   394,    40,    31,    -1,    -1,
      -1,   360,    -1,    -1,   403,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
     429,   105,    -1,    -1,    -1,   394,    -1,    -1,    -1,   438,
      -1,    -1,    -1,    -1,    14,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    87,    88,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    -1,   141,    -1,    -1,
     429,   105,    14,    -1,    -1,    45,   475,    -1,    -1,    -1,
      -1,   480,    -1,    25,    26,    -1,   485,    29,    30,    31,
      32,    33,    34,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,   141,    -1,    -1,
      -1,   185,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
      -1,   480,    -1,   197,    -1,    15,   485,    17,    18,    19,
      20,    21,    22,    23,    24,   169,    -1,    -1,    -1,   213,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   225,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,   197,    40,    -1,    -1,    -1,    -1,    14,
     244,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,   259,    -1,    -1,    -1,    -1,
      35,   225,    -1,   227,    39,   269,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     244,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    -1,   307,    -1,   269,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    -1,
     324,    -1,    -1,    -1,   328,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
     344,   305,   346,   307,   348,   349,   350,    -1,   352,   353,
      -1,    -1,    31,    -1,    -1,    -1,   360,    -1,   322,    -1,
     324,    -1,    -1,    -1,   328,   369,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,   342,    -1,
     344,    -1,   346,    -1,   348,   349,   350,    -1,   352,   353,
     394,    31,    40,    -1,    -1,    -1,   360,    -1,    -1,   403,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,   429,   105,    -1,    -1,    -1,
     394,    -1,    -1,     8,   438,    10,    11,    12,    13,    14,
      80,    -1,    82,    83,    84,    -1,    -1,    87,    88,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    36,   141,    38,    39,   429,    41,    42,    43,    44,
      45,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
      15,   485,    17,    18,    19,    20,    21,    22,    23,    24,
     169,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,   141,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
      -1,   475,    -1,    -1,    -1,    40,   480,    -1,   197,    -1,
      -1,   485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,   213,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   225,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,   197,    -1,    40,
      -1,    -1,    -1,    -1,    14,   244,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
     259,    -1,    -1,    -1,    -1,    35,    -1,   227,    -1,    39,
     269,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,   244,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    -1,   307,    40,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    -1,   324,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,    -1,   346,    -1,   348,
     349,   350,    -1,   352,   353,    -1,    -1,    31,    -1,    -1,
      15,   360,    17,    18,    19,    20,    21,    22,    23,    24,
     369,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   346,    -1,   348,   349,
     350,    -1,   352,   353,    -1,   394,    -1,    40,    -1,    -1,
     360,    -1,    -1,    -1,   403,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
     429,   105,    -1,    -1,   394,    -1,    -1,    -1,    14,   438,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   141,    -1,   429,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,   169,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,   197,    36,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    -1,     3,     4,     5,     6,   213,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,   225,    -1,   227,    -1,    -1,    -1,    25,    26,    -1,
     234,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
     244,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    15,   269,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    40,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    -1,
     324,    -1,    -1,    -1,   328,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
     344,    -1,   346,    -1,   348,   349,   350,    -1,   352,   353,
      -1,    -1,    31,    -1,    -1,    -1,   360,    -1,     8,     9,
      10,    11,    12,    13,    14,   369,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    38,    39,
     394,    41,    42,    43,    44,    45,    -1,    -1,    -1,   403,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,   429,   105,    -1,     3,     4,
       5,     6,    -1,     8,   438,    10,    11,    12,    13,    14,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    36,   141,    39,    39,    -1,    41,    42,    43,    44,
      45,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
      -1,   485,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
     169,     8,    -1,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,   197,    36,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
       3,     4,     5,     6,   213,     8,    -1,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,   225,    -1,   227,    -1,
      -1,    -1,    25,    26,    -1,   234,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,   244,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     269,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    -1,   307,    -1,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    -1,   324,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,    -1,   346,    -1,   348,
     349,   350,    -1,   352,   353,    -1,    -1,    31,    -1,    -1,
      -1,   360,    -1,     8,     9,    10,    11,    12,    13,    14,
     369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    38,    39,   394,    41,    42,    43,    44,
      45,    -1,    -1,    -1,   403,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
     429,   105,    -1,    -1,    -1,    -1,    -1,    -1,     8,   438,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,   141,    38,    39,
      -1,    41,    42,    43,    44,    45,   475,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   169,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,   197,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,   213,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,   225,    -1,   227,    -1,    -1,    -1,    -1,    25,    26,
     234,    -1,    29,    30,    31,    32,    33,    34,    -1,    36,
     244,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   269,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    -1,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    -1,
     324,    -1,    -1,    -1,   328,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
     344,    -1,   346,    -1,   348,   349,   350,    -1,   352,   353,
      -1,    -1,    31,    -1,    -1,    -1,   360,    -1,     8,     9,
      10,    11,    12,    13,    14,   369,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    38,    39,
     394,    41,    42,    43,    44,    45,    -1,    -1,    -1,   403,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,   429,   105,    -1,    -1,    -1,
      -1,    -1,    -1,     8,   438,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    36,   141,    38,    39,    -1,    41,    42,    43,    44,
      45,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
      -1,   485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,   197,    36,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,   213,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,   225,    -1,   227,    -1,
      -1,    -1,    -1,    25,    26,   234,    -1,    29,    30,    31,
      32,    33,    34,    -1,    36,   244,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    -1,   307,    -1,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    -1,   324,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,    -1,   346,    -1,   348,
     349,   350,    -1,   352,   353,    -1,    -1,    31,    -1,    -1,
      -1,   360,    -1,     8,     9,    10,    11,    12,    13,    14,
     369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    36,    -1,    38,    39,   394,    41,    42,    43,    44,
      45,    -1,    -1,    -1,   403,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    -1,
     429,   105,    -1,    -1,    -1,    -1,    -1,    -1,     8,   438,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,   141,    38,    39,
      -1,    41,    42,    43,    44,    45,   475,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   169,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,   197,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,   213,
      -1,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,   225,    -1,   227,    -1,    -1,    -1,    -1,    25,    26,
     234,    -1,    29,    30,    31,    32,    33,    34,    -1,    36,
     244,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   269,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    -1,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    -1,
     324,    -1,    -1,    -1,   328,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,    -1,
     344,    -1,   346,    -1,   348,   349,   350,    -1,   352,   353,
      -1,    -1,    31,    -1,    -1,    -1,   360,    -1,     8,     9,
      10,    11,    12,    13,    14,   369,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    38,    39,
     394,    41,    42,    43,    44,    45,    -1,    -1,    -1,   403,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,   429,   105,    -1,    -1,    -1,
      -1,    -1,    -1,     8,   438,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    36,   141,    38,    39,    -1,    41,    42,    43,    44,
      45,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
      -1,   485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,   197,    36,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,   213,    -1,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,   225,    -1,   227,    -1,
      -1,    -1,    -1,    25,    26,   234,    -1,    29,    30,    31,
      32,    33,    34,    -1,    36,   244,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,    31,   307,    -1,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    -1,   324,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,    -1,   344,    -1,   346,    -1,   348,
     349,   350,    -1,   352,   353,    -1,    80,    -1,    82,    83,
      84,   360,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
     369,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,   394,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,   403,    -1,    29,    30,    31,    32,
      33,    34,    -1,    36,    -1,    38,    39,   141,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,     8,     9,    10,    11,    12,    13,    14,    -1,   438,
      -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    36,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,   197,    -1,    -1,   475,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,    -1,   485,    -1,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,   227,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    38,    39,
     244,    41,    42,    43,    44,    45,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,   269,    -1,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,    -1,
      -1,   305,    31,   307,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    -1,    -1,   322,    -1,
     324,    -1,    -1,    -1,   328,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,    -1,    -1,   342,    -1,
     344,    -1,   346,    -1,   348,   349,   350,    -1,   352,   353,
      -1,    80,    -1,    82,    83,    84,   360,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
     394,    -1,    -1,    -1,    -1,    -1,    31,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      38,    39,   141,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    14,   429,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
     169,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      40,    -1,    87,    88,    -1,    -1,    -1,    -1,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,
     105,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,
      -1,   485,    -1,    -1,    -1,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,   225,    -1,   227,    -1,
      -1,    -1,    -1,    25,    26,    -1,   141,    29,    30,    31,
      32,    33,    34,    -1,    36,   244,    38,    39,    -1,    41,
      42,    43,    44,    45,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,
     269,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,   197,    -1,   293,   294,   295,   296,   297,   298,
     299,   300,    -1,    -1,    -1,    -1,   305,    -1,   307,    -1,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,    31,
     225,    -1,   227,   322,    -1,   324,    -1,    -1,    -1,   328,
      -1,   330,   331,   332,   333,   334,   335,   336,   337,   244,
      -1,    -1,    -1,   342,    -1,   344,    -1,   346,    -1,   348,
     349,   350,    -1,   352,   353,    -1,    -1,    -1,    -1,    -1,
      -1,   360,    -1,    -1,   269,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    -1,    -1,    87,    88,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,   294,
     295,   296,    -1,   105,    -1,   394,    -1,    -1,    -1,    -1,
     305,    -1,   307,    -1,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,   322,    -1,   324,
      -1,    -1,    -1,   328,    -1,   330,   331,   332,   333,   141,
     429,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,   344,
      -1,   346,    -1,   348,   349,   350,    -1,   352,   353,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,   169,    -1,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    -1,    -1,   475,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,   197,   485,   105,    14,   394,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,   225,    40,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   429,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,   169,    -1,    -1,    35,    -1,    -1,   269,    15,    40,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     475,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,   197,
     485,   293,   294,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   305,    -1,   307,    -1,    -1,   310,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,   227,
     322,    -1,   324,    -1,    -1,    -1,   328,    -1,   330,   331,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
     342,    -1,   344,    -1,   346,    -1,   348,   349,   350,    -1,
     352,   353,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,
      14,   269,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,   293,    40,    -1,    -1,    -1,
      -1,    -1,   394,    -1,    -1,    -1,    -1,   305,    -1,   307,
      -1,    -1,   310,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   322,    -1,   324,    -1,    -1,    -1,
     328,    -1,   330,    -1,    -1,    -1,    39,   429,    -1,    -1,
      -1,    -1,    -1,    -1,   342,    -1,   344,    -1,   346,    -1,
     348,   349,   350,    -1,   352,   353,    -1,    -1,    -1,    -1,
      -1,    14,   360,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,   475,    -1,    -1,    -1,    40,   480,    -1,
      -1,    -1,    -1,   485,    -1,    -1,   394,    -1,    -1,     8,
      -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    36,    -1,    38,
      39,   429,    41,    42,    43,    44,    45,     8,    -1,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    38,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,   475,    -1,    -1,
      -1,    -1,   480,    -1,    -1,    -1,     8,   485,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,     8,    -1,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,     8,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    38,    39,    -1,    41,
      42,    43,    44,    45,     8,    -1,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,     8,    -1,    10,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    38,    39,    -1,    41,    42,    43,    44,    45,
       8,    -1,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    40,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    14,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    14,    39,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    14,    39,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    14,
      39,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    14,    39,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    14,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    14,    39,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    14,    39,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    14,
      39,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    14,    39,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    14,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    14,    39,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    14,    39,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    14,
      39,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    14,    39,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    39,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    39,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      39,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    39,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    39,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    39,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      39,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    39,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    39,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    39,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,
      39,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    39,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    39,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    15,    39,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    39,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    15,    39,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    39,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    14,    15,    35,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    14,    15,    35,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    14,    15,    35,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    14,    15,    35,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    14,    15,    35,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    14,    15,    35,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    14,    15,    35,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      14,    15,    35,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    14,
      15,    35,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    14,    15,
      35,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    14,    15,    35,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    14,    15,    35,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    14,    15,    35,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    14,    15,    35,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    14,    15,    35,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    14,    15,    35,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    14,    15,    35,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    15,    35,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    15,    35,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    47,    48,    49,    50,    51,
      80,     0,    49,    45,    52,    90,    37,    76,    14,    51,
      77,    80,    51,    53,    54,    90,     8,    10,    11,    12,
      13,    14,    25,    26,    29,    30,    31,    32,    33,    34,
      36,    41,    42,    43,    44,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    79,    80,    81,    82,
      84,    85,    86,    87,    88,    89,    90,    90,    15,    16,
      14,    14,    14,    14,    14,    73,    14,    14,    14,    14,
      72,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    35,    62,    14,    39,    16,    38,    81,
      53,    73,    72,    73,    83,    83,    83,    15,    90,    73,
      73,    90,    39,    57,    62,    58,    59,    59,    60,    60,
      60,    60,    61,    61,    62,    62,    74,    74,    74,    15,
      39,    40,    15,    15,    15,    15,    15,    15,    15,    15,
      76,    78,    81,    72,    73,    78,    39,    39,    39,     9,
      39,    78,    72,    39,    15,    78,    45,    45,    45,    14,
      30,    31,    32,    33,    34,    36,    45,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    74,    75,    90,    14,    30,    31,
      32,    33,    34,    36,    45,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    74,    75,    90,    16,    45,    14,    30,    31,
      32,    33,    34,    45,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    90,    14,    30,    31,    32,    33,    34,
      45,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    90,    16,
       8,    10,    11,    12,    13,    37,    41,    42,    43,    44,
      72,    82,    84,    85,    86,    87,    88,    89,    37,    76,
      81,    73,    14,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    35,    62,    14,    73,    14,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    35,    62,    14,    74,    73,    62,    14,    73,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    35,    62,    14,    74,    14,    14,    14,    14,
      14,    77,    14,    14,    14,    72,    39,    77,    15,    90,
      14,    30,    31,    32,    33,    34,    45,    57,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    90,    58,
      59,    59,    60,    60,    60,    60,    61,    61,    62,    62,
      74,    74,    15,    90,    14,    30,    31,    32,    33,    34,
      45,    57,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    90,    58,    59,    59,    60,    60,    60,    60,
      61,    61,    62,    62,    74,    74,    15,    74,    15,    14,
      30,    31,    32,    33,    34,    45,    57,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    90,    58,    59,
      59,    60,    60,    60,    60,    61,    61,    62,    62,    74,
      74,    73,    72,    83,    83,    83,    79,    73,    73,    90,
      39,    79,    15,    73,    62,    14,    15,    15,    73,    62,
      14,    15,    15,    73,    62,    14,    15,    15,    39,    15,
      15,    15,    38,    15,    15,    15,    38,    15,    74,    15,
      74,    15,    74,    78,    72,    78,    39,    39,    39,    15,
      15,    15,    39,    72,    39,    15,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    51,
      51,    51,    52,    53,    53,    53,    54,    55,    56,    56,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    67,    68,    69,    70,    71,    72,    72,    73,    73,
      73,    74,    74,    75,    76,    77,    77,    78,    78,    79,
      79,    80,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    84,    84,    85,    85,    86,    87,    88,    88,    88,
      89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     3,     1,     0,     2,     1,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     4,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       3,     1,     3,     4,     4,     2,     1,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     5,     7,    10,     5,     4,     4,     5,     5,     5,
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
      
#line 3183 "./src/syntax/parser.c" /* yacc.c:1652  */
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
#line 204 "src/syntax/parser.y" /* yacc.c:1918  */


void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}



