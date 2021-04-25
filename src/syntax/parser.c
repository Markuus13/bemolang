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

  struct ast_node *ast = NULL;

#line 79 "./src/syntax/parser.c"

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
  YYSYMBOL_43_ = 43,                       /* '='  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* ';'  */
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
  YYSYMBOL_assignment_expression = 72,     /* assignment_expression  */
  YYSYMBOL_compound_statement = 73,        /* compound_statement  */
  YYSYMBOL_compound_or_inline_statement = 74, /* compound_or_inline_statement  */
  YYSYMBOL_statement_list = 75,            /* statement_list  */
  YYSYMBOL_declaration = 76,               /* declaration  */
  YYSYMBOL_statement = 77,                 /* statement  */
  YYSYMBOL_expression_statement = 78,      /* expression_statement  */
  YYSYMBOL_membership_expression = 79,     /* membership_expression  */
  YYSYMBOL_selection_statement = 80,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 81,       /* iteration_statement  */
  YYSYMBOL_io_statement = 82,              /* io_statement  */
  YYSYMBOL_jump_statement = 83,            /* jump_statement  */
  YYSYMBOL_identifier = 84                 /* identifier  */
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
#define YYLAST   6238

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  482

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
       0,    29,    29,    32,    33,    36,    37,    40,    43,    44,
      45,    46,    49,    52,    53,    56,    57,    60,    63,    64,
      67,    68,    71,    72,    73,    76,    77,    78,    79,    80,
      83,    84,    85,    88,    89,    90,    93,    94,    97,    98,
      99,   102,   103,   104,   105,   106,   109,   110,   113,   114,
     117,   118,   119,   122,   123,   126,   127,   128,   129,   132,
     133,   134,   137,   138,   141,   142,   145,   146,   149,   150,
     153,   156,   157,   158,   159,   160,   161,   164,   167,   170,
     171,   174,   175,   178,   179,   180,   183,   186
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
  "'-'", "'*'", "'/'", "'!'", "'='", "'{'", "'}'", "';'", "$accept",
  "translation_unit", "external_declaration_list", "external_declaration",
  "function_definition", "type_specifier", "declarator", "parameters",
  "parameter_list", "parameter_declaration", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "unary_operator", "term", "optional_expression", "expression",
  "function_arg_constant_expression", "function_call_expression",
  "set_function_call_expression", "argument_list", "assignment_expression",
  "compound_statement", "compound_or_inline_statement", "statement_list",
  "declaration", "statement", "expression_statement",
  "membership_expression", "selection_statement", "iteration_statement",
  "io_statement", "jump_statement", "identifier", YY_NULLPTR
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
      42,    47,    33,    61,   123,   125,    59
};
#endif

#define YYPACT_NINF (-222)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     512,    13,    27,    29,    42,    10,   881,  1789,  1958,    72,
    2072,  -222,  2174,    28,    50,    57,  3549,  2182,    16,  2258,
     100,   116,   752,   124,   128,   133,   151,   153,   161,   163,
     172,  5010,  5030,    60,    62,   107,    18,   232,  1088,  1116,
    2307,   190,   -10,   -23,    -3,   400,   141,  5050,  5070,  1140,
    5090,   169,   193,   229,  5110,  5130,   231,  3593,  3637,  3681,
    3725,  3769,  3813,  3857,  3901,  2457,   228,   248,   251,   -26,
    1340,   178,   244,   816,   816,   816,   288,   855,   855,   288,
     816,     7,    83,   275,  1140,  1140,  1140,  1140,  1140,  1140,
    1140,  1140,  1140,  1140,  1140,  1140,  5150,  3945,  2353,  3989,
     440,  1382,    63,   279,   512,    75,   281,  4033,   348,   314,
     338,   341,   343,   351,   353,   357,   359,  5170,   -14,    84,
    1911,  1955,  1884,  2854,  5370,  5383,  5190,  5210,  5230,  5250,
     203,   212,   352,   369,  4077,   178,   855,  4121,  5270,  5290,
     387,   393,   395,  5310,  5330,  5350,  1046,   716,  1010,  1304,
     399,   413,  4165,  4209,  4253,  4297,   224,  4121,   471,  4341,
     415,  4121,  4385,  4950,   423,   425,   437,   439,   222,   567,
     712,    18,   748,   759,    18,   822,  1006,  1042,   431,  4970,
    4990,   238,   452,   454,   456,   464,  5501,  5801,  5816,    18,
     147,   797,  2633,  6136,  5831,  5846,  1340,  5861,  5876,  5891,
    5516,   470,   475,   495,   505,   494,   542,  1460,   523,   526,
     527,    18,    26,    37,   113,   525,   783,  1868,  1999,  1410,
    2024,   528,  2163,  2439,   531,   872,   524,  5437,   530,   533,
     550,    91,   551,   552,  5454,    18,    18,   440,  4429,   554,
     555,   557,   560,  5403,  5531,  5546,   320,   330,   334,    18,
      93,   110,   179,  2054,  6071,  5561,  5576,  1434,  5591,   349,
    5606,  5621,   367,  5420,  1340,   562,   563,   752,   565,   566,
     569,   570,  4473,   190,   578,  1598,  2327,  2413,  2916,  3021,
    3065,  4517,  4561,  4605,   593,   816,   816,   288,   816,   154,
      18,    18,  1053,   816,   816,   288,   816,   188,  1340,  1340,
    1340,  1340,  1340,  1340,  1340,  1340,  1340,  1340,  1340,  5906,
     440,   816,   816,   288,   816,   202,  1410,  1410,  1410,  1410,
    1410,  1410,  1410,  1410,  1410,  1410,  1410,  1410,   582,  2672,
    1166,   440,  1634,  1717,  1149,  1300,   371,   816,   816,   288,
     816,   230,  1434,  1434,  1434,  1434,  1434,  1434,  1434,  1434,
    1434,  1434,  1434,  1434,  5471,  5636,  5486,   440,  1749,   191,
    1340,   178,   583,   816,   288,   855,   855,  3109,  4649,   586,
    3153,  4693,  4737,   601,   603,   615,   619,  1331,  1347,  1443,
     621,   635,   640,   641,  5921,  1086,  2811,  6201,  6149,  6162,
    6175,  6188,  5936,  5951,  5966,  5981,   377,   642,   645,   647,
     660,  2780,    73,   205,  1114,  1408,  1665,  2178,  2722,  4937,
    2828,  2945,  2971,  4847,   409,   598,   661,  1594,   662,   665,
     667,   668,  5651,   120,   472,  2289,  2373,  6084,  6097,  6110,
    6123,  5666,  5681,  5696,  5711,   420,   485,   149,   622,  3197,
     676,   679,   681,   682,  3241,  3285,  4781,  1625,  1641,  1685,
    1707,  5996,  6011,  6026,  6041,  6056,  4862,  4877,  4892,  4907,
    4922,  5726,  5741,  5756,  5771,  5786,  4077,   178,  4077,   671,
     672,   696,  4825,   697,  3329,  3373,  3417,  3461,   471,   710,
    4077,  3505
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -222,  -222,  -222,   739,  -222,     0,  -222,  -222,   643,  -222,
    1640,  2431,  2314,  2228,  1934,  1810,   340,   634,   928,   -59,
      85,  2657,  1222,  1516,  -221,  2540,   -11,   -42,  -176,     1,
      -5,  -119,   254,  -106,   -86,   -80,   -76,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    41,    14,    67,    68,    69,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   131,    56,   147,   148,    57,    58,
     149,    60,   109,    61,    62,    63,    64,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,    15,    17,   -18,    85,     9,    10,   -16,   104,
      11,    59,   106,   -19,    85,   276,   336,    84,    66,     1,
       2,     3,     4,   -18,   -20,   -20,    86,    87,   277,    82,
     164,   165,   -19,    -8,    83,   166,   -62,   167,   168,   169,
     170,   117,   180,   -20,   -62,   235,   236,    -9,   278,   -10,
     -14,   171,    99,   316,   279,   -18,    37,    38,   280,   102,
      39,   -87,   -11,   200,   -18,   317,   225,   225,   225,   112,
     234,   234,   115,   225,   -87,   274,   150,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   396,
      18,   -19,    13,   263,    16,   152,   368,   -17,   -17,   160,
     -19,   317,   264,    19,    66,   372,   -52,    72,   -51,   134,
     414,   -21,   -21,    86,    87,   159,   237,   -41,   264,   162,
     342,   -41,   -41,   -41,   -41,   -62,   282,   -62,   -62,   234,
     -21,   -20,   283,    70,   273,   275,   435,   -18,   343,   263,
     -20,   -20,   318,   319,   -18,   -18,   282,   -19,   343,    71,
     282,   234,   283,   -50,   -19,   -19,   283,    73,   108,   108,
     108,    74,   113,   114,    82,   108,    75,    82,   -25,   -25,
     -25,   -25,   -25,   -25,   -18,   298,   264,   -25,   -25,    92,
      93,   -18,    82,   466,    76,   130,    77,   -25,   377,   200,
      24,    25,   235,   236,    78,    29,    79,    30,   163,    31,
      32,    33,    34,    35,    82,    80,   -20,   -20,   344,   345,
     178,    36,   330,   -20,   -20,    97,    37,    38,   -19,   298,
      39,   151,   384,   -21,   -47,   -19,   235,   236,    82,    82,
     263,   156,   -21,   -21,   318,   319,   401,   -60,   -60,   -46,
     235,   236,    82,   284,   -38,   -38,   145,   146,   181,   -38,
     356,   -38,   -38,   -38,   -38,   -87,   -87,   200,   -59,   -59,
     -87,   -87,   -87,   -87,   422,   -38,   369,    59,   235,   236,
     -38,   -38,   -87,   -87,   -38,   -49,    59,   -48,   225,   225,
     375,   225,   103,    82,    82,   -13,   225,   225,   382,   225,
     107,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   438,   263,   225,   225,   399,   225,   226,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   238,   130,   -12,   263,   225,   234,   135,   110,   111,
     225,   225,   420,   225,   116,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   276,   137,   276,
     263,   263,   362,   200,   -52,   -52,   225,   441,   234,   234,
     277,   276,   277,    99,   -51,   -51,   136,    99,   -50,   -50,
     108,   108,   138,   108,   277,   139,   173,   140,   108,   108,
     278,   108,   278,   -49,   -49,   141,   279,   142,   279,    96,
     280,   143,   280,   144,   278,   130,   108,   108,   -63,   108,
     279,   -48,   -48,   -15,   280,   417,   146,   274,   473,   274,
     195,   455,   146,   218,   218,   218,   130,   195,   195,   479,
     218,   274,   108,   108,   472,   108,   474,   -22,   -22,   -22,
     -22,    88,    89,   153,   128,   129,    90,    91,   481,   154,
     256,   155,   130,   460,   146,   158,   -22,   -78,   108,   161,
     442,   443,   239,   240,   465,   146,   285,   241,   286,   242,
     243,   244,   245,   246,   247,   248,   273,   275,   273,   275,
     287,   234,   288,   249,   -61,   -61,   195,   -87,    37,    38,
     273,   275,    39,   182,   183,   293,   256,   294,   184,   295,
     185,   227,   187,   188,   228,   229,   230,   296,   195,   -21,
     -21,   344,   345,   311,   189,   -47,   -21,   -21,   312,    37,
      38,   173,   -87,    39,   292,     1,     2,     3,     4,   -63,
     -63,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   313,   173,
     -87,   -87,   -87,   -87,   -87,   -87,   309,   -87,   314,   373,
     374,   -52,   376,   -22,   -51,   -50,   -49,   380,   381,   -48,
     383,   173,   -22,   -22,   -22,   -22,   320,   321,   -87,   329,
     -42,   322,   323,   284,   -52,   397,   398,   -51,   400,   -42,
     -42,   -42,   -42,   -42,   -42,   173,   173,   256,   -42,   -42,
     -42,   -42,   -42,   -42,   -50,   -49,   -48,   337,   338,   173,
     339,   418,   419,   340,   421,   360,   361,   355,   363,   364,
     -87,   -42,   365,   366,   195,   -42,   -42,   -42,   -42,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -63,   440,   -87,   -87,
     -87,   -87,   -87,   -87,   370,   218,   218,   -46,   218,   439,
     378,   379,   445,   218,   218,   447,   218,   448,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   394,   395,   449,
     256,   218,   218,   450,   218,   451,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   412,   413,   467,   452,
     174,   256,   218,   195,   453,   454,   456,   218,   218,   457,
     218,   458,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   433,   434,   459,   -63,   461,   256,   256,   462,
     195,   463,   464,   218,   196,   195,   195,   219,   219,   219,
     468,   196,   196,   469,   219,   470,   471,   475,   476,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   257,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   477,   478,   480,    12,   -43,   133,     0,   -66,
     -43,   -43,   -43,   -43,   -66,   -66,     0,     0,   -66,     0,
       0,   -66,   -66,     0,    24,    25,     0,     0,     0,    29,
     196,    30,   163,    31,    32,    33,    34,    35,     0,     0,
     257,     0,   -30,     0,     0,    36,   -30,   -30,   290,   291,
      37,    38,   196,   -33,    39,     0,     0,   -33,   -33,   -33,
     -33,   -25,     0,     0,     0,   174,     0,     0,   174,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   195,   -25,
     -25,   324,   325,   174,   -20,   -20,   299,   300,   201,   202,
     196,   -20,     0,   203,     0,   204,   205,   206,   207,   208,
     209,   210,     0,     0,     0,   174,     0,     0,     0,   211,
       0,     0,     0,   219,    37,    38,   -36,     0,    39,     0,
     -36,   -36,   -36,   -36,     0,     0,     0,   182,   183,   174,
     174,   257,   184,     0,   185,   227,   187,   188,   228,   229,
     230,    -2,     0,   174,     1,     2,     3,     4,   189,     0,
     -41,   257,     0,    37,    38,     0,     0,    39,   196,   -41,
     -41,   -41,   -41,   -41,   -41,   331,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   332,     0,     0,     0,   219,
     219,     0,   219,     0,   174,   174,     0,   219,   219,     0,
     219,     0,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,     0,   257,   219,   219,     0,   219,     0,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,     0,     0,   175,   257,   219,   196,     0,     0,
       0,   219,   219,     0,   219,     0,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,     0,     0,
       0,   257,   257,     0,   196,     0,     0,   219,   197,   196,
     196,   220,   220,   220,     0,   197,   197,     0,   220,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   157,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   258,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
     -45,     0,     0,   -79,   -45,   -45,   -45,   -45,   -79,   -79,
       0,     0,   -79,     0,     0,   -79,   -79,     0,   239,   240,
       0,     0,     0,   241,   197,   242,   243,   244,   245,   246,
     247,   248,     0,     0,   258,     0,   -54,     0,     0,   249,
     -54,   -54,   -54,   -54,    37,    38,   197,   -37,    39,     0,
       0,   -37,   -37,   -37,   -37,     0,     0,     0,     0,   175,
     -39,   -39,   175,     0,     0,   -39,     0,   -39,   -39,   -39,
     -39,     0,   196,   -21,   -21,   299,   300,   175,     0,     0,
     -21,   -39,     0,     0,   197,     0,   -39,   -39,   -40,   -40,
     -39,     0,   -23,   -40,     0,   -40,   -40,   -40,   -40,   175,
       0,   -23,   -23,   -23,   -23,   320,   321,   220,     0,   -40,
     322,   323,    24,    25,   -40,   -40,     0,    29,   -40,    30,
     179,    31,    32,   175,   175,   258,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,   175,    37,    38,
       0,     0,    39,   -31,   -41,   258,     0,   -31,   -31,   290,
     291,     0,   197,   -41,   -41,   -41,   -41,   -41,   -41,   331,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,   220,   220,     0,   220,     0,   175,   175,
       0,   220,   220,     0,   220,     0,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,     0,   258,   220,
     220,     0,   220,     0,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,     0,     0,   176,   258,
     220,   197,     0,     0,     0,   220,   220,     0,   220,     0,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,     0,     0,     0,   258,   258,     0,   197,     0,
       0,   220,   198,   197,   197,   222,   222,   222,     0,   198,
     198,     0,   222,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   260,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,   -32,     0,     0,   -67,   -32,   -32,
     290,   291,   -67,   -67,     0,     0,   -67,     0,     0,   -67,
     -67,     0,   182,   183,     0,     0,     0,   184,   198,   185,
     186,   187,   188,     0,     0,   -44,     0,     0,   260,   -44,
     -44,   -44,   -44,   189,     0,     0,     0,     0,    37,    38,
     198,   -34,    39,     0,     0,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   176,    24,    25,   176,     0,     0,    29,
       0,    30,   163,    31,    32,     0,   197,     0,     0,     0,
       0,   176,     0,     0,     0,    36,     0,     0,   198,     0,
      37,    38,   201,   202,    39,     0,   -24,   203,     0,   204,
     328,   206,   207,   176,     0,   -24,   -24,   -24,   -24,   320,
     321,   222,     0,   211,   322,   323,   239,   240,    37,    38,
       0,   241,    39,   242,   354,   244,   245,   176,   176,   260,
       0,     0,     0,     0,     0,     0,     0,   249,     0,     0,
       0,   176,    37,    38,     0,     0,    39,   -35,   -43,   260,
       0,   -35,   -35,   -35,   -35,     0,   198,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,   222,   222,     0,
     222,     0,   176,   176,     0,   222,   222,     0,   222,     0,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,     0,   260,   222,   222,     0,   222,     0,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
       0,     0,   177,   260,   222,   198,     0,     0,     0,   222,
     222,     0,   222,     0,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,     0,     0,     0,   260,
     260,     0,   198,     0,     0,   222,   199,   198,   198,   223,
     223,   223,     0,   199,   199,     0,   223,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   261,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -53,     0,
       0,   -71,   -53,   -53,   -53,   -53,   -71,   -71,     0,     0,
     -71,     0,     0,   -71,   -71,     0,   201,   202,     0,     0,
       0,   203,   199,   204,   205,   206,   207,     0,     0,   -56,
       0,     0,   261,   -56,   -56,   -56,   -56,   211,     0,     0,
       0,     0,    37,    38,   199,   -57,    39,     0,     0,   -57,
     -57,   -57,   -57,   -28,     0,     0,     0,   177,     0,     0,
     177,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     198,   -28,   -28,   324,   325,   177,     0,     0,     0,     0,
     105,     0,   199,   212,   212,   212,     0,   231,   231,   -55,
     212,     0,     0,   -55,   -55,   -55,   -55,   177,     0,   182,
     183,     0,     0,     0,   184,   223,   185,   227,   187,   188,
     250,   -58,     0,     0,     0,   -58,   -58,   -58,   -58,     0,
     189,   177,   177,   261,     0,    37,    38,     0,     0,    39,
       0,   239,   240,     0,     0,   177,   241,     0,   242,   243,
     244,   245,     0,   261,     0,     0,   231,     0,     0,     0,
     199,     0,   249,     0,     0,     0,   250,    37,    38,    -4,
       0,    39,    -4,    -4,    -4,    -4,     0,     0,   231,     0,
       0,   223,   223,     0,   223,     0,   177,   177,     0,   223,
     223,     0,   223,     0,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,     0,   261,   223,   223,     0,
     223,     0,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,     0,     0,   172,   261,   223,   199,
       0,     0,     0,   223,   223,     0,   223,     0,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
       0,     0,     0,   261,   261,     0,   199,   250,     0,   223,
     194,   199,   199,   217,   217,   217,   -30,   194,   194,     0,
     217,     0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   126,   127,   -30,   -30,   -30,   -30,   326,   327,
     255,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
     -28,   -28,    92,    93,     0,   212,   212,     0,   212,     0,
     -28,     0,     0,   212,   212,     0,   212,     0,   -23,   -23,
     -23,   -23,    88,    89,     0,     0,   194,    90,    91,     0,
     250,   212,   212,     0,   212,     0,   255,   -23,    -5,     0,
       0,    -5,    -5,    -5,    -5,     0,     0,     0,   194,     0,
      81,   250,   212,   231,     0,     0,     0,   212,   212,     0,
     212,   172,   -24,   -24,   -24,   -24,    88,    89,     0,     0,
       0,    90,    91,     0,   199,     0,     0,   250,   250,   172,
     437,   -24,     0,   212,   193,   231,   231,   216,   216,   216,
       0,   193,   193,     0,   216,     0,     0,   -33,     0,     0,
       0,   172,   122,   123,   124,   125,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,   254,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -36,     0,     0,   334,   335,   255,     0,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   172,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
     193,     0,    -6,     0,   194,    -6,    -6,    -6,    -6,     0,
     254,   -22,   -22,   -22,   -22,   346,   347,     0,   -22,   -22,
     348,   349,   193,     0,     0,   217,   217,     0,   217,     0,
       0,     0,     0,   217,   217,   289,   217,     0,   194,   194,
     194,   194,   194,   194,   194,   392,   393,     0,   231,     0,
     255,   217,   217,   297,   217,     0,   217,   217,   217,   217,
     217,   217,   217,   217,   410,   411,     0,     0,     0,     0,
       0,   255,   217,   194,     0,   315,     0,   217,   217,     0,
     217,     0,   255,   255,   255,   255,   255,   255,   255,   255,
     431,   432,     0,     0,     0,     0,     0,   255,   255,     0,
     194,   254,     0,   217,    -3,   194,   194,    -3,    -3,    -3,
      -3,   -45,    -7,   341,     0,    -7,    -7,    -7,    -7,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -29,     0,   193,   -45,
     -45,   -45,   -45,   -45,   -45,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,   -29,   324,   325,     0,   216,
     216,     0,   216,     0,     0,     0,     0,   216,   216,     0,
     216,     0,   193,   193,   193,   388,   389,   390,   391,     0,
       0,     0,     0,     0,   254,   216,   216,     0,   216,     0,
     216,   216,   216,   216,   406,   407,   408,   409,   -70,     0,
       0,   -70,   -70,   -70,   -70,   254,   216,   193,     0,     0,
       0,   216,   216,     0,   216,     0,   254,   254,   254,   254,
     427,   428,   429,   430,     0,     0,     0,     0,   194,     0,
       0,   254,   254,     0,   193,     0,     0,   216,   192,   193,
     193,   215,   215,   215,     0,   192,   192,   -65,   215,     0,
     -65,   -65,   -65,   -65,   120,   121,   -23,   -23,   -23,   -23,
     346,   347,     0,   -23,   -23,   348,   349,     0,   253,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -64,     0,     0,   -64,   -64,   -64,   -64,
     -72,     0,     0,     0,   192,   -72,   -72,     0,     0,   -72,
       0,     0,   -72,   -72,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,   192,   214,   214,   214,
       0,   191,   191,     0,   214,     0,     0,     0,     0,   119,
     -24,   -24,   -24,   -24,   346,   347,     0,   -24,   -24,   348,
     349,     0,   193,     0,   252,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
     191,   -73,   -73,     0,     0,   -73,     0,   -54,   -73,   -73,
     252,     0,     0,     0,     0,   253,   -54,   -54,   -54,   -54,
     -54,   -54,   191,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     100,     0,   192,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     101,   190,     0,   -41,   213,   213,   213,     0,   190,   190,
       0,   213,     0,   215,   215,   118,   215,     0,     0,     0,
       0,   215,   215,     0,   215,     0,   192,   386,   387,     0,
       0,   251,     0,     0,     0,     0,     0,     0,   253,   215,
     215,     0,   215,     0,   215,   215,   404,   405,     0,     0,
       0,   252,     0,     0,     0,     0,     0,     0,     0,   253,
     215,   192,     0,     0,     0,   215,   215,   190,   215,     0,
     253,   253,   425,   426,     0,     0,     0,   251,   191,     0,
       0,     0,     0,     0,     0,   253,   253,     0,   192,   190,
       0,   215,     0,   192,   192,     0,     0,     0,     0,   214,
     214,     0,   214,     0,     0,     0,     0,   214,   214,     0,
     214,     0,   385,   224,   224,   224,     0,   233,   233,     0,
     224,     0,     0,     0,   252,   214,   214,     0,   214,     0,
     214,   403,     0,     0,     0,     0,     0,     0,     0,     0,
     262,   132,     0,     0,     0,   252,   214,   191,     0,     0,
       0,   214,   214,     0,   214,     0,   252,   424,     0,     0,
     -22,   -22,   -22,   -22,   301,   302,     0,   -22,   251,   303,
     304,   252,   252,     0,   191,     0,   233,   214,     0,   191,
     191,     0,     0,     0,     0,     0,   262,     0,     0,     0,
     -37,     0,     0,     0,     0,   359,     0,     0,   233,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   192,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,   213,   213,     0,   213,
       0,     0,     0,     0,   213,   213,     0,   213,     0,     0,
     221,   221,   221,     0,   232,   232,     0,   221,     0,     0,
     -26,   251,   213,   213,     0,   213,     0,   402,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   259,   -26,   -26,
     324,   325,   251,   213,   190,     0,     0,     0,   213,   213,
       0,   213,     0,   423,     0,     0,     0,   262,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   251,   251,
       0,   190,   191,   232,   213,     0,   190,   190,   -44,     0,
       0,     0,     0,   259,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,   232,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,   224,   224,     0,   224,     0,
       0,     0,     0,   224,   224,     0,   224,     0,   -23,   -23,
     -23,   -23,   301,   302,     0,   -23,   -31,   303,   304,     0,
     262,   224,   224,     0,   224,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,   -31,   -31,   -31,   326,   327,
       0,   262,   415,   416,     0,     0,     0,   224,   224,     0,
     224,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,
     -29,   -29,    92,    93,   259,     0,     0,   262,   436,     0,
     -29,     0,     0,   224,     0,   233,   233,     0,     0,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   221,   221,     0,   221,     0,     0,     0,   -74,
     221,   221,     0,   221,   -74,   -74,     0,     0,   -74,     0,
       0,   -74,   -74,   -32,     0,     0,     0,   259,   221,   221,
       0,   221,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,   -32,   -32,   -32,   -32,   326,   327,     0,   259,   -34,
       0,     0,     0,     0,   221,   221,     0,   221,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   259,     0,     0,     0,   233,     0,
     221,     0,   232,   232,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,   -75,
     -75,     0,     0,   -75,     0,     0,   -75,   -75,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,   -76,   -76,     0,     0,   -76,     0,     0,
     -76,   -76,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   232,     0,     0,     0,     0,
       0,     0,   -65,     0,     0,     0,     0,   -65,   -65,     0,
       0,   -65,     0,     0,   -65,   -65,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,   -77,     0,     0,     0,
       0,   -77,   -77,     0,     0,   -77,     0,     0,   -77,   -77,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,     0,     0,     0,   -86,   -86,     0,     0,   -86,
       0,     0,   -86,   -86,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,   -64,
     -64,     0,     0,   -64,     0,     0,   -64,   -64,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,   -70,   -70,     0,     0,   -70,     0,     0,
     -70,   -70,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,     0,     0,   -82,   -82,     0,
       0,   -82,     0,     0,   -82,   -82,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,     0,     0,
       0,   -85,   -85,     0,     0,   -85,     0,     0,   -85,   -85,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
     -84,     0,     0,     0,     0,   -84,   -84,     0,     0,   -84,
       0,     0,   -84,   -84,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,     0,     0,   -83,   -83,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,     0,   -81,   -81,     0,     0,   -81,     0,     0,
     -81,   -81,     1,     2,     3,     4,    20,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,   163,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,    37,    38,     0,
       0,    39,     0,     0,    40,   -47,     1,     2,     3,     4,
      20,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,   163,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,    37,    38,     0,     0,    39,     0,     0,    98,   -47,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,     0,     0,   -71,   -71,     0,     0,   -71,
       0,     0,   -71,   -71,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,   -69,     0,     0,     0,     0,   -69,
     -69,     0,     0,   -69,     0,     0,   -69,   -69,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,   -72,     0,
       0,     0,     0,   -72,   -72,     0,     0,   -72,     0,     0,
     -72,   -72,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,   -73,     0,     0,     0,     0,   -73,   -73,     0,
       0,   -73,     0,     0,   -73,   -73,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
       0,   -74,   -74,     0,     0,   -74,     0,     0,   -74,   -74,
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,     0,     0,   -75,   -75,     0,     0,   -75,
       0,     0,   -75,   -75,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -76,     0,     0,   -76,     0,     0,   -76,   -76,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,   -77,     0,
       0,     0,     0,   -77,   -77,     0,     0,   -77,     0,     0,
     -77,   -77,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,   -68,     0,     0,     0,     0,   -68,   -68,     0,
       0,   -68,     0,     0,   -68,   -68,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,   -86,     0,     0,     0,
       0,   -86,   -86,     0,     0,   -86,     0,     0,   -86,   -86,
       1,     2,     3,     4,   265,     0,   266,   267,   268,    24,
      25,   269,   270,   271,    29,     0,    30,   163,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,    37,    38,     0,     0,    39,
       0,   272,     0,   -47,     1,     2,     3,     4,    20,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,   163,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,    37,
      38,     0,     0,    39,     0,   281,     0,   -47,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,   -82,   -82,     0,     0,   -82,     0,     0,
     -82,   -82,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,   -85,   -85,     0,
       0,   -85,     0,     0,   -85,   -85,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,   -84,     0,     0,     0,
       0,   -84,   -84,     0,     0,   -84,     0,     0,   -84,   -84,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,     0,     0,
     -83,     0,     0,     0,     0,   -83,   -83,     0,     0,   -83,
       0,     0,   -83,   -83,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -80,     0,     0,   -80,     0,     0,   -80,   -80,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
       0,     0,     0,   -81,   -81,     0,     0,   -81,     0,     0,
     -81,   -81,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,   -70,   -70,     0,
       0,   -70,     0,     0,   -70,   -70,     1,     2,     3,     4,
      20,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,   163,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,    37,    38,     0,     0,    39,     0,     0,   367,   -47,
       1,     2,     3,     4,    20,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,   163,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,    37,    38,     0,     0,    39,
       0,     0,   371,   -47,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,     0,   -66,     0,     0,     0,     0,   -66,
     -66,     0,     0,   -66,     0,     0,   -66,   -66,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,   -67,     0,
       0,     0,     0,   -67,   -67,     0,     0,   -67,     0,     0,
     -67,   -67,     1,     2,     3,     4,    20,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,   163,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,    37,    38,     0,
       0,    39,     0,     0,   444,   -47,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,     0,     0,     0,   -65,     0,     0,     0,
       0,   -65,   -65,     0,     0,   -65,     0,     0,   -65,   -65,
       1,     2,     3,     4,    20,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,   163,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,    37,    38,     0,     0,    39,
       0,     0,   446,   -47,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,   -64,
     -64,     0,     0,   -64,     0,     0,   -64,   -64,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,   -79,     0,
       0,     0,     0,   -79,   -79,   -35,     0,   -79,     0,     0,
     -79,   -79,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -56,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -56,
     -56,   -56,   -56,   -56,   -56,   -57,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -57,   -57,   -57,   -57,   -57,   -57,
     -55,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -55,
     -55,   -55,   -55,   -55,   -55,   -58,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -58,   -58,   -58,   -58,   -58,   -58,
     -53,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -53,
     -53,   -53,   -53,   -53,   -53,   -27,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,   -27,   324,   325,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,   -87,   -41,   -41,   -41,
     -41,   -41,   -41,   100,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,   -41,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,   -42,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,   -43,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,
      94,    95,     0,     0,     0,     0,   -30,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,   -33,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,     0,   -45,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,     0,   -54,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,     0,   -37,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,   -44,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,   -31,   -31,   -31,   -31,
      94,    95,     0,     0,     0,     0,   -31,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,   -32,   -32,   -32,   -32,
      94,    95,     0,     0,     0,     0,   -32,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,   -35,   -56,   -56,   -56,
     -56,   -56,   -56,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,     0,     0,     0,     0,   -56,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,     0,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,     0,   -57,   -55,   -55,   -55,
     -55,   -55,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,   -55,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,   -58,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,     0,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,     0,   -53,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,   -26,   -26,    92,    93,
     -27,   -27,   -27,   -27,   -27,   -27,   -26,     0,     0,   -27,
     -27,    92,    93,     0,     0,     0,     0,     0,     0,   -27,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -41,   -41,   -41,
     -41,   -41,   -41,   357,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   358,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -41,   -41,   -41,   -41,   -41,   -41,   310,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   333,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -41,   -41,   -41,   -41,   -41,   -41,   357,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -41,   -41,   -41,   -41,   -41,   -41,   310,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   352,   353,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -54,   -54,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   352,   353,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   352,   353,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -55,   -55,   -55,   -55,   -55,   -55,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -53,   -53,   -53,   -53,   -53,   -53,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   -30,
     -30,   307,   308,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -54,   -54,
     -54,   -54,   -54,   -54,     0,   -54,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,     0,   -31,   -31,   -31,   -31,   307,   308,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,
     -32,   307,   308,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -56,   -56,   -56,   -56,   -56,   -56,     0,
     -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -57,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -55,   -55,   -55,   -55,   -55,   -55,     0,
     -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -53,   -53,   -53,   -53,   -53,   -53,     0,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   350,
     351,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   350,   351,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   350,   351,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   350,   351,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   350,   351,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,     0,   -25,   -25,   305,   306,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,     0,   -28,   -28,   305,   306,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,     0,   -29,   -29,
     305,   306,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
       0,   -26,   -26,   305,   306,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,     0,   -27,   -27,   305,   306,   -24,   -24,
     -24,   -24,   301,   302,     0,   -24,     0,   303,   304
};

static const yytype_int16 yycheck[] =
{
       0,     0,     9,    14,    27,    28,     6,     6,    34,    35,
       0,    16,    71,    27,    28,   134,   237,    27,    18,     3,
       4,     5,     6,    46,    27,    28,    29,    30,   134,    36,
      12,    13,    46,    20,    41,    17,    46,    19,    20,    21,
      22,    34,    49,    46,    18,    38,    39,    20,   134,    20,
      34,    33,    57,    27,   134,    18,    38,    39,   134,    66,
      42,    33,    20,    70,    27,    28,    73,    74,    75,    76,
      77,    78,    79,    80,    46,   134,   135,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   310,
      33,    18,    20,   100,    44,   137,   272,    34,    35,   158,
      27,    28,    27,    46,   104,   281,    46,    22,    46,    34,
     331,    27,    28,    29,    30,   157,    33,    34,    27,   161,
      27,    38,    39,    40,    41,    34,   137,    34,    35,   136,
      46,    18,   137,    33,   134,   134,   357,    27,    28,   146,
      27,    28,    29,    30,    34,    35,   157,    27,    28,    33,
     161,   158,   157,    46,    34,    35,   161,    33,    73,    74,
      75,    33,    77,    78,   171,    80,    33,   174,    27,    28,
      29,    30,    31,    32,    27,    28,    27,    36,    37,    38,
      39,    34,   189,    34,    33,   100,    33,    46,    34,   196,
      12,    13,    38,    39,    33,    17,    33,    19,    20,    21,
      22,    23,    24,    25,   211,    33,    27,    28,    29,    30,
      20,    33,   219,    34,    35,    46,    38,    39,    27,    28,
      42,   136,    34,    18,    46,    34,    38,    39,   235,   236,
     237,   146,    27,    28,    29,    30,    34,    34,    35,    46,
      38,    39,   249,   158,    12,    13,    34,    35,    20,    17,
     257,    19,    20,    21,    22,    33,    34,   264,    34,    35,
      38,    39,    40,    41,    34,    33,   273,   272,    38,    39,
      38,    39,    34,    35,    42,    46,   281,    46,   285,   286,
     287,   288,    34,   290,   291,    34,   293,   294,   295,   296,
      46,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   361,   310,   311,   312,   313,   314,    20,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,    46,   237,    44,   331,   332,   333,    46,    74,    75,
     337,   338,   339,   340,    80,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   466,    34,   468,
     357,   358,   267,   360,    34,    35,   363,   364,   365,   366,
     466,   480,   468,   368,    34,    35,    18,   372,    34,    35,
     285,   286,    34,   288,   480,    34,    36,    34,   293,   294,
     466,   296,   468,    34,    35,    34,   466,    34,   468,    49,
     466,    34,   468,    34,   480,   310,   311,   312,    46,   314,
     480,    34,    35,    34,   480,    34,    35,   466,   467,   468,
      70,    34,    35,    73,    74,    75,   331,    77,    78,   478,
      80,   480,   337,   338,   466,   340,   468,    27,    28,    29,
      30,    31,    32,    46,    94,    95,    36,    37,   480,    46,
     100,    46,   357,    34,    35,    46,    46,    34,   363,    34,
     365,   366,    12,    13,    34,    35,    33,    17,    33,    19,
      20,    21,    22,    23,    24,    25,   466,   466,   468,   468,
      33,   478,    33,    33,    34,    35,   136,    46,    38,    39,
     480,   480,    42,    12,    13,    33,   146,    33,    17,    33,
      19,    20,    21,    22,    23,    24,    25,    33,   158,    27,
      28,    29,    30,    33,    33,    34,    34,    35,    33,    38,
      39,   171,    18,    42,   174,     3,     4,     5,     6,    34,
      35,    27,    28,    29,    30,    31,    32,    33,    33,   189,
      36,    37,    38,    39,    40,    41,   196,    43,    33,   285,
     286,    18,   288,    18,    18,    18,    18,   293,   294,    18,
     296,   211,    27,    28,    29,    30,    31,    32,    34,   219,
      18,    36,    37,   478,    34,   311,   312,    34,   314,    27,
      28,    29,    30,    31,    32,   235,   236,   237,    36,    37,
      38,    39,    40,    41,    34,    34,    34,    33,    33,   249,
      33,   337,   338,    33,   340,    33,    33,   257,    33,    33,
      18,    34,    33,    33,   264,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    33,    18,   363,    36,    37,
      38,    39,    40,    41,    46,   285,   286,    34,   288,    46,
     290,   291,    46,   293,   294,    34,   296,    34,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,    34,
     310,   311,   312,    34,   314,    34,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,    46,    34,
      36,   331,   332,   333,    34,    34,    34,   337,   338,    34,
     340,    34,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,    34,    34,    34,   357,   358,    34,
     360,    34,    34,   363,    70,   365,   366,    73,    74,    75,
      34,    77,    78,    34,    80,    34,    34,    46,    46,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   100,    19,    20,    21,    22,    23,
      24,    25,    46,    46,    34,     6,    34,   104,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,    -1,    12,    13,    -1,    -1,    -1,    17,
     136,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
     146,    -1,    34,    -1,    -1,    33,    38,    39,    40,    41,
      38,    39,   158,    34,    42,    -1,    -1,    38,    39,    40,
      41,    18,    -1,    -1,    -1,   171,    -1,    -1,   174,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,   478,    36,
      37,    38,    39,   189,    27,    28,    29,    30,    12,    13,
     196,    34,    -1,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,   211,    -1,    -1,    -1,    33,
      -1,    -1,    -1,   219,    38,    39,    34,    -1,    42,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    12,    13,   235,
     236,   237,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,     0,    -1,   249,     3,     4,     5,     6,    33,    -1,
      18,   257,    -1,    38,    39,    -1,    -1,    42,   264,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    -1,   285,
     286,    -1,   288,    -1,   290,   291,    -1,   293,   294,    -1,
     296,    -1,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,    -1,   310,   311,   312,    -1,   314,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,    -1,    -1,    36,   331,   332,   333,    -1,    -1,
      -1,   337,   338,    -1,   340,    -1,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,    -1,    -1,
      -1,   357,   358,    -1,   360,    -1,    -1,   363,    70,   365,
     366,    73,    74,    75,    -1,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   100,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    33,    38,    39,    40,    41,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,    -1,    12,    13,
      -1,    -1,    -1,    17,   136,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,   146,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,   158,    34,    42,    -1,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,   171,
      12,    13,   174,    -1,    -1,    17,    -1,    19,    20,    21,
      22,    -1,   478,    27,    28,    29,    30,   189,    -1,    -1,
      34,    33,    -1,    -1,   196,    -1,    38,    39,    12,    13,
      42,    -1,    18,    17,    -1,    19,    20,    21,    22,   211,
      -1,    27,    28,    29,    30,    31,    32,   219,    -1,    33,
      36,    37,    12,    13,    38,    39,    -1,    17,    42,    19,
      20,    21,    22,   235,   236,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,   249,    38,    39,
      -1,    -1,    42,    34,    18,   257,    -1,    38,    39,    40,
      41,    -1,   264,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,   285,   286,    -1,   288,    -1,   290,   291,
      -1,   293,   294,    -1,   296,    -1,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,    -1,   310,   311,
     312,    -1,   314,    -1,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,    -1,    -1,    36,   331,
     332,   333,    -1,    -1,    -1,   337,   338,    -1,   340,    -1,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,    -1,    -1,    -1,   357,   358,    -1,   360,    -1,
      -1,   363,    70,   365,   366,    73,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   100,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,    -1,    12,    13,    -1,    -1,    -1,    17,   136,    19,
      20,    21,    22,    -1,    -1,    34,    -1,    -1,   146,    38,
      39,    40,    41,    33,    -1,    -1,    -1,    -1,    38,    39,
     158,    34,    42,    -1,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,   171,    12,    13,   174,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    -1,   478,    -1,    -1,    -1,
      -1,   189,    -1,    -1,    -1,    33,    -1,    -1,   196,    -1,
      38,    39,    12,    13,    42,    -1,    18,    17,    -1,    19,
      20,    21,    22,   211,    -1,    27,    28,    29,    30,    31,
      32,   219,    -1,    33,    36,    37,    12,    13,    38,    39,
      -1,    17,    42,    19,    20,    21,    22,   235,   236,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,   249,    38,    39,    -1,    -1,    42,    34,    18,   257,
      -1,    38,    39,    40,    41,    -1,   264,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,   285,   286,    -1,
     288,    -1,   290,   291,    -1,   293,   294,    -1,   296,    -1,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,    -1,   310,   311,   312,    -1,   314,    -1,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
      -1,    -1,    36,   331,   332,   333,    -1,    -1,    -1,   337,
     338,    -1,   340,    -1,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,    -1,    -1,    -1,   357,
     358,    -1,   360,    -1,    -1,   363,    70,   365,   366,    73,
      74,    75,    -1,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   100,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,    -1,    12,    13,    -1,    -1,
      -1,    17,   136,    19,    20,    21,    22,    -1,    -1,    34,
      -1,    -1,   146,    38,    39,    40,    41,    33,    -1,    -1,
      -1,    -1,    38,    39,   158,    34,    42,    -1,    -1,    38,
      39,    40,    41,    18,    -1,    -1,    -1,   171,    -1,    -1,
     174,    -1,    27,    28,    29,    30,    31,    32,    -1,    -1,
     478,    36,    37,    38,    39,   189,    -1,    -1,    -1,    -1,
      70,    -1,   196,    73,    74,    75,    -1,    77,    78,    34,
      80,    -1,    -1,    38,    39,    40,    41,   211,    -1,    12,
      13,    -1,    -1,    -1,    17,   219,    19,    20,    21,    22,
     100,    34,    -1,    -1,    -1,    38,    39,    40,    41,    -1,
      33,   235,   236,   237,    -1,    38,    39,    -1,    -1,    42,
      -1,    12,    13,    -1,    -1,   249,    17,    -1,    19,    20,
      21,    22,    -1,   257,    -1,    -1,   136,    -1,    -1,    -1,
     264,    -1,    33,    -1,    -1,    -1,   146,    38,    39,     0,
      -1,    42,     3,     4,     5,     6,    -1,    -1,   158,    -1,
      -1,   285,   286,    -1,   288,    -1,   290,   291,    -1,   293,
     294,    -1,   296,    -1,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,    -1,   310,   311,   312,    -1,
     314,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,    -1,    -1,    36,   331,   332,   333,
      -1,    -1,    -1,   337,   338,    -1,   340,    -1,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
      -1,    -1,    -1,   357,   358,    -1,   360,   237,    -1,   363,
      70,   365,   366,    73,    74,    75,    18,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    92,    93,    36,    37,    38,    39,    40,    41,
     100,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    -1,   285,   286,    -1,   288,    -1,
      46,    -1,    -1,   293,   294,    -1,   296,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,   136,    36,    37,    -1,
     310,   311,   312,    -1,   314,    -1,   146,    46,     0,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,   158,    -1,
      36,   331,   332,   333,    -1,    -1,    -1,   337,   338,    -1,
     340,   171,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    -1,   478,    -1,    -1,   357,   358,   189,
     360,    46,    -1,   363,    70,   365,   366,    73,    74,    75,
      -1,    77,    78,    -1,    80,    -1,    -1,    18,    -1,    -1,
      -1,   211,    88,    89,    90,    91,    27,    28,    29,    30,
      31,    32,    -1,    -1,   100,    36,    37,    38,    39,    40,
      41,    -1,    18,    -1,    -1,   235,   236,   237,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,   249,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
     136,    -1,     0,    -1,   264,     3,     4,     5,     6,    -1,
     146,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,   158,    -1,    -1,   285,   286,    -1,   288,    -1,
      -1,    -1,    -1,   293,   294,   171,   296,    -1,   298,   299,
     300,   301,   302,   303,   304,   305,   306,    -1,   478,    -1,
     310,   311,   312,   189,   314,    -1,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,    -1,    -1,    -1,    -1,
      -1,   331,   332,   333,    -1,   211,    -1,   337,   338,    -1,
     340,    -1,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    -1,    -1,    -1,    -1,    -1,   357,   358,    -1,
     360,   237,    -1,   363,     0,   365,   366,     3,     4,     5,
       6,    18,     0,   249,    -1,     3,     4,     5,     6,    -1,
      27,    28,    29,    30,    31,    32,    18,    -1,   264,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,   285,
     286,    -1,   288,    -1,    -1,    -1,    -1,   293,   294,    -1,
     296,    -1,   298,   299,   300,   301,   302,   303,   304,    -1,
      -1,    -1,    -1,    -1,   310,   311,   312,    -1,   314,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,     0,    -1,
      -1,     3,     4,     5,     6,   331,   332,   333,    -1,    -1,
      -1,   337,   338,    -1,   340,    -1,   342,   343,   344,   345,
     346,   347,   348,   349,    -1,    -1,    -1,    -1,   478,    -1,
      -1,   357,   358,    -1,   360,    -1,    -1,   363,    70,   365,
     366,    73,    74,    75,    -1,    77,    78,     0,    80,    -1,
       3,     4,     5,     6,    86,    87,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    -1,   100,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,     0,    -1,    -1,     3,     4,     5,     6,
      33,    -1,    -1,    -1,   136,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,   158,    73,    74,    75,
      -1,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    -1,   478,    -1,   100,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
     136,    38,    39,    -1,    -1,    42,    -1,    18,    45,    46,
     146,    -1,    -1,    -1,    -1,   237,    27,    28,    29,    30,
      31,    32,   158,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    -1,   264,    36,    37,    38,    39,    40,    41,    -1,
      43,    70,    -1,    46,    73,    74,    75,    -1,    77,    78,
      -1,    80,    -1,   285,   286,    84,   288,    -1,    -1,    -1,
      -1,   293,   294,    -1,   296,    -1,   298,   299,   300,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,   310,   311,
     312,    -1,   314,    -1,   316,   317,   318,   319,    -1,    -1,
      -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,
     332,   333,    -1,    -1,    -1,   337,   338,   136,   340,    -1,
     342,   343,   344,   345,    -1,    -1,    -1,   146,   264,    -1,
      -1,    -1,    -1,    -1,    -1,   357,   358,    -1,   360,   158,
      -1,   363,    -1,   365,   366,    -1,    -1,    -1,    -1,   285,
     286,    -1,   288,    -1,    -1,    -1,    -1,   293,   294,    -1,
     296,    -1,   298,    73,    74,    75,    -1,    77,    78,    -1,
      80,    -1,    -1,    -1,   310,   311,   312,    -1,   314,    -1,
     316,   317,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,   331,   332,   333,    -1,    -1,
      -1,   337,   338,    -1,   340,    -1,   342,   343,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,   237,    36,
      37,   357,   358,    -1,   360,    -1,   136,   363,    -1,   365,
     366,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,   264,    -1,    -1,   158,    27,
      28,    29,    30,    31,    32,    -1,   478,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,   285,   286,    -1,   288,
      -1,    -1,    -1,    -1,   293,   294,    -1,   296,    -1,    -1,
      73,    74,    75,    -1,    77,    78,    -1,    80,    -1,    -1,
      18,   310,   311,   312,    -1,   314,    -1,   316,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,   100,    36,    37,
      38,    39,   331,   332,   333,    -1,    -1,    -1,   337,   338,
      -1,   340,    -1,   342,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,   358,
      -1,   360,   478,   136,   363,    -1,   365,   366,    18,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,   158,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,   285,   286,    -1,   288,    -1,
      -1,    -1,    -1,   293,   294,    -1,   296,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    18,    36,    37,    -1,
     310,   311,   312,    -1,   314,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,   331,   332,   333,    -1,    -1,    -1,   337,   338,    -1,
     340,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,   237,    -1,    -1,   357,   358,    -1,
      46,    -1,    -1,   363,    -1,   365,   366,    -1,    -1,   478,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,   285,   286,    -1,   288,    -1,    -1,    -1,    33,
     293,   294,    -1,   296,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,    18,    -1,    -1,    -1,   310,   311,   312,
      -1,   314,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,   331,    18,
      -1,    -1,    -1,    -1,   337,   338,    -1,   340,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,   357,    -1,    -1,    -1,   478,    -1,
     363,    -1,   365,   366,     3,     4,     5,     6,     7,     8,
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
      21,    22,    23,    24,    25,   478,    -1,    -1,    -1,    -1,
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
      -1,    -1,    45,    46,     3,     4,     5,     6,     7,     8,
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
      -1,    -1,    45,    46,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    45,    46,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
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
      -1,    44,    -1,    46,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    -1,    46,     3,     4,
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
      18,    -1,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    -1,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    -1,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    -1,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    -1,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    -1,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    46,    -1,    -1,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    43,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
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
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    -1,
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
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      76,     0,    50,    20,    53,    84,    44,    73,    33,    46,
       7,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      19,    21,    22,    23,    24,    25,    33,    38,    39,    42,
      45,    52,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    72,    75,    76,    77,
      78,    80,    81,    82,    83,    84,    52,    54,    55,    56,
      33,    33,    67,    33,    33,    33,    33,    33,    33,    33,
      33,    61,    84,    84,    27,    28,    29,    30,    31,    32,
      36,    37,    38,    39,    40,    41,    63,    46,    45,    77,
      33,    43,    84,    34,    35,    57,    66,    46,    67,    79,
      79,    79,    84,    67,    67,    84,    79,    34,    58,    59,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      67,    71,    72,    55,    34,    46,    18,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    35,    73,    74,    77,
      66,    67,    74,    46,    46,    46,    67,     8,    46,    74,
      66,    34,    74,    20,    12,    13,    17,    19,    20,    21,
      22,    33,    62,    63,    64,    65,    69,    70,    20,    20,
      84,    20,    12,    13,    17,    19,    20,    21,    22,    33,
      58,    59,    60,    61,    62,    63,    64,    65,    69,    70,
      84,    12,    13,    17,    19,    20,    21,    22,    23,    24,
      25,    33,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    68,    69,    70,    72,    84,    20,    20,    23,    24,
      25,    57,    68,    72,    84,    38,    39,    33,    46,    12,
      13,    17,    19,    20,    21,    22,    23,    24,    25,    33,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    68,
      69,    70,    72,    84,    27,     7,     9,    10,    11,    14,
      15,    16,    44,    52,    66,    76,    78,    80,    81,    82,
      83,    44,    73,    77,    67,    33,    33,    33,    33,    61,
      40,    41,    63,    33,    33,    33,    33,    61,    28,    29,
      30,    31,    32,    36,    37,    38,    39,    40,    41,    63,
      33,    33,    33,    33,    33,    61,    27,    28,    29,    30,
      31,    32,    36,    37,    38,    39,    40,    41,    20,    63,
      84,    33,    43,    43,    62,    62,    71,    33,    33,    33,
      33,    61,    27,    28,    29,    30,    31,    32,    36,    37,
      38,    39,    40,    41,    20,    63,    84,    33,    43,    58,
      33,    33,    67,    33,    33,    33,    33,    45,    75,    84,
      46,    45,    75,    79,    79,    84,    79,    34,    63,    63,
      79,    79,    84,    79,    34,    59,    60,    60,    61,    61,
      61,    61,    62,    62,    63,    63,    71,    79,    79,    84,
      79,    34,    58,    59,    60,    60,    61,    61,    61,    61,
      62,    62,    63,    63,    71,    72,    72,    34,    79,    79,
      84,    79,    34,    58,    59,    60,    60,    61,    61,    61,
      61,    62,    62,    63,    63,    71,    72,    57,    66,    46,
      79,    84,    67,    67,    45,    46,    45,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    46,    34,    34,
      34,    34,    74,    66,    74,    46,    46,    46,    46,    66,
      34,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      52,    52,    53,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    77,    77,    77,    77,    77,    77,    78,    79,    80,
      80,    81,    81,    82,    82,    82,    83,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     0,     3,     1,     2,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     0,     1,     1,
       1,     1,     1,     4,     1,     4,     4,     4,     4,     3,
       1,     0,     1,     3,     3,     2,     1,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     3,     5,
       7,     9,     5,     5,     5,     5,     3,     1
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

#line 2843 "./src/syntax/parser.c"

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


void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}
