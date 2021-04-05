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
    INTEGER_CONSTANT = 276,
    FLOAT_CONSTANT = 277,
    CHARACTER_CONSTANT = 278,
    STRING_CONSTANT = 279,
    EMPTY_CONSTANT = 280,
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

#line 158 "./src/syntax/parser.c" /* yacc.c:352  */
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
#define YYLAST   8254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  541

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
     117,   120,   121,   124,   125,   126,   127,   128,   129,   132,
     133,   136,   139,   142,   145,   148,   151,   152,   155,   156,
     159,   160,   163,   166,   167,   168,   169,   170,   173,   176,
     179,   180,   183,   184,   187,   188,   189,   192,   195,   198,
     201,   204,   207,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ELEM", "SET", "IF",
  "ELSE", "FOR", "RETURN", "FORALL", "ADD", "REMOVE", "READ", "WRITELN",
  "WRITE", "IS_SET", "IN", "EXISTS", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "CHARACTER_CONSTANT", "STRING_CONSTANT",
  "EMPTY_CONSTANT", "IF_ONLY", "OR", "AND", "EQUAL_TO", "NOT_EQUAL_TO",
  "LT_OR_EQ_TO", "BG_OR_EQ_TO", "'('", "')'", "','", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'!'", "'='", "'{'", "'}'", "';'", "$accept",
  "translation_unit", "external_declaration_list", "external_declaration",
  "function_definition", "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "conditional_expression",
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "unary_operator",
  "postfix_expression", "primary_expression", "constant",
  "optional_expression", "expression", "assignment_expression",
  "type_check_expression", "exists_expression", "inclusion_expression",
  "removal_expression", "compound_statement", "declaration_list",
  "compound_or_inline_statement", "statement_list", "declaration",
  "statement", "expression_statement", "membership_expression",
  "selection_statement", "iteration_statement", "io_statement",
  "jump_statement", "identifier", "integer_constant", "character_constant",
  "float_constant", "empty_constant", "string_constant", YY_NULLPTR
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

#define YYPACT_NINF -246

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-246)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     291,    -5,    13,    60,    85,     7,   420,   620,   654,   106,
     784,  -246,   850,    25,    95,   118,   291,   930,   140,   137,
     854,   899,   168,     8,     2,  1196,   116,   121,    27,   161,
     177,   181,   187,   200,   217,   222,   225,  5971,  5991,  6011,
    6031,  6051,   183,   215,   688,  1030,    22,    -3,    26,   151,
     853,  3968,  6691,  6311,  1372,  6071,  6091,  6111,   219,    69,
      90,   163,   166,   214,   245,  3183,  1241,  3237,  3287,  3633,
    3782,  4068,  4119,  6131,  6151,  6171,  6191,  6211,  6231,    49,
     237,   140,   183,    27,   239,   531,   183,   183,   241,   183,
     183,   183,   183,   184,  1714,  1714,  1714,  1714,  1714,  1714,
    1714,  1714,  1714,  1714,  1714,  1714,  1372,  6331,  2056,  4241,
    1372,   943,  4511,   256,   189,   253,  5010,   -15,   299,   243,
     281,   305,   283,   302,   368,   371,  6251,    36,  6711,   418,
    1195,  1537,  4139,  5146,  6831,  6844,  6731,  6751,  6771,  6791,
     247,   336,   252,  5051,    27,   183,  5197,   321,   323,   309,
     332,   346,   327,   355,  6271,   789,  1131,  1473,   348,   376,
    5243,  5284,  5324,  5364,  5197,   250,  5404,   362,  5197,  5444,
    1538,  6291,   424,   349,   366,   374,   379,  6864,  6881,  6898,
    6915,  6932,  6949,   183,   435,    43,   453,   465,  1889,  3417,
    7765,  7153,  2398,  6966,  6983,  7000,   476,   481,   497,   511,
     523,  7017,  7034,  7051,  7068,  7085,  7102,   389,   407,   409,
     411,   706,   937,  1048,  1279,  1390,  1621,   183,   -13,   134,
      82,   560,   491,  3877,  5866,  3432,  2740,  1732,  1963,  2074,
      84,    96,   115,   129,   152,  2305,  2416,  2647,  2758,  2989,
    3100,   416,  2398,  6351,  6371,  6391,  6411,  6431,  6451,   183,
    1714,  6471,  6491,  6511,  6531,  6551,  6571,  6591,  6611,  6631,
    7170,  7187,  7204,  7221,  7238,  7255,   183,   427,   -25,    79,
     538,  2915,  1941,  3495,  7476,  2056,  7272,  7289,  7306,  7323,
    7340,  7357,  7374,  7391,  7408,  2740,   430,   432,    27,   434,
     438,   440,   442,   291,   443,  1579,  1815,  1869,  1921,  2157,
     291,  5484,  5524,   542,   183,   183,   183,   183,   547,  3082,
    3082,  3082,  3082,  3082,  3082,  3082,  3082,  3082,  3082,  3082,
    3082,  2398,  7425,  2056,   183,   183,   183,   183,   550,  3459,
    3459,  3459,  3459,  3459,  3459,  3459,  3459,  3459,  3459,  3459,
    3459,  2740,  3510,  2056,   559,   571,  6811,  2056,   600,  3810,
    3810,  3810,  3810,  3810,  3810,  3810,  3810,  3810,  3810,  3810,
    3810,  2056,  7493,  2056,   154,   183,    27,   445,   531,   241,
     183,   183,   854,  2211,   854,   606,   643,   663,   680,  7119,
    7510,  7525,  7540,  7555,  7570,  7585,   183,   506,  7780,  3082,
    7600,  7615,  7630,  7645,  7660,  7675,  7690,  7705,  7720,   727,
    2231,  2573,  3535,  4787,  4817,  4962,  7795,  7810,  7825,  7840,
     697,   444,   716,   718,   729,   731,  3310,  3564,  3673,  3906,
    3953,  4472,  4871,   183,   149,  5881,  3459,  5086,  5706,  5722,
    5738,  5754,  5770,  5786,  5802,  5818,   582,   601,  1601,  3990,
    4410,  4542,  4743,  5896,  5911,  5926,  5941,   157,   450,  6651,
     462,  7442,  7855,  7870,  7885,  7900,  7915,  7930,   183,   285,
    8125,  3810,  7945,  7960,  7975,  7990,  8005,  8020,  8035,  8050,
    8065,   689,  3653,  4088,  2283,  2625,  2967,  8215,  8140,  8155,
    8170,  8185,   468,   470,   733,   471,  2263,   474,   490,   757,
     781,  5564,  5604,   795,   802,   807,   817,   860,  8080,  2056,
    7136,   164,   195,   210,   224,   863,  5956,  2056,  3334,  6671,
     892,  8200,  2056,  7459,  5051,    27,  5051,   483,   496,   501,
    2499,  5644,  7735,   502,  5834,   515,  8095,   526,  5684,   525,
    2553,  2605,  2841,  2895,  7750,  5850,  8110,   250,   562,  5051,
    2947
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,  -246,   595,  -246,    17,  -246,   532,  -246,  4595,
    4641,  4321,  4253,  3959,  3866,  3524,   333,   675,  1017,  1359,
    1701,    -2,  4863,  4351,    47,    83,    88,   100,    -8,  -238,
    -130,  -245,    21,    -6,  -142,   287,  -139,  -135,  -131,  -125,
      -9,  2043,  2385,  2727,  3069,  3411
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    19,    14,    23,    24,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,    58,    59,   196,   197,   198,   199,   200,   155,    20,
     156,    65,    21,   157,    68,   118,    69,    70,    71,    72,
     201,   202,   203,   204,   205,   206
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   295,   349,   145,   296,   -59,    17,    11,   297,   -17,
      25,    73,   298,    79,    67,    -8,   160,     9,   299,    73,
     285,    10,   -59,     9,    94,   -88,    84,    10,   -88,   -88,
     -88,   -88,   -17,    -9,   166,    22,   -14,    81,   169,    30,
      31,    66,    80,   -17,    35,    73,    36,   171,    37,    38,
      39,    40,    41,   -18,    95,   372,    73,   -59,   -88,   112,
      42,   -18,   374,   -19,    95,    43,    44,    61,   -59,    45,
     309,   -19,   -18,   -52,    73,    61,   235,   -17,   -17,   121,
     -10,   115,   -19,   -16,   -16,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,    73,    22,   279,
     -18,    73,   -53,    62,   110,   -11,   -18,   350,    63,   -18,
     330,    62,    61,   -18,   -54,   -51,    63,   -18,   -72,   -53,
      64,   -72,   -72,   -72,   -72,   -53,    13,   491,    64,   492,
      61,   -54,   231,   -55,    73,    73,   -53,    73,   301,    16,
     302,   294,   158,     1,     2,     3,     4,   -56,    62,    82,
     -55,    18,   -17,    63,    83,    73,   301,   170,   302,    73,
     301,   329,   302,   167,   -56,    64,    62,   -19,   232,   -17,
     -57,    63,   -58,   233,   -15,   -60,   -19,   330,   -20,   -20,
      96,    97,   -63,    64,   -19,   234,   -20,   -57,   172,   -58,
      61,    61,   -60,    61,    85,   173,   174,   -20,   -54,   -63,
     175,   -55,   176,   177,   178,   179,   180,   181,   182,   -54,
      86,    61,   -55,   -64,    87,    61,   183,   235,   126,   242,
      88,    43,    44,   143,   242,    45,    62,    62,   -61,    62,
     -64,    63,    63,    89,    63,   -38,   -38,   -38,   -38,   -38,
     -38,   254,   -62,    64,    64,   -61,    64,    62,   -38,   -56,
      90,    62,    63,   -38,   -38,    91,    63,   -38,    92,   -62,
     -56,   241,   173,   174,    64,   109,   279,   175,    64,   176,
     177,   178,   179,   180,   181,   182,   235,   147,   242,    73,
     -57,   -12,   -60,   183,   -52,   116,   367,   -58,    43,    44,
     -13,   -57,    45,   -60,     1,     2,     3,     4,   -58,   144,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   -19,   350,   279,   148,   242,   150,   242,   -19,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   235,   146,   279,    61,   151,   242,   279,   149,
     465,   465,   465,   465,   465,   465,   465,   465,   465,   465,
     465,   465,   279,    53,   279,   161,   -63,    73,   -64,   235,
     488,    53,   -61,    73,   485,    73,    67,   -63,    67,   -64,
     154,    62,   295,   -61,   295,   296,    63,   296,   162,   297,
     393,   297,   304,   298,   528,   298,   530,   107,    64,   299,
     -62,   299,   163,    66,   165,    66,   168,   295,    53,   305,
     296,   -62,   152,   242,   297,   153,   242,   306,   298,   540,
     -79,   242,   307,    61,   299,   231,    53,   430,   225,    61,
      -2,    61,   324,     1,     2,     3,     4,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   138,   139,    53,
     325,   274,   326,    53,   327,   -21,   -21,    96,    97,    62,
     -88,   232,   465,   -21,    63,    62,   233,    62,   -88,   -88,
      63,   -59,    63,   365,   -21,   366,    64,   368,   234,   -59,
     -59,   369,    64,   370,    64,   371,    53,    53,   500,    53,
     -18,   310,    73,    73,   508,   112,   112,   -18,   -18,   373,
     279,   486,   -20,   -20,   311,   312,   509,    53,   279,   -20,
     -20,    53,   -60,   279,   513,    73,    73,    73,   516,   -22,
     -53,   -53,   294,   529,   294,   -54,   -54,   515,   -22,   -22,
     -22,   -22,   333,   334,   517,   322,   -22,   335,   336,   531,
      73,   -55,   -55,   -19,   310,   538,   534,   294,    61,    61,
     -19,   -19,   532,   207,   208,   -56,   -56,   533,   209,   535,
     210,   211,   212,   213,   214,   215,   216,   -57,   -57,   342,
     536,    61,    61,    61,   217,   -20,   -20,   351,   352,    43,
      44,   537,   -20,    45,    62,    62,   -51,   242,   -20,    63,
      63,   379,   242,   346,   416,   242,    61,   -20,   -20,   331,
     332,    64,    64,   -58,   -58,   -20,   539,    62,    62,    62,
     -21,    12,    63,    63,    63,   449,   242,     0,   362,   -21,
     -21,   331,   332,   113,    64,    64,    64,   -21,   225,   -23,
      -4,    53,    62,    -4,    -4,    -4,    -4,    63,   -23,   -23,
     -23,   -23,   333,   334,   451,   242,   -23,   335,   336,    64,
     493,   242,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   408,   409,    -5,   487,   274,    -5,    -5,    -5,
      -5,     0,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   445,   446,   225,     0,   274,   494,   242,     0,
     274,     0,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   480,   481,   274,    54,   274,   495,   242,    53,
       0,   225,     0,    54,     0,    53,     0,    53,   -39,   -39,
     -39,   -39,   -39,   -39,   496,   242,   -21,   -21,   351,   352,
       0,   -39,   498,   -21,   -88,     0,   -39,   -39,     0,    54,
     -39,   -60,   -60,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
      54,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,
     501,   242,   502,   242,   -21,   -21,   311,   312,    54,   506,
     226,   -21,   -21,   503,   242,   504,   242,   514,   242,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,    54,     0,   275,    -6,    54,     0,    -6,    -6,    -6,
      -6,   518,   242,     0,   511,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   519,   242,     0,    54,    54,
       0,    54,   -68,     0,    53,    53,     0,   -68,   -68,   -63,
     -63,   -68,   274,     0,   -68,   -68,   -64,   -64,     0,    54,
     274,   -61,   -61,    54,     0,   274,     0,    53,    53,    53,
      -3,   -62,   -62,    -3,    -3,    -3,    -3,     1,     2,     3,
       4,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    53,    36,   171,    37,    38,    39,    40,    41,
     -22,   -22,   -22,   -22,    98,    99,     0,    42,   -22,   100,
     101,     0,    43,    44,   522,   242,    45,   524,   242,   -22,
     -52,   226,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   250,   526,   242,     0,     0,
      -7,     0,   -67,    -7,    -7,    -7,    -7,   -67,   -67,     0,
       0,   -67,     0,   -65,     0,   -67,   -65,   -65,   -65,   -65,
     275,     0,     0,     0,     0,   -89,     0,     0,     0,     0,
     226,     0,     0,    54,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,     0,     0,     0,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,     0,     0,   275,     0,
       0,     0,     0,     0,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   226,     0,   275,     0,
       0,     0,   275,     0,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   275,    55,   275,     0,
       0,    54,     0,   226,     0,    55,     0,    54,     0,    54,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,     0,     0,   -40,   389,     0,   -91,     0,   -40,   -40,
       0,    55,   -40,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,    55,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   426,   227,     0,     0,     0,     0,     0,     0,     0,
       0,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,    55,     0,   276,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,   461,     0,   -80,   164,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
      55,    55,     0,    55,   -80,     0,    54,    54,     0,   -80,
     -80,     0,     0,   -80,   275,     0,   -80,   -80,     0,     0,
       0,    55,   275,     0,     0,    55,     0,   275,     0,    54,
      54,    54,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,    54,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -23,   -23,   -23,   -23,    98,    99,     0,   -72,
     -23,   100,   101,     0,   -72,   -72,     0,     0,   -72,     0,
       0,   -23,   -72,   227,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   251,     0,     0,
       0,     0,     0,     0,   -66,     0,     0,     0,     0,   -66,
     -66,     0,     0,   -66,     0,     0,     0,   -66,     0,     0,
       0,     0,   276,     0,     0,     0,     0,   -90,     0,     0,
       0,     0,   227,     0,     0,    55,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -90,     0,     0,     0,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,     0,     0,
     276,     0,     0,     0,     0,     0,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   227,     0,
     276,     0,     0,     0,   276,     0,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   276,    56,
     276,     0,     0,    55,     0,   227,     0,    56,     0,    55,
       0,    55,   171,    37,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,   390,     0,   -93,     0,
      43,    44,     0,    56,    45,     0,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,    56,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,   -93,     0,     0,     0,     0,     0,     0,
       0,     0,    56,   427,   228,     0,     0,     0,     0,     0,
       0,     0,     0,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,    56,     0,   277,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,   462,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,    56,    56,     0,    56,   -69,     0,    55,    55,
       0,   -69,   -69,     0,     0,   -69,   276,     0,   -69,   -69,
       0,     0,     0,    56,   276,     0,     0,    56,     0,   276,
       0,    55,    55,    55,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,    55,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -24,   -24,   -24,   -24,    98,    99,
       0,   -88,   -24,   100,   101,     0,   -88,   -88,     0,     0,
     -88,     0,     0,   -24,   -88,   228,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,   252,
       0,     0,   -73,     0,     0,     0,     0,   -73,   -73,   -24,
       0,   -73,     0,     0,   -73,   -73,     0,     0,   -24,   -24,
     -24,   -24,   333,   334,   277,     0,   -24,   335,   336,   -92,
       0,     0,     0,     0,   228,     0,     0,    56,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,     0,     0,     0,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
       0,     0,   277,     0,     0,     0,     0,     0,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     228,     0,   277,     0,     0,     0,   277,     0,   463,   463,
     463,   463,   463,   463,   463,   463,   463,   463,   463,   463,
     277,    57,   277,     0,     0,    56,     0,   228,     0,    57,
       0,    56,     0,    56,   243,   244,   245,   246,   247,   248,
       0,     0,     0,     0,     0,     0,     0,   249,   391,     0,
     -36,     0,    43,    44,     0,    57,    45,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   343,    57,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,    57,   428,   229,     0,     0,     0,
       0,     0,     0,     0,     0,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,    57,     0,   278,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,    57,    57,     0,    57,   -74,     0,
      56,    56,     0,   -74,   -74,     0,     0,   -74,   277,     0,
     -74,   -74,     0,     0,     0,    57,   277,     0,     0,    57,
       0,   277,     0,    56,    56,    56,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,    56,     0,
       0,     0,   -75,     0,     0,     0,     0,   -75,   -75,     0,
       0,   -75,     0,     0,   -75,   -75,   -22,   -22,   -22,   -22,
     313,   314,     0,   -22,   -22,   315,   316,   229,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   253,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -76,     0,     0,   -76,     0,     0,   -76,   -76,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   278,   -25,   -25,   357,
     358,   -41,     0,     0,     0,     0,   229,     0,     0,    57,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,     0,     0,     0,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,     0,     0,   278,     0,     0,     0,     0,     0,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   229,     0,   278,     0,     0,     0,   278,     0,
     464,   464,   464,   464,   464,   464,   464,   464,   464,   464,
     464,   464,   278,    74,   278,     0,     0,    57,     0,   229,
       0,    74,     0,    57,     0,    57,   260,   261,   262,   263,
     264,   265,     0,     0,     0,     0,     0,     0,     0,   266,
     392,     0,   -44,     0,    43,    44,     0,    74,    45,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,    74,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,    74,   429,   236,     0,
       0,     0,     0,     0,     0,     0,     0,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,    74,
       0,   280,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,   464,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,     0,     0,    74,    74,     0,    74,
     -77,     0,    57,    57,     0,   -77,   -77,     0,     0,   -77,
     278,     0,   -77,   -77,     0,     0,     0,    74,   278,     0,
       0,    74,     0,   278,     0,    57,    57,    57,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
      57,     0,     0,     0,   -78,     0,     0,     0,     0,   -78,
     -78,     0,     0,   -78,     0,     0,   -78,   -78,   -23,   -23,
     -23,   -23,   313,   314,     0,   -23,   -23,   315,   316,   236,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,   255,     0,     0,   -87,     0,     0,     0,
       0,   -87,   -87,     0,     0,   -87,     0,     0,   -87,   -87,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   280,   -28,
     -28,   357,   358,   -43,     0,     0,     0,     0,   236,     0,
       0,    74,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,
       0,     0,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,     0,     0,   280,     0,     0,     0,
       0,     0,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   236,     0,   280,     0,     0,     0,
     280,     0,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   280,    75,   280,     0,     0,    74,
       0,   236,     0,    75,     0,    74,     0,    74,   177,   178,
     179,   180,   181,   182,     0,     0,     0,     0,     0,     0,
       0,   183,   394,     0,   -46,     0,    43,    44,     0,    75,
      45,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
      75,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,     0,     0,     0,     0,     0,     0,     0,    75,   431,
     237,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,    75,     0,   281,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,   466,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,    75,    75,
       0,    75,   -65,     0,    74,    74,     0,   -65,   -65,     0,
       0,   -65,   280,     0,   -65,   -65,     0,     0,     0,    75,
     280,     0,     0,    75,     0,   280,     0,    74,    74,    74,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,    74,     0,     0,     0,   -83,     0,     0,     0,
       0,   -83,   -83,     0,     0,   -83,     0,     0,   -83,   -83,
     -24,   -24,   -24,   -24,   313,   314,     0,   -24,   -24,   315,
     316,   237,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,   256,     0,     0,   -86,     0,
       0,     0,     0,   -86,   -86,     0,     0,   -86,     0,     0,
     -86,   -86,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     281,   -29,   -29,   357,   358,   -47,     0,     0,     0,     0,
     237,     0,     0,    75,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,     0,     0,     0,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,     0,     0,   281,     0,
       0,     0,     0,     0,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   237,     0,   281,     0,
       0,     0,   281,     0,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   281,    76,   281,     0,
       0,    75,     0,   237,     0,    76,     0,    75,     0,    75,
     211,   212,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,   217,   395,     0,   -48,     0,    43,    44,
       0,    76,    45,     0,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,    76,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,     0,     0,     0,     0,     0,     0,     0,     0,
      76,   432,   238,     0,     0,     0,     0,     0,     0,     0,
       0,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,    76,     0,   282,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,   467,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
      76,    76,     0,    76,   -85,     0,    75,    75,     0,   -85,
     -85,     0,     0,   -85,   281,     0,   -85,   -85,     0,     0,
       0,    76,   281,     0,     0,    76,     0,   281,     0,    75,
      75,    75,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,    75,     0,     0,     0,   -84,     0,
       0,     0,     0,   -84,   -84,     0,     0,   -84,     0,     0,
     -84,   -84,   -22,   -22,   -22,   -22,   353,   354,     0,   -22,
       0,   355,   356,   238,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,   257,     0,     0,
     -82,     0,     0,     0,     0,   -82,   -82,     0,     0,   -82,
       0,     0,   -82,   -82,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   282,   -26,   -26,   357,   358,   -49,     0,     0,
       0,     0,   238,     0,     0,    76,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   -49,     0,     0,     0,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,     0,     0,
     282,     0,     0,     0,     0,     0,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   238,     0,
     282,     0,     0,     0,   282,     0,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   282,    77,
     282,     0,     0,    76,     0,   238,     0,    77,     0,    76,
       0,    76,   380,   381,   382,   383,   384,   385,     0,     0,
       0,     0,     0,     0,     0,   386,   396,     0,   -50,     0,
      43,    44,     0,    77,    45,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,    77,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,   -50,     0,     0,     0,     0,     0,     0,
       0,     0,    77,   433,   239,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,    77,     0,   283,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,   468,     0,
      26,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,    36,   171,    37,    38,    39,    40,    41,     0,
       0,     0,    77,    77,     0,    77,    42,     0,    76,    76,
       0,    43,    44,     0,     0,    45,   282,     0,   111,   -52,
       0,     0,     0,    77,   282,     0,     0,    77,     0,   282,
       0,    76,    76,    76,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,    76,     0,     0,     0,
     -71,     0,     0,     0,     0,   -71,   -71,     0,     0,   -71,
       0,     0,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -73,   239,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,   258,
     -73,     0,     0,     0,     0,   -73,   -73,     0,   -45,   -73,
       0,     0,   -73,   -73,     0,     0,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   283,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -42,   -45,   239,     0,     0,    77,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
       0,     0,   283,     0,     0,     0,     0,     0,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     239,     0,   283,     0,     0,     0,   283,     0,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     283,    78,   283,     0,     0,    77,     0,   239,     0,    78,
       0,    77,     0,    77,   -25,   -25,   -25,   -25,   -25,   -25,
     -33,   -25,   -25,   -25,   -25,   317,   318,     0,   397,   -33,
     -33,   -33,   -33,   -33,   -33,    78,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   341,    78,     0,     0,   417,
     418,   419,   420,   421,   422,     0,     0,     0,     0,     0,
       0,     0,   423,     0,    78,   434,   240,    43,    44,     0,
       0,    45,     0,     0,     0,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,    78,     0,   284,
       0,    78,   -30,   -30,   -30,   -30,   -30,   -30,   -37,   -30,
     469,   -30,   -30,   -30,   -30,   359,   360,   -37,   -37,   -37,
     -37,   -37,   -37,     0,    52,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,    52,   -37,    78,    78,     0,    78,     0,     0,
      77,    77,   -28,   -28,   -28,   -28,   -28,   -28,   283,   -28,
     -28,   -28,   -28,   317,   318,    78,   283,     0,     0,    78,
       0,   283,   -88,    77,    77,    77,     0,     0,     0,    52,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,    52,    77,   224,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    52,
      52,    52,    52,    52,    52,    52,   136,   137,     0,     0,
      52,     0,   273,     0,    52,     0,     0,   240,     0,     0,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   259,     0,     0,     0,     0,   -74,    52,    52,     0,
      52,   -74,   -74,     0,     0,   -74,     0,     0,   -74,   -74,
     -23,   -23,   -23,   -23,   353,   354,   284,   -23,    52,   355,
     356,   -89,    52,     0,     0,     0,   240,     0,     0,    78,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,     0,     0,   284,     0,     0,     0,     0,     0,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   240,     0,   284,     0,     0,     0,   284,     0,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   284,     0,   284,     0,     0,    78,     0,   240,
       0,     0,     0,    78,     0,    78,     0,     0,     0,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     398,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   224,
       0,     0,    52,     0,     0,   -75,     0,     0,     0,     0,
     -75,   -75,     0,     0,   -75,     0,     0,   -75,   -75,     0,
     452,   453,   454,   455,   456,   457,     0,   435,     0,     0,
       0,   406,   407,   458,     0,     0,     0,   273,    43,    44,
       0,     0,    45,   224,   224,   224,   224,   224,   224,   224,
     224,   443,   444,     0,     0,   224,     0,   273,     0,     0,
       0,   273,   470,   273,   273,   273,   273,   273,   273,   273,
     273,   478,   479,     0,     0,   273,    51,   273,     0,     0,
      52,     0,   224,     0,    51,   -25,    52,     0,    52,     0,
       0,     0,    78,    78,   -25,   -25,   -25,   -25,   -25,   -25,
     284,     0,   -25,   -25,   -25,   337,   338,     0,   284,     0,
       0,     0,     0,   284,   -91,    78,    78,    78,     0,     0,
       0,    51,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,    51,
      78,   223,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    51,    51,    51,   132,   133,   134,   135,     0,     0,
       0,   -90,    51,     0,   272,     0,    51,     0,     0,    50,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,    50,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -25,   -25,   102,   103,   -28,    51,
      51,     0,    51,     0,   -25,    52,    52,   -28,   -28,   -28,
     -28,   -28,   -28,   273,    50,   -28,   -28,   -28,   337,   338,
      51,   273,     0,     0,    51,     0,   273,     0,    52,    52,
      52,     0,    50,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    50,   130,   131,     0,     0,     0,
       0,     0,     0,    52,     0,    50,     0,   271,     0,    50,
       0,     0,     0,     0,     0,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,   -76,    50,    50,     0,    50,   -76,   -76,     0,     0,
     -76,     0,     0,   -76,   -76,   -24,   -24,   -24,   -24,   353,
     354,     0,   -24,    50,   355,   356,   -77,    50,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,   223,   -77,     0,    51,     0,     0,   -77,   -77,     0,
       0,   -77,     0,     0,   -77,   -77,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,   -28,   -28,   102,   103,   402,
     403,   404,   405,     0,     0,   -28,     0,     0,     0,   272,
       0,     0,     0,     0,     0,   223,   223,   223,   223,   439,
     440,   441,   442,     0,     0,     0,     0,   223,     0,   272,
       0,     0,     0,   272,     0,   272,   272,   272,   272,   474,
     475,   476,   477,     0,     0,     0,     0,   272,     0,   272,
       0,     0,    51,     0,   223,     0,     0,     0,    51,     0,
      51,     0,     0,     0,   222,     0,     0,    50,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
     400,   401,     0,    49,   -78,     0,     0,     0,     0,   -78,
     -78,    49,   271,   -78,     0,     0,   -78,   -78,   222,   222,
     437,   438,     0,     0,     0,     0,     0,     0,     0,     0,
     222,     0,   271,     0,     0,     0,   271,     0,   271,   271,
     472,   473,     0,     0,     0,     0,     0,     0,    49,     0,
     271,     0,   271,     0,     0,    50,     0,   222,     0,     0,
       0,    50,     0,    50,     0,     0,    49,     0,   221,     0,
       0,    48,     0,     0,     0,     0,     0,    49,   129,    48,
       0,     0,     0,     0,     0,     0,     0,    51,    51,    49,
       0,   270,     0,    49,     0,   272,     0,     0,     0,     0,
       0,    60,     0,   272,     0,     0,     0,     0,   272,    60,
      51,    51,    51,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    49,     0,    49,
       0,     0,     0,     0,    48,    51,   220,     0,     0,     0,
       0,     0,     0,     0,     0,   127,    60,    49,     0,     0,
       0,    49,     0,     0,     0,     0,     0,    48,   -29,   269,
       0,    48,     0,     0,    60,     0,   230,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,   -29,   -29,   -29,   337,   338,
      50,    50,     0,     0,     0,     0,     0,   140,   271,   141,
       0,   142,     0,     0,    48,    48,   271,    48,     0,     0,
       0,   271,     0,    50,    50,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,    48,
     -93,     0,     0,     0,    60,    60,     0,    60,    50,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,    60,     0,     0,   -70,    60,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   221,     0,
       0,    49,     0,     0,   -70,     0,     0,     0,     0,   -70,
     -70,     0,     0,   -70,     0,     0,   -70,   -70,     0,     0,
     -26,     0,     0,   399,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   270,   -26,   -26,   -26,
     337,   338,   221,   436,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,   221,     0,   270,     0,     0,     0,
     270,     0,   270,   471,     0,     0,   220,     0,     0,    48,
       0,     0,     0,     0,   270,    46,   270,     0,     0,    49,
       0,   221,     0,    46,     0,    49,     0,    49,     0,     0,
     387,     0,     0,     0,     0,     0,   364,     0,     0,    60,
       0,     0,     0,     0,   269,     0,     0,     0,     0,     0,
     424,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,   220,     0,   269,     0,     0,     0,   269,    47,
     459,     0,   410,     0,   411,     0,     0,     0,    46,     0,
     218,     0,   269,     0,   269,     0,     0,    48,     0,   220,
       0,     0,   447,    48,   448,    48,     0,     0,   450,     0,
       0,    46,     0,   267,     0,    46,    47,     0,     0,     0,
       0,     0,   482,     0,   483,     0,     0,    60,     0,   230,
       0,     0,     0,    60,    47,    60,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    46,
       0,    46,     0,     0,    49,    49,     0,    47,     0,   268,
       0,    47,   270,     0,     0,     0,     0,     0,     0,    46,
     270,   -27,     0,    46,     0,   270,     0,    49,    49,    49,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -27,
     -27,   337,   338,     0,    47,    47,     0,    47,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,    47,
       0,     0,    48,    48,   -29,   -29,   -29,   -29,   -29,   -29,
     269,   -29,   -29,   -29,   -29,   317,   318,     0,   269,     0,
       0,     0,     0,   269,     0,    48,    48,    48,     0,     0,
       0,     0,    60,    60,   -26,   -26,   -26,   -26,   -26,   -26,
     523,   -26,   -26,   -26,   -26,   317,   318,     0,   525,     0,
      48,     0,     0,   527,     0,    60,    60,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,     0,     0,    46,     0,     0,     0,     0,     0,   -92,
      60,     0,     0,     0,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,    93,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,     0,   219,     0,     0,    47,
       0,     0,     0,     0,     0,     0,   218,     0,   267,     0,
       0,     0,   267,     0,     0,   114,     0,     0,   117,   119,
     120,     0,   122,   123,   124,   125,   267,     0,   267,     0,
       0,    46,     0,   218,   268,     0,     0,    46,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,   268,     0,     0,     0,   268,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     317,   318,   268,     0,   268,     0,     0,    47,   159,   219,
       0,     0,     0,    47,     0,    47,     0,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   303,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,   -87,     0,     0,   308,     0,   -87,   -87,
       0,     0,   -87,     0,     0,   -87,   -87,     0,   286,     0,
     287,   288,   289,    30,    31,   290,   291,   292,    35,     0,
      36,   171,    37,    38,    39,    40,    41,     0,     0,     0,
     328,     0,     0,     0,    42,     0,    46,    46,     0,    43,
      44,     0,     0,    45,   267,   293,     0,   -52,     0,     0,
       0,     0,   267,     0,   -36,     0,     0,   267,     0,    46,
      46,    46,   345,   -36,   -36,   -36,   -36,   -36,   -36,   507,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   348,
       0,     0,    47,    47,    46,     0,     0,     0,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,   268,     0,
       0,     0,     0,   268,     0,    47,    47,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   375,   376,   377,
     378,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
      47,   -29,   -29,   -29,   102,   103,     0,   412,   413,   414,
     415,     0,   -29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,     0,    36,   171,    37,    38,
      39,    40,    41,     0,     0,     0,     0,     0,   484,     0,
      42,   117,     0,   489,   490,    43,    44,     0,     0,    45,
       0,   300,     0,   -52,     0,     0,     0,     0,     0,   497,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,   -83,   -83,     0,     0,   -83,   505,     0,   -83,   -83,
       0,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
       0,   510,   -86,   -86,     0,     0,   -86,     0,     0,   -86,
     -86,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
       0,     0,   -85,   -85,     0,     0,   -85,     0,     0,   -85,
     -85,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
     303,     0,   -84,   -84,     0,     0,   -84,     0,     0,   -84,
     -84,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
       0,     0,   -81,   -81,     0,     0,   -81,     0,     0,   -81,
     -81,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,     0,
       0,     0,   -82,   -82,     0,     0,   -82,     0,     0,   -82,
     -82,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,   -68,   -68,     0,     0,   -68,     0,     0,   -68,
     -68,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,   -69,     0,     0,
       0,     0,   -69,   -69,     0,     0,   -69,     0,     0,   -69,
     -69,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,    36,   171,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,    43,    44,     0,     0,    45,     0,     0,   520,
     -52,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     0,    36,   171,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,    43,    44,     0,     0,    45,     0,     0,   521,
     -52,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,     0,     0,     0,   -65,     0,     0,
       0,     0,   -65,   -65,     0,     0,   -65,     0,     0,   -65,
     -65,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,   -80,     0,     0,
       0,     0,   -80,   -80,   -41,     0,   -80,     0,     0,   -80,
     -80,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -44,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -43,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -46,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -47,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -48,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -49,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -50,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -45,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -42,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -30,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -30,   -30,   -30,   -30,   -30,   -30,   -33,
       0,   -30,   -30,   -30,   -30,   -30,   339,   340,   -33,   -33,
     -33,   -33,   -33,   -33,   -31,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -31,   -31,   -31,   -31,   -31,   -31,   -32,
       0,   -31,   -31,   -31,   -31,   -31,   339,   340,   -32,   -32,
     -32,   -32,   -32,   -32,   -34,     0,   -32,   -32,   -32,   -32,
     -32,   339,   340,   -34,   -34,   -34,   -34,   -34,   -34,   -35,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -35,   -35,
     -35,   -35,   -35,   -35,   -37,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,     0,     0,   -89,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,     0,     0,   -91,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,     0,     0,   -90,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,     0,     0,   -93,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,     0,     0,   -92,   -36,   -36,
     -36,   -36,   -36,   -36,   108,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,     0,   -36,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,     0,     0,   -41,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,     0,     0,   -44,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,     0,     0,   -43,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,     0,   -46,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,   -47,     0,     0,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,     0,     0,   -48,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,     0,     0,   -49,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -50,     0,     0,   -50,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,     0,   -45,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,     0,     0,   -42,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,     0,     0,   -88,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   106,     0,     0,   -33,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,     0,   -37,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,     0,     0,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,     0,     0,     0,   -89,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,   -91,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,     0,   -90,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,     0,     0,   -93,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,     0,     0,   -92,   -36,   -36,
     -36,   -36,   -36,   -36,   347,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,   -36,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,   -41,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,   -44,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,   -43,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,   -46,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,   -47,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,   -48,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,   -49,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,     0,     0,     0,   -50,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,   -45,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,   -42,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,
     -30,   104,   105,     0,     0,     0,     0,   -30,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,   -33,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,   104,   105,     0,     0,     0,     0,   -31,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,
     -32,   104,   105,     0,     0,     0,     0,   -32,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,   -34,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,   -35,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,   -37,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -26,   -26,   102,
     103,   -27,   -27,   -27,   -27,   -27,   -27,   -26,     0,   -27,
     -27,   -27,   102,   103,     0,     0,     0,     0,     0,     0,
     -27,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,     0,   -89,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,   -93,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,   -92,   -36,   -36,   -36,   -36,   -36,   -36,   323,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,   -47,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,     0,   -50,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   321,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -36,
     -36,   -36,   -36,   -36,   -36,   363,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,     0,   -49,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   361,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -36,   -36,   -36,
     -36,   -36,   -36,   499,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   319,   320,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   319,   320,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     319,   320,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -36,   -36,   -36,   -36,   -36,   -36,   512,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,
     359,   360,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,   359,   360,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
       0,   -27,   -27,   357,   358
};

static const yytype_int16 yycheck[] =
{
       9,   143,    27,    18,   143,    18,    14,     0,   143,    34,
      19,    20,   143,    22,    20,    20,   146,     0,   143,    28,
      35,     0,    35,     6,    27,     0,    28,     6,     3,     4,
       5,     6,    35,    20,   164,    18,    34,    35,   168,    12,
      13,    20,    34,    46,    17,    54,    19,    20,    21,    22,
      23,    24,    25,    27,    28,   293,    65,    35,    33,    65,
      33,    35,   300,    27,    28,    38,    39,    20,    46,    42,
      27,    35,    46,    46,    83,    28,    85,    34,    35,    88,
      20,    83,    46,    34,    35,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    81,   108,
      18,   110,    18,    20,    35,    20,    27,    28,    20,    27,
      28,    28,    65,    34,    18,    46,    28,    35,     0,    35,
      20,     3,     4,     5,     6,    35,    20,   372,    28,   374,
      83,    35,    85,    18,   143,   144,    46,   146,   146,    44,
     146,   143,   144,     3,     4,     5,     6,    18,    65,    33,
      35,    33,    18,    65,    33,   164,   164,    20,   164,   168,
     168,    27,   168,   165,    35,    65,    83,    18,    85,    35,
      18,    83,    18,    85,    34,    18,    27,    28,    27,    28,
      29,    30,    18,    83,    35,    85,    35,    35,    20,    35,
     143,   144,    35,   146,    33,    12,    13,    46,    35,    35,
      17,    35,    19,    20,    21,    22,    23,    24,    25,    46,
      33,   164,    46,    18,    33,   168,    33,   226,    34,    35,
      33,    38,    39,    34,    35,    42,   143,   144,    18,   146,
      35,   143,   144,    33,   146,    20,    21,    22,    23,    24,
      25,   250,    18,   143,   144,    35,   146,   164,    33,    35,
      33,   168,   164,    38,    39,    33,   168,    42,    33,    35,
      46,    20,    12,    13,   164,    46,   275,    17,   168,    19,
      20,    21,    22,    23,    24,    25,   285,    34,    35,   288,
      35,    44,    35,    33,    34,    46,   288,    35,    38,    39,
      34,    46,    42,    46,     3,     4,     5,     6,    46,    46,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,    27,    28,   323,    34,    35,    34,    35,    34,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    34,   343,   288,    34,    35,   347,    34,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,    20,   363,    46,    35,   366,    35,   368,
     369,    28,    35,   372,   366,   374,   372,    46,   374,    46,
      34,   288,   514,    46,   516,   514,   288,   516,    46,   514,
     389,   516,    33,   514,   514,   516,   516,    54,   288,   514,
      35,   516,    46,   372,    46,   374,    34,   539,    65,    33,
     539,    46,    34,    35,   539,    34,    35,    33,   539,   539,
      34,    35,    33,   366,   539,   368,    83,   426,    85,   372,
       0,   374,    33,     3,     4,     5,     6,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      33,   108,    33,   110,    33,    27,    28,    29,    30,   366,
      34,   368,   461,    35,   366,   372,   368,   374,    34,    35,
     372,    34,   374,    33,    46,    33,   366,    33,   368,    34,
      35,    33,   372,    33,   374,    33,   143,   144,    34,   146,
      27,    28,   491,   492,    34,   491,   492,    34,    35,    46,
     499,    46,    27,    28,    29,    30,    34,   164,   507,    34,
      35,   168,    34,   512,    34,   514,   515,   516,    34,    18,
      34,    35,   514,   515,   516,    34,    35,    46,    27,    28,
      29,    30,    31,    32,    34,   192,    35,    36,    37,    46,
     539,    34,    35,    27,    28,   537,    34,   539,   491,   492,
      34,    35,    46,    12,    13,    34,    35,    46,    17,    34,
      19,    20,    21,    22,    23,    24,    25,    34,    35,   226,
      34,   514,   515,   516,    33,    27,    28,    29,    30,    38,
      39,    46,    34,    42,   491,   492,    34,    35,    18,   491,
     492,    34,    35,   250,    34,    35,   539,    27,    28,    29,
      30,   491,   492,    34,    35,    35,    34,   514,   515,   516,
      18,     6,   514,   515,   516,    34,    35,    -1,   275,    27,
      28,    29,    30,    81,   514,   515,   516,    35,   285,    18,
       0,   288,   539,     3,     4,     5,     6,   539,    27,    28,
      29,    30,    31,    32,    34,    35,    35,    36,    37,   539,
      34,    35,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   368,   323,     3,     4,     5,
       6,    -1,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,   343,    34,    35,    -1,
     347,    -1,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,    20,   363,    34,    35,   366,
      -1,   368,    -1,    28,    -1,   372,    -1,   374,    20,    21,
      22,    23,    24,    25,    34,    35,    27,    28,    29,    30,
      -1,    33,   389,    34,    18,    -1,    38,    39,    -1,    54,
      42,    34,    35,    27,    28,    29,    30,    31,    32,    33,
      65,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      34,    35,    34,    35,    27,    28,    29,    30,    83,   426,
      85,    34,    35,    34,    35,    34,    35,    34,    35,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,     0,   110,    -1,     3,     4,     5,
       6,    34,    35,    -1,   461,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    34,    35,    -1,   143,   144,
      -1,   146,    33,    -1,   491,   492,    -1,    38,    39,    34,
      35,    42,   499,    -1,    45,    46,    34,    35,    -1,   164,
     507,    34,    35,   168,    -1,   512,    -1,   514,   515,   516,
       0,    34,    35,     3,     4,     5,     6,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   539,    19,    20,    21,    22,    23,    24,    25,
      27,    28,    29,    30,    31,    32,    -1,    33,    35,    36,
      37,    -1,    38,    39,    34,    35,    42,    34,    35,    46,
      46,   226,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,   250,    34,    35,    -1,    -1,
       0,    -1,    33,     3,     4,     5,     6,    38,    39,    -1,
      -1,    42,    -1,     0,    -1,    46,     3,     4,     5,     6,
     275,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
     285,    -1,    -1,   288,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,   343,    -1,
      -1,    -1,   347,    -1,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,    20,   363,    -1,
      -1,   366,    -1,   368,    -1,    28,    -1,   372,    -1,   374,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,   389,    -1,    18,    -1,    38,    39,
      -1,    54,    42,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    65,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,   426,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,   108,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     143,   144,    -1,   146,    33,    -1,   491,   492,    -1,    38,
      39,    -1,    -1,    42,   499,    -1,    45,    46,    -1,    -1,
      -1,   164,   507,    -1,    -1,   168,    -1,   512,    -1,   514,
     515,   516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   539,    19,    20,    21,    22,    23,
      24,    25,    27,    28,    29,    30,    31,    32,    -1,    33,
      35,    36,    37,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    46,    46,   226,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,   250,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,   275,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,   285,    -1,    -1,   288,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,    -1,    -1,
     323,    -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
     343,    -1,    -1,    -1,   347,    -1,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,    20,
     363,    -1,    -1,   366,    -1,   368,    -1,    28,    -1,   372,
      -1,   374,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,   389,    -1,    18,    -1,
      38,    39,    -1,    54,    42,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    65,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,   426,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,   108,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,   143,   144,    -1,   146,    33,    -1,   491,   492,
      -1,    38,    39,    -1,    -1,    42,   499,    -1,    45,    46,
      -1,    -1,    -1,   164,   507,    -1,    -1,   168,    -1,   512,
      -1,   514,   515,   516,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   539,    19,    20,    21,
      22,    23,    24,    25,    27,    28,    29,    30,    31,    32,
      -1,    33,    35,    36,    37,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    46,    46,   226,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,   250,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    18,
      -1,    42,    -1,    -1,    45,    46,    -1,    -1,    27,    28,
      29,    30,    31,    32,   275,    -1,    35,    36,    37,    18,
      -1,    -1,    -1,    -1,   285,    -1,    -1,   288,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    -1,   343,    -1,    -1,    -1,   347,    -1,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,    20,   363,    -1,    -1,   366,    -1,   368,    -1,    28,
      -1,   372,    -1,   374,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,   389,    -1,
      18,    -1,    38,    39,    -1,    54,    42,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    65,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,   426,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,   108,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     461,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,   143,   144,    -1,   146,    33,    -1,
     491,   492,    -1,    38,    39,    -1,    -1,    42,   499,    -1,
      45,    46,    -1,    -1,    -1,   164,   507,    -1,    -1,   168,
      -1,   512,    -1,   514,   515,   516,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,   539,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,   226,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,   250,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    27,    28,
      29,    30,    31,    32,    -1,    34,   275,    36,    37,    38,
      39,    18,    -1,    -1,    -1,    -1,   285,    -1,    -1,   288,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,   343,    -1,    -1,    -1,   347,    -1,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,    20,   363,    -1,    -1,   366,    -1,   368,
      -1,    28,    -1,   372,    -1,   374,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
     389,    -1,    18,    -1,    38,    39,    -1,    54,    42,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    65,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,   426,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   461,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,   143,   144,    -1,   146,
      33,    -1,   491,   492,    -1,    38,    39,    -1,    -1,    42,
     499,    -1,    45,    46,    -1,    -1,    -1,   164,   507,    -1,
      -1,   168,    -1,   512,    -1,   514,   515,   516,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     539,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,   226,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
      27,    28,    29,    30,    31,    32,    -1,    34,   275,    36,
      37,    38,    39,    18,    -1,    -1,    -1,    -1,   285,    -1,
      -1,   288,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,   343,    -1,    -1,    -1,
     347,    -1,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,    20,   363,    -1,    -1,   366,
      -1,   368,    -1,    28,    -1,   372,    -1,   374,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,   389,    -1,    18,    -1,    38,    39,    -1,    54,
      42,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      65,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,   426,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   461,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,   143,   144,
      -1,   146,    33,    -1,   491,   492,    -1,    38,    39,    -1,
      -1,    42,   499,    -1,    45,    46,    -1,    -1,    -1,   164,
     507,    -1,    -1,   168,    -1,   512,    -1,   514,   515,   516,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,   539,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,   226,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,   250,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,    27,    28,    29,    30,    31,    32,    -1,    34,
     275,    36,    37,    38,    39,    18,    -1,    -1,    -1,    -1,
     285,    -1,    -1,   288,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    -1,   343,    -1,
      -1,    -1,   347,    -1,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,    20,   363,    -1,
      -1,   366,    -1,   368,    -1,    28,    -1,   372,    -1,   374,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,   389,    -1,    18,    -1,    38,    39,
      -1,    54,    42,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    65,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,   426,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,   108,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     143,   144,    -1,   146,    33,    -1,   491,   492,    -1,    38,
      39,    -1,    -1,    42,   499,    -1,    45,    46,    -1,    -1,
      -1,   164,   507,    -1,    -1,   168,    -1,   512,    -1,   514,
     515,   516,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,   539,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      45,    46,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,   226,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,   250,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,    27,    28,    29,    30,    31,    32,
      -1,    34,   275,    36,    37,    38,    39,    18,    -1,    -1,
      -1,    -1,   285,    -1,    -1,   288,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    -1,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,    -1,    -1,
     323,    -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
     343,    -1,    -1,    -1,   347,    -1,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,    20,
     363,    -1,    -1,   366,    -1,   368,    -1,    28,    -1,   372,
      -1,   374,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,   389,    -1,    18,    -1,
      38,    39,    -1,    54,    42,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    65,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,   426,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,   108,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,   143,   144,    -1,   146,    33,    -1,   491,   492,
      -1,    38,    39,    -1,    -1,    42,   499,    -1,    45,    46,
      -1,    -1,    -1,   164,   507,    -1,    -1,   168,    -1,   512,
      -1,   514,   515,   516,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,   539,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,   226,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,   250,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    18,    42,
      -1,    -1,    45,    46,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,   275,    35,    36,    37,    38,    39,
      40,    41,    18,    43,   285,    -1,    -1,   288,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    -1,   343,    -1,    -1,    -1,   347,    -1,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,    20,   363,    -1,    -1,   366,    -1,   368,    -1,    28,
      -1,   372,    -1,   374,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    -1,   389,    27,
      28,    29,    30,    31,    32,    54,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    65,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    83,   426,    85,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,   108,
      -1,   110,    27,    28,    29,    30,    31,    32,    18,    34,
     461,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    20,    35,    36,    37,    38,    39,
      40,    41,    28,    43,   143,   144,    -1,   146,    -1,    -1,
     491,   492,    27,    28,    29,    30,    31,    32,   499,    34,
      35,    36,    37,    38,    39,   164,   507,    -1,    -1,   168,
      -1,   512,    18,   514,   515,   516,    -1,    -1,    -1,    65,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    83,   539,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
     106,    -1,   108,    -1,   110,    -1,    -1,   226,    -1,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    33,   143,   144,    -1,
     146,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,
      27,    28,    29,    30,    31,    32,   275,    34,   164,    36,
      37,    18,   168,    -1,    -1,    -1,   285,    -1,    -1,   288,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,   343,    -1,    -1,    -1,   347,    -1,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,    -1,   363,    -1,    -1,   366,    -1,   368,
      -1,    -1,    -1,   372,    -1,   374,    -1,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
     389,    19,    20,    21,    22,    23,    24,    25,    -1,   285,
      -1,    -1,   288,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,
      20,    21,    22,    23,    24,    25,    -1,   426,    -1,    -1,
      -1,   317,   318,    33,    -1,    -1,    -1,   323,    38,    39,
      -1,    -1,    42,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,   341,    -1,   343,    -1,    -1,
      -1,   347,   461,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,    -1,    -1,   361,    20,   363,    -1,    -1,
     366,    -1,   368,    -1,    28,    18,   372,    -1,   374,    -1,
      -1,    -1,   491,   492,    27,    28,    29,    30,    31,    32,
     499,    -1,    35,    36,    37,    38,    39,    -1,   507,    -1,
      -1,    -1,    -1,   512,    18,   514,   515,   516,    -1,    -1,
      -1,    65,    -1,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    83,
     539,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    18,   106,    -1,   108,    -1,   110,    -1,    -1,    20,
      27,    28,    29,    30,    31,    32,    33,    28,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    18,   143,
     144,    -1,   146,    -1,    46,   491,   492,    27,    28,    29,
      30,    31,    32,   499,    65,    35,    36,    37,    38,    39,
     164,   507,    -1,    -1,   168,    -1,   512,    -1,   514,   515,
     516,    -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,   539,    -1,   106,    -1,   108,    -1,   110,
      -1,    -1,    -1,    -1,    -1,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,   143,   144,    -1,   146,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,    27,    28,    29,    30,    31,
      32,    -1,    34,   164,    36,    37,     7,   168,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,   285,    33,    -1,   288,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,   313,
     314,   315,   316,    -1,    -1,    46,    -1,    -1,    -1,   323,
      -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,   333,
     334,   335,   336,    -1,    -1,    -1,    -1,   341,    -1,   343,
      -1,    -1,    -1,   347,    -1,   349,   350,   351,   352,   353,
     354,   355,   356,    -1,    -1,    -1,    -1,   361,    -1,   363,
      -1,    -1,   366,    -1,   368,    -1,    -1,    -1,   372,    -1,
     374,    -1,    -1,    -1,   285,    -1,    -1,   288,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     311,   312,    -1,    20,    33,    -1,    -1,    -1,    -1,    38,
      39,    28,   323,    42,    -1,    -1,    45,    46,   329,   330,
     331,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,   343,    -1,    -1,    -1,   347,    -1,   349,   350,
     351,   352,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
     361,    -1,   363,    -1,    -1,   366,    -1,   368,    -1,    -1,
      -1,   372,    -1,   374,    -1,    -1,    83,    -1,    85,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    94,    95,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,   492,   106,
      -1,   108,    -1,   110,    -1,   499,    -1,    -1,    -1,    -1,
      -1,    20,    -1,   507,    -1,    -1,    -1,    -1,   512,    28,
     514,   515,   516,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,    -1,   146,
      -1,    -1,    -1,    -1,    83,   539,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    65,   164,    -1,    -1,
      -1,   168,    -1,    -1,    -1,    -1,    -1,   106,    18,   108,
      -1,   110,    -1,    -1,    83,    -1,    85,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
     491,   492,    -1,    -1,    -1,    -1,    -1,   106,   499,   108,
      -1,   110,    -1,    -1,   143,   144,   507,   146,    -1,    -1,
      -1,   512,    -1,   514,   515,   516,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,
      18,    -1,    -1,    -1,   143,   144,    -1,   146,   539,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,   164,    -1,    -1,     7,   168,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,   285,    -1,
      -1,   288,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,    -1,    -1,
      18,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,   323,    35,    36,    37,
      38,    39,   329,   330,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   341,    -1,   343,    -1,    -1,    -1,
     347,    -1,   349,   350,    -1,    -1,   285,    -1,    -1,   288,
      -1,    -1,    -1,    -1,   361,    20,   363,    -1,    -1,   366,
      -1,   368,    -1,    28,    -1,   372,    -1,   374,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,   288,
      -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    20,   341,    -1,   343,    -1,    -1,    -1,   347,    28,
     349,    -1,   321,    -1,   323,    -1,    -1,    -1,    83,    -1,
      85,    -1,   361,    -1,   363,    -1,    -1,   366,    -1,   368,
      -1,    -1,   341,   372,   343,   374,    -1,    -1,   347,    -1,
      -1,   106,    -1,   108,    -1,   110,    65,    -1,    -1,    -1,
      -1,    -1,   361,    -1,   363,    -1,    -1,   366,    -1,   368,
      -1,    -1,    -1,   372,    83,   374,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
      -1,   146,    -1,    -1,   491,   492,    -1,   106,    -1,   108,
      -1,   110,   499,    -1,    -1,    -1,    -1,    -1,    -1,   164,
     507,    18,    -1,   168,    -1,   512,    -1,   514,   515,   516,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    -1,   143,   144,    -1,   146,    -1,    -1,
      -1,    -1,   539,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,
      -1,    -1,   491,   492,    27,    28,    29,    30,    31,    32,
     499,    34,    35,    36,    37,    38,    39,    -1,   507,    -1,
      -1,    -1,    -1,   512,    -1,   514,   515,   516,    -1,    -1,
      -1,    -1,   491,   492,    27,    28,    29,    30,    31,    32,
     499,    34,    35,    36,    37,    38,    39,    -1,   507,    -1,
     539,    -1,    -1,   512,    -1,   514,   515,   516,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,    -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    18,
     539,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    42,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,   288,
      -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,   343,    -1,
      -1,    -1,   347,    -1,    -1,    82,    -1,    -1,    85,    86,
      87,    -1,    89,    90,    91,    92,   361,    -1,   363,    -1,
      -1,   366,    -1,   368,   323,    -1,    -1,   372,    -1,   374,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,   343,    -1,    -1,    -1,   347,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,   361,    -1,   363,    -1,    -1,   366,   145,   368,
      -1,    -1,    -1,   372,    -1,   374,    -1,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   165,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,   183,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,    -1,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    33,    -1,   491,   492,    -1,    38,
      39,    -1,    -1,    42,   499,    44,    -1,    46,    -1,    -1,
      -1,    -1,   507,    -1,    18,    -1,    -1,   512,    -1,   514,
     515,   516,   249,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,   266,
      -1,    -1,   491,   492,   539,    -1,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,
      -1,    -1,    -1,   512,    -1,   514,   515,   516,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,
     307,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
     539,    35,    36,    37,    38,    39,    -1,   324,   325,   326,
     327,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,   365,    -1,
      33,   368,    -1,   370,   371,    38,    39,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,   386,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,   423,    -1,    45,    46,
      -1,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,   458,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
     537,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    18,    -1,    42,    -1,    -1,    45,
      46,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      18,    35,    36,    37,    38,    39,    40,    41,    -1,    27,
      28,    29,    30,    31,    32,    33,    18,    35,    36,    37,
      38,    39,    40,    41,    -1,    27,    28,    29,    30,    31,
      32,    33,    18,    35,    36,    37,    38,    39,    40,    41,
      -1,    27,    28,    29,    30,    31,    32,    33,    18,    35,
      36,    37,    38,    39,    40,    41,    -1,    27,    28,    29,
      30,    31,    32,    33,    18,    35,    36,    37,    38,    39,
      40,    41,    -1,    27,    28,    29,    30,    31,    32,    33,
      18,    35,    36,    37,    38,    39,    40,    41,    -1,    27,
      28,    29,    30,    31,    32,    33,    18,    35,    36,    37,
      38,    39,    40,    41,    -1,    27,    28,    29,    30,    31,
      32,    33,    18,    35,    36,    37,    38,    39,    40,    41,
      -1,    27,    28,    29,    30,    31,    32,    33,    18,    35,
      36,    37,    38,    39,    40,    41,    -1,    27,    28,    29,
      30,    31,    32,    33,    18,    35,    36,    37,    38,    39,
      40,    41,    -1,    27,    28,    29,    30,    31,    32,    18,
      -1,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    -1,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      -1,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    -1,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    18,
      -1,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    18,    -1,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    46,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
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
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      79,     0,    50,    20,    53,    87,    44,    75,    33,    52,
      76,    79,    52,    54,    55,    87,     7,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    19,    21,    22,    23,
      24,    25,    33,    38,    39,    42,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    78,    79,    80,    81,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    87,
      34,    35,    33,    33,    68,    33,    33,    33,    33,    33,
      33,    33,    33,    69,    27,    28,    29,    30,    31,    32,
      36,    37,    38,    39,    40,    41,    43,    63,    33,    46,
      35,    45,    80,    54,    69,    68,    46,    69,    82,    69,
      69,    87,    69,    69,    69,    69,    34,    58,    63,    59,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      70,    70,    70,    34,    46,    18,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    75,    77,    80,    68,    69,
      77,    46,    46,    46,     8,    46,    77,    68,    34,    77,
      20,    20,    20,    12,    13,    17,    19,    20,    21,    22,
      23,    24,    25,    33,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    70,    71,    72,    73,
      74,    87,    88,    89,    90,    91,    92,    12,    13,    17,
      19,    20,    21,    22,    23,    24,    25,    33,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      70,    71,    72,    73,    74,    87,    88,    89,    90,    91,
      92,    20,    35,    20,    21,    22,    23,    24,    25,    33,
      64,    65,    66,    67,    87,    88,    89,    90,    91,    92,
      20,    21,    22,    23,    24,    25,    33,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    87,
      88,    89,    90,    91,    92,    35,     7,     9,    10,    11,
      14,    15,    16,    44,    68,    81,    83,    84,    85,    86,
      44,    75,    80,    69,    33,    33,    33,    33,    69,    27,
      28,    29,    30,    31,    32,    36,    37,    38,    39,    40,
      41,    43,    63,    33,    33,    33,    33,    33,    69,    27,
      28,    29,    30,    31,    32,    36,    37,    38,    39,    40,
      41,    43,    63,    33,    70,    69,    63,    33,    69,    27,
      28,    29,    30,    31,    32,    36,    37,    38,    39,    40,
      41,    43,    63,    33,    70,    33,    33,    68,    33,    33,
      33,    33,    76,    46,    76,    69,    69,    69,    69,    34,
      20,    21,    22,    23,    24,    25,    33,    58,    63,    64,
      65,    66,    67,    87,    88,    89,    90,    91,    92,    59,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      70,    70,    69,    69,    69,    69,    34,    20,    21,    22,
      23,    24,    25,    33,    58,    63,    64,    65,    66,    67,
      87,    88,    89,    90,    91,    92,    59,    60,    60,    61,
      61,    61,    61,    62,    62,    63,    63,    70,    70,    34,
      70,    34,    20,    21,    22,    23,    24,    25,    33,    58,
      63,    64,    65,    66,    67,    87,    88,    89,    90,    91,
      92,    59,    60,    60,    61,    61,    61,    61,    62,    62,
      63,    63,    70,    70,    69,    68,    46,    82,    87,    69,
      69,    78,    78,    34,    34,    34,    34,    69,    63,    33,
      34,    34,    34,    34,    34,    69,    63,    33,    34,    34,
      69,    63,    33,    34,    34,    46,    34,    34,    34,    34,
      45,    45,    34,    70,    34,    70,    34,    70,    77,    68,
      77,    46,    46,    46,    34,    34,    34,    46,    68,    34,
      77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    54,    54,    54,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    66,    66,    66,    67,    67,    67,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    70,
      70,    71,    72,    73,    74,    75,    76,    76,    77,    77,
      78,    78,    79,    80,    80,    80,    80,    80,    81,    82,
      83,    83,    84,    84,    85,    85,    85,    86,    87,    88,
      89,    90,    91,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     3,     1,     0,     2,     1,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     4,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     3,     1,
       3,     4,     4,     4,     4,     4,     2,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     2,     3,
       5,     7,     9,     5,     5,     5,     5,     3,     1,     1,
       1,     1,     1,     1
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
      
#line 3110 "./src/syntax/parser.c" /* yacc.c:1652  */
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
#line 213 "src/syntax/parser.y" /* yacc.c:1918  */


void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}



