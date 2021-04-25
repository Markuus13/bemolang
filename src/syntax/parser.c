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
  YYSYMBOL_statement_list = 74,            /* statement_list  */
  YYSYMBOL_declaration = 75,               /* declaration  */
  YYSYMBOL_statement = 76,                 /* statement  */
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
#define YYLAST   6241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
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
       0,    30,    30,    33,    34,    37,    38,    41,    44,    45,
      46,    47,    50,    53,    54,    57,    58,    61,    64,    65,
      68,    69,    72,    73,    74,    77,    78,    79,    80,    81,
      84,    85,    86,    89,    90,    91,    94,    95,    98,    99,
     100,   103,   104,   105,   106,   107,   110,   111,   114,   115,
     118,   119,   120,   123,   124,   127,   128,   129,   130,   133,
     134,   135,   138,   139,   142,   143,   146,   147,   150,   153,
     154,   155,   156,   157,   158,   159,   160,   163,   166,   169,
     170,   173,   174,   177,   178,   179,   182,   185
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
  "compound_statement", "statement_list", "declaration", "statement",
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
      42,    47,    33,    61,   123,   125,    59
};
#endif

#define YYPACT_NINF (-236)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     708,     9,    24,    25,    56,    27,   459,   607,   769,    58,
     817,  -236,  1455,    13,   -11,    21,  3525,  2185,     5,  2193,
    3571,    61,    63,   520,    75,    92,   102,   141,   171,   173,
     199,   203,   -15,  5009,    81,   110,   192,   158,   227,  1009,
    1046,  2255,   201,     7,    -8,   157,    20,   225,  5029,  5049,
    1144,  5069,   196,   204,   213,  5089,  5109,   232,  3617,  3663,
    3709,  3755,  3801,  3847,  3893,  3939,  3985,  2462,   264,   253,
     258,   138,  1338,   195,   283,   814,   814,   814,   284,   875,
     875,   284,   814,    73,   399,   290,  1144,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  1144,  1144,  5129,  4031,
    2281,  4077,   581,  1377,   164,   266,   708,    28,   308,  4123,
     339,   329,   333,   352,   355,   381,   385,   391,   411,  5149,
      14,   165,  1705,  4856,  2666,  5349,  5362,  5375,  5169,  5189,
    5209,  5229,   167,   175,   382,   419,  4813,   195,   875,  4857,
    5249,  5269,   429,   445,   447,  5289,  5309,  5329,  1105,  1300,
     451,   423,  4169,  4215,  4261,  4307,   189,  4857,    80,  4353,
     426,  4857,  4399,  4969,  4445,   466,   468,   486,   492,   712,
     236,   488,   158,   775,   871,   158,  1005,  1035,  1111,   490,
    2767,  4989,   315,   505,   514,   519,   524,  5493,  5793,  5808,
     158,   154,   414,  1403,  6128,  5823,  5838,  1338,  5853,  5868,
    5883,  5508,   531,   542,   544,   552,  1688,  1864,  1941,   573,
     579,   590,   158,    10,   105,   131,   116,   551,  1996,  2020,
    1405,  2044,   591,  2174,  2290,   599,  1726,   584,  5429,   594,
     597,   611,    82,   615,   617,  5446,   158,   158,   581,  4491,
     592,   600,   631,   637,  5395,  5523,  5538,   338,   344,   383,
     158,    94,   296,   460,  2620,  6063,  5553,  5568,  1429,  5583,
     400,  5598,  5613,   416,  5412,  1338,  1594,   638,   639,   520,
     642,   644,   657,   658,  4537,   201,   646,  1911,  2334,  2824,
    2870,  2927,  2973,  3019,   661,  4583,  4629,   814,   814,   284,
     814,   188,   158,   158,  1135,   814,   814,   284,   814,   331,
    1338,  1338,  1338,  1338,  1338,  1338,  1338,  1338,  1338,  1338,
    1338,  5898,   581,   814,   814,   284,   814,   353,  1405,  1405,
    1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,  1405,
    1166,  2441,  1752,   581,  1463,  1632,  1151,  1296,   439,   814,
     814,   284,   814,   529,  1429,  1429,  1429,  1429,  1429,  1429,
    1429,  1429,  1429,  1429,  1429,  1429,  5463,  5628,  5478,   581,
    1671,   245,  1338,   195,   651,   814,   284,   875,   875,  3065,
    4675,   652,  3111,  4721,   672,   675,   683,   685,  1327,  1344,
    1590,   686,   687,   688,   691,  5913,   449,  2724,  6204,  6141,
    6154,  6167,  6180,  5928,  5943,  5958,  5973,   500,   693,   698,
     699,   700,  2566,   112,   394,   484,  1073,   845,  1461,  2542,
    2640,  2590,  2691,  2741,  4879,   526,   717,   704,  1621,   709,
     713,   714,   715,  5643,   370,   521,  2890,  6193,  6076,  6089,
    6102,  6115,  5658,  5673,  5688,  5703,   539,   561,   123,   710,
    3157,   724,   725,   726,   730,  3203,  3249,  1638,  1907,  1951,
    1959,  5988,  6003,  6018,  6033,  6048,  4894,  4909,  4924,  4939,
    4954,  5718,  5733,  5748,  5763,  5778,  4813,   195,  4813,   719,
     731,   732,  4767,   733,  3295,  3341,  3387,  3433,    80,   737,
    4813,  3479
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
    -236,  -236,  -236,   776,  -236,     0,  -236,  -236,   678,  -236,
     428,  2348,  2223,  2098,  1929,  1804,   334,   628,   922,    18,
      87,   722,  1216,  1510,  -235,  2451,   -10,  -159,     1,   -19,
    -104,   441,  -100,   -78,   -73,   -72,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    42,    14,    69,    70,    71,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   133,    57,    58,    59,    60,    61,
      62,   111,    63,    64,    65,    66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,    15,   338,    17,   286,     9,    10,     1,     2,
       3,     4,   -42,   -42,   -42,   -42,   -42,   -42,    68,   -18,
      87,   -42,   -42,   -42,   -42,   -42,   -42,    11,   -62,    -8,
      84,   -42,   279,    16,    86,    85,   280,   318,   -18,   -14,
     101,   -19,    87,   181,    -9,   -10,   -87,   -22,   -22,   -22,
     -22,    90,    91,   -62,    18,   265,    92,    93,   281,   -87,
     -19,   104,   136,   282,   283,   201,   -22,    19,   226,   226,
     226,   114,   235,   235,   117,   226,   -11,   397,    13,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   108,   183,   184,    72,   264,    73,   185,   415,   186,
     228,   188,   189,   229,   230,   231,    68,   119,    75,   265,
      74,   236,   237,   190,   -47,   370,   -62,   149,    38,    39,
     152,   344,    40,   -18,   436,    76,   277,   -52,   -62,   -62,
     -19,   235,   -18,   319,   -22,    77,   275,   278,   159,   -19,
     319,   264,   162,   -22,   -22,   -22,   -22,   322,   323,   -20,
     265,   235,   324,   325,   276,   150,   -51,   466,   -20,   -20,
     320,   321,   110,   110,   110,    84,   115,   116,    84,   110,
     165,   166,   -16,   106,    78,   167,   160,   168,   169,   170,
     171,   -18,   300,    84,   -20,   -20,    88,    89,   -18,   132,
     201,   172,   -21,   -21,    88,    89,    38,    39,   -17,   -17,
      40,   -60,   -60,   -20,    79,    84,    80,    25,    26,   147,
     148,   -21,    30,   332,    31,   163,    32,    33,    34,    35,
      36,   179,   378,   -59,   -59,   151,   236,   237,    37,    84,
      84,   264,    81,    38,    39,   156,    82,    40,   -50,   -38,
     -38,   -47,    99,    84,   -38,   284,   -38,   -38,   -38,   -38,
     -46,   358,   -25,   -25,   -25,   -25,   -25,   -25,   201,   -49,
     -38,   -25,   -25,    94,    95,   -38,   -38,   101,   371,   -38,
     -42,   -25,   -19,   300,   -42,   -42,   -42,   -42,   -48,   -19,
     226,   226,   376,   226,   182,    84,    84,   105,   226,   226,
     383,   226,   -13,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   227,   264,   226,   226,   400,   226,
     -12,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   -18,   345,   132,   264,   226,   235,   109,
     -18,   -18,   226,   226,   421,   226,   239,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   -87,
     -87,   101,   264,   264,   137,   201,   364,   138,   226,   442,
     235,   235,   279,   139,   279,   385,   280,   140,   280,   236,
     237,   174,   -52,   -52,   110,   110,   279,   110,   -51,   -51,
     280,   439,   110,   110,    98,   110,   141,   402,   281,   142,
     281,   236,   237,   282,   283,   282,   283,   -19,   345,   132,
     110,   110,   281,   110,   -19,   -19,   196,   282,   283,   219,
     219,   219,   -21,   196,   196,   143,   219,   -50,   -50,   144,
     132,   -21,   -21,   320,   321,   145,   110,   110,   -63,   110,
     130,   131,   238,   -41,   -49,   -49,   257,   -41,   -41,   -41,
     -41,   -20,   -20,   301,   302,   146,   132,   472,   -20,   474,
     -48,   -48,   110,   -15,   443,   444,   277,   -78,   277,    -2,
     161,   481,     1,     2,     3,     4,   275,   278,   275,   278,
     277,   235,   196,   418,   148,   153,   -21,   -21,   301,   302,
     275,   278,   257,   -21,   276,   473,   276,   -20,   -20,   346,
     347,   154,   196,   155,   -20,   -20,   479,   158,   276,   287,
     107,   288,   -23,   213,   213,   213,   174,   232,   232,   294,
     213,   -23,   -23,   -23,   -23,   322,   323,   112,   113,   289,
     324,   325,   -43,   118,   174,   290,   -43,   -43,   -43,   -43,
     251,   311,    25,    26,   455,   148,   -87,    30,   295,    31,
     163,    32,    33,    34,    35,    36,   174,   296,   -21,   -21,
     346,   347,   297,    37,   331,   -21,   -21,   298,    38,    39,
     460,   148,    40,   423,   313,   284,   232,   236,   237,   -25,
     174,   174,   257,   465,   148,   314,   251,   315,   -25,   -25,
     -25,   -25,   -25,   -25,   174,   316,   232,   -25,   -25,   326,
     327,   -52,   357,   240,   241,   -63,   -63,   -51,   242,   196,
     243,   244,   245,   246,   247,   248,   249,    -4,   -50,   -49,
      -4,    -4,    -4,    -4,   250,   -61,   -61,   -48,   -87,    38,
      39,   219,   219,    40,   219,   339,   379,   380,   -52,   219,
     219,   -51,   219,   340,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   395,   396,   -50,   257,   219,   219,   -49,
     219,   -48,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   413,   414,   341,   175,   251,   257,   219,   196,
     342,   362,   363,   219,   219,   365,   219,   366,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   434,   435,
     367,   368,   372,   257,   257,   -46,   196,   440,   446,   219,
     197,   196,   196,   220,   220,   220,   447,   197,   197,   448,
     220,     1,     2,     3,     4,   213,   213,   449,   213,   450,
     451,   452,   453,   213,   213,   454,   213,   456,   374,   375,
     258,   377,   457,   458,   459,   -63,   381,   382,   -63,   384,
     251,   213,   213,   461,   213,   -87,   -87,   462,   463,   464,
     -87,   -87,   -87,   -87,   398,   399,   467,   401,   468,   469,
     470,   251,   213,   232,   471,   475,   197,   213,   213,    -5,
     213,   480,    -5,    -5,    -5,    -5,   258,   476,   477,   478,
     419,   420,    12,   422,   135,     0,   197,   251,   251,     0,
     438,     0,     0,   213,     0,   232,   232,   222,   222,   222,
     175,   233,   233,   175,   222,     0,   441,     0,     0,   -30,
       0,     0,   196,   -30,   -30,   292,   293,    -6,   175,     0,
      -6,    -6,    -6,    -6,   260,   197,   202,   203,     0,     0,
       0,   204,     0,   205,   206,   207,   208,   209,   210,   211,
     175,     0,     0,     0,     0,     0,     0,   212,   220,     0,
       0,     0,    38,    39,     0,     0,    40,     0,     0,     0,
     233,     0,     0,   -28,   175,   175,   258,     0,     0,     0,
     260,     0,   -28,   -28,   -28,   -28,   -28,   -28,   175,     0,
     233,   -28,   -28,   326,   327,     0,   258,   183,   184,     0,
       0,     0,   185,   197,   186,   228,   188,   189,   229,   230,
     231,     0,     0,     0,     0,   -33,   232,     0,   190,   -33,
     -33,   -33,   -33,    38,    39,   220,   220,    40,   220,     0,
     175,   175,     0,   220,   220,     0,   220,     0,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,     0,
     258,   220,   220,     0,   220,     0,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,     0,   176,
     260,   258,   220,   197,     0,     0,     0,   220,   220,     0,
     220,     0,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,     0,     0,     0,   258,   258,     0,
     197,     0,     0,   220,   198,   197,   197,   221,   221,   221,
       0,   198,   198,     0,   221,     0,     0,     0,     0,   222,
     222,     0,   222,     0,     0,     0,     0,   222,   222,     0,
     222,   -39,   -39,     0,   259,     0,   -39,     0,   -39,   -39,
     -39,   -39,     0,     0,   260,   222,   222,     0,   222,   -36,
       0,     0,   -39,   -36,   -36,   -36,   -36,   -39,   -39,     0,
       0,   -39,     0,     0,     0,   260,     0,     0,   -40,   -40,
     198,   222,   222,   -40,   222,   -40,   -40,   -40,   -40,   -45,
     259,     0,     0,   -45,   -45,   -45,   -45,     0,     0,   -40,
     198,   260,     0,     0,   -40,   -40,     0,   222,   -40,   233,
     233,   -24,     0,     0,   176,     0,     0,   176,     0,     0,
     -24,   -24,   -24,   -24,   322,   323,   197,     0,     0,   324,
     325,     0,   176,     0,     0,     0,     0,   240,   241,   198,
       0,     0,   242,     0,   243,   244,   245,   246,   247,   248,
     249,     0,     0,     0,   176,     0,     0,     0,   250,     0,
       0,     0,   221,    38,    39,   -54,     0,    40,     0,   -54,
     -54,   -54,   -54,     0,     0,     0,    25,    26,   176,   176,
     259,    30,     0,    31,   180,    32,    33,     0,     0,   -37,
       0,     0,   176,   -37,   -37,   -37,   -37,    37,     0,     0,
     259,     0,    38,    39,   -87,   -31,    40,   198,     0,   -31,
     -31,   292,   293,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     233,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,   221,
     221,     0,   221,     0,   176,   176,     0,   221,   221,     0,
     221,     0,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,     0,   259,   221,   221,     0,   221,     0,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,     0,   177,     0,   259,   221,   198,     0,     0,
       0,   221,   221,     0,   221,     0,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,     0,     0,
       0,   259,   259,     0,   198,     0,     0,   221,   199,   198,
     198,   223,   223,   223,     0,   199,   199,     0,   223,     0,
       0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   157,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   261,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
     -32,     0,     0,   -79,   -32,   -32,   292,   293,   -79,   -79,
       0,     0,   -79,     0,   -79,   -79,   -79,     0,     0,     0,
     183,   184,     0,     0,   199,   185,     0,   186,   187,   188,
     189,   -44,     0,     0,   261,   -44,   -44,   -44,   -44,     0,
       0,   190,     0,     0,   199,     0,    38,    39,   -34,     0,
      40,     0,   -34,   -34,   -34,   -34,     0,     0,   177,    25,
      26,   177,     0,     0,    30,     0,    31,   163,    32,    33,
     198,     0,     0,     0,     0,     0,   177,     0,     0,     0,
      37,     0,     0,   199,     0,    38,    39,   202,   203,    40,
       0,     0,   204,     0,   205,   330,   207,   208,   177,     0,
     -22,   -22,   -22,   -22,   303,   304,   223,   -22,   212,   305,
     306,   240,   241,    38,    39,     0,   242,    40,   243,   356,
     245,   246,   177,   177,   261,    -3,     0,     0,    -3,    -3,
      -3,    -3,   250,     0,     0,     0,   177,    38,    39,     0,
       0,    40,     0,     0,   261,   202,   203,     0,     0,   -29,
     204,   199,   205,   206,   207,   208,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   212,   -29,   -29,   326,
     327,    38,    39,   223,   223,    40,   223,     0,   177,   177,
       0,   223,   223,     0,   223,     0,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,     0,   261,   223,
     223,     0,   223,     0,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,     0,   178,     0,   261,
     223,   199,     0,     0,     0,   223,   223,     0,   223,     0,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,     0,     0,     0,   261,   261,     0,   199,     0,
       0,   223,   200,   199,   199,   224,   224,   224,     0,   200,
     200,     0,   224,     0,     0,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   262,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,   -35,     0,     0,   -76,   -35,   -35,
     -35,   -35,   -76,   -76,     0,     0,   -76,     0,   -76,   -76,
     -76,     0,     0,     0,   183,   184,     0,     0,   200,   185,
       0,   186,   228,   188,   189,   -53,     0,     0,   262,   -53,
     -53,   -53,   -53,     0,     0,   190,     0,     0,   200,     0,
      38,    39,   -56,     0,    40,     0,   -56,   -56,   -56,   -56,
       0,     0,   178,   240,   241,   178,     0,     0,   242,     0,
     243,   244,   245,   246,   199,     0,     0,     0,     0,     0,
     178,     0,     0,     0,   250,     0,   -87,   200,     0,    38,
      39,     0,     0,    40,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   178,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     224,   -87,   -23,   -23,   -23,   -23,    90,    91,     0,     0,
       0,    92,    93,     0,   -41,     0,   178,   178,   262,     0,
       0,   -23,     0,   -41,   -41,   -41,   -41,   -41,   -41,   333,
     178,     0,   -41,   -41,   -41,   -41,   -41,   -41,   262,   334,
     -41,     0,     0,     0,     0,   200,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   333,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,   224,   224,     0,
     224,     0,   178,   178,     0,   224,   224,     0,   224,     0,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,     0,   262,   224,   224,     0,   224,     0,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
       0,   173,     0,   262,   224,   200,     0,     0,     0,   224,
     224,     0,   224,     0,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,     0,     0,     0,   262,
     262,     0,   200,     0,     0,   224,   195,   200,   200,   218,
     218,   218,   -42,   195,   195,     0,   218,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,   128,   129,
     -42,   -42,   -42,   -42,   -42,   -42,   256,     0,     0,     0,
       0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -57,   195,     0,   -70,   -57,   -57,   -57,   -57,   -70,
     -70,     0,   256,   -70,     0,   -70,   -70,   -70,     0,   -43,
       0,     0,   195,     0,     0,     0,    83,     0,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,   173,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,   -55,     0,     0,   200,   -55,
     -55,   -55,   -55,   -58,   173,     0,     0,   -58,   -58,   -58,
     -58,   194,     0,     0,   217,   217,   217,     0,   194,   194,
       0,   217,     0,     0,   -30,     0,   173,     0,     0,   124,
     125,   126,   127,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   255,   -30,   -30,   -30,   -30,   328,   329,   -33,     0,
     336,   337,   256,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   173,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -36,     0,     0,     0,     0,   194,     0,   195,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   255,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   194,     0,     0,
       0,   218,   218,     0,   218,     0,     0,     0,     0,   218,
     218,   291,   218,     0,   195,   195,   195,   195,   195,   195,
     195,   393,   394,     0,     0,     0,   256,   218,   218,   299,
     218,     0,   218,   218,   218,   218,   218,   218,   218,   218,
     411,   412,     0,     0,     0,     0,     0,   256,   218,   195,
       0,   317,     0,   218,   218,     0,   218,     0,   256,   256,
     256,   256,   256,   256,   256,   256,   432,   433,     0,     0,
       0,     0,     0,   256,   256,     0,   195,   255,     0,   218,
     193,   195,   195,   216,   216,   216,     0,   193,   193,   343,
     216,     0,     0,     0,     0,    -7,   122,   123,    -7,    -7,
      -7,    -7,   -45,   -68,   194,     0,   -68,   -68,   -68,   -68,
     254,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   217,   217,     0,   217,
       0,     0,     0,     0,   217,   217,     0,   217,     0,   194,
     194,   194,   389,   390,   391,   392,   193,     0,     0,     0,
       0,   255,   217,   217,     0,   217,   254,   217,   217,   217,
     217,   407,   408,   409,   410,   -65,   193,     0,   -65,   -65,
     -65,   -65,   255,   217,   194,     0,     0,     0,   217,   217,
       0,   217,     0,   255,   255,   255,   255,   428,   429,   430,
     431,   -64,   195,     0,   -64,   -64,   -64,   -64,   255,   255,
       0,   194,     0,     0,   217,   192,   194,   194,   215,   215,
     215,     0,   192,   192,     0,   215,     0,     0,   -54,     0,
     121,     0,     0,     0,     0,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -54,     0,     0,   253,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,   -69,   254,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   192,     0,   193,     0,     0,     0,   -69,     0,     0,
       0,   253,   -69,   -69,     0,     0,   -69,     0,   -69,   -69,
     -69,   192,     0,     0,     0,   216,   216,     0,   216,     0,
       0,     0,     0,   216,   216,     0,   216,     0,   193,   387,
     388,     0,     0,     0,     0,     0,     0,   194,     0,     0,
     254,   216,   216,     0,   216,     0,   216,   216,   405,   406,
     191,     0,     0,   214,   214,   214,     0,   191,   191,     0,
     214,   254,   216,   193,   120,     0,     0,   216,   216,     0,
     216,     0,   254,   254,   426,   427,     0,     0,     0,     0,
     252,     0,     0,     0,     0,     0,     0,   254,   254,   -37,
     193,   253,     0,   216,     0,   193,   193,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,   191,     0,   192,   -41,
     -41,   -41,   -41,   -41,   -41,   102,   252,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   103,   191,     0,   -41,     0,
     215,   215,     0,   215,     0,     0,     0,     0,   215,   215,
       0,   215,     0,   386,     0,     0,   225,   225,   225,     0,
     234,   234,     0,   225,     0,   253,   215,   215,     0,   215,
       0,   215,   404,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   263,   134,     0,   253,   215,   192,     0,
     -26,     0,   215,   215,     0,   215,     0,   253,   425,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   193,     0,   -26,   -26,
     326,   327,   253,   253,   -44,   192,   252,     0,   215,   234,
     192,   192,     0,   -44,   -44,   -44,   -44,   -44,   -44,   263,
       0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -31,   234,
       0,     0,     0,   361,     0,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,   -31,   -31,   -31,   -31,
     328,   329,     0,     0,     0,   214,   214,     0,   214,     0,
       0,     0,     0,   214,   214,     0,   214,   -22,   -22,   -22,
     -22,   348,   349,     0,   -22,   -22,   350,   351,   -27,     0,
     252,   214,   214,     0,   214,     0,   403,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,   -27,   -27,   326,   327,
       0,   252,   214,   191,     0,     0,     0,   214,   214,   263,
     214,     0,   424,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,   192,   -28,   -28,    94,    95,     0,   252,   252,   -32,
     191,     0,   -28,   214,     0,   191,   191,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,   -32,   -32,   -32,
     -32,   328,   329,     0,     0,     0,     0,     0,   225,   225,
       0,   225,     0,     0,     0,     0,   225,   225,     0,   225,
       0,   -23,   -23,   -23,   -23,   303,   304,     0,   -23,   -34,
     305,   306,     0,   263,   225,   225,     0,   225,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   263,   416,   417,     0,     0,     0,
     225,   225,     0,   225,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     263,   437,     0,   -87,     0,     0,   225,     0,   234,   234,
       0,     0,     0,     0,     0,   -71,   191,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,   -71,   -71,     0,     0,   -71,     0,   -71,   -71,
     -71,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,   -72,   -72,
       0,     0,   -72,     0,   -72,   -72,   -72,   -23,   -23,   -23,
     -23,   348,   349,     0,   -23,   -23,   350,   351,   -73,   234,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,     0,     0,   -73,   -73,     0,     0,   -73,
       0,   -73,   -73,   -73,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
       0,   -74,   -74,     0,     0,   -74,     0,   -74,   -74,   -74,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,     0,   -75,   -75,     0,
       0,   -75,     0,   -75,   -75,   -75,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,     0,     0,     0,   -65,     0,
       0,     0,     0,   -65,   -65,     0,     0,   -65,     0,   -65,
     -65,   -65,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,   -77,
     -77,     0,     0,   -77,     0,   -77,   -77,   -77,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,     0,     0,     0,   -86,   -86,     0,     0,   -86,
       0,   -86,   -86,   -86,   -64,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,     0,     0,     0,   -64,     0,     0,     0,
       0,   -64,   -64,     0,     0,   -64,     0,   -64,   -64,   -64,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,   -68,     0,     0,     0,     0,   -68,   -68,     0,
       0,   -68,     0,   -68,   -68,   -68,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,   -82,   -82,     0,     0,   -82,     0,   -82,
     -82,   -82,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,   -85,     0,     0,     0,     0,   -85,
     -85,     0,     0,   -85,     0,   -85,   -85,   -85,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
     -84,     0,     0,     0,     0,   -84,   -84,     0,     0,   -84,
       0,   -84,   -84,   -84,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,   -83,   -83,     0,     0,   -83,     0,   -83,   -83,   -83,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,     0,   -81,   -81,     0,
       0,   -81,     0,   -81,   -81,   -81,    20,     0,     1,     2,
       3,     4,    21,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,    31,   163,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,    40,     0,   164,
      41,   -47,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -76,     0,     0,   -76,     0,   -76,   -76,   -76,   -70,     0,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,     0,     0,     0,   -70,   -70,     0,     0,   -70,
       0,   -70,   -70,   -70,    20,     0,     1,     2,     3,     4,
      21,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,    31,   163,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,    39,     0,     0,    40,     0,   164,   100,   -47,
     -69,     0,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,   -69,     0,     0,     0,     0,   -69,   -69,     0,
       0,   -69,     0,   -69,   -69,   -69,   -67,     0,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,   -67,     0,
       0,     0,     0,   -67,   -67,     0,     0,   -67,     0,   -67,
     -67,   -67,   -71,     0,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,   -71,     0,     0,     0,     0,   -71,
     -71,     0,     0,   -71,     0,   -71,   -71,   -71,   -72,     0,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,     0,     0,   -72,   -72,     0,     0,   -72,
       0,   -72,   -72,   -72,   -73,     0,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,   -73,   -73,     0,     0,   -73,     0,   -73,   -73,   -73,
     -74,     0,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,     0,     0,   -74,   -74,     0,
       0,   -74,     0,   -74,   -74,   -74,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,   -75,     0,
       0,     0,     0,   -75,   -75,     0,     0,   -75,     0,   -75,
     -75,   -75,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,   -77,
     -77,     0,     0,   -77,     0,   -77,   -77,   -77,   -66,     0,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,     0,     0,     0,     0,   -66,   -66,     0,     0,   -66,
       0,   -66,   -66,   -66,   -86,     0,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,     0,     0,     0,   -86,     0,     0,     0,
       0,   -86,   -86,     0,     0,   -86,     0,   -86,   -86,   -86,
     -82,     0,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,     0,     0,   -82,   -82,     0,
       0,   -82,     0,   -82,   -82,   -82,   -85,     0,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,   -85,     0,
       0,     0,     0,   -85,   -85,     0,     0,   -85,     0,   -85,
     -85,   -85,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,   -84,     0,     0,     0,     0,   -84,
     -84,     0,     0,   -84,     0,   -84,   -84,   -84,   -83,     0,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,     0,     0,
     -83,     0,     0,     0,     0,   -83,   -83,     0,     0,   -83,
       0,   -83,   -83,   -83,   -80,     0,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,   -80,     0,     0,     0,
       0,   -80,   -80,     0,     0,   -80,     0,   -80,   -80,   -80,
     -81,     0,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,     0,   -81,   -81,     0,
       0,   -81,     0,   -81,   -81,   -81,    20,     0,     1,     2,
       3,     4,    21,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,    31,   163,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,    40,     0,   164,
     285,   -47,   -68,     0,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,   -68,     0,     0,     0,     0,   -68,
     -68,     0,     0,   -68,     0,   -68,   -68,   -68,    20,     0,
       1,     2,     3,     4,    21,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,    31,   163,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,    39,     0,     0,    40,
       0,   164,   369,   -47,   -65,     0,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,     0,     0,     0,   -65,     0,     0,     0,
       0,   -65,   -65,     0,     0,   -65,     0,   -65,   -65,   -65,
      20,     0,     1,     2,     3,     4,    21,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,    31,   163,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,    39,     0,
       0,    40,     0,   164,   373,   -47,    20,     0,     1,     2,
       3,     4,    21,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,    31,   163,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,    40,     0,   164,
     445,   -47,   -64,     0,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,   -64,
     -64,     0,     0,   -64,     0,   -64,   -64,   -64,   -79,     0,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
     -79,     0,     0,     0,     0,   -79,   -79,     0,     0,   -79,
       0,   -79,   -79,   -79,   266,     0,     1,     2,     3,     4,
     267,     0,   268,   269,   270,    25,    26,   271,   272,   273,
      30,     0,    31,   163,    32,    33,    34,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,    39,     0,     0,    40,     0,   274,    20,   -47,
       1,     2,     3,     4,    21,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,    31,   163,    32,    33,
      34,    35,    36,   -24,   -24,   -24,   -24,    90,    91,     0,
      37,     0,    92,    93,     0,    38,    39,   -35,     0,    40,
       0,   164,   -24,   -47,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -56,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -56,   -56,   -56,   -56,   -56,   -56,   -57,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -57,   -57,   -57,   -57,
     -57,   -57,   -55,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -55,   -55,   -55,   -55,   -55,   -55,   -58,     0,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -58,   -58,   -58,   -58,
     -58,   -58,   -53,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -53,   -53,   -53,   -53,   -53,   -53,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   -87,     0,     0,   -87,   -41,   -41,   -41,   -41,
     -41,   -41,   102,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,   -41,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,   -43,   -30,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,   -30,   -30,   -30,   -30,    96,
      97,     0,     0,     0,     0,   -30,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,   -33,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,   -36,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,   -45,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,     0,   -54,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,   -37,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,   -44,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,     0,   -31,   -31,   -31,   -31,    96,
      97,     0,     0,     0,     0,   -31,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,   -32,   -32,   -32,   -32,    96,
      97,     0,     0,     0,     0,   -32,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   -35,   -56,   -56,   -56,   -56,
     -56,   -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,     0,   -56,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,     0,   -57,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,     0,     0,     0,     0,   -55,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,     0,     0,   -58,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,     0,   -53,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,     0,   -29,   -29,    94,    95,   -26,
     -26,   -26,   -26,   -26,   -26,   -29,     0,     0,   -26,   -26,
      94,    95,   -27,   -27,   -27,   -27,   -27,   -27,   -26,     0,
       0,   -27,   -27,    94,    95,     0,     0,     0,     0,     0,
       0,   -27,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -41,
     -41,   -41,   -41,   -41,   -41,   359,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   360,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -41,   -41,   -41,   -41,   -41,   -41,   312,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,   335,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -41,   -41,   -41,   -41,   -41,
     -41,   359,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -41,   -41,   -41,   -41,   -41,
     -41,   312,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   354,   355,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   354,   355,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   354,   355,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -53,   -53,   -53,   -53,   -53,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,
     -30,   -30,   -30,   309,   310,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   309,   310,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,
     -32,   -32,   -32,   309,   310,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -55,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -53,   -53,   -53,   -53,   -53,
     -53,     0,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   352,   353,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   352,   353,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   352,   353,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     352,   353,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   352,   353,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,     0,   -25,   -25,   307,   308,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,   307,
     308,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,
     -29,   -29,   307,   308,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,     0,   -26,   -26,   307,   308,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   307,   308,
     -24,   -24,   -24,   -24,   348,   349,     0,   -24,   -24,   350,
     351,   -24,   -24,   -24,   -24,   303,   304,     0,   -24,     0,
     305,   306
};

static const yytype_int16 yycheck[] =
{
       0,     0,     9,   238,    14,   164,     6,     6,     3,     4,
       5,     6,    27,    28,    29,    30,    31,    32,    18,    27,
      28,    36,    37,    38,    39,    40,    41,     0,    18,    20,
      37,    46,   136,    44,    27,    42,   136,    27,    46,    34,
      59,    27,    28,    50,    20,    20,    33,    27,    28,    29,
      30,    31,    32,    46,    33,    27,    36,    37,   136,    46,
      46,    68,    34,   136,   136,    72,    46,    46,    75,    76,
      77,    78,    79,    80,    81,    82,    20,   312,    20,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    73,    12,    13,    33,   102,    33,    17,   333,    19,
      20,    21,    22,    23,    24,    25,   106,    34,    33,    27,
      23,    38,    39,    33,    34,   274,    34,   136,    38,    39,
     139,    27,    42,    18,   359,    33,   136,    46,    34,    35,
      18,   138,    27,    28,    18,    33,   136,   136,   157,    27,
      28,   148,   161,    27,    28,    29,    30,    31,    32,    18,
      27,   158,    36,    37,   136,   137,    46,    34,    27,    28,
      29,    30,    75,    76,    77,   172,    79,    80,   175,    82,
      12,    13,    34,    35,    33,    17,   158,    19,    20,    21,
      22,    27,    28,   190,    27,    28,    29,    30,    34,   102,
     197,    33,    27,    28,    29,    30,    38,    39,    34,    35,
      42,    34,    35,    46,    33,   212,    33,    12,    13,    34,
      35,    46,    17,   220,    19,    20,    21,    22,    23,    24,
      25,    20,    34,    34,    35,   138,    38,    39,    33,   236,
     237,   238,    33,    38,    39,   148,    33,    42,    46,    12,
      13,    46,    46,   250,    17,   158,    19,    20,    21,    22,
      46,   258,    27,    28,    29,    30,    31,    32,   265,    46,
      33,    36,    37,    38,    39,    38,    39,   286,   275,    42,
      34,    46,    27,    28,    38,    39,    40,    41,    46,    34,
     287,   288,   289,   290,    20,   292,   293,    34,   295,   296,
     297,   298,    34,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,    20,   312,   313,   314,   315,   316,
      44,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,    27,    28,   238,   333,   334,   335,    46,
      34,    35,   339,   340,   341,   342,    46,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,    34,
      35,   370,   359,   360,    46,   362,   269,    18,   365,   366,
     367,   368,   466,    34,   468,    34,   466,    34,   468,    38,
      39,    37,    34,    35,   287,   288,   480,   290,    34,    35,
     480,   363,   295,   296,    50,   298,    34,    34,   466,    34,
     468,    38,    39,   466,   466,   468,   468,    27,    28,   312,
     313,   314,   480,   316,    34,    35,    72,   480,   480,    75,
      76,    77,    18,    79,    80,    34,    82,    34,    35,    34,
     333,    27,    28,    29,    30,    34,   339,   340,    46,   342,
      96,    97,    33,    34,    34,    35,   102,    38,    39,    40,
      41,    27,    28,    29,    30,    34,   359,   466,    34,   468,
      34,    35,   365,    34,   367,   368,   466,    34,   468,     0,
      34,   480,     3,     4,     5,     6,   466,   466,   468,   468,
     480,   478,   138,    34,    35,    46,    27,    28,    29,    30,
     480,   480,   148,    34,   466,   467,   468,    27,    28,    29,
      30,    46,   158,    46,    34,    35,   478,    46,   480,    33,
      72,    33,    18,    75,    76,    77,   172,    79,    80,   175,
      82,    27,    28,    29,    30,    31,    32,    76,    77,    33,
      36,    37,    34,    82,   190,    33,    38,    39,    40,    41,
     102,   197,    12,    13,    34,    35,    46,    17,    33,    19,
      20,    21,    22,    23,    24,    25,   212,    33,    27,    28,
      29,    30,    33,    33,   220,    34,    35,    33,    38,    39,
      34,    35,    42,    34,    33,   478,   138,    38,    39,    18,
     236,   237,   238,    34,    35,    33,   148,    33,    27,    28,
      29,    30,    31,    32,   250,    33,   158,    36,    37,    38,
      39,    18,   258,    12,    13,    34,    35,    18,    17,   265,
      19,    20,    21,    22,    23,    24,    25,     0,    18,    18,
       3,     4,     5,     6,    33,    34,    35,    18,    34,    38,
      39,   287,   288,    42,   290,    33,   292,   293,    34,   295,
     296,    34,   298,    33,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,    34,   312,   313,   314,    34,
     316,    34,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,    33,    37,   238,   333,   334,   335,
      33,    33,    33,   339,   340,    33,   342,    33,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
      33,    33,    46,   359,   360,    34,   362,    46,    46,   365,
      72,   367,   368,    75,    76,    77,    34,    79,    80,    34,
      82,     3,     4,     5,     6,   287,   288,    34,   290,    34,
      34,    34,    34,   295,   296,    34,   298,    34,   287,   288,
     102,   290,    34,    34,    34,    18,   295,   296,    34,   298,
     312,   313,   314,    34,   316,    33,    34,    34,    34,    34,
      38,    39,    40,    41,   313,   314,    46,   316,    34,    34,
      34,   333,   334,   335,    34,    46,   138,   339,   340,     0,
     342,    34,     3,     4,     5,     6,   148,    46,    46,    46,
     339,   340,     6,   342,   106,    -1,   158,   359,   360,    -1,
     362,    -1,    -1,   365,    -1,   367,   368,    75,    76,    77,
     172,    79,    80,   175,    82,    -1,   365,    -1,    -1,    34,
      -1,    -1,   478,    38,    39,    40,    41,     0,   190,    -1,
       3,     4,     5,     6,   102,   197,    12,    13,    -1,    -1,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    33,   220,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
     138,    -1,    -1,    18,   236,   237,   238,    -1,    -1,    -1,
     148,    -1,    27,    28,    29,    30,    31,    32,   250,    -1,
     158,    36,    37,    38,    39,    -1,   258,    12,    13,    -1,
      -1,    -1,    17,   265,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    34,   478,    -1,    33,    38,
      39,    40,    41,    38,    39,   287,   288,    42,   290,    -1,
     292,   293,    -1,   295,   296,    -1,   298,    -1,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,    -1,
     312,   313,   314,    -1,   316,    -1,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,    -1,    37,
     238,   333,   334,   335,    -1,    -1,    -1,   339,   340,    -1,
     342,    -1,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,    -1,    -1,    -1,   359,   360,    -1,
     362,    -1,    -1,   365,    72,   367,   368,    75,    76,    77,
      -1,    79,    80,    -1,    82,    -1,    -1,    -1,    -1,   287,
     288,    -1,   290,    -1,    -1,    -1,    -1,   295,   296,    -1,
     298,    12,    13,    -1,   102,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    -1,   312,   313,   314,    -1,   316,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,   333,    -1,    -1,    12,    13,
     138,   339,   340,    17,   342,    19,    20,    21,    22,    34,
     148,    -1,    -1,    38,    39,    40,    41,    -1,    -1,    33,
     158,   359,    -1,    -1,    38,    39,    -1,   365,    42,   367,
     368,    18,    -1,    -1,   172,    -1,    -1,   175,    -1,    -1,
      27,    28,    29,    30,    31,    32,   478,    -1,    -1,    36,
      37,    -1,   190,    -1,    -1,    -1,    -1,    12,    13,   197,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,   212,    -1,    -1,    -1,    33,    -1,
      -1,    -1,   220,    38,    39,    34,    -1,    42,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    12,    13,   236,   237,
     238,    17,    -1,    19,    20,    21,    22,    -1,    -1,    34,
      -1,    -1,   250,    38,    39,    40,    41,    33,    -1,    -1,
     258,    -1,    38,    39,    18,    34,    42,   265,    -1,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
     478,    -1,    36,    37,    38,    39,    40,    41,    -1,   287,
     288,    -1,   290,    -1,   292,   293,    -1,   295,   296,    -1,
     298,    -1,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,    -1,   312,   313,   314,    -1,   316,    -1,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,    -1,    37,    -1,   333,   334,   335,    -1,    -1,
      -1,   339,   340,    -1,   342,    -1,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,   359,   360,    -1,   362,    -1,    -1,   365,    72,   367,
     368,    75,    76,    77,    -1,    79,    80,    -1,    82,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   102,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    33,    38,    39,    40,    41,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,    -1,    -1,    -1,
      12,    13,    -1,    -1,   138,    17,    -1,    19,    20,    21,
      22,    34,    -1,    -1,   148,    38,    39,    40,    41,    -1,
      -1,    33,    -1,    -1,   158,    -1,    38,    39,    34,    -1,
      42,    -1,    38,    39,    40,    41,    -1,    -1,   172,    12,
      13,   175,    -1,    -1,    17,    -1,    19,    20,    21,    22,
     478,    -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      33,    -1,    -1,   197,    -1,    38,    39,    12,    13,    42,
      -1,    -1,    17,    -1,    19,    20,    21,    22,   212,    -1,
      27,    28,    29,    30,    31,    32,   220,    34,    33,    36,
      37,    12,    13,    38,    39,    -1,    17,    42,    19,    20,
      21,    22,   236,   237,   238,     0,    -1,    -1,     3,     4,
       5,     6,    33,    -1,    -1,    -1,   250,    38,    39,    -1,
      -1,    42,    -1,    -1,   258,    12,    13,    -1,    -1,    18,
      17,   265,    19,    20,    21,    22,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    33,    36,    37,    38,
      39,    38,    39,   287,   288,    42,   290,    -1,   292,   293,
      -1,   295,   296,    -1,   298,    -1,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,    -1,   312,   313,
     314,    -1,   316,    -1,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,    -1,    37,    -1,   333,
     334,   335,    -1,    -1,    -1,   339,   340,    -1,   342,    -1,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,    -1,    -1,    -1,   359,   360,    -1,   362,    -1,
      -1,   365,    72,   367,   368,    75,    76,    77,    -1,    79,
      80,    -1,    82,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   102,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,    -1,    -1,    -1,    12,    13,    -1,    -1,   138,    17,
      -1,    19,    20,    21,    22,    34,    -1,    -1,   148,    38,
      39,    40,    41,    -1,    -1,    33,    -1,    -1,   158,    -1,
      38,    39,    34,    -1,    42,    -1,    38,    39,    40,    41,
      -1,    -1,   172,    12,    13,   175,    -1,    -1,    17,    -1,
      19,    20,    21,    22,   478,    -1,    -1,    -1,    -1,    -1,
     190,    -1,    -1,    -1,    33,    -1,    18,   197,    -1,    38,
      39,    -1,    -1,    42,    -1,    27,    28,    29,    30,    31,
      32,    33,   212,    -1,    36,    37,    38,    39,    40,    41,
     220,    43,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    -1,    18,    -1,   236,   237,   238,    -1,
      -1,    46,    -1,    27,    28,    29,    30,    31,    32,    33,
     250,    -1,    36,    37,    38,    39,    40,    41,   258,    43,
      18,    -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,   287,   288,    -1,
     290,    -1,   292,   293,    -1,   295,   296,    -1,   298,    -1,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,    -1,   312,   313,   314,    -1,   316,    -1,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
      -1,    37,    -1,   333,   334,   335,    -1,    -1,    -1,   339,
     340,    -1,   342,    -1,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,    -1,    -1,    -1,   359,
     360,    -1,   362,    -1,    -1,   365,    72,   367,   368,    75,
      76,    77,    18,    79,    80,    -1,    82,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    94,    95,
      36,    37,    38,    39,    40,    41,   102,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,   138,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,   148,    42,    -1,    44,    45,    46,    -1,    18,
      -1,    -1,   158,    -1,    -1,    -1,    37,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,   172,    36,    37,    38,
      39,    40,    41,    -1,    -1,    34,    -1,    -1,   478,    38,
      39,    40,    41,    34,   190,    -1,    -1,    38,    39,    40,
      41,    72,    -1,    -1,    75,    76,    77,    -1,    79,    80,
      -1,    82,    -1,    -1,    18,    -1,   212,    -1,    -1,    90,
      91,    92,    93,    27,    28,    29,    30,    31,    32,    -1,
      -1,   102,    36,    37,    38,    39,    40,    41,    18,    -1,
     236,   237,   238,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,   250,    -1,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    -1,   138,    -1,   265,
      -1,    27,    28,    29,    30,    31,    32,   148,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,   158,    -1,    -1,
      -1,   287,   288,    -1,   290,    -1,    -1,    -1,    -1,   295,
     296,   172,   298,    -1,   300,   301,   302,   303,   304,   305,
     306,   307,   308,    -1,    -1,    -1,   312,   313,   314,   190,
     316,    -1,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,    -1,    -1,    -1,    -1,    -1,   333,   334,   335,
      -1,   212,    -1,   339,   340,    -1,   342,    -1,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,    -1,    -1,
      -1,    -1,    -1,   359,   360,    -1,   362,   238,    -1,   365,
      72,   367,   368,    75,    76,    77,    -1,    79,    80,   250,
      82,    -1,    -1,    -1,    -1,     0,    88,    89,     3,     4,
       5,     6,    18,     0,   265,    -1,     3,     4,     5,     6,
     102,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,   287,   288,    -1,   290,
      -1,    -1,    -1,    -1,   295,   296,    -1,   298,    -1,   300,
     301,   302,   303,   304,   305,   306,   138,    -1,    -1,    -1,
      -1,   312,   313,   314,    -1,   316,   148,   318,   319,   320,
     321,   322,   323,   324,   325,     0,   158,    -1,     3,     4,
       5,     6,   333,   334,   335,    -1,    -1,    -1,   339,   340,
      -1,   342,    -1,   344,   345,   346,   347,   348,   349,   350,
     351,     0,   478,    -1,     3,     4,     5,     6,   359,   360,
      -1,   362,    -1,    -1,   365,    72,   367,   368,    75,    76,
      77,    -1,    79,    80,    -1,    82,    -1,    -1,    18,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,   102,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,     1,   238,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,   138,    -1,   265,    -1,    -1,    -1,    33,    -1,    -1,
      -1,   148,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,   158,    -1,    -1,    -1,   287,   288,    -1,   290,    -1,
      -1,    -1,    -1,   295,   296,    -1,   298,    -1,   300,   301,
     302,    -1,    -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,
     312,   313,   314,    -1,   316,    -1,   318,   319,   320,   321,
      72,    -1,    -1,    75,    76,    77,    -1,    79,    80,    -1,
      82,   333,   334,   335,    86,    -1,    -1,   339,   340,    -1,
     342,    -1,   344,   345,   346,   347,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   359,   360,    18,
     362,   238,    -1,   365,    -1,   367,   368,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,   138,    -1,   265,    27,
      28,    29,    30,    31,    32,    33,   148,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,   158,    -1,    46,    -1,
     287,   288,    -1,   290,    -1,    -1,    -1,    -1,   295,   296,
      -1,   298,    -1,   300,    -1,    -1,    75,    76,    77,    -1,
      79,    80,    -1,    82,    -1,   312,   313,   314,    -1,   316,
      -1,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,   333,   334,   335,    -1,
      18,    -1,   339,   340,    -1,   342,    -1,   344,   345,    27,
      28,    29,    30,    31,    32,    -1,   478,    -1,    36,    37,
      38,    39,   359,   360,    18,   362,   238,    -1,   365,   138,
     367,   368,    -1,    27,    28,    29,    30,    31,    32,   148,
      -1,    -1,    36,    37,    38,    39,    40,    41,    18,   158,
      -1,    -1,    -1,   265,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,   287,   288,    -1,   290,    -1,
      -1,    -1,    -1,   295,   296,    -1,   298,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    18,    -1,
     312,   313,   314,    -1,   316,    -1,   318,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      -1,   333,   334,   335,    -1,    -1,    -1,   339,   340,   238,
     342,    -1,   344,    27,    28,    29,    30,    31,    32,    -1,
      -1,   478,    36,    37,    38,    39,    -1,   359,   360,    18,
     362,    -1,    46,   365,    -1,   367,   368,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,   287,   288,
      -1,   290,    -1,    -1,    -1,    -1,   295,   296,    -1,   298,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    18,
      36,    37,    -1,   312,   313,   314,    -1,   316,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,   333,   334,   335,    -1,    -1,    -1,
     339,   340,    -1,   342,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
     359,   360,    -1,    46,    -1,    -1,   365,    -1,   367,   368,
      -1,    -1,    -1,    -1,    -1,     1,   478,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,     1,   478,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,     1,    46,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    27,    28,    29,    30,    31,    32,    -1,
      33,    -1,    36,    37,    -1,    38,    39,    18,    -1,    42,
      -1,    44,    46,    46,    -1,    -1,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    18,    -1,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    18,    -1,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    46,    -1,    -1,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    46,    -1,
      -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    43,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
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
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      75,     0,    50,    20,    53,    83,    44,    73,    33,    46,
       1,     7,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    19,    21,    22,    23,    24,    25,    33,    38,    39,
      42,    45,    52,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    72,    73,    74,
      75,    76,    77,    79,    80,    81,    82,    83,    52,    54,
      55,    56,    33,    33,    67,    33,    33,    33,    33,    33,
      33,    33,    33,    61,    83,    83,    27,    28,    29,    30,
      31,    32,    36,    37,    38,    39,    40,    41,    63,    46,
      45,    76,    33,    43,    83,    34,    35,    57,    66,    46,
      67,    78,    78,    78,    83,    67,    67,    83,    78,    34,
      58,    59,    60,    60,    61,    61,    61,    61,    62,    62,
      63,    63,    67,    71,    72,    55,    34,    46,    18,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    35,    76,
      66,    67,    76,    46,    46,    46,    67,     8,    46,    76,
      66,    34,    76,    20,    44,    12,    13,    17,    19,    20,
      21,    22,    33,    62,    63,    64,    65,    69,    70,    20,
      20,    83,    20,    12,    13,    17,    19,    20,    21,    22,
      33,    58,    59,    60,    61,    62,    63,    64,    65,    69,
      70,    83,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    68,    69,    70,    72,    83,    20,    20,    23,
      24,    25,    57,    68,    72,    83,    38,    39,    33,    46,
      12,    13,    17,    19,    20,    21,    22,    23,    24,    25,
      33,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      68,    69,    70,    72,    83,    27,     1,     7,     9,    10,
      11,    14,    15,    16,    44,    52,    66,    73,    75,    77,
      79,    80,    81,    82,    67,    45,    74,    33,    33,    33,
      33,    61,    40,    41,    63,    33,    33,    33,    33,    61,
      28,    29,    30,    31,    32,    36,    37,    38,    39,    40,
      41,    63,    33,    33,    33,    33,    33,    61,    27,    28,
      29,    30,    31,    32,    36,    37,    38,    39,    40,    41,
      20,    63,    83,    33,    43,    43,    62,    62,    71,    33,
      33,    33,    33,    61,    27,    28,    29,    30,    31,    32,
      36,    37,    38,    39,    40,    41,    20,    63,    83,    33,
      43,    58,    33,    33,    67,    33,    33,    33,    33,    45,
      74,    83,    46,    45,    78,    78,    83,    78,    34,    63,
      63,    78,    78,    83,    78,    34,    59,    60,    60,    61,
      61,    61,    61,    62,    62,    63,    63,    71,    78,    78,
      83,    78,    34,    58,    59,    60,    60,    61,    61,    61,
      61,    62,    62,    63,    63,    71,    72,    72,    34,    78,
      78,    83,    78,    34,    58,    59,    60,    60,    61,    61,
      61,    61,    62,    62,    63,    63,    71,    72,    57,    66,
      46,    78,    83,    67,    67,    45,    46,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    46,    34,    34,
      34,    34,    76,    66,    76,    46,    46,    46,    46,    66,
      34,    76
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
      71,    71,    72,    72,    73,    73,    74,    74,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    78,    79,
      79,    80,    80,    81,    81,    81,    82,    83
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
       1,     0,     1,     3,     3,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     5,
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
  case 76: /* statement: error  */
#line 160 "src/syntax/parser.y"
                { yyerrok; }
#line 2847 "./src/syntax/parser.c"
    break;


#line 2851 "./src/syntax/parser.c"

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

#line 188 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
