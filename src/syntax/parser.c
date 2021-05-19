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
  YYSYMBOL_logical_or_expression = 55,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 56,    /* logical_and_expression  */
  YYSYMBOL_equality_expression = 57,       /* equality_expression  */
  YYSYMBOL_relational_expression = 58,     /* relational_expression  */
  YYSYMBOL_belongs_to_expression = 59,     /* belongs_to_expression  */
  YYSYMBOL_additive_expression = 60,       /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 61, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 62,          /* unary_expression  */
  YYSYMBOL_unary_operator = 63,            /* unary_operator  */
  YYSYMBOL_term = 64,                      /* term  */
  YYSYMBOL_optional_expression = 65,       /* optional_expression  */
  YYSYMBOL_expression = 66,                /* expression  */
  YYSYMBOL_function_arg_constant_expression = 67, /* function_arg_constant_expression  */
  YYSYMBOL_function_call_expression = 68,  /* function_call_expression  */
  YYSYMBOL_set_function_call_expression = 69, /* set_function_call_expression  */
  YYSYMBOL_argument_list = 70,             /* argument_list  */
  YYSYMBOL_compound_statement = 71,        /* compound_statement  */
  YYSYMBOL_statement_list = 72,            /* statement_list  */
  YYSYMBOL_declaration = 73,               /* declaration  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_assignment_statement = 75,      /* assignment_statement  */
  YYSYMBOL_expression_statement = 76,      /* expression_statement  */
  YYSYMBOL_set_membership_expression = 77, /* set_membership_expression  */
  YYSYMBOL_selection_statement = 78,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 79,       /* iteration_statement  */
  YYSYMBOL_io_statement = 80,              /* io_statement  */
  YYSYMBOL_jump_statement = 81,            /* jump_statement  */
  YYSYMBOL_identifier = 82                 /* identifier  */
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
#define YYLAST   5277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  470

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
      74,    75,    78,    79,    82,    85,    91,    92,    97,    98,
     103,   104,   107,   112,   113,   116,   119,   122,   125,   130,
     133,   136,   137,   140,   145,   146,   149,   154,   155,   160,
     161,   162,   165,   166,   167,   168,   171,   174,   175,   178,
     179,   182,   187,   192,   199,   204,   205,   208,   213,   218,
     223,   230,   233,   234,   237,   238,   241,   244,   247,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   263,   268,
     271,   276,   279,   284,   287,   292,   295,   298,   303,   308
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
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "belongs_to_expression", "additive_expression",
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

#define YYPACT_NINF (-291)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     122,     6,     9,    36,    38,    51,   112,   532,  1000,    44,
    2371,  -291,  2451,   -31,    -8,    14,  2561,    52,    -3,    40,
      19,    48,   122,   142,  2686,    47,  1020,    69,    76,   960,
      80,   109,   111,   127,   135,   155,   171,   173,   290,   422,
     164,   169,   176,  1056,   273,   689,  1351,  2696,   196,   -11,
     724,   929,  1382,  1011,   188,   203,   207,  1052,  1132,  1315,
    1610,  1905,  3618,  3663,  3708,  3753,  3798,  3843,  3888,   641,
    1250,   205,   239,   162,  1087,  1087,  1087,   222,  1056,  1056,
     222,  1087,    31,   212,   242,  1382,  1382,  1382,  1382,  1196,
    3933,  3329,  3978,   596,   960,  1930,   -24,    11,  1317,  1974,
    1854,  1543,   254,  4023,   243,   255,   271,   275,   280,   282,
     285,   299,   306,  1347,  1378,  1427,  1491,  1601,  1642,    54,
      73,   300,  1250,  4698,  1250,  1250,  1250,  1417,  1417,  1417,
    1417,  1545,   205,  1056,  4741,  1673,  1722,   317,   319,   329,
    1786,  1896,  2017,  1122,  4068,    34,   555,  2092,  2012,  2149,
    1415,  1710,  5225,  5238,  1945,   331,   338,  4113,  4158,  4203,
    4248,   137,  4741,   827,  4293,   344,  4741,  4338,   148,   754,
    4383,   551,   318,   351,   359,   362,  1118,  2115,  2193,   366,
     375,   377,  1056,  2275,  2377,  1646,  2441,  2457,  2471,  1246,
     369,   386,   387,   389,   394,   618,   512,  1997,  1056,  2134,
    2212,  1545,  2292,  2488,  2563,  1837,   397,   400,   408,   409,
      65,     3,    81,   414,   427,   432,  1056,    -6,   172,   216,
    1677,   227,   433,   233,   286,   158,   384,   140,   424,  1646,
    1646,  4428,   426,   437,   441,   443,   956,  1256,  1373,   159,
     197,   245,  1056,    41,  1551,  1668,  1712,  1818,   267,  1953,
    1979,  1083,  1545,  1545,   735,   452,   457,   960,   458,   459,
     463,   465,  4473,   196,   436,  2535,  2614,  2751,  2796,  2853,
    2898,  2943,  2988,   837,   466,   467,   469,   470,  2173,  4940,
    4955,  1056,  4970,  4985,  1417,  5000,  5015,  5030,  4925,  1417,
    1417,   472,  4518,  4563,  1087,  1087,   222,  1087,   181,   474,
    1646,  1646,  2672,   596,  1087,  1087,   222,  1087,   201,   475,
    1545,  1545,  2636,   596,  1087,  1087,   222,  1087,   224,   476,
    1677,  1677,  1677,  1677,   385,   596,  2702,  2849,  1087,  1087,
     222,  1087,   244,   477,  1712,  1712,  1712,  1712,  2220,   596,
    4760,  4775,  1250,   205,   473,  1087,   222,  1056,  1056,  3033,
    4608,   480,  3078,   960,  1087,  1087,   222,  1087,   327,   485,
    1417,  1417,  5045,   596,  5060,  5075,  4653,   492,   493,   499,
     500,  2894,  2939,  2984,  3029,   287,   513,   539,   548,   549,
    4790,  4805,  4820,  4835,   304,   552,   553,   561,   572,   399,
     439,   448,   483,   563,   587,   313,   576,   577,   580,   588,
    2245,  2258,  2300,  2310,  2396,  2573,   324,    13,   540,  3123,
     589,   598,   603,   605,  3168,  3213,   579,   606,   607,   610,
     627,  5090,  5105,  5120,  5135,   355,  3074,  3119,  3164,  3209,
    3254,  4850,  4865,  4880,  4895,  4910,   743,   783,   787,   815,
     902,  2610,  2692,  2747,  2792,  2808,  4698,   205,  4698,   617,
     622,   625,  3258,  5150,  5165,  5180,  5195,  5210,  3303,   628,
    3348,  3393,  3438,  3483,  4698,   827,  3528,   638,  4698,  3573
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -291,  -291,  -291,   670,  -291,     0,  -291,   662,   343,   566,
     567,   281,  -291,  2145,  2065,   590,   885,  1180,   -66,   350,
    2390,  1475,  1770,  -290,   -12,  -166,     1,   -52,  -112,   -77,
     200,   -71,   -63,   -60,   -33,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    48,    18,    19,    96,    97,
      98,    99,   100,    49,    50,    51,    52,    53,    54,   104,
      56,    57,    58,   120,    59,    60,    61,    62,    63,    64,
     105,    65,    66,    67,    68,   225
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,   -89,   122,   293,   102,     9,    10,    92,    24,
     123,   267,   -49,   375,   -89,    17,    14,     1,     2,     3,
       4,   -43,    17,   384,    20,    15,    -8,    85,    86,    -9,
      69,    21,   320,   321,   -49,   395,    73,    16,   -16,   124,
     122,   -43,   -43,   -43,   -43,   -16,   268,   446,   -13,   406,
     189,    11,   269,   -15,    22,    84,   -10,   264,   -11,    73,
     270,   -17,   124,   271,    13,   113,   155,    69,   -17,   229,
     230,   146,   168,   425,   -12,   -49,   -49,   205,    73,   334,
     335,   -14,   157,   -89,   108,   189,   189,   111,   -62,   -62,
     272,    23,    73,    73,    73,    73,   350,   165,   -89,   -44,
     251,    73,    70,   -89,   -89,   -89,   -89,   142,   143,    71,
     164,   265,    -2,    74,   167,     1,     2,     3,     4,   -44,
     -44,   -44,   -44,   263,   266,     1,     2,     3,     4,   205,
     273,   205,   205,   205,   288,   288,   288,   288,   205,    73,
     189,    69,    75,    26,    76,     1,     2,     3,     4,    27,
     251,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      77,    37,   169,    38,    39,    40,    41,    42,    78,    69,
     189,   -61,   -61,    69,   -49,    43,   -42,    69,   229,   230,
      44,    45,   -89,   -89,    46,   170,    47,   -48,    79,   189,
     -31,   325,   189,   -53,   -53,    93,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,    80,   189,    81,   -42,   205,   -53,
     -31,   -31,   322,   323,   -52,   371,   190,    31,    32,   229,
     230,   -51,    36,   189,    37,   171,    38,    39,    40,    41,
      42,   -52,   -52,    90,   -34,   380,   189,   189,    43,   229,
     230,    92,   226,    44,    45,   -37,   114,    46,   -47,   189,
     -48,   -46,   -50,   251,   -34,   -34,   -34,   -34,   389,   205,
     205,   133,   229,   230,    73,   -37,   -37,   -37,   -37,    69,
     351,   -46,   -46,   -46,   -46,   106,   107,   408,   400,   -51,
     -51,   112,   229,   230,   103,   -39,   -39,   231,   189,   134,
     -39,   288,   -39,   -39,   -39,   -39,   288,   288,    92,   132,
      69,   -50,   -50,   369,   -55,   135,   -39,   189,   189,   136,
     251,   -39,   -39,   378,   137,   -39,   138,   205,   205,   139,
     251,   430,   143,   387,   -55,   -55,   -55,   -55,   -43,   -43,
     -43,   -43,   251,   140,   267,   -43,   267,   398,   435,   143,
     141,   251,   251,   251,   251,   144,   251,   440,   143,   205,
      73,   294,   267,   411,   189,   189,   267,    69,   445,   143,
      73,   421,   158,   419,   159,   229,   230,   288,   288,   268,
     251,   268,   -80,    55,   160,   269,   163,   269,   166,    72,
     264,   459,   264,   270,   295,   270,   271,   268,   271,   457,
     143,   268,   296,   269,   458,   297,   460,   269,   264,   467,
     -53,   270,   264,   -38,   271,   270,   148,   149,   271,   -52,
      55,   -51,   466,   272,   -89,   272,   469,   -45,   -89,   304,
     305,    55,   306,   -38,   -38,   -38,   -38,   307,   109,   110,
     314,   272,   -53,   315,   265,   272,   265,   -45,   -45,   -45,
     -45,   316,   317,   119,   121,   -52,   263,   266,   263,   266,
     -51,   -50,   265,   273,    73,   273,   265,   -56,   -50,   328,
     -44,   -44,   -44,   -44,   263,   266,   -32,   -44,   263,   266,
     329,   273,   189,    55,   330,   273,   331,   -56,   -56,   -56,
     -56,   352,    55,   156,    55,   342,   -32,   -32,   322,   323,
     343,   345,   346,   161,   367,   368,   347,   370,   348,   354,
     355,   -33,   356,   357,   376,   377,   -47,   379,   372,   381,
     390,   401,    55,   291,   385,   386,    55,   388,   409,   422,
      55,   -33,   -33,   322,   323,   415,   426,   427,   396,   397,
     -43,   399,    -4,   428,   429,    -4,    -4,    -4,    -4,   -43,
     -43,   -43,   -43,   -43,   -43,   410,   -43,   431,   -43,   -43,
     -43,   -43,   -43,   -43,   417,   418,   -81,   420,   -81,   -81,
     -81,   -81,   -81,   162,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   432,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -35,   433,   434,   -89,   447,   436,   437,   -81,   -89,
     -89,   -89,   -89,   -81,   -81,   438,   -89,   -81,   -81,   -81,
     -81,   -35,   -35,   -35,   -35,   -36,   439,   344,   232,   233,
     441,   442,    55,   234,   443,   235,   236,   237,   238,   239,
     240,   241,   444,   448,   452,   -36,   -36,   -36,   -36,   242,
     -63,   -63,   449,   184,    44,    45,   -89,   450,    46,   451,
     453,   454,    89,    55,   455,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   119,   -89,   -89,   -89,   -89,   -89,   -89,
     200,   456,   461,   119,   219,   219,   219,   462,   184,   184,
     463,   219,   468,   465,    93,   119,    12,   117,   118,   -42,
     -42,   -42,   -42,   245,    25,   407,   -42,    94,   145,   119,
       0,   147,     0,    55,     0,     0,     0,   412,   413,     0,
      55,   -40,   -40,   416,     0,     0,   -40,     0,   -40,   -40,
     -40,   -40,   200,   119,   200,   200,   200,   283,   283,   283,
     283,   200,   -40,   184,     0,     0,     0,   -40,   -40,     0,
       0,   -40,     0,   245,     0,     0,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   184,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -58,   -31,   -31,    87,    88,     0,     0,   -77,   -31,
       0,     0,   184,   -77,   -77,   302,     0,   -77,   -77,   -77,
     -77,   -58,   -58,   -58,   -58,     0,     0,   -89,   184,     0,
       0,   312,   -89,   -89,   -89,   -89,    55,    55,    55,   -89,
     -89,   -59,     0,     0,     0,   -57,   184,     0,     0,     0,
     324,     0,     0,     0,    55,   291,     0,     0,    55,   184,
     184,   -59,   -59,   -59,   -59,   -57,   -57,   -57,   -57,     0,
       0,     0,   184,   -60,     0,     0,   338,     0,     0,   172,
     173,     0,   200,   200,   174,     0,   175,   176,   177,   178,
     179,   180,   181,   -60,   -60,   -60,   -60,     0,     0,     0,
     182,   -48,     0,     0,     0,    44,    45,     0,     0,    46,
      93,   184,     0,     0,   362,   -42,   -42,   -42,   -42,   283,
     283,     0,   -42,   353,   219,   219,     0,   219,     0,     0,
     373,   374,     0,   245,   219,   219,     0,   219,     0,     0,
     382,   383,     0,   245,   219,   219,     0,   219,     0,     0,
     219,   219,   393,   394,     0,   245,     0,     0,   219,   219,
     -54,   219,     0,     0,   245,   245,   404,   405,   185,   245,
       0,     0,   200,     0,     0,   219,     0,   184,   184,     0,
     -54,   -54,   -54,   -54,   219,   219,     0,   219,     0,     0,
     423,   424,     0,   245,     0,   201,     0,     0,     0,   220,
     220,   220,     0,   185,   185,     0,   220,   -34,   -34,   -34,
     -34,     0,    31,    32,   -34,     0,     0,    36,   246,    37,
     171,    38,    39,    40,    41,    42,     0,     0,     0,   -89,
     -89,   -89,     0,    43,   -89,   -89,   -89,   -89,    44,    45,
      -5,     0,    46,    -5,    -5,    -5,    -5,   201,     0,   201,
     201,   201,   284,   284,   284,   284,   201,     0,   185,     0,
       0,   -77,     0,   -77,   -77,   -77,   -77,   -77,   246,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,     0,   185,   -37,
     -37,   -37,   -37,   -77,     0,   184,   -37,     0,   -77,   -77,
       0,     0,   -77,   -77,   -77,   -77,     0,   185,   172,   173,
     185,     0,     0,   174,     0,   175,   176,   177,   178,   179,
     180,   181,     0,   185,     0,     0,   201,     0,     0,   182,
     -46,   -46,   -46,   -46,    44,    45,     0,   -46,    46,   206,
     207,   185,     0,     0,   208,   220,   209,   210,   211,   212,
     213,   214,   215,     0,   185,   185,   339,   -42,   -42,     0,
     216,   -42,   -42,   -42,   -42,    44,    45,   185,     0,    46,
       0,   246,     0,     0,   232,   233,     0,   201,   201,   234,
       0,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,   -89,   -89,     0,     0,   242,   -89,   -89,   -89,   -89,
      44,    45,     0,     0,    46,     0,   185,     0,     0,   284,
     -55,   -55,   -55,   -55,   284,   284,     0,   -55,     0,   220,
     220,     0,   220,     0,     0,   185,   185,     0,   246,   220,
     220,     0,   220,     0,     0,   201,   201,     0,   246,   220,
     220,     0,   220,     0,     0,   220,   220,   220,   220,     0,
     246,     0,     0,   220,   220,     0,   220,     0,     0,   246,
     246,   246,   246,   186,   246,     0,     0,   201,     0,     0,
     220,     0,   185,   185,   -38,   -38,   -38,   -38,     0,   220,
     220,   -38,   220,     0,     0,   284,   284,     0,   246,     0,
     202,     0,     0,     0,   221,   221,   221,     0,   186,   186,
       0,   221,   191,   192,     0,     0,     0,   193,     0,   194,
     195,   196,   197,   247,     0,    95,     0,     0,     0,   303,
     -42,     0,     0,   198,   -42,   -42,   -42,   -42,    44,    45,
     -43,   -43,    46,     0,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,   202,     0,   202,   202,   202,   285,   285,   285,
     285,   202,     0,   186,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   247,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,   186,   -18,   -18,   125,   126,   -70,     0,
     185,   -18,     0,   -70,   -70,     0,     0,   -70,   -70,   -70,
     -70,     0,   186,   -41,   -41,   186,     0,     0,   -41,     0,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,   186,     0,
       0,   202,     0,     0,   -41,   -45,   -45,   -45,   -45,   -41,
     -41,     0,   -45,   -41,    31,    32,   186,     0,     0,    36,
     221,    37,   171,    38,    39,     0,     0,   -44,   -44,   186,
     186,   -44,   -44,   -44,   -44,    43,   -56,   -56,   -56,   -56,
      44,    45,   186,   -56,    46,     0,   247,     0,     0,   274,
     275,     0,   202,   202,   276,     0,   277,   278,   279,   280,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     281,   -27,   -27,   289,   290,    44,    45,     0,     0,    46,
       0,   186,     0,     0,   285,   -32,   -32,    87,    88,   285,
     285,     0,   -32,     0,   221,   221,     0,   221,     0,     0,
     186,   186,     0,   247,   221,   221,     0,   221,     0,     0,
     202,   202,     0,   247,   221,   221,     0,   221,     0,     0,
     221,   221,   221,   221,     0,   247,     0,     0,   221,   221,
       0,   221,     0,     0,   247,   247,   247,   247,   187,   247,
       0,     0,   202,     0,     0,   221,     0,   186,   186,   -33,
     -33,    87,    88,     0,   221,   221,   -33,   221,     0,     0,
     285,   285,     0,   247,     0,   203,     0,     0,     0,   223,
     223,   223,     0,   187,   187,     0,   223,   191,   192,     0,
       0,   -30,   193,     0,   194,   195,   196,   197,   249,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   198,   -30,
     -30,   252,   253,    44,    45,   -31,   -31,    46,     0,   -31,
     -31,   336,   337,     0,     0,     0,     0,   203,     0,   203,
     203,   203,   286,   286,   286,   286,   203,     0,   187,     0,
       0,    26,     0,     1,     2,     3,     4,    27,   249,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
     169,    38,    39,    40,    41,    42,     0,     0,   187,   -35,
     -35,   -35,   -35,    43,     0,   186,   -35,     0,    44,    45,
       0,     0,    46,   170,    91,   -48,     0,   187,   172,   173,
     187,     0,     0,   174,     0,   175,   176,   177,   178,     0,
       0,     0,     0,   187,     0,     0,   203,     0,     0,   182,
     -36,   -36,   -36,   -36,    44,    45,     0,   -36,    46,   206,
     207,   187,     0,     0,   208,   223,   209,   210,   211,   212,
       0,     0,   -34,   -34,   187,   187,   -34,   -34,   -34,   -34,
     216,   -58,   -58,   -58,   -58,    44,    45,   187,   -58,    46,
       0,   249,     0,     0,   232,   233,     0,   203,   203,   234,
       0,   235,   236,   237,   238,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   242,   -28,   -28,   289,   290,
      44,    45,     0,     0,    46,     0,   187,     0,     0,   286,
     -59,   -59,   -59,   -59,   286,   286,     0,   -59,     0,   223,
     223,     0,   223,     0,     0,   187,   187,     0,   249,   223,
     223,     0,   223,     0,     0,   203,   203,     0,   249,   223,
     223,     0,   223,     0,     0,   223,   223,   223,   223,     0,
     249,     0,     0,   223,   223,     0,   223,     0,     0,   249,
     249,   249,   249,   188,   249,     0,     0,   203,     0,     0,
     223,     0,   187,   187,   -57,   -57,   -57,   -57,     0,   223,
     223,   -57,   223,     0,     0,   286,   286,     0,   249,     0,
     204,     0,     0,     0,   224,   224,   224,     0,   188,   188,
       0,   224,   -37,   -37,     0,   -42,   -37,   -37,   -37,   -37,
       0,     0,     0,   250,   -42,   -42,   -42,   -42,   -42,   -42,
     313,   -42,   131,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,
     -23,   -23,   204,     0,   204,   204,   204,   287,   287,   287,
     287,   204,     0,   188,     0,     0,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   250,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,   188,   -60,   -60,   -60,   -60,   -69,     0,
     187,   -60,     0,   -69,   -69,     0,     0,   -69,   -69,   -69,
     -69,     0,   188,     0,     0,   188,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -29,   -24,     0,   -24,   -24,   188,     0,
       0,   204,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,   -29,   -29,   252,   253,     0,   188,   -46,   -46,     0,
     224,   -46,   -46,   -46,   -46,     0,     0,     0,     0,   188,
     188,   -20,   -20,   -20,   -20,   127,   128,     0,   -20,     0,
     129,   130,   188,   -55,   -55,   -44,   250,   -55,   -55,   -55,
     -55,     0,   204,   204,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -21,
     -21,   -21,   -21,   127,   128,     0,   -21,     0,   129,   130,
       0,   188,     0,     0,   287,   -54,   -54,   -54,   -54,   287,
     287,     0,   -54,     0,   224,   224,     0,   224,     0,     0,
     188,   188,     0,   250,   224,   224,     0,   224,     0,     0,
     204,   204,     0,   250,   224,   224,     0,   224,     0,     0,
     224,   224,   224,   224,     0,   250,     0,     0,   224,   224,
       0,   224,     0,     0,   250,   250,   250,   250,   183,   250,
       0,     0,   204,     0,     0,   224,     0,   188,   188,   -19,
     -19,   125,   126,     0,   224,   224,   -19,   224,     0,     0,
     287,   287,     0,   250,     0,   199,     0,     0,     0,   218,
     218,   218,     0,   183,   183,     0,   218,     0,     0,   -43,
     115,   116,   -31,   -43,   -43,   -43,   -43,     0,   244,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,   310,   311,   -22,   -22,   -22,   -22,
     127,   128,     0,   -22,     0,   129,   130,   199,    82,   199,
     199,   199,   282,   282,   282,   282,   199,     0,   183,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   244,   -89,
     -89,   -89,   -89,   -89,   -89,   101,     0,     0,     0,   217,
     217,   217,     0,   227,   227,     0,   217,   -44,   183,     0,
     -34,   -44,   -44,   -44,   -44,   188,     0,     0,   243,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   183,   -34,   -34,
     -34,   -34,   -34,   -34,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -38,     0,   183,     0,     0,     0,   101,     0,   101,
     101,   101,   150,   151,   152,   153,   154,     0,   227,   -45,
     -45,   183,     0,   -45,   -45,   -45,   -45,     0,   243,     0,
       0,     0,   -56,   -56,   326,   327,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,     0,   183,   227,   -31,
     -37,     0,     0,   -31,   -31,   300,   301,   340,   341,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   298,   -37,   -37,
     -37,   -37,   -37,   -37,   -32,   -32,     0,     0,   -32,   -32,
     336,   337,     0,   308,   -33,   -33,   183,     0,   -33,   -33,
     336,   337,     0,     0,   364,   365,     0,     0,     0,   218,
     218,   318,   218,     0,     0,     0,     0,     0,   244,   218,
     218,    -6,   218,     0,    -6,    -6,    -6,    -6,   244,   218,
     218,     0,   218,     0,     0,   391,   392,   332,     0,     0,
     244,     0,     0,   218,   218,     0,   218,     0,     0,   402,
     403,     0,     0,     0,   244,     0,     0,   199,     0,     0,
     218,   -34,   183,   183,     0,   -34,   -34,   -34,   -34,   218,
     218,     0,   218,     0,     0,     0,   358,     0,   244,     0,
     -35,   -35,     0,    83,   -35,   -35,   -35,   -35,     0,   217,
     217,     0,   217,     0,     0,     0,     0,     0,   243,   217,
     217,    -3,   217,     0,    -3,    -3,    -3,    -3,   243,   217,
     217,     0,   217,     0,   222,   222,   222,     0,   228,   228,
     243,   222,     0,   217,   217,   -37,   217,     0,     0,   -37,
     -37,   -37,   -37,   248,   243,     0,     0,   101,     0,     0,
     217,   -46,   227,   227,     0,   -46,   -46,   -46,   -46,   217,
     217,     0,   217,     0,     0,   -55,   -46,     0,   243,   -55,
     -55,   -55,   -55,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   228,   -46,   -46,   -46,   -46,   -46,   -46,
     183,     0,     0,   248,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   228,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -68,     0,     0,   -68,   -68,   -68,   -68,   -70,     0,
       0,     0,   299,   -70,   -70,     0,     0,   -70,   -70,   -70,
     -70,   -55,     0,     0,     0,     0,     0,     0,   309,     0,
     -55,   -55,   -55,   -55,   -55,   -55,     0,   -55,     0,   -55,
     -55,   -55,   -55,   -55,   -55,     0,   319,   -36,   -36,     0,
     227,   -36,   -36,   -36,   -36,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   333,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -58,   -58,     0,   -69,   -58,   -58,
     -58,   -58,   -69,   -69,   -38,     0,   -69,   -69,   -69,   -69,
       0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   359,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,     0,     0,   222,   222,    -7,   222,     0,    -7,
      -7,    -7,    -7,   248,   222,   222,   -65,   222,     0,   -65,
     -65,   -65,   -65,   248,   222,   222,   -38,   222,     0,     0,
     -38,   -38,   -38,   -38,     0,   248,     0,     0,   222,   222,
       0,   222,     0,     0,     0,     0,   -59,   -59,     0,   248,
     -59,   -59,   -59,   -59,     0,   222,   -32,   228,   228,     0,
     -32,   -32,   300,   301,   222,   222,     0,   222,     0,     0,
       0,     0,   -76,   248,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   -57,   -57,     0,   -76,   -57,   -57,   -57,   -57,   -76,
     -76,     0,     0,   -76,   -76,   -76,   -76,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   -60,   -60,     0,   -71,
     -60,   -60,   -60,   -60,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,   -54,   -54,     0,     0,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,   -72,   228,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,   -33,     0,     0,   -72,   -33,   -33,   300,
     301,   -72,   -72,     0,     0,   -72,   -72,   -72,   -72,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,   -45,     0,
       0,   -73,   -45,   -45,   -45,   -45,   -73,   -73,     0,     0,
     -73,   -73,   -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,   -56,     0,     0,   -74,   -56,   -56,   -56,
     -56,   -74,   -74,     0,     0,   -74,   -74,   -74,   -74,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,   -35,     0,
       0,   -75,   -35,   -35,   -35,   -35,   -75,   -75,     0,     0,
     -75,   -75,   -75,   -75,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,   -36,     0,     0,   -65,   -36,   -36,   -36,
     -36,   -65,   -65,     0,     0,   -65,   -65,   -65,   -65,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,   -58,     0,
       0,   -79,   -58,   -58,   -58,   -58,   -79,   -79,     0,     0,
     -79,   -79,   -79,   -79,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -59,     0,     0,   -88,   -59,   -59,   -59,
     -59,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -57,     0,
       0,   -64,   -57,   -57,   -57,   -57,   -64,   -64,     0,     0,
     -64,   -64,   -64,   -64,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -60,     0,     0,   -68,   -60,   -60,   -60,
     -60,   -68,   -68,     0,     0,   -68,   -68,   -68,   -68,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,   -54,     0,
       0,   -78,   -54,   -54,   -54,   -54,   -78,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   464,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -64,
       0,     0,   -64,   -64,   -64,   -64,   -81,     0,     0,     0,
       0,   -81,   -81,     0,     0,   -81,   -81,   -81,   -81,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,   -84,   -84,     0,     0,
     -84,   -84,   -84,   -84,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,     0,     0,
       0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,   -86,   -86,     0,     0,
     -86,   -86,   -86,   -86,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,     0,     0,
       0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,     0,   -82,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,   -83,   -83,     0,     0,   -83,   -83,   -83,   -83,   -67,
       0,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,     0,   -67,   -67,     0,     0,
     -67,   -67,   -67,   -67,   -76,     0,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,     0,     0,   -76,     0,     0,     0,
       0,   -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -71,
       0,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,   -71,   -71,     0,     0,
     -71,   -71,   -71,   -71,   -72,     0,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,   -72,   -72,     0,     0,   -72,   -72,   -72,   -72,   -73,
       0,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,   -73,   -73,     0,     0,
     -73,   -73,   -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
       0,   -74,   -74,     0,     0,   -74,   -74,   -74,   -74,   -75,
       0,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,   -75,   -75,     0,     0,
     -75,   -75,   -75,   -75,   -79,     0,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,     0,   -79,     0,     0,     0,
       0,   -79,   -79,     0,     0,   -79,   -79,   -79,   -79,   -66,
       0,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,     0,     0,     0,   -66,   -66,     0,     0,
     -66,   -66,   -66,   -66,   -88,     0,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,     0,     0,     0,   -88,     0,     0,     0,
       0,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,   -78,
       0,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,     0,   -78,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -84,     0,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,   -84,     0,     0,     0,
       0,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,   -87,
       0,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,   -87,     0,     0,     0,     0,   -87,   -87,     0,     0,
     -87,   -87,   -87,   -87,   -86,     0,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,   -86,     0,     0,     0,
       0,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -85,
       0,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
       0,   -82,   -82,     0,     0,   -82,   -82,   -82,   -82,   -83,
       0,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,     0,   -83,   -83,     0,     0,
     -83,   -83,   -83,   -83,    26,     0,     1,     2,     3,     4,
      27,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,   169,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,    46,   170,   292,   -48,   -68,
       0,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,   -68,     0,     0,
     -68,   -68,   -68,   -68,    26,     0,     1,     2,     3,     4,
      27,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,   169,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,    46,   170,   349,   -48,   -65,
       0,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,     0,     0,     0,   -65,   -65,     0,     0,
     -65,   -65,   -65,   -65,    26,     0,     1,     2,     3,     4,
      27,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,   169,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,    46,   170,   366,   -48,    26,
       0,     1,     2,     3,     4,    27,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,   169,    38,
      39,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,    44,    45,     0,     0,
      46,   170,   414,   -48,   -64,     0,   -64,   -64,   -64,   -64,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,     0,     0,     0,   -64,     0,     0,     0,
       0,   -64,   -64,     0,     0,   -64,   -64,   -64,   -64,   254,
       0,     1,     2,     3,     4,   255,     0,   256,   257,   258,
      31,    32,   259,   260,   261,    36,     0,    37,   169,    38,
      39,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,    44,    45,     0,     0,
      46,   262,    26,   -48,     1,     2,     3,     4,    27,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,   169,    38,    39,    40,    41,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,   -32,    44,
      45,     0,     0,    46,   170,     0,   -48,   -32,   -32,   -32,
     -32,   -32,   -32,   -33,   -32,     0,   -32,   -32,   -32,   -32,
     310,   311,   -33,   -33,   -33,   -33,   -33,   -33,   -45,   -33,
       0,   -33,   -33,   -33,   -33,   310,   311,   -45,   -45,   -45,
     -45,   -45,   -45,   -56,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -56,   -56,   -56,   -56,   -56,   -56,   -35,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -35,   -35,   -35,
     -35,   -35,   -35,   -36,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -36,   -36,   -36,   -36,   -36,   -36,   -58,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -58,   -58,   -58,
     -58,   -58,   -58,   -59,   -58,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -59,   -59,   -59,   -59,   -59,   -59,   -57,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -57,   -57,   -57,
     -57,   -57,   -57,   -60,   -57,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -60,   -60,   -60,   -60,   -60,   -60,   -54,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   -54,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -42,   -42,   -42,   -42,   -42,   -42,   363,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,
     360,   361,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -55,   -55,   -55,
     -55,   -55,   -55,     0,   -55,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,
     360,   361,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,   -33,   360,   361,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -57,   -57,   -57,
     -57,   -57,   -57,     0,   -57,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   -54,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,   -25,   -25,   289,   290,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   289,   290
};

static const yytype_int16 yycheck[] =
{
       0,     0,    33,    27,   170,    71,     6,     6,    60,    21,
      34,   123,    18,   303,    45,    15,     9,     3,     4,     5,
       6,    18,    22,   313,    17,    33,    20,    38,    39,    20,
      23,    34,    38,    39,    45,   325,    29,    45,    27,    28,
      27,    38,    39,    40,    41,    34,   123,    34,    34,   339,
      43,     0,   123,    34,    35,    48,    20,   123,    20,    52,
     123,    27,    28,   123,    20,    34,   132,    60,    34,    38,
      39,   123,    20,   363,    34,    34,    35,    70,    71,    38,
      39,    34,   134,    18,    77,    78,    79,    80,    34,    35,
     123,    43,    85,    86,    87,    88,   262,   163,    33,    18,
      93,    94,    33,    38,    39,    40,    41,    34,    35,    33,
     162,   123,     0,    33,   166,     3,     4,     5,     6,    38,
      39,    40,    41,   123,   123,     3,     4,     5,     6,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    33,     1,    33,     3,     4,     5,     6,     7,
     143,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      33,    19,    20,    21,    22,    23,    24,    25,    33,   162,
     163,    34,    35,   166,    34,    33,    18,   170,    38,    39,
      38,    39,    34,    35,    42,    43,    44,    45,    33,   182,
      18,    33,   185,    34,    35,    33,    38,    39,    40,    41,
      38,    39,    40,    41,    33,   198,    33,    45,   201,    45,
      38,    39,    40,    41,    45,    34,    20,    12,    13,    38,
      39,    45,    17,   216,    19,    20,    21,    22,    23,    24,
      25,    34,    35,    45,    18,    34,   229,   230,    33,    38,
      39,   293,    20,    38,    39,    18,    34,    42,    45,   242,
      45,    18,    45,   246,    38,    39,    40,    41,    34,   252,
     253,    18,    38,    39,   257,    38,    39,    40,    41,   262,
     263,    38,    39,    40,    41,    75,    76,   343,    34,    34,
      35,    81,    38,    39,    45,    12,    13,    45,   281,    34,
      17,   284,    19,    20,    21,    22,   289,   290,   350,    45,
     293,    34,    35,   296,    18,    34,    33,   300,   301,    34,
     303,    38,    39,   306,    34,    42,    34,   310,   311,    34,
     313,    34,    35,   316,    38,    39,    40,    41,    38,    39,
      40,    41,   325,    34,   446,    45,   448,   330,    34,    35,
      34,   334,   335,   336,   337,    45,   339,    34,    35,   342,
     343,    33,   464,   346,   347,   348,   468,   350,    34,    35,
     353,    34,    45,   356,    45,    38,    39,   360,   361,   446,
     363,   448,    34,    23,    45,   446,    45,   448,    34,    29,
     446,   447,   448,   446,    33,   448,   446,   464,   448,    34,
      35,   468,    33,   464,   446,    33,   448,   468,   464,   465,
      34,   464,   468,    18,   464,   468,   125,   126,   468,    34,
      60,    34,   464,   446,    45,   448,   468,    18,    34,    33,
      33,    71,    33,    38,    39,    40,    41,    33,    78,    79,
      33,   464,    18,    33,   446,   468,   448,    38,    39,    40,
      41,    33,    33,    93,    94,    18,   446,   446,   448,   448,
      18,    18,   464,   446,   447,   448,   468,    18,    34,    33,
      38,    39,    40,    41,   464,   464,    18,    45,   468,   468,
      33,   464,   465,   123,    33,   468,    33,    38,    39,    40,
      41,    45,   132,   133,   134,    33,    38,    39,    40,    41,
      33,    33,    33,   143,   294,   295,    33,   297,    33,    33,
      33,    18,    33,    33,   304,   305,    34,   307,    34,    34,
      34,    34,   162,   163,   314,   315,   166,   317,    45,    34,
     170,    38,    39,    40,    41,    45,    34,    34,   328,   329,
      18,   331,     0,    34,    34,     3,     4,     5,     6,    27,
      28,    29,    30,    31,    32,   345,    34,    34,    36,    37,
      38,    39,    40,    41,   354,   355,     1,   357,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    34,    19,    20,    21,    22,    23,    24,
      25,    18,    34,    34,    33,    45,    34,    34,    33,    38,
      39,    40,    41,    38,    39,    34,    45,    42,    43,    44,
      45,    38,    39,    40,    41,    18,    34,   257,    12,    13,
      34,    34,   262,    17,    34,    19,    20,    21,    22,    23,
      24,    25,    34,    34,    45,    38,    39,    40,    41,    33,
      34,    35,    34,    43,    38,    39,    18,    34,    42,    34,
      34,    34,    52,   293,    34,    27,    28,    29,    30,    31,
      32,    33,    34,   303,    36,    37,    38,    39,    40,    41,
      70,    34,    45,   313,    74,    75,    76,    45,    78,    79,
      45,    81,    34,    45,    33,   325,     6,    87,    88,    38,
      39,    40,    41,    93,    22,   342,    45,    46,   122,   339,
      -1,   124,    -1,   343,    -1,    -1,    -1,   347,   348,    -1,
     350,    12,    13,   353,    -1,    -1,    17,    -1,    19,    20,
      21,    22,   122,   363,   124,   125,   126,   127,   128,   129,
     130,   131,    33,   133,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,   143,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   163,    19,    20,    21,    22,    23,    24,
      25,    18,    38,    39,    40,    41,    -1,    -1,    33,    45,
      -1,    -1,   182,    38,    39,   185,    -1,    42,    43,    44,
      45,    38,    39,    40,    41,    -1,    -1,    33,   198,    -1,
      -1,   201,    38,    39,    40,    41,   446,   447,   448,    45,
      46,    18,    -1,    -1,    -1,    18,   216,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   464,   465,    -1,    -1,   468,   229,
     230,    38,    39,    40,    41,    38,    39,    40,    41,    -1,
      -1,    -1,   242,    18,    -1,    -1,   246,    -1,    -1,    12,
      13,    -1,   252,   253,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    38,    39,    40,    41,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      33,   281,    -1,    -1,   284,    38,    39,    40,    41,   289,
     290,    -1,    45,    46,   294,   295,    -1,   297,    -1,    -1,
     300,   301,    -1,   303,   304,   305,    -1,   307,    -1,    -1,
     310,   311,    -1,   313,   314,   315,    -1,   317,    -1,    -1,
     320,   321,   322,   323,    -1,   325,    -1,    -1,   328,   329,
      18,   331,    -1,    -1,   334,   335,   336,   337,    43,   339,
      -1,    -1,   342,    -1,    -1,   345,    -1,   347,   348,    -1,
      38,    39,    40,    41,   354,   355,    -1,   357,    -1,    -1,
     360,   361,    -1,   363,    -1,    70,    -1,    -1,    -1,    74,
      75,    76,    -1,    78,    79,    -1,    81,    38,    39,    40,
      41,    -1,    12,    13,    45,    -1,    -1,    17,    93,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    33,
      34,    35,    -1,    33,    38,    39,    40,    41,    38,    39,
       0,    -1,    42,     3,     4,     5,     6,   122,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,   133,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,   143,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,   163,    38,
      39,    40,    41,    33,    -1,   465,    45,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,    -1,   182,    12,    13,
     185,    -1,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,   198,    -1,    -1,   201,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    45,    42,    12,
      13,   216,    -1,    -1,    17,   220,    19,    20,    21,    22,
      23,    24,    25,    -1,   229,   230,    33,    34,    35,    -1,
      33,    38,    39,    40,    41,    38,    39,   242,    -1,    42,
      -1,   246,    -1,    -1,    12,    13,    -1,   252,   253,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    33,    34,    -1,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    -1,    42,    -1,   281,    -1,    -1,   284,
      38,    39,    40,    41,   289,   290,    -1,    45,    -1,   294,
     295,    -1,   297,    -1,    -1,   300,   301,    -1,   303,   304,
     305,    -1,   307,    -1,    -1,   310,   311,    -1,   313,   314,
     315,    -1,   317,    -1,    -1,   320,   321,   322,   323,    -1,
     325,    -1,    -1,   328,   329,    -1,   331,    -1,    -1,   334,
     335,   336,   337,    43,   339,    -1,    -1,   342,    -1,    -1,
     345,    -1,   347,   348,    38,    39,    40,    41,    -1,   354,
     355,    45,   357,    -1,    -1,   360,   361,    -1,   363,    -1,
      70,    -1,    -1,    -1,    74,    75,    76,    -1,    78,    79,
      -1,    81,    12,    13,    -1,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    93,    -1,    25,    -1,    -1,    -1,    33,
      34,    -1,    -1,    33,    38,    39,    40,    41,    38,    39,
      34,    35,    42,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,   133,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   143,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,   163,    27,    28,    29,    30,    33,    -1,
     465,    34,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,    -1,   182,    12,    13,   185,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,   198,    -1,
      -1,   201,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    45,    42,    12,    13,   216,    -1,    -1,    17,
     220,    19,    20,    21,    22,    -1,    -1,    34,    35,   229,
     230,    38,    39,    40,    41,    33,    38,    39,    40,    41,
      38,    39,   242,    45,    42,    -1,   246,    -1,    -1,    12,
      13,    -1,   252,   253,    17,    -1,    19,    20,    21,    22,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
      33,    36,    37,    38,    39,    38,    39,    -1,    -1,    42,
      -1,   281,    -1,    -1,   284,    38,    39,    40,    41,   289,
     290,    -1,    45,    -1,   294,   295,    -1,   297,    -1,    -1,
     300,   301,    -1,   303,   304,   305,    -1,   307,    -1,    -1,
     310,   311,    -1,   313,   314,   315,    -1,   317,    -1,    -1,
     320,   321,   322,   323,    -1,   325,    -1,    -1,   328,   329,
      -1,   331,    -1,    -1,   334,   335,   336,   337,    43,   339,
      -1,    -1,   342,    -1,    -1,   345,    -1,   347,   348,    38,
      39,    40,    41,    -1,   354,   355,    45,   357,    -1,    -1,
     360,   361,    -1,   363,    -1,    70,    -1,    -1,    -1,    74,
      75,    76,    -1,    78,    79,    -1,    81,    12,    13,    -1,
      -1,    18,    17,    -1,    19,    20,    21,    22,    93,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    33,    36,
      37,    38,    39,    38,    39,    34,    35,    42,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,   122,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,   133,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,   143,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,   163,    38,
      39,    40,    41,    33,    -1,   465,    45,    -1,    38,    39,
      -1,    -1,    42,    43,    44,    45,    -1,   182,    12,    13,
     185,    -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,   198,    -1,    -1,   201,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    45,    42,    12,
      13,   216,    -1,    -1,    17,   220,    19,    20,    21,    22,
      -1,    -1,    34,    35,   229,   230,    38,    39,    40,    41,
      33,    38,    39,    40,    41,    38,    39,   242,    45,    42,
      -1,   246,    -1,    -1,    12,    13,    -1,   252,   253,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    34,    33,    36,    37,    38,    39,
      38,    39,    -1,    -1,    42,    -1,   281,    -1,    -1,   284,
      38,    39,    40,    41,   289,   290,    -1,    45,    -1,   294,
     295,    -1,   297,    -1,    -1,   300,   301,    -1,   303,   304,
     305,    -1,   307,    -1,    -1,   310,   311,    -1,   313,   314,
     315,    -1,   317,    -1,    -1,   320,   321,   322,   323,    -1,
     325,    -1,    -1,   328,   329,    -1,   331,    -1,    -1,   334,
     335,   336,   337,    43,   339,    -1,    -1,   342,    -1,    -1,
     345,    -1,   347,   348,    38,    39,    40,    41,    -1,   354,
     355,    45,   357,    -1,    -1,   360,   361,    -1,   363,    -1,
      70,    -1,    -1,    -1,    74,    75,    76,    -1,    78,    79,
      -1,    81,    34,    35,    -1,    18,    38,    39,    40,    41,
      -1,    -1,    -1,    93,    27,    28,    29,    30,    31,    32,
      33,    34,    18,    36,    37,    38,    39,    40,    41,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,   133,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   143,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,   163,    38,    39,    40,    41,    33,    -1,
     465,    45,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,    -1,   182,    -1,    -1,   185,    -1,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,   198,    -1,
      -1,   201,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    -1,   216,    34,    35,    -1,
     220,    38,    39,    40,    41,    -1,    -1,    -1,    -1,   229,
     230,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,   242,    34,    35,    18,   246,    38,    39,    40,
      41,    -1,   252,   253,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      -1,   281,    -1,    -1,   284,    38,    39,    40,    41,   289,
     290,    -1,    45,    -1,   294,   295,    -1,   297,    -1,    -1,
     300,   301,    -1,   303,   304,   305,    -1,   307,    -1,    -1,
     310,   311,    -1,   313,   314,   315,    -1,   317,    -1,    -1,
     320,   321,   322,   323,    -1,   325,    -1,    -1,   328,   329,
      -1,   331,    -1,    -1,   334,   335,   336,   337,    43,   339,
      -1,    -1,   342,    -1,    -1,   345,    -1,   347,   348,    27,
      28,    29,    30,    -1,   354,   355,    34,   357,    -1,    -1,
     360,   361,    -1,   363,    -1,    70,    -1,    -1,    -1,    74,
      75,    76,    -1,    78,    79,    -1,    81,    -1,    -1,    34,
      85,    86,    18,    38,    39,    40,    41,    -1,    93,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,   122,    43,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,   133,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,   143,    36,
      37,    38,    39,    40,    41,    70,    -1,    -1,    -1,    74,
      75,    76,    -1,    78,    79,    -1,    81,    34,   163,    -1,
      18,    38,    39,    40,    41,   465,    -1,    -1,    93,    27,
      28,    29,    30,    31,    32,    -1,    34,   182,    36,    37,
      38,    39,    40,    41,    34,    35,    -1,    -1,    38,    39,
      40,    41,    -1,   198,    -1,    -1,    -1,   122,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,   133,    34,
      35,   216,    -1,    38,    39,    40,    41,    -1,   143,    -1,
      -1,    -1,    34,    35,   229,   230,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   163,    34,
      18,    -1,    -1,    38,    39,    40,    41,   252,   253,    27,
      28,    29,    30,    31,    32,    -1,    34,   182,    36,    37,
      38,    39,    40,    41,    34,    35,    -1,    -1,    38,    39,
      40,    41,    -1,   198,    34,    35,   281,    -1,    38,    39,
      40,    41,    -1,    -1,   289,   290,    -1,    -1,    -1,   294,
     295,   216,   297,    -1,    -1,    -1,    -1,    -1,   303,   304,
     305,     0,   307,    -1,     3,     4,     5,     6,   313,   314,
     315,    -1,   317,    -1,    -1,   320,   321,   242,    -1,    -1,
     325,    -1,    -1,   328,   329,    -1,   331,    -1,    -1,   334,
     335,    -1,    -1,    -1,   339,    -1,    -1,   342,    -1,    -1,
     345,    34,   347,   348,    -1,    38,    39,    40,    41,   354,
     355,    -1,   357,    -1,    -1,    -1,   281,    -1,   363,    -1,
      34,    35,    -1,    43,    38,    39,    40,    41,    -1,   294,
     295,    -1,   297,    -1,    -1,    -1,    -1,    -1,   303,   304,
     305,     0,   307,    -1,     3,     4,     5,     6,   313,   314,
     315,    -1,   317,    -1,    74,    75,    76,    -1,    78,    79,
     325,    81,    -1,   328,   329,    34,   331,    -1,    -1,    38,
      39,    40,    41,    93,   339,    -1,    -1,   342,    -1,    -1,
     345,    34,   347,   348,    -1,    38,    39,    40,    41,   354,
     355,    -1,   357,    -1,    -1,    34,    18,    -1,   363,    38,
      39,    40,    41,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,   133,    36,    37,    38,    39,    40,    41,
     465,    -1,    -1,   143,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   163,    19,    20,    21,    22,    23,    24,
      25,     0,    -1,    -1,     3,     4,     5,     6,    33,    -1,
      -1,    -1,   182,    38,    39,    -1,    -1,    42,    43,    44,
      45,    18,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,   216,    34,    35,    -1,
     465,    38,    39,    40,    41,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   242,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    35,    -1,    33,    38,    39,
      40,    41,    38,    39,    18,    -1,    42,    43,    44,    45,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,   281,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,   294,   295,     0,   297,    -1,     3,
       4,     5,     6,   303,   304,   305,     0,   307,    -1,     3,
       4,     5,     6,   313,   314,   315,    34,   317,    -1,    -1,
      38,    39,    40,    41,    -1,   325,    -1,    -1,   328,   329,
      -1,   331,    -1,    -1,    -1,    -1,    34,    35,    -1,   339,
      38,    39,    40,    41,    -1,   345,    34,   347,   348,    -1,
      38,    39,    40,    41,   354,   355,    -1,   357,    -1,    -1,
      -1,    -1,     1,   363,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    35,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,    34,    35,    -1,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,     1,   465,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,     0,
      -1,    -1,     3,     4,     5,     6,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,     1,    45,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    18,    38,
      39,    -1,    -1,    42,    43,    -1,    45,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
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
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
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
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      73,     0,    50,    20,    82,    33,    45,    52,    53,    54,
      82,    34,    35,    43,    71,    54,     1,     7,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    19,    21,    22,
      23,    24,    25,    33,    38,    39,    42,    44,    52,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    73,    74,    75,    76,    78,    79,    80,    81,    82,
      33,    33,    66,    82,    33,    33,    33,    33,    33,    33,
      33,    33,    60,    67,    82,    38,    39,    40,    41,    62,
      45,    44,    74,    33,    46,    25,    55,    56,    57,    58,
      59,    60,    65,    45,    66,    77,    77,    77,    82,    66,
      66,    82,    77,    34,    34,    61,    61,    62,    62,    66,
      70,    66,    27,    34,    28,    29,    30,    31,    32,    36,
      37,    18,    45,    18,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    35,    45,    56,    74,    57,    58,    58,
      60,    60,    60,    60,    60,    65,    66,    74,    45,    45,
      45,    66,     8,    45,    74,    65,    34,    74,    20,    20,
      43,    20,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    61,    62,    63,    64,    68,    69,    82,
      20,    12,    13,    17,    19,    20,    21,    22,    33,    61,
      62,    63,    64,    68,    69,    82,    12,    13,    17,    19,
      20,    21,    22,    23,    24,    25,    33,    60,    61,    62,
      63,    64,    67,    68,    69,    82,    20,    60,    67,    38,
      39,    45,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    60,    61,    62,    63,    64,    67,    68,
      69,    82,    38,    39,     1,     7,     9,    10,    11,    14,
      15,    16,    43,    52,    65,    71,    73,    75,    76,    78,
      79,    80,    81,    82,    12,    13,    17,    19,    20,    21,
      22,    33,    61,    62,    63,    64,    68,    69,    82,    38,
      39,    66,    44,    72,    33,    33,    33,    33,    60,    67,
      40,    41,    62,    33,    33,    33,    33,    33,    60,    67,
      40,    41,    62,    33,    33,    33,    33,    33,    60,    67,
      38,    39,    40,    41,    62,    33,    61,    61,    33,    33,
      33,    33,    60,    67,    38,    39,    40,    41,    62,    33,
      61,    61,    33,    33,    66,    33,    33,    33,    33,    44,
      72,    82,    45,    46,    33,    33,    33,    33,    60,    67,
      40,    41,    62,    33,    61,    61,    44,    77,    77,    82,
      77,    34,    34,    62,    62,    70,    77,    77,    82,    77,
      34,    34,    62,    62,    70,    77,    77,    82,    77,    34,
      34,    61,    61,    62,    62,    70,    77,    77,    82,    77,
      34,    34,    61,    61,    62,    62,    70,    55,    65,    45,
      77,    82,    66,    66,    44,    45,    66,    77,    77,    82,
      77,    34,    34,    62,    62,    70,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    45,    34,    34,
      34,    34,    45,    34,    34,    34,    34,    34,    74,    65,
      74,    45,    45,    45,     8,    45,    74,    65,    34,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    60,    61,    61,    61,    62,    62,    63,
      63,    63,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    76,
      77,    78,    78,    79,    79,    80,    80,    80,    81,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     1,     1,
       1,     1,     1,     0,     4,     2,     1,     3,     1,     3,
       1,     3,     3,     1,     1,     3,     3,     3,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     0,     1,
       1,     1,     1,     1,     4,     1,     3,     4,     4,     4,
       4,     3,     1,     0,     3,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     2,
       3,     5,     7,     9,     5,     5,     5,     5,     3,     1
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
#line 2656 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 56 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2664 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 59 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2670 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 62 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2676 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 63 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2682 "./src/syntax/parser.c"
    break;

  case 7: /* function_definition: type_specifier identifier '(' parameters ')' compound_statement  */
#line 66 "src/syntax/parser.y"
                                                                                     {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-5].token), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), NULL, NULL);
                      insert_row_into_symbol_table((yyvsp[-5].token), (yyvsp[-4].ast_node)->value, "function");
                    }
#line 2691 "./src/syntax/parser.c"
    break;

  case 8: /* type_specifier: INT  */
#line 72 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2697 "./src/syntax/parser.c"
    break;

  case 9: /* type_specifier: FLOAT  */
#line 73 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 2703 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: ELEM  */
#line 74 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 2709 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: SET  */
#line 75 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2715 "./src/syntax/parser.c"
    break;

  case 12: /* parameters: parameter_list  */
#line 78 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2721 "./src/syntax/parser.c"
    break;

  case 13: /* parameters: %empty  */
#line 79 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 2727 "./src/syntax/parser.c"
    break;

  case 14: /* parameter_list: type_specifier identifier ',' parameter_list  */
#line 82 "src/syntax/parser.y"
                                                             {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                }
#line 2735 "./src/syntax/parser.c"
    break;

  case 15: /* parameter_list: type_specifier identifier  */
#line 85 "src/syntax/parser.y"
                                          {
                  (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[0].ast_node)->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table((yyvsp[-1].token), (yyvsp[0].ast_node)->value, "variable");
                }
#line 2744 "./src/syntax/parser.c"
    break;

  case 16: /* logical_or_expression: logical_and_expression  */
#line 91 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2750 "./src/syntax/parser.c"
    break;

  case 17: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 92 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2758 "./src/syntax/parser.c"
    break;

  case 18: /* logical_and_expression: equality_expression  */
#line 97 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2764 "./src/syntax/parser.c"
    break;

  case 19: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 98 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 2772 "./src/syntax/parser.c"
    break;

  case 20: /* equality_expression: relational_expression  */
#line 103 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2778 "./src/syntax/parser.c"
    break;

  case 21: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 104 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2786 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 107 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2794 "./src/syntax/parser.c"
    break;

  case 23: /* relational_expression: belongs_to_expression  */
#line 112 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2800 "./src/syntax/parser.c"
    break;

  case 24: /* relational_expression: EMPTY_CONST  */
#line 113 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 2808 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: relational_expression '<' additive_expression  */
#line 116 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2816 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: relational_expression '>' additive_expression  */
#line 119 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2824 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 122 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2832 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 125 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2840 "./src/syntax/parser.c"
    break;

  case 29: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 130 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2848 "./src/syntax/parser.c"
    break;

  case 30: /* belongs_to_expression: additive_expression  */
#line 133 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2854 "./src/syntax/parser.c"
    break;

  case 31: /* additive_expression: multiplicative_expression  */
#line 136 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2860 "./src/syntax/parser.c"
    break;

  case 32: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 137 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2868 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 140 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2876 "./src/syntax/parser.c"
    break;

  case 34: /* multiplicative_expression: unary_expression  */
#line 145 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2882 "./src/syntax/parser.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 146 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2890 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 149 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2898 "./src/syntax/parser.c"
    break;

  case 37: /* unary_expression: term  */
#line 154 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2904 "./src/syntax/parser.c"
    break;

  case 38: /* unary_expression: unary_operator unary_expression  */
#line 155 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 2912 "./src/syntax/parser.c"
    break;

  case 39: /* unary_operator: '+'  */
#line 160 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 2918 "./src/syntax/parser.c"
    break;

  case 40: /* unary_operator: '-'  */
#line 161 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 2924 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '!'  */
#line 162 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 2930 "./src/syntax/parser.c"
    break;

  case 42: /* term: identifier  */
#line 165 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2936 "./src/syntax/parser.c"
    break;

  case 43: /* term: INTEGER_CONST  */
#line 166 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2942 "./src/syntax/parser.c"
    break;

  case 44: /* term: FLOAT_CONST  */
#line 167 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2948 "./src/syntax/parser.c"
    break;

  case 45: /* term: '(' additive_expression ')'  */
#line 168 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 2956 "./src/syntax/parser.c"
    break;

  case 46: /* term: function_call_expression  */
#line 171 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2962 "./src/syntax/parser.c"
    break;

  case 47: /* optional_expression: expression  */
#line 174 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2968 "./src/syntax/parser.c"
    break;

  case 48: /* optional_expression: %empty  */
#line 175 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 2974 "./src/syntax/parser.c"
    break;

  case 49: /* expression: additive_expression  */
#line 178 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2980 "./src/syntax/parser.c"
    break;

  case 50: /* expression: function_arg_constant_expression  */
#line 179 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2986 "./src/syntax/parser.c"
    break;

  case 51: /* function_arg_constant_expression: EMPTY_CONST  */
#line 182 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 2996 "./src/syntax/parser.c"
    break;

  case 52: /* function_arg_constant_expression: STRING  */
#line 187 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3006 "./src/syntax/parser.c"
    break;

  case 53: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 192 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3016 "./src/syntax/parser.c"
    break;

  case 54: /* function_call_expression: identifier '(' argument_list ')'  */
#line 199 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3026 "./src/syntax/parser.c"
    break;

  case 55: /* function_call_expression: set_function_call_expression  */
#line 204 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3032 "./src/syntax/parser.c"
    break;

  case 56: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 205 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3038 "./src/syntax/parser.c"
    break;

  case 57: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 208 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3048 "./src/syntax/parser.c"
    break;

  case 58: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 213 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3058 "./src/syntax/parser.c"
    break;

  case 59: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 218 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3068 "./src/syntax/parser.c"
    break;

  case 60: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 223 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3078 "./src/syntax/parser.c"
    break;

  case 61: /* argument_list: argument_list ',' expression  */
#line 230 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3086 "./src/syntax/parser.c"
    break;

  case 62: /* argument_list: expression  */
#line 233 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3092 "./src/syntax/parser.c"
    break;

  case 63: /* argument_list: %empty  */
#line 234 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3098 "./src/syntax/parser.c"
    break;

  case 64: /* compound_statement: '{' statement_list '}'  */
#line 237 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3104 "./src/syntax/parser.c"
    break;

  case 65: /* compound_statement: '{' '}'  */
#line 238 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3110 "./src/syntax/parser.c"
    break;

  case 66: /* statement_list: statement_list statement  */
#line 241 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3118 "./src/syntax/parser.c"
    break;

  case 67: /* statement_list: statement  */
#line 244 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3124 "./src/syntax/parser.c"
    break;

  case 68: /* declaration: type_specifier identifier ';'  */
#line 247 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
            }
#line 3132 "./src/syntax/parser.c"
    break;

  case 69: /* statement: declaration  */
#line 252 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3138 "./src/syntax/parser.c"
    break;

  case 70: /* statement: compound_statement  */
#line 253 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3144 "./src/syntax/parser.c"
    break;

  case 71: /* statement: expression_statement  */
#line 254 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3150 "./src/syntax/parser.c"
    break;

  case 72: /* statement: selection_statement  */
#line 255 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3156 "./src/syntax/parser.c"
    break;

  case 73: /* statement: iteration_statement  */
#line 256 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3162 "./src/syntax/parser.c"
    break;

  case 74: /* statement: io_statement  */
#line 257 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3168 "./src/syntax/parser.c"
    break;

  case 75: /* statement: jump_statement  */
#line 258 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3174 "./src/syntax/parser.c"
    break;

  case 76: /* statement: assignment_statement  */
#line 259 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3180 "./src/syntax/parser.c"
    break;

  case 77: /* statement: error  */
#line 260 "src/syntax/parser.y"
                { yyerrok; }
#line 3186 "./src/syntax/parser.c"
    break;

  case 78: /* assignment_statement: identifier '=' expression ';'  */
#line 263 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3194 "./src/syntax/parser.c"
    break;

  case 79: /* expression_statement: optional_expression ';'  */
#line 268 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3200 "./src/syntax/parser.c"
    break;

  case 80: /* set_membership_expression: expression IN expression  */
#line 271 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3208 "./src/syntax/parser.c"
    break;

  case 81: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 276 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3216 "./src/syntax/parser.c"
    break;

  case 82: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 279 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3224 "./src/syntax/parser.c"
    break;

  case 83: /* iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ')' statement  */
#line 284 "src/syntax/parser.y"
                                                                                                               {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3232 "./src/syntax/parser.c"
    break;

  case 84: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 287 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3240 "./src/syntax/parser.c"
    break;

  case 85: /* io_statement: WRITE '(' expression ')' ';'  */
#line 292 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3248 "./src/syntax/parser.c"
    break;

  case 86: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 295 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3256 "./src/syntax/parser.c"
    break;

  case 87: /* io_statement: READ '(' identifier ')' ';'  */
#line 298 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3264 "./src/syntax/parser.c"
    break;

  case 88: /* jump_statement: RETURN expression ';'  */
#line 303 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3272 "./src/syntax/parser.c"
    break;

  case 89: /* identifier: IDENTIFIER  */
#line 308 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 3280 "./src/syntax/parser.c"
    break;


#line 3284 "./src/syntax/parser.c"

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

#line 313 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
