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
  #include "ast.h"
  #include "../main.h"

  struct ast_node *ast = NULL;

#line 80 "./src/syntax/parser.c"

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
  YYSYMBOL_declarator = 53,                /* declarator  */
  YYSYMBOL_parameters = 54,                /* parameters  */
  YYSYMBOL_parameter_list = 55,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 56,     /* parameter_declaration  */
  YYSYMBOL_logical_or_expression = 57,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 58,    /* logical_and_expression  */
  YYSYMBOL_equality_expression = 59,       /* equality_expression  */
  YYSYMBOL_relational_expression = 60,     /* relational_expression  */
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
#define YYLAST   4589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

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
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    33,    34,    37,    38,    41,    44,    45,
      46,    47,    50,    53,    54,    57,    58,    61,    64,    65,
      68,    69,    72,    73,    74,    77,    78,    79,    80,    81,
      82,    85,    86,    87,    90,    91,    92,    95,    96,    99,
     100,   101,   104,   105,   106,   107,   108,   111,   112,   115,
     116,   119,   120,   121,   124,   125,   128,   129,   130,   131,
     134,   135,   136,   139,   140,   143,   144,   147,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   161,   164,   167,
     170,   171,   174,   175,   178,   179,   180,   183,   186
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
  "function_definition", "type_specifier", "declarator", "parameters",
  "parameter_list", "parameter_declaration", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "unary_operator", "term", "optional_expression", "expression",
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

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     528,   -12,    -1,    20,    25,    52,   817,  1170,  1813,    37,
    2937,  -270,  2982,   -21,    24,    -6,  3136,  3027,    26,  3072,
    3181,    39,    42,   578,    60,    67,    70,   109,   111,   114,
     140,   146,   264,   606,    46,    63,   136,   352,   822,   857,
     896,  3117,    50,    23,   970,  1037,  1000,  1316,   157,   177,
     181,  1573,  1639,  3226,  3271,  3316,  3361,  3406,  3451,  3496,
    3541,  3586,  3631,   438,   179,   209,   213,   -18,   794,   165,
     200,   112,   610,   610,   610,   236,   648,   648,   236,   610,
      15,   218,  1000,  1000,  1000,  1000,  1803,  3676,  3162,  3721,
     488,   578,    30,   215,   528,   243,   -25,    16,  1900,  1132,
     998,   231,  3766,   265,   255,   257,   274,   280,   285,   288,
     310,   323,  1915,  1923,  1939,  2005,  2017,    90,   106,   315,
     332,   794,  4486,   794,   794,   794,  1051,  1051,  1051,  1051,
     165,   648,  4529,  2026,  2035,   333,   337,   339,  2048,  2095,
    2107,   743,  3811,    58,  2191,  2127,  1373,  1386,  1337,  1354,
    1594,  1611,   344,   359,  3856,  3901,  3946,  3991,   121,  4529,
     545,  4036,   361,  4529,  4081,   812,  4126,   391,   373,   378,
     381,   386,    76,   382,  2140,   352,  2187,  2232,   352,  2277,
    2322,  2367,   574,   407,   135,   412,   425,   428,   432,  1152,
    1255,  1291,   352,  1312,  1409,  1051,  1497,  1512,  1548,  1240,
     440,   448,   452,   456,    66,    -3,    38,   477,   484,   485,
     352,   -13,   120,   154,  1079,   173,   500,   178,   211,    80,
     472,   486,   490,   491,   167,   495,   352,   352,  4171,   503,
     511,   513,   514,   429,   199,   749,   141,   174,   186,   352,
     128,   866,   902,  1114,  1006,   201,  1070,  1105,   853,  1051,
    1051,  2236,   519,   520,   578,   521,   523,   526,   527,  4216,
      50,   474,  2281,  2326,  2371,  2416,  2461,  2506,  2551,  2596,
     886,   529,  4261,  4306,   610,   610,   236,   610,   223,   352,
     352,  2412,   488,   610,   610,   236,   610,   287,  1051,  1051,
    1569,   488,   610,   610,   236,   610,   308,  1079,  1079,  1079,
    1079,   228,   488,  2457,  2502,   610,   610,   236,   610,   458,
    1114,  1114,  1114,  1114,  1160,   488,  1666,  1756,   794,   165,
     530,   610,   236,   648,   648,  2641,  4351,   531,  2686,   578,
    4396,   537,   538,   539,   543,  2547,  2592,  2637,   302,   546,
     547,   548,   551,  1771,  1841,  1856,   320,   552,   554,   559,
     560,   369,   400,   409,   476,   510,   328,   562,   570,   571,
     576,  1263,  1391,  1417,  1520,  1619,   341,    14,   573,  2731,
     585,   587,   591,   592,  2776,  2821,   593,  2682,  2727,  2772,
    2817,  2862,  1883,  2001,  2076,  2091,  4548,   636,   644,   713,
     731,   739,  1632,  1648,  1674,  1797,  1823,  4486,   165,  4486,
     594,   597,   605,  2866,  4441,   611,  2911,  2956,  3001,  3046,
     545,   602,  4486,  3091
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,   631,  -270,     0,  -270,  -270,   561,  -270,
     340,   557,   536,   330,  1777,  1699,   414,   671,   928,   -59,
     151,  1867,  1185,  1442,  -269,   -11,  -162,     1,   -20,  -111,
    -102,    75,   -99,   -67,   -64,   -56,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    42,    14,    65,    66,    67,
      96,    97,    98,    99,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,   118,    53,    54,    55,    56,    57,
      58,   104,    59,    60,    61,    62,   219
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   121,    17,   273,   -49,     9,    10,    -8,   122,
     101,   264,   -88,   338,    15,   -43,   -16,    94,    64,    -9,
     265,    63,   346,   266,   -88,   297,   298,    18,    71,     1,
       2,     3,     4,   356,    89,   -43,   -43,   -43,   -43,    19,
     -10,   121,   182,   -18,   123,   -11,   366,    81,   397,   112,
     -18,    71,    11,   226,   227,   267,   -44,    13,   268,    63,
     -14,    82,    83,   261,   -17,   -17,   269,    16,   -49,    92,
     183,   152,    68,   199,    71,    69,   -44,   -44,   -44,   -44,
     107,   182,   182,   110,   -88,   -19,   123,    71,    71,    71,
      71,   -53,   -19,    72,    64,   248,    71,   326,   -42,   -88,
      73,   162,   144,    74,   -88,   -88,   -88,   -88,   -52,   -88,
     -88,   262,   154,   302,   -88,   -88,   -88,   -88,   -42,   -42,
     -42,   -42,   260,   263,   -61,   -61,   199,   270,   199,   199,
     199,   199,   199,   199,   199,    71,   182,    63,   -31,   161,
     140,   141,    75,   164,    76,    90,   248,    77,   105,   106,
     -42,   -42,   -42,   -42,   111,   -60,   -60,   -42,   -31,   -31,
     299,   300,   -49,   -49,    63,   182,   310,   311,    63,   -88,
     -88,    63,   -34,    78,    70,   -53,   -53,    25,    26,    79,
     182,   -51,    30,   182,    31,   167,    32,    33,    34,    35,
      36,   -37,   -34,   -34,   -34,   -34,   -46,   182,    37,   184,
     199,   -49,    87,    38,    39,   226,   227,    40,   -52,   -52,
     -48,   -37,   -37,   -37,   -37,   182,   -46,   -46,   -46,   -46,
     -51,   -51,   -47,   103,   103,   103,   -50,   108,   109,   -55,
     103,   182,   182,   -43,   -43,   -50,   -50,   -43,   -43,   -43,
     -43,   117,   119,    93,   182,   102,   -38,   -13,   248,   -55,
     -55,   -55,   -55,    89,   199,   199,   220,   335,   -12,    71,
     368,   226,   227,   228,    63,   327,   -38,   -38,   -38,   -38,
     -26,   -26,   -26,   -26,   -26,   -26,   130,   -26,    63,   -26,
     -26,   333,   153,   131,   182,   182,   264,   248,   264,   132,
     341,   133,   158,   199,   199,   265,   248,   265,   266,   349,
     266,   264,   -43,   -43,   -43,   -43,    89,   248,   134,   -43,
     265,   271,   359,   266,   135,   248,   248,   248,   248,   136,
     248,   343,   137,   199,    71,   226,   227,   371,   182,   182,
     267,    63,   267,   268,    71,   268,   381,   141,   261,   405,
     261,   269,   351,   269,   138,   267,   226,   227,   268,   331,
     332,   411,   334,   261,   386,   141,   269,   139,   339,   340,
     142,   342,   391,   141,   168,   169,   -15,   347,   348,   170,
     350,   171,   172,   173,   174,   396,   141,   404,   155,   406,
     357,   358,   156,   360,   157,   175,   262,   -45,   262,   160,
      38,    39,   413,   -79,    40,   163,   370,   260,   263,   260,
     263,   262,   270,    71,   270,   320,   274,   -45,   -45,   -45,
     -45,   275,   260,   263,   276,   182,   -43,   270,   -32,   277,
     -43,   -43,   -43,   -43,   -88,   103,   103,   -33,   103,   -88,
     -88,   -88,   -88,   117,   103,   103,   -88,   103,   -32,   -32,
     299,   300,   117,   103,   103,   283,   103,   -33,   -33,   299,
     300,   177,   -88,   117,   146,   147,   103,   103,   284,   103,
      86,   285,   -88,   -88,   -88,   286,   117,   -88,   -88,   -88,
     -88,    90,   103,   292,   372,   373,   -42,   -42,   -42,   -42,
     376,   293,   194,   -42,    91,   294,   213,   213,   213,   295,
     177,   177,   361,   213,   -35,   -53,   226,   227,   115,   116,
     229,   230,   -52,   -51,   242,   231,   -88,   232,   233,   234,
     235,   236,   237,   238,   -35,   -35,   -35,   -35,   -50,   328,
     -53,   239,   -62,   -62,   -52,   -51,    38,    39,   -36,   -50,
      40,     1,     2,     3,     4,   194,   305,   194,   194,   194,
     194,   194,   194,   194,   306,   177,   307,   308,   -36,   -36,
     -36,   -36,   318,   319,   321,   242,   322,   168,   169,   323,
     324,   271,   170,   -47,   171,   172,   173,   174,   221,   222,
     223,   377,   378,   379,   177,   369,   375,   380,   175,   -48,
     382,   383,   384,    38,    39,   385,   387,    40,   388,   177,
      25,    26,   281,   389,   390,    30,   392,    31,   167,    32,
      33,    34,    35,    36,   393,   394,   177,   282,   -42,   290,
     395,    37,   -42,   -42,   -42,   -42,    38,    39,   398,   399,
      40,   400,   200,   201,   177,   401,   402,   202,   301,   203,
     204,   205,   206,   207,   208,   209,   412,    12,   403,   407,
     177,   177,   408,   210,   -44,   -44,   -44,   -44,    38,    39,
     409,   -44,    40,   177,   -57,   120,   410,   314,   367,   145,
     168,   169,   -58,   194,   194,   170,     0,   171,   172,   173,
     174,   221,   222,   223,   -57,   -57,   -57,   -57,   143,     0,
       0,   175,   -58,   -58,   -58,   -58,    38,    39,   213,   213,
      40,   213,     0,   336,   337,     0,   242,   213,   213,     0,
     213,     0,   344,   345,     0,   242,   213,   213,   178,   213,
       0,   213,   213,   354,   355,     0,   242,     0,     0,   213,
     213,     0,   213,     0,   242,   242,   364,   365,     0,   242,
       0,   -56,   194,     0,     0,   213,     0,   177,   177,   195,
       0,     0,     0,   214,   214,   214,     0,   178,   178,   -59,
     214,   -56,   -56,   -56,   -56,   229,   230,   -54,     0,     0,
     231,   243,   232,   233,   234,   235,   236,   237,   238,   -59,
     -59,   -59,   -59,     0,     0,     0,   239,   -54,   -54,   -54,
     -54,    38,    39,   -44,   -44,    40,     0,   -44,   -44,   -44,
     -44,     0,   195,     0,   195,   195,   195,   195,   195,   195,
     195,     0,   178,     0,     0,     0,   185,   186,     0,     0,
       0,   187,   243,   188,   189,   190,   191,    -2,     0,    95,
       1,     2,     3,     4,   177,     0,     0,   192,     0,     0,
       0,   178,    38,    39,   -39,   -39,    40,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -88,   178,     0,     0,   178,
     -88,   -88,   -88,   -88,     0,   -39,     0,   -88,   -88,     0,
     -39,   -39,     0,   178,   -39,     0,   195,     0,     0,   -40,
     -40,     0,     0,     0,   -40,     0,   -40,   -40,   -40,   -40,
       0,   178,     0,     0,     0,   214,   315,   -42,   -42,     0,
     -40,   -42,   -42,   -42,   -42,   -40,   -40,   178,   178,   -40,
     -31,   -31,     0,     0,   -31,   -31,   312,   313,   -41,   -41,
     178,     0,     0,   -41,   243,   -41,   -41,   -41,   -41,    90,
     195,   195,     0,     0,   -42,   -42,   -42,   -42,     0,   -41,
       0,   -42,   329,     0,   -41,   -41,   -34,   -34,   -41,     0,
     -34,   -34,   -34,   -34,     0,   214,   214,     0,   214,     0,
     178,   178,     0,   243,   214,   214,     0,   214,     0,   195,
     195,     0,   243,   214,   214,   179,   214,     0,   214,   214,
     214,   214,     0,   243,     0,     0,   214,   214,     0,   214,
       0,   243,   243,   243,   243,     0,   243,     0,     0,   195,
       0,     0,   214,     0,   178,   178,   196,     0,     0,     0,
     215,   215,   215,     0,   179,   179,     0,   215,   -31,   -31,
      84,    85,    25,    26,     0,   -31,     0,    30,   244,    31,
     167,    32,    33,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,    37,   -25,   -25,   249,   250,    38,    39,
     -37,   -37,    40,     0,   -37,   -37,   -37,   -37,     0,   196,
       0,   196,   196,   196,   196,   196,   196,   196,     0,   179,
       0,     0,     0,   185,   186,     0,     0,     0,   187,   244,
     188,   189,   190,   191,     0,   -34,   -34,   -34,   -34,     0,
       0,   178,   -34,     0,   192,     0,     0,     0,   179,    38,
      39,   200,   201,    40,     0,     0,   202,     0,   203,   204,
     205,   206,     0,   179,   -46,   -46,   179,     0,   -46,   -46,
     -46,   -46,   210,     0,     0,     0,     0,    38,    39,     0,
     179,    40,     0,   196,     0,     0,   229,   230,     0,     0,
       0,   231,     0,   232,   233,   234,   235,     0,   179,   -55,
     -55,     0,   215,   -55,   -55,   -55,   -55,   239,     0,     0,
       0,     0,    38,    39,   179,   179,    40,     0,     0,   -22,
     -22,   -22,   -22,   126,   127,     0,   -22,   179,   128,   129,
      -4,   244,     0,    -4,    -4,    -4,    -4,   196,   196,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -38,   215,   215,     0,   215,     0,   179,   179,     0,
     244,   215,   215,     0,   215,     0,   196,   196,     0,   244,
     215,   215,   180,   215,     0,   215,   215,   215,   215,     0,
     244,     0,     0,   215,   215,     0,   215,     0,   244,   244,
     244,   244,     0,   244,     0,     0,   196,     0,     0,   215,
       0,   179,   179,   197,     0,     0,     0,   217,   217,   217,
       0,   180,   180,     0,   217,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   291,   -42,   246,   -42,   -42,   -42,   -42,
     -42,   -42,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -45,   -45,     0,
       0,   -45,   -45,   -45,   -45,     0,   197,     0,   197,   197,
     197,   197,   197,   197,   197,     0,   180,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   246,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,   179,   -31,
     -31,   -31,   -31,   -31,   -31,   180,   -31,     0,   -31,   -31,
     -31,   -31,   288,   289,   -37,   -37,   -37,   -37,     0,     0,
     180,   -37,     0,   180,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,   -29,   -29,   249,   250,   180,     0,     0,
     197,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,
     -30,   -30,   249,   250,     0,   180,     0,     0,     0,   217,
     -23,   -23,   -23,   -23,   126,   127,     0,   -23,     0,   128,
     129,   180,   180,   -24,   -24,   -24,   -24,   126,   127,     0,
     -24,     0,   128,   129,   180,   -32,   -32,     0,   246,   -32,
     -32,   312,   313,     0,   197,   197,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -33,   -33,     0,     0,   -33,   -33,   312,   313,   217,
     217,     0,   217,     0,   180,   180,     0,   246,   217,   217,
       0,   217,     0,   197,   197,     0,   246,   217,   217,   181,
     217,     0,   217,   217,   217,   217,     0,   246,     0,     0,
     217,   217,     0,   217,     0,   246,   246,   246,   246,     0,
     246,     0,     0,   197,     0,     0,   217,     0,   180,   180,
     198,     0,     0,     0,   218,   218,   218,     0,   181,   181,
       0,   218,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   247,   -37,   -37,   -37,   -37,   -37,   -37,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -35,   -35,     0,     0,   -35,   -35,
     -35,   -35,     0,   198,     0,   198,   198,   198,   198,   198,
     198,   198,     0,   181,     0,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -55,   247,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,     0,   180,   -38,   -38,   -38,   -38,
     -38,   -38,   181,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -46,   -46,   -46,   -46,     0,     0,   181,   -46,     0,
     181,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,
     -27,   -27,   249,   250,   181,     0,     0,   198,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,   249,
     250,     0,   181,   -36,   -36,     0,   218,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,     0,   -57,   -57,   181,   181,
     -57,   -57,   -57,   -57,     0,     0,     0,   -55,   -55,   -55,
     -55,   181,   -58,   -58,   -55,   247,   -58,   -58,   -58,   -58,
       0,   198,   198,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,   288,   289,   -56,   -56,
       0,     0,   -56,   -56,   -56,   -56,   218,   218,     0,   218,
       0,   181,   181,     0,   247,   218,   218,     0,   218,     0,
     198,   198,     0,   247,   218,   218,   176,   218,     0,   218,
     218,   218,   218,     0,   247,     0,     0,   218,   218,     0,
     218,     0,   247,   247,   247,   247,     0,   247,     0,     0,
     198,     0,     0,   218,     0,   181,   181,   193,     0,     0,
       0,   212,   212,   212,     0,   176,   176,     0,   212,     0,
       0,   113,   114,   -33,   -33,   -33,   -33,   -33,   -33,   241,
     -33,     0,   -33,   -33,   -33,   -33,   288,   289,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,    -5,    80,     0,    -5,    -5,    -5,    -5,
     193,     0,   193,   193,   193,   193,   193,   193,   193,     0,
     176,   -59,   -59,     0,     0,   -59,   -59,   -59,   -59,     0,
     241,   -38,   -38,   -38,   -38,   100,     0,     0,   -38,   211,
     211,   211,   181,   224,   224,     0,   211,   -54,   -54,   176,
       0,   -54,   -54,   -54,   -54,     0,     0,   240,   -35,   -35,
     -35,   -35,   -35,   -35,   176,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   176,   -36,   -36,   -36,   -36,   -36,   -36,   100,     0,
     100,   100,   100,   148,   149,   150,   151,     0,   224,   176,
     -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,   240,   -57,
     -57,   -57,   -57,   -57,   -57,   303,   304,   -20,   -20,   124,
     125,     0,     0,     0,   -20,     0,     0,   224,   176,   216,
     216,   216,     0,   225,   225,     0,   216,     0,   316,   317,
       0,     0,   278,   -45,   -45,   -45,   -45,   245,     0,     0,
     -45,   -32,   -32,    84,    85,     0,     0,     0,   -32,   287,
       0,     0,     0,   212,   212,     0,   212,   -33,   -33,    84,
      85,   241,   212,   212,   -33,   212,     0,   296,     0,     0,
     241,   212,   212,     0,   212,     0,   352,   353,   225,     0,
       0,   241,     0,     0,   212,   212,     0,   212,   245,   362,
     363,     0,     0,     0,   241,     0,   309,   193,     0,     0,
     212,     0,   176,   176,     0,     0,     0,   225,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -35,   -35,   -35,   -35,     0,     0,     0,
     -35,   211,   211,     0,   211,   -36,   -36,   -36,   -36,   240,
     211,   211,   -36,   211,   -57,   -57,   -57,   -57,   240,   211,
     211,   -57,   211,   -58,   -58,   -58,   -58,     0,     0,   240,
     -58,     0,   211,   211,     0,   211,   -56,   -56,   -56,   -56,
       0,     0,   240,   -56,     0,   100,     0,     0,   211,     0,
     224,   224,     0,   -56,   -56,   -56,   -56,   -56,   -56,   176,
     -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,
     -59,   216,   216,     0,   216,   -54,   -54,   -54,   -54,   245,
     216,   216,   -54,   216,   -21,   -21,   124,   125,   245,   216,
     216,   -21,   216,     0,     0,     0,     0,     0,     0,   245,
       0,     0,   216,   216,   -44,   216,     0,     0,   -44,   -44,
     -44,   -44,   245,     0,     0,     0,     0,   224,   216,     0,
     225,   225,   -80,     0,   -80,   -80,   -80,   -80,   -80,   159,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,   -31,     0,     0,   -80,   -31,   -31,   279,   280,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,   -34,     0,     0,   -76,
     -34,   -34,   -34,   -34,   -76,   -76,     0,   225,   -76,   -76,
     -76,   -76,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -37,     0,     0,   -69,   -37,   -37,   -37,   -37,   -69,
     -69,     0,     0,   -69,   -69,   -69,   -69,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,   -46,     0,     0,   -68,
     -46,   -46,   -46,   -46,   -68,   -68,     0,     0,   -68,   -68,
     -68,   -68,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -55,     0,     0,   -75,   -55,   -55,   -55,   -55,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -38,     0,     0,   -70,
     -38,   -38,   -38,   -38,   -70,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,   -32,     0,     0,   -71,   -32,   -32,   279,   280,   -71,
     -71,     0,     0,   -71,   -71,   -71,   -71,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,   -33,     0,     0,   -72,
     -33,   -33,   279,   280,   -72,   -72,     0,     0,   -72,   -72,
     -72,   -72,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -45,     0,     0,   -73,   -45,   -45,   -45,   -45,   -73,
     -73,     0,     0,   -73,   -73,   -73,   -73,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,   -35,     0,     0,   -74,
     -35,   -35,   -35,   -35,   -74,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,   -36,     0,     0,   -64,   -36,   -36,   -36,   -36,   -64,
     -64,     0,     0,   -64,   -64,   -64,   -64,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,   -57,     0,     0,   -78,
     -57,   -57,   -57,   -57,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -78,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,   -58,     0,     0,   -87,   -58,   -58,   -58,   -58,   -87,
     -87,     0,     0,   -87,   -87,   -87,   -87,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,   -56,     0,     0,   -63,
     -56,   -56,   -56,   -56,   -63,   -63,     0,     0,   -63,   -63,
     -63,   -63,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -59,     0,     0,   -67,   -59,   -59,   -59,   -59,   -67,
     -67,     0,     0,   -67,   -67,   -67,   -67,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,   -54,     0,     0,   -77,
     -54,   -54,   -54,   -54,   -77,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,    -6,     0,     0,
      -6,    -6,    -6,    -6,   -83,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,   -83,   -83,   -83,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,    -3,     0,     0,    -3,    -3,    -3,    -3,   -86,
       0,     0,     0,     0,   -86,   -86,     0,     0,   -86,   -86,
     -86,   -86,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,    -7,     0,     0,
      -7,    -7,    -7,    -7,   -85,     0,     0,     0,     0,   -85,
     -85,     0,     0,   -85,   -85,   -85,   -85,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -67,     0,     0,   -67,   -67,   -67,   -67,   -84,
       0,     0,     0,     0,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -64,     0,     0,
     -64,   -64,   -64,   -64,   -82,     0,     0,     0,     0,   -82,
     -82,     0,     0,   -82,   -82,   -82,   -82,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   165,    32,    33,    34,
      35,    36,   -63,     0,     0,   -63,   -63,   -63,   -63,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   166,
      41,   -48,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -76,     0,     0,   -76,   -76,   -76,   -76,   -69,     0,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,     0,     0,     0,   -69,   -69,     0,     0,   -69,   -69,
     -69,   -69,    20,     0,     1,     2,     3,     4,    21,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
      31,   165,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
      39,     0,     0,    40,   166,    88,   -48,   -68,     0,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,   -68,
       0,     0,     0,     0,   -68,   -68,     0,     0,   -68,   -68,
     -68,   -68,   -66,     0,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,     0,   -66,     0,     0,     0,     0,   -66,
     -66,     0,     0,   -66,   -66,   -66,   -66,   -75,     0,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,     0,     0,   -75,   -75,     0,     0,   -75,   -75,
     -75,   -75,   -70,     0,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,   -70,
     -70,     0,     0,   -70,   -70,   -70,   -70,   -71,     0,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,   -72,
     -72,     0,     0,   -72,   -72,   -72,   -72,   -73,     0,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,   -73,
       0,     0,     0,     0,   -73,   -73,     0,     0,   -73,   -73,
     -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,   -74,     0,     0,     0,     0,   -74,
     -74,     0,     0,   -74,   -74,   -74,   -74,   -78,     0,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,   -78,
       0,     0,     0,     0,   -78,   -78,     0,     0,   -78,   -78,
     -78,   -78,   -65,     0,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,   -65,     0,     0,     0,     0,   -65,
     -65,     0,     0,   -65,   -65,   -65,   -65,   -87,     0,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,     0,     0,     0,   -87,   -87,     0,     0,   -87,   -87,
     -87,   -87,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,   -77,
     -77,     0,     0,   -77,   -77,   -77,   -77,   -83,     0,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,   -83,   -83,     0,     0,   -83,   -83,
     -83,   -83,   -86,     0,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,   -86,
     -86,     0,     0,   -86,   -86,   -86,   -86,   -85,     0,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,     0,   -85,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,   -84,     0,     0,     0,     0,   -84,
     -84,     0,     0,   -84,   -84,   -84,   -84,   -81,     0,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,   -81,   -81,     0,     0,   -81,   -81,
     -81,   -81,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,   -82,
     -82,     0,     0,   -82,   -82,   -82,   -82,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   165,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   166,
     272,   -48,   -67,     0,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,   -67,     0,     0,     0,     0,   -67,
     -67,     0,     0,   -67,   -67,   -67,   -67,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   165,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   166,
     325,   -48,   -64,     0,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,   -64,
     -64,     0,     0,   -64,   -64,   -64,   -64,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   165,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   166,
     330,   -48,    20,     0,     1,     2,     3,     4,    21,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
      31,   165,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
      39,     0,     0,    40,   166,   374,   -48,   -63,     0,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,   -63,
       0,     0,     0,     0,   -63,   -63,     0,     0,   -63,   -63,
     -63,   -63,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -80,   251,     0,     1,
       2,     3,     4,   252,     0,   253,   254,   255,    25,    26,
     256,   257,   258,    30,     0,    31,   165,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   259,
      20,   -48,     1,     2,     3,     4,    21,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,    31,   165,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,    39,     0,
       0,    40,   166,     0,   -48,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54
};

static const yytype_int16 yycheck[] =
{
       0,     0,    27,    14,   166,    18,     6,     6,    20,    34,
      69,   122,    33,   282,     9,    18,    34,    35,    18,    20,
     122,    16,   291,   122,    45,    38,    39,    33,    23,     3,
       4,     5,     6,   302,    54,    38,    39,    40,    41,    45,
      20,    27,    37,    27,    28,    20,   315,    42,    34,    34,
      34,    46,     0,    38,    39,   122,    18,    20,   122,    54,
      34,    38,    39,   122,    34,    35,   122,    43,    45,    64,
      20,   130,    33,    68,    69,    33,    38,    39,    40,    41,
      75,    76,    77,    78,    18,    27,    28,    82,    83,    84,
      85,    45,    34,    33,    94,    90,    91,   259,    18,    33,
      33,   160,   122,    33,    38,    39,    40,    41,    45,    33,
      34,   122,   132,    33,    38,    39,    40,    41,    38,    39,
      40,    41,   122,   122,    34,    35,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    18,   159,
      34,    35,    33,   163,    33,    33,   141,    33,    73,    74,
      38,    39,    40,    41,    79,    34,    35,    45,    38,    39,
      40,    41,    34,    35,   159,   160,    38,    39,   163,    34,
      35,   166,    18,    33,    23,    34,    35,    12,    13,    33,
     175,    45,    17,   178,    19,    20,    21,    22,    23,    24,
      25,    18,    38,    39,    40,    41,    18,   192,    33,    20,
     195,    34,    45,    38,    39,    38,    39,    42,    34,    35,
      45,    38,    39,    40,    41,   210,    38,    39,    40,    41,
      34,    35,    45,    72,    73,    74,    45,    76,    77,    18,
      79,   226,   227,    34,    35,    34,    35,    38,    39,    40,
      41,    90,    91,    34,   239,    45,    18,    34,   243,    38,
      39,    40,    41,   273,   249,   250,    20,    34,    43,   254,
     319,    38,    39,    45,   259,   260,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    45,    34,   273,    36,
      37,   276,   131,    18,   279,   280,   397,   282,   399,    34,
     285,    34,   141,   288,   289,   397,   291,   399,   397,   294,
     399,   412,    38,    39,    40,    41,   326,   302,    34,    45,
     412,   160,   307,   412,    34,   310,   311,   312,   313,    34,
     315,    34,    34,   318,   319,    38,    39,   322,   323,   324,
     397,   326,   399,   397,   329,   399,    34,    35,   397,   398,
     399,   397,    34,   399,    34,   412,    38,    39,   412,   274,
     275,   410,   277,   412,    34,    35,   412,    34,   283,   284,
      45,   286,    34,    35,    12,    13,    34,   292,   293,    17,
     295,    19,    20,    21,    22,    34,    35,   397,    45,   399,
     305,   306,    45,   308,    45,    33,   397,    18,   399,    45,
      38,    39,   412,    34,    42,    34,   321,   397,   397,   399,
     399,   412,   397,   398,   399,   254,    33,    38,    39,    40,
      41,    33,   412,   412,    33,   410,    34,   412,    18,    33,
      38,    39,    40,    41,    33,   274,   275,    18,   277,    38,
      39,    40,    41,   282,   283,   284,    45,   286,    38,    39,
      40,    41,   291,   292,   293,    33,   295,    38,    39,    40,
      41,    37,    45,   302,   124,   125,   305,   306,    33,   308,
      46,    33,    33,    34,    35,    33,   315,    38,    39,    40,
      41,    33,   321,    33,   323,   324,    38,    39,    40,    41,
     329,    33,    68,    45,    46,    33,    72,    73,    74,    33,
      76,    77,    34,    79,    18,    18,    38,    39,    84,    85,
      12,    13,    18,    18,    90,    17,    34,    19,    20,    21,
      22,    23,    24,    25,    38,    39,    40,    41,    18,    45,
      34,    33,    34,    35,    34,    34,    38,    39,    18,    34,
      42,     3,     4,     5,     6,   121,    33,   123,   124,   125,
     126,   127,   128,   129,    33,   131,    33,    33,    38,    39,
      40,    41,    33,    33,    33,   141,    33,    12,    13,    33,
      33,   410,    17,    34,    19,    20,    21,    22,    23,    24,
      25,    34,    34,    34,   160,    45,    45,    34,    33,    34,
      34,    34,    34,    38,    39,    34,    34,    42,    34,   175,
      12,    13,   178,    34,    34,    17,    34,    19,    20,    21,
      22,    23,    24,    25,    34,    34,   192,    33,    34,   195,
      34,    33,    38,    39,    40,    41,    38,    39,    45,    34,
      42,    34,    12,    13,   210,    34,    34,    17,   214,    19,
      20,    21,    22,    23,    24,    25,    34,     6,    45,    45,
     226,   227,    45,    33,    38,    39,    40,    41,    38,    39,
      45,    45,    42,   239,    18,    94,    45,   243,   318,   123,
      12,    13,    18,   249,   250,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    38,    39,    40,    41,   121,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,   274,   275,
      42,   277,    -1,   279,   280,    -1,   282,   283,   284,    -1,
     286,    -1,   288,   289,    -1,   291,   292,   293,    37,   295,
      -1,   297,   298,   299,   300,    -1,   302,    -1,    -1,   305,
     306,    -1,   308,    -1,   310,   311,   312,   313,    -1,   315,
      -1,    18,   318,    -1,    -1,   321,    -1,   323,   324,    68,
      -1,    -1,    -1,    72,    73,    74,    -1,    76,    77,    18,
      79,    38,    39,    40,    41,    12,    13,    18,    -1,    -1,
      17,    90,    19,    20,    21,    22,    23,    24,    25,    38,
      39,    40,    41,    -1,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    34,    35,    42,    -1,    38,    39,    40,
      41,    -1,   121,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,   131,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,    17,   141,    19,    20,    21,    22,     0,    -1,    25,
       3,     4,     5,     6,   410,    -1,    -1,    33,    -1,    -1,
      -1,   160,    38,    39,    12,    13,    42,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    33,   175,    -1,    -1,   178,
      38,    39,    40,    41,    -1,    33,    -1,    45,    46,    -1,
      38,    39,    -1,   192,    42,    -1,   195,    -1,    -1,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,   210,    -1,    -1,    -1,   214,    33,    34,    35,    -1,
      33,    38,    39,    40,    41,    38,    39,   226,   227,    42,
      34,    35,    -1,    -1,    38,    39,    40,    41,    12,    13,
     239,    -1,    -1,    17,   243,    19,    20,    21,    22,    33,
     249,   250,    -1,    -1,    38,    39,    40,    41,    -1,    33,
      -1,    45,    46,    -1,    38,    39,    34,    35,    42,    -1,
      38,    39,    40,    41,    -1,   274,   275,    -1,   277,    -1,
     279,   280,    -1,   282,   283,   284,    -1,   286,    -1,   288,
     289,    -1,   291,   292,   293,    37,   295,    -1,   297,   298,
     299,   300,    -1,   302,    -1,    -1,   305,   306,    -1,   308,
      -1,   310,   311,   312,   313,    -1,   315,    -1,    -1,   318,
      -1,    -1,   321,    -1,   323,   324,    68,    -1,    -1,    -1,
      72,    73,    74,    -1,    76,    77,    -1,    79,    38,    39,
      40,    41,    12,    13,    -1,    45,    -1,    17,    90,    19,
      20,    21,    22,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,    33,    36,    37,    38,    39,    38,    39,
      34,    35,    42,    -1,    38,    39,    40,    41,    -1,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,   131,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,   141,
      19,    20,    21,    22,    -1,    38,    39,    40,    41,    -1,
      -1,   410,    45,    -1,    33,    -1,    -1,    -1,   160,    38,
      39,    12,    13,    42,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    -1,   175,    34,    35,   178,    -1,    38,    39,
      40,    41,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
     192,    42,    -1,   195,    -1,    -1,    12,    13,    -1,    -1,
      -1,    17,    -1,    19,    20,    21,    22,    -1,   210,    34,
      35,    -1,   214,    38,    39,    40,    41,    33,    -1,    -1,
      -1,    -1,    38,    39,   226,   227,    42,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,   239,    36,    37,
       0,   243,    -1,     3,     4,     5,     6,   249,   250,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    34,    35,    -1,    -1,    38,    39,
      40,    41,   274,   275,    -1,   277,    -1,   279,   280,    -1,
     282,   283,   284,    -1,   286,    -1,   288,   289,    -1,   291,
     292,   293,    37,   295,    -1,   297,   298,   299,   300,    -1,
     302,    -1,    -1,   305,   306,    -1,   308,    -1,   310,   311,
     312,   313,    -1,   315,    -1,    -1,   318,    -1,    -1,   321,
      -1,   323,   324,    68,    -1,    -1,    -1,    72,    73,    74,
      -1,    76,    77,    -1,    79,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    90,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,    34,    35,    -1,
      -1,    38,    39,    40,    41,    -1,   121,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,   131,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,   141,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,   410,    27,
      28,    29,    30,    31,    32,   160,    34,    -1,    36,    37,
      38,    39,    40,    41,    38,    39,    40,    41,    -1,    -1,
     175,    45,    -1,   178,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,   192,    -1,    -1,
     195,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    -1,   210,    -1,    -1,    -1,   214,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,   226,   227,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,   239,    34,    35,    -1,   243,    38,
      39,    40,    41,    -1,   249,   250,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    34,    35,    -1,    -1,    38,    39,    40,    41,   274,
     275,    -1,   277,    -1,   279,   280,    -1,   282,   283,   284,
      -1,   286,    -1,   288,   289,    -1,   291,   292,   293,    37,
     295,    -1,   297,   298,   299,   300,    -1,   302,    -1,    -1,
     305,   306,    -1,   308,    -1,   310,   311,   312,   313,    -1,
     315,    -1,    -1,   318,    -1,    -1,   321,    -1,   323,   324,
      68,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    77,
      -1,    79,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    90,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    34,    35,    -1,    -1,    38,    39,
      40,    41,    -1,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,   131,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,   141,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,   410,    27,    28,    29,    30,
      31,    32,   160,    34,    -1,    36,    37,    38,    39,    40,
      41,    38,    39,    40,    41,    -1,    -1,   175,    45,    -1,
     178,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,   192,    -1,    -1,   195,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    -1,   210,    34,    35,    -1,   214,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    34,    35,   226,   227,
      38,    39,    40,    41,    -1,    -1,    -1,    38,    39,    40,
      41,   239,    34,    35,    45,   243,    38,    39,    40,    41,
      -1,   249,   250,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    34,    35,
      -1,    -1,    38,    39,    40,    41,   274,   275,    -1,   277,
      -1,   279,   280,    -1,   282,   283,   284,    -1,   286,    -1,
     288,   289,    -1,   291,   292,   293,    37,   295,    -1,   297,
     298,   299,   300,    -1,   302,    -1,    -1,   305,   306,    -1,
     308,    -1,   310,   311,   312,   313,    -1,   315,    -1,    -1,
     318,    -1,    -1,   321,    -1,   323,   324,    68,    -1,    -1,
      -1,    72,    73,    74,    -1,    76,    77,    -1,    79,    -1,
      -1,    82,    83,    27,    28,    29,    30,    31,    32,    90,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,     0,    37,    -1,     3,     4,     5,     6,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
     131,    34,    35,    -1,    -1,    38,    39,    40,    41,    -1,
     141,    38,    39,    40,    41,    68,    -1,    -1,    45,    72,
      73,    74,   410,    76,    77,    -1,    79,    34,    35,   160,
      -1,    38,    39,    40,    41,    -1,    -1,    90,    27,    28,
      29,    30,    31,    32,   175,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,   192,    36,    37,    38,    39,    40,    41,   121,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,   131,   210,
      27,    28,    29,    30,    31,    32,    -1,    34,   141,    36,
      37,    38,    39,    40,    41,   226,   227,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,   160,   239,    72,
      73,    74,    -1,    76,    77,    -1,    79,    -1,   249,   250,
      -1,    -1,   175,    38,    39,    40,    41,    90,    -1,    -1,
      45,    38,    39,    40,    41,    -1,    -1,    -1,    45,   192,
      -1,    -1,    -1,   274,   275,    -1,   277,    38,    39,    40,
      41,   282,   283,   284,    45,   286,    -1,   210,    -1,    -1,
     291,   292,   293,    -1,   295,    -1,   297,   298,   131,    -1,
      -1,   302,    -1,    -1,   305,   306,    -1,   308,   141,   310,
     311,    -1,    -1,    -1,   315,    -1,   239,   318,    -1,    -1,
     321,    -1,   323,   324,    -1,    -1,    -1,   160,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    38,    39,    40,    41,    -1,    -1,    -1,
      45,   274,   275,    -1,   277,    38,    39,    40,    41,   282,
     283,   284,    45,   286,    38,    39,    40,    41,   291,   292,
     293,    45,   295,    38,    39,    40,    41,    -1,    -1,   302,
      45,    -1,   305,   306,    -1,   308,    38,    39,    40,    41,
      -1,    -1,   315,    45,    -1,   318,    -1,    -1,   321,    -1,
     323,   324,    -1,    27,    28,    29,    30,    31,    32,   410,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    38,    39,    40,    41,    -1,    -1,    -1,
      45,   274,   275,    -1,   277,    38,    39,    40,    41,   282,
     283,   284,    45,   286,    27,    28,    29,    30,   291,   292,
     293,    34,   295,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,   306,    34,   308,    -1,    -1,    38,    39,
      40,    41,   315,    -1,    -1,    -1,    -1,   410,   321,    -1,
     323,   324,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,   410,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,     0,    -1,    -1,
       3,     4,     5,     6,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,     0,    -1,    -1,     3,     4,     5,     6,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,     0,    -1,    -1,
       3,     4,     5,     6,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,     0,    -1,    -1,     3,     4,     5,     6,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,     0,    -1,    -1,
       3,     4,     5,     6,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,     0,    -1,    -1,     3,     4,     5,     6,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
       1,    45,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    -1,    45,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      74,     0,    50,    20,    53,    83,    43,    72,    33,    45,
       1,     7,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    19,    21,    22,    23,    24,    25,    33,    38,    39,
      42,    44,    52,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    72,    73,    74,    75,    76,    77,    79,
      80,    81,    82,    83,    52,    54,    55,    56,    33,    33,
      67,    83,    33,    33,    33,    33,    33,    33,    33,    33,
      61,    83,    38,    39,    40,    41,    63,    45,    44,    75,
      33,    46,    83,    34,    35,    25,    57,    58,    59,    60,
      61,    66,    45,    67,    78,    78,    78,    83,    67,    67,
      83,    78,    34,    62,    62,    63,    63,    67,    71,    67,
      55,    27,    34,    28,    29,    30,    31,    32,    36,    37,
      45,    18,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    35,    45,    58,    75,    59,    60,    60,    61,    61,
      61,    61,    66,    67,    75,    45,    45,    45,    67,     8,
      45,    75,    66,    34,    75,    20,    43,    20,    12,    13,
      17,    19,    20,    21,    22,    33,    62,    63,    64,    65,
      69,    70,    83,    20,    20,    12,    13,    17,    19,    20,
      21,    22,    33,    62,    63,    64,    65,    69,    70,    83,
      12,    13,    17,    19,    20,    21,    22,    23,    24,    25,
      33,    61,    62,    63,    64,    65,    68,    69,    70,    83,
      20,    23,    24,    25,    61,    68,    38,    39,    45,    12,
      13,    17,    19,    20,    21,    22,    23,    24,    25,    33,
      61,    62,    63,    64,    65,    68,    69,    70,    83,    38,
      39,     1,     7,     9,    10,    11,    14,    15,    16,    43,
      52,    66,    72,    74,    76,    77,    79,    80,    81,    82,
      83,    67,    44,    73,    33,    33,    33,    33,    61,    40,
      41,    63,    33,    33,    33,    33,    33,    61,    40,    41,
      63,    33,    33,    33,    33,    33,    61,    38,    39,    40,
      41,    63,    33,    62,    62,    33,    33,    33,    33,    61,
      38,    39,    40,    41,    63,    33,    62,    62,    33,    33,
      67,    33,    33,    33,    33,    44,    73,    83,    45,    46,
      44,    78,    78,    83,    78,    34,    63,    63,    71,    78,
      78,    83,    78,    34,    63,    63,    71,    78,    78,    83,
      78,    34,    62,    62,    63,    63,    71,    78,    78,    83,
      78,    34,    62,    62,    63,    63,    71,    57,    66,    45,
      78,    83,    67,    67,    44,    45,    67,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    45,    34,
      34,    34,    34,    45,    75,    66,    75,    45,    45,    45,
      45,    66,    34,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    61,    61,    61,    62,    62,    62,    63,    63,    64,
      64,    64,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    73,    73,    74,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    77,    78,
      79,    79,    80,    80,    81,    81,    81,    82,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     0,     3,     1,     2,     1,     3,
       1,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     0,     1,
       1,     1,     1,     1,     4,     1,     4,     4,     4,     4,
       3,     1,     0,     3,     2,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     3,
       5,     7,     9,     5,     5,     5,     5,     3,     1
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
  case 76: /* statement: error  */
#line 158 "src/syntax/parser.y"
                { yyerrok; }
#line 2494 "./src/syntax/parser.c"
    break;


#line 2498 "./src/syntax/parser.c"

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

#line 189 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
