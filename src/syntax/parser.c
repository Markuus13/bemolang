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
#define YYLAST   6403

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  484

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
     134,   135,   138,   139,   142,   143,   146,   147,   150,   151,
     154,   157,   158,   159,   160,   161,   162,   163,   166,   169,
     172,   173,   176,   177,   180,   181,   182,   185,   188
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

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     259,   -16,   -10,     8,    14,    48,   589,   716,  1170,    34,
    1704,  -222,  1945,    29,     7,    57,  3752,  2197,    16,  2205,
    3798,    60,    98,   524,   101,   104,   117,   125,   129,   134,
     144,   154,  2476,  5208,    99,   108,   149,    19,   228,   785,
     819,  2321,   177,    10,   -19,    -4,   402,   142,  5228,  5248,
     858,  5268,   160,   165,   170,  5288,  5308,   182,  3844,  3890,
    3936,  3982,  4028,  4074,  4120,  4166,  5148,   219,   212,   237,
      31,  1050,   179,   238,   563,   563,   563,   267,   723,   723,
     267,   563,   155,   452,   246,   858,   858,   858,   858,   858,
     858,   858,   858,   858,   858,   858,   858,  5328,  4212,  2414,
    4258,   442,  1092,    64,   266,   259,   -22,   278,  4304,   313,
     302,   316,   340,   343,   345,   353,   355,   359,  5348,   -13,
      17,  1420,  1654,  1700,  2609,  2802,  5548,  5368,  5388,  5408,
    5428,    80,   150,   349,   401,  4350,   179,   723,  4394,  5448,
    5468,   395,   397,   403,  5488,  5508,  5528,   747,  1014,  1309,
    1604,   405,   413,  4438,  4484,  4530,  4576,   189,  4394,   485,
    4622,   424,  4394,  4668,  5168,   427,   439,   441,   446,   776,
     494,   530,    19,   753,   825,    19,   849,  1010,  1041,   443,
    2904,  5188,   199,   454,   463,   466,   468,  5666,  5966,  5981,
      19,    83,   208,  2862,  6301,  5996,  6011,  1050,  6026,  6041,
    6056,  5681,   470,   487,   488,   489,   580,  1465,  1633,   507,
     508,   511,    19,    77,    74,    95,  1118,  1176,  1685,  1724,
    1120,  1760,   512,  1875,  1953,   521,   875,   506,  5602,   516,
     517,   518,    92,   520,   522,  5619,    19,    19,   442,  4714,
     509,   525,   526,   527,  5568,  5696,  5711,   222,   242,   322,
      19,    94,   121,   180,  2709,  6236,  5726,  5741,  1144,  5756,
     333,  5771,  5786,   351,  5585,  1050,  1919,   534,   539,   524,
     540,   541,   548,   557,  4760,   177,   551,  2347,  3050,  3096,
    3154,  3200,  3246,  4806,  4852,  4898,   566,   563,   563,   267,
     563,   291,    19,    19,  1057,   563,   563,   267,   563,   332,
    1050,  1050,  1050,  1050,  1050,  1050,  1050,  1050,  1050,  1050,
    1050,  6071,   442,   563,   563,   267,   563,   366,  1120,  1120,
    1120,  1120,  1120,  1120,  1120,  1120,  1120,  1120,  1120,  1120,
    1403,  2007,  1441,   442,  1178,  1345,  1305,  1336,   379,   563,
     563,   267,   563,   369,  1144,  1144,  1144,  1144,  1144,  1144,
    1144,  1144,  1144,  1144,  1144,  1144,  5636,  5801,  5651,   442,
    1387,   148,  1050,   179,   558,   563,   267,   723,   723,  3292,
    4944,   568,  3338,  4990,  5036,   569,   581,   588,   590,  1352,
    1600,  1614,   591,   592,   593,   596,  6086,   245,  2949,  6366,
    6314,  6327,  6340,  6353,  6101,  6116,  6131,  6146,   411,   598,
     601,   604,   606,  2031,    79,   114,  1968,  2510,  2655,  2681,
    2731,  2778,  2055,  2186,  2302,  2454,   422,   537,   618,  1709,
     622,   624,   637,   638,  5816,   192,   225,  2757,  3116,  6249,
    6262,  6275,  6288,  5831,  5846,  5861,  5876,   460,   480,   112,
     631,  3384,   644,   645,   648,   650,  3430,  3476,  5082,  1734,
    1742,  1928,  1969,  6161,  6176,  6191,  6206,  6221,  2579,  2828,
    2879,  2966,  2992,  5891,  5906,  5921,  5936,  5951,  4350,   179,
    4350,   651,   652,   653,  5128,   656,  3522,  3568,  3614,  3660,
     485,   670,  4350,  3706
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -222,  -222,  -222,   699,  -222,     0,  -222,  -222,   608,  -222,
    2485,  2362,  2236,  2111,  1941,  1816,   341,   636,   931,   -59,
      85,  2676,  1226,  1521,  -221,  2588,   -11,   -42,  -165,     1,
      -5,  -119,   436,  -106,   -86,   -80,   -76,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    42,    14,    68,    69,    70,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   132,    57,   148,   149,    58,    59,
     150,    61,   110,    62,    63,    64,    65,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    10,    15,    17,    -8,   265,     9,    10,   -18,    86,
      -9,    60,   135,   107,   -19,    86,   278,   338,    67,     1,
       2,     3,     4,   -20,   -20,    87,    88,   -18,   -10,   279,
      83,   165,   166,   -19,   -11,    84,   167,    85,   168,   169,
     170,   171,   -20,   181,   -21,   -21,    87,    88,    11,   280,
     -14,    16,   172,   100,    13,   281,   -62,    38,    39,   282,
     103,    40,   -88,   -21,   201,   -16,   105,   226,   226,   226,
     113,   235,   235,   116,   226,   -88,   276,   151,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
      18,   398,   -18,    71,   264,   -62,   153,   -19,   -17,   -17,
     161,   -18,   319,    19,   318,    67,   -19,   319,    73,   370,
     -18,   300,   416,   -20,   -60,   -60,   160,   -18,   374,   265,
     163,   344,   -20,   -20,   320,   321,   -62,   284,   -62,   -62,
     235,    72,   -21,   285,    74,   275,   277,    75,   437,   265,
     264,   -21,   -21,   320,   321,   -52,   468,   284,   -18,   345,
      76,   284,   235,   285,   -51,   -18,   -18,   285,    77,   109,
     109,   109,    78,   114,   115,    83,   109,    79,    83,   -25,
     -25,   -25,   -25,   -25,   -25,   -19,   300,    80,   -25,   -25,
      93,    94,   -19,    83,   146,   147,   131,    81,   -25,   118,
     201,    25,    26,   236,   237,   -50,    30,   179,    31,   164,
      32,    33,    34,    35,    36,    83,    98,   -20,   -20,   346,
     347,   -46,    37,   332,   -20,   -20,   -49,    38,    39,   -19,
     345,    40,   152,   -59,   -59,   -47,   -19,   -19,   -48,    83,
      83,   264,   157,   -88,   -88,   -20,   -20,   301,   302,   182,
     -38,   -38,   -20,    83,   286,   -38,   104,   -38,   -38,   -38,
     -38,   358,   -21,   -21,   346,   347,   -52,   -52,   201,   -21,
     -21,   -38,     1,     2,     3,     4,   -38,   -38,   371,    60,
     -38,   -13,   -21,   -21,   301,   302,   -51,   -51,    60,   -21,
     226,   226,   377,   226,   108,    83,    83,   227,   226,   226,
     384,   226,   239,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   440,   264,   226,   226,   401,   226,
     -12,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   131,   136,   379,   264,   226,   235,   236,
     237,   137,   226,   226,   422,   226,   138,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   278,
     139,   278,   264,   264,   364,   201,   -50,   -50,   226,   443,
     235,   235,   279,   278,   279,   100,   386,   -49,   -49,   100,
     236,   237,   109,   109,   140,   109,   279,   141,   174,   142,
     109,   109,   280,   109,   280,   -48,   -48,   143,   281,   144,
     281,    97,   282,   145,   282,   -63,   280,   131,   109,   109,
     403,   109,   281,   424,   236,   237,   282,   236,   237,   276,
     475,   276,   196,   419,   147,   219,   219,   219,   131,   196,
     196,   481,   219,   276,   109,   109,   474,   109,   476,   -22,
     -22,   -22,   -22,    89,    90,   -15,   129,   130,    91,    92,
     483,   154,   257,   155,   131,   457,   147,   -79,   -22,   156,
     109,   159,   444,   445,   240,   241,   462,   147,   162,   242,
     287,   243,   244,   245,   246,   247,   248,   249,   275,   277,
     275,   277,   288,   235,   289,   250,   -61,   -61,   196,   290,
      38,    39,   275,   277,    40,   238,   -41,   295,   257,   -88,
     -41,   -41,   -41,   -41,   467,   147,   296,   183,   184,   297,
     196,   298,   185,   313,   186,   228,   188,   189,   229,   230,
     231,   111,   112,   174,   -63,   -63,   294,   117,   190,   -47,
     314,   315,   316,    38,    39,   -52,   -51,    40,   -42,   -50,
     -49,   174,   -42,   -42,   -42,   -42,    25,    26,   311,   -48,
     -88,    30,   339,    31,   164,    32,    33,    34,    35,    36,
     -52,   -51,   -50,   174,   -49,   -63,   -48,    37,   340,   341,
     342,   331,    38,    39,   -43,   286,    40,   362,   -43,   -43,
     -43,   -43,   363,   365,   366,   202,   203,   174,   174,   257,
     204,   367,   205,   206,   207,   208,   209,   210,   211,    -2,
     368,   174,     1,     2,     3,     4,   212,   372,   -88,   357,
     -46,    38,    39,   449,   441,    40,   196,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   447,   450,   -88,   -88,   -88,   -88,
     -88,   -88,   451,   -88,   452,   453,   454,   455,   219,   219,
     456,   219,   458,   380,   381,   459,   219,   219,   460,   219,
     461,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     396,   397,   -63,   257,   219,   219,   463,   219,   464,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   414,
     415,   465,   466,   175,   257,   219,   196,   469,   470,   471,
     219,   219,   472,   219,   473,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   435,   436,   477,   478,   479,
     257,   257,   480,   196,   482,    12,   219,   197,   196,   196,
     220,   220,   220,   134,   197,   197,    -4,   220,     0,    -4,
      -4,    -4,    -4,   375,   376,     0,   378,     0,     0,     0,
       0,   382,   383,     0,   385,   183,   184,   258,     0,     0,
     185,     0,   186,   228,   188,   189,   229,   230,   231,   399,
     400,     0,   402,     0,     0,     0,   190,     0,     0,   240,
     241,    38,    39,     0,   242,    40,   243,   244,   245,   246,
     247,   248,   249,   197,     0,   420,   421,     0,   423,     0,
     250,     0,     0,   258,     0,    38,    39,   -30,     0,    40,
       0,   -30,   -30,   292,   293,   197,     0,   -39,   -39,     0,
       0,   442,   -39,     0,   -39,   -39,   -39,   -39,   175,   -88,
     -88,   175,     0,     0,   -88,   -88,   -88,   -88,   -39,     0,
       0,   196,     0,   -39,   -39,     0,   175,   -39,     0,     0,
       0,   -40,   -40,   197,     0,     0,   -40,     0,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,     0,     0,   175,     0,
       0,     0,   -40,     0,     0,     0,   220,   -40,   -40,   -33,
       0,   -40,     0,   -33,   -33,   -33,   -33,     0,     0,     0,
      25,    26,   175,   175,   258,    30,     0,    31,   180,    32,
      33,     0,     0,   -36,     0,     0,   175,   -36,   -36,   -36,
     -36,    37,     0,   -41,   258,     0,    38,    39,     0,     0,
      40,   197,   -41,   -41,   -41,   -41,   -41,   -41,   333,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,   334,     0,
       0,     0,     0,   220,   220,     0,   220,     0,   175,   175,
       0,   220,   220,     0,   220,     0,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,     0,   258,   220,
     220,     0,   220,     0,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,     0,     0,   176,   258,
     220,   197,     0,     0,     0,   220,   220,     0,   220,     0,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,     0,     0,     0,   258,   258,     0,   197,     0,
       0,   220,   198,   197,   197,   221,   221,   221,     0,   198,
     198,     0,   221,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   259,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,   -45,     0,     0,   -66,   -45,   -45,
     -45,   -45,   -66,   -66,     0,     0,   -66,     0,     0,   -66,
     -66,     0,   183,   184,     0,     0,     0,   185,   198,   186,
     187,   188,   189,     0,     0,   -54,     0,     0,   259,   -54,
     -54,   -54,   -54,   190,     0,     0,     0,     0,    38,    39,
     198,   -37,    40,     0,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,   176,    25,    26,   176,     0,     0,    30,
       0,    31,   164,    32,    33,     0,   197,     0,     0,     0,
       0,   176,     0,     0,     0,    37,     0,     0,   198,     0,
      38,    39,   202,   203,    40,     0,   -22,   204,     0,   205,
     330,   207,   208,   176,     0,   -22,   -22,   -22,   -22,   322,
     323,   221,     0,   212,   324,   325,   240,   241,    38,    39,
       0,   242,    40,   243,   356,   245,   246,   176,   176,   259,
      -5,     0,     0,    -5,    -5,    -5,    -5,   250,     0,     0,
       0,   176,    38,    39,     0,     0,    40,     0,     0,   259,
     202,   203,     0,     0,   -25,   204,   198,   205,   206,   207,
     208,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   212,   -25,   -25,   326,   327,    38,    39,   221,   221,
      40,   221,     0,   176,   176,     0,   221,   221,     0,   221,
       0,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,     0,   259,   221,   221,     0,   221,     0,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,     0,     0,   177,   259,   221,   198,     0,     0,     0,
     221,   221,     0,   221,     0,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,     0,     0,     0,
     259,   259,     0,   198,     0,     0,   221,   199,   198,   198,
     223,   223,   223,     0,   199,   199,     0,   223,     0,     0,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   158,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   261,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,   -31,
       0,     0,   -80,   -31,   -31,   292,   293,   -80,   -80,     0,
       0,   -80,     0,     0,   -80,   -80,     0,   183,   184,     0,
       0,     0,   185,   199,   186,   228,   188,   189,     0,     0,
     -32,     0,     0,   261,   -32,   -32,   292,   293,   190,     0,
       0,     0,     0,    38,    39,   199,   -44,    40,     0,     0,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,   177,   240,
     241,   177,     0,     0,   242,     0,   243,   244,   245,   246,
       0,   198,     0,     0,     0,     0,   177,     0,     0,     0,
     250,   -88,     0,   199,     0,    38,    39,     0,     0,    40,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   177,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   223,   -23,   -23,   -23,
     -23,    89,    90,     0,     0,     0,    91,    92,     0,   -41,
       0,     0,   177,   177,   261,     0,   -23,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   333,     0,   177,   -41,   -41,   -41,
     -41,   -41,   -41,   -42,   261,     0,     0,     0,     0,     0,
       0,   199,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,     0,   223,   223,     0,   223,     0,   177,   177,
       0,   223,   223,     0,   223,     0,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,     0,   261,   223,
     223,     0,   223,     0,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,     0,     0,   178,   261,
     223,   199,     0,     0,     0,   223,   223,     0,   223,     0,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,     0,     0,     0,   261,   261,     0,   199,     0,
       0,   223,   200,   199,   199,   224,   224,   224,     0,   200,
     200,     0,   224,     0,     0,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   262,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,   -34,     0,     0,   -67,   -34,   -34,
     -34,   -34,   -67,   -67,     0,     0,   -67,     0,   -35,   -67,
     -67,   -43,   -35,   -35,   -35,   -35,     0,     0,   200,     0,
     -43,   -43,   -43,   -43,   -43,   -43,     0,     0,   262,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
     200,   -24,   -24,   -24,   -24,    89,    90,     0,     0,     0,
      91,    92,     0,   178,     0,     0,   178,     0,     0,     0,
     -24,     0,     0,   -30,    -6,     0,   199,    -6,    -6,    -6,
      -6,   178,   -30,   -30,   -30,   -30,   -30,   -30,   200,     0,
       0,   -30,   -30,   -30,   -30,   328,   329,   -28,   -28,   -28,
     -28,   -28,   -28,   178,     0,     0,   -28,   -28,    93,    94,
       0,   224,   -33,   -53,     0,     0,   -28,   -53,   -53,   -53,
     -53,   -33,   -33,   -33,   -33,   -33,   -33,   178,   178,   262,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -56,     0,
       0,   178,   -56,   -56,   -56,   -56,   -57,     0,   -36,   262,
     -57,   -57,   -57,   -57,     0,     0,   200,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,   224,   224,
       0,   224,     0,   178,   178,     0,   224,   224,     0,   224,
       0,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,     0,   262,   224,   224,     0,   224,     0,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,     0,     0,   173,   262,   224,   200,     0,     0,     0,
     224,   224,     0,   224,     0,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,     0,     0,     0,
     262,   262,     0,   200,     0,     0,   224,   195,   200,   200,
     218,   218,   218,   -45,   195,   195,     0,   218,     0,     0,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   127,
     128,   -45,   -45,   -45,   -45,   -45,   -45,   256,     0,     0,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,    -3,     0,     0,    -3,    -3,
      -3,    -3,   -77,   195,     0,     0,     0,   -77,   -77,     0,
       0,   -77,   -55,   256,   -77,   -77,   -55,   -55,   -55,   -55,
       0,   -54,     0,     0,     0,   195,     0,     0,    82,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -23,     0,   173,   -54,
     -54,   -54,   -54,   -54,   -54,   -23,   -23,   -23,   -23,   322,
     323,   200,     0,   -58,   324,   325,   173,   -58,   -58,   -58,
     -58,     0,   194,     0,     0,   217,   217,   217,     0,   194,
     194,     0,   217,     0,     0,   -37,     0,     0,   173,     0,
     123,   124,   125,   126,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,   255,   -37,   -37,   -37,   -37,   -37,   -37,   -44,
       0,     0,   336,   337,   256,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   173,   -44,   -44,   -44,
     -44,   -44,   -44,   -31,     0,     0,     0,     0,   194,     0,
       0,   195,   -31,   -31,   -31,   -31,   -31,   -31,   255,     0,
       0,   -31,   -31,   -31,   -31,   328,   329,     0,     0,     0,
     194,     0,     0,   218,   218,     0,   218,     0,     0,     0,
       0,   218,   218,   291,   218,     0,   195,   195,   195,   195,
     195,   195,   195,   394,   395,     0,     0,     0,   256,   218,
     218,   299,   218,     0,   218,   218,   218,   218,   218,   218,
     218,   218,   412,   413,     0,     0,     0,     0,     0,   256,
     218,   195,     0,   317,     0,   218,   218,     0,   218,     0,
     256,   256,   256,   256,   256,   256,   256,   256,   433,   434,
       0,     0,     0,     0,     0,   256,   256,     0,   195,   255,
       0,   218,   193,   195,   195,   216,   216,   216,     0,   193,
     193,   343,   216,     0,     0,     0,     0,    -7,   121,   122,
      -7,    -7,    -7,    -7,   -32,   -70,   194,     0,   -70,   -70,
     -70,   -70,   254,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,   -32,   -32,   -32,   328,   329,   217,   217,
       0,   217,     0,     0,     0,     0,   217,   217,     0,   217,
       0,   194,   194,   194,   390,   391,   392,   393,   193,     0,
       0,     0,     0,   255,   217,   217,     0,   217,   254,   217,
     217,   217,   217,   408,   409,   410,   411,     0,     0,     0,
     193,     0,     0,     0,   255,   217,   194,     0,     0,     0,
     217,   217,     0,   217,     0,   255,   255,   255,   255,   429,
     430,   431,   432,     0,     0,     0,   195,     0,     0,     0,
     255,   255,     0,   194,     0,     0,   217,   192,   194,   194,
     215,   215,   215,     0,   192,   192,     0,   215,     0,     0,
     -34,   -65,   120,     0,   -65,   -65,   -65,   -65,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   253,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -71,   254,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   192,     0,     0,   193,     0,     0,     0,
     -71,     0,     0,   253,     0,   -71,   -71,     0,     0,   -71,
       0,     0,   -71,   -71,     0,   192,     0,     0,   216,   216,
       0,   216,     0,     0,     0,     0,   216,   216,     0,   216,
       0,   193,   388,   389,   -64,     0,     0,   -64,   -64,   -64,
     -64,   194,     0,   254,   216,   216,     0,   216,     0,   216,
     216,   406,   407,   191,     0,     0,   214,   214,   214,     0,
     191,   191,     0,   214,   254,   216,   193,   119,     0,     0,
     216,   216,     0,   216,     0,   254,   254,   427,   428,     0,
       0,     0,     0,   252,     0,     0,     0,     0,     0,     0,
     254,   254,   -35,   193,   253,     0,   216,     0,   193,   193,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,   191,
       0,   192,     0,   -42,   -42,   -42,   -42,   -42,   -42,   252,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,   191,   -42,   215,   215,     0,   215,     0,   -24,     0,
       0,   215,   215,     0,   215,     0,   387,   -24,   -24,   -24,
     -24,   322,   323,     0,     0,     0,   324,   325,   253,   215,
     215,     0,   215,     0,   215,   405,   106,     0,     0,   213,
     213,   213,     0,   232,   232,     0,   213,     0,     0,   253,
     215,   192,     0,     0,     0,   215,   215,     0,   215,     0,
     253,   426,     0,     0,     0,     0,   251,     0,     0,     0,
       0,   193,     0,     0,     0,   253,   253,   -56,   192,     0,
     252,   215,     0,   192,   192,     0,   -56,   -56,   -56,   -56,
     -56,   -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   232,     0,     0,     0,     0,   361,     0,     0,
       0,     0,   251,     0,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,   232,   -29,   -29,    93,    94,   214,
     214,     0,   214,     0,     0,   -29,     0,   214,   214,     0,
     214,     0,   225,   225,   225,     0,   234,   234,     0,   225,
       0,     0,     0,   -28,   252,   214,   214,     0,   214,     0,
     404,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,   263,
     133,   -28,   -28,   326,   327,   252,   214,   191,     0,   -29,
       0,   214,   214,     0,   214,     0,   425,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   192,   -29,   -29,   326,
     327,   252,   252,   251,   191,   234,     0,   214,     0,   191,
     191,     0,     0,     0,     0,   263,   -22,   -22,   -22,   -22,
     348,   349,     0,   -22,   -22,   350,   351,   234,     0,   -26,
     222,   222,   222,     0,   233,   233,     0,   222,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,   -26,   -26,   326,
     327,     0,   213,   213,     0,   213,     0,   260,     0,     0,
     213,   213,     0,   213,   -23,   -23,   -23,   -23,   348,   349,
       0,   -23,   -23,   350,   351,     0,   -27,   251,   213,   213,
       0,   213,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,   233,   -27,   -27,   326,   327,   251,   213,
     232,     0,     0,   260,   213,   213,   263,   213,     0,   -26,
     -26,   -26,   -26,   -26,   -26,   233,     0,     0,   -26,   -26,
      93,    94,   191,     0,   251,   251,   -57,   439,   -26,     0,
     213,     0,   232,   232,     0,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,     0,   225,   225,     0,   225,     0,
       0,     0,     0,   225,   225,     0,   225,     0,     0,   -22,
     -22,   -22,   -22,   303,   304,     0,   -22,   -55,   305,   306,
     263,   225,   225,     0,   225,     0,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,   260,   -55,   -55,   -55,   -55,   -55,
     -55,   263,   417,   418,     0,     0,     0,   225,   225,     0,
     225,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   263,   438,     0,
     -88,     0,     0,   225,     0,   234,   234,     0,     0,     0,
       0,     0,     0,   222,   222,   232,   222,     0,     0,     0,
       0,   222,   222,     0,   222,     0,   -23,   -23,   -23,   -23,
     303,   304,     0,   -23,   -58,   305,   306,     0,   260,   222,
     222,     0,   222,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,     0,   260,
     -53,     0,     0,     0,     0,   222,   222,     0,   222,   -53,
     -53,   -53,   -53,   -53,   -53,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   260,     0,     0,     0,     0,
       0,   222,     0,   233,   233,     0,     0,     0,     0,     0,
       0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   234,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,   -72,   -72,
       0,     0,   -72,     0,     0,   -72,   -72,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,   -73,
       0,     0,     0,     0,   -73,   -73,     0,     0,   -73,     0,
       0,   -73,   -73,   -24,   -24,   -24,   -24,   348,   349,     0,
     -24,   -24,   350,   351,     0,   -74,   233,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -74,     0,     0,
       0,     0,   -74,   -74,     0,     0,   -74,     0,     0,   -74,
     -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,   -75,   -75,
       0,     0,   -75,     0,     0,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,   -76,   -76,     0,     0,   -76,     0,
       0,   -76,   -76,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,     0,   -65,     0,     0,     0,     0,
     -65,   -65,     0,     0,   -65,     0,     0,   -65,   -65,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,     0,     0,     0,   -78,   -78,     0,     0,
     -78,     0,     0,   -78,   -78,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   -87,     0,     0,
       0,     0,   -87,   -87,     0,     0,   -87,     0,     0,   -87,
     -87,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,   -64,   -64,
       0,     0,   -64,     0,     0,   -64,   -64,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -70,
       0,     0,     0,     0,   -70,   -70,     0,     0,   -70,     0,
       0,   -70,   -70,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,   -83,     0,     0,     0,     0,
     -83,   -83,     0,     0,   -83,     0,     0,   -83,   -83,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,   -86,   -86,     0,     0,
     -86,     0,     0,   -86,   -86,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
       0,     0,   -85,   -85,     0,     0,   -85,     0,     0,   -85,
     -85,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,   -84,     0,     0,     0,     0,   -84,   -84,
       0,     0,   -84,     0,     0,   -84,   -84,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,   -82,
       0,     0,     0,     0,   -82,   -82,     0,     0,   -82,     0,
       0,   -82,   -82,    20,     0,     1,     2,     3,     4,    21,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,    31,   164,    32,    33,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,    39,     0,     0,    40,     0,     0,    41,   -47,   -77,
       0,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,   -77,     0,     0,     0,     0,   -77,   -77,     0,     0,
     -77,     0,     0,   -77,   -77,    20,     0,     1,     2,     3,
       4,    21,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,    31,   164,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,    39,     0,     0,    40,     0,     0,    99,
     -47,   -71,     0,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,   -71,     0,     0,     0,     0,   -71,   -71,
       0,     0,   -71,     0,     0,   -71,   -71,   -69,     0,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,     0,     0,     0,   -69,   -69,     0,     0,   -69,     0,
       0,   -69,   -69,   -72,     0,   -72,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,   -72,     0,     0,     0,     0,
     -72,   -72,     0,     0,   -72,     0,     0,   -72,   -72,   -73,
       0,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,   -73,   -73,     0,     0,
     -73,     0,     0,   -73,   -73,   -74,     0,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -74,     0,     0,
       0,     0,   -74,   -74,     0,     0,   -74,     0,     0,   -74,
     -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,   -75,   -75,
       0,     0,   -75,     0,     0,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,   -76,   -76,     0,     0,   -76,     0,
       0,   -76,   -76,   -78,     0,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,     0,   -78,     0,     0,     0,     0,
     -78,   -78,     0,     0,   -78,     0,     0,   -78,   -78,   -68,
       0,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,   -68,     0,     0,
     -68,     0,     0,   -68,   -68,   -87,     0,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   -87,     0,     0,
       0,     0,   -87,   -87,     0,     0,   -87,     0,     0,   -87,
     -87,   266,     0,     1,     2,     3,     4,   267,     0,   268,
     269,   270,    25,    26,   271,   272,   273,    30,     0,    31,
     164,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,    39,
       0,     0,    40,     0,   274,    20,   -47,     1,     2,     3,
       4,    21,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,    31,   164,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,    39,     0,     0,    40,     0,   283,   -83,
     -47,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,     0,   -83,   -83,     0,     0,
     -83,     0,     0,   -83,   -83,   -86,     0,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,   -86,   -86,     0,     0,   -86,     0,     0,   -86,
     -86,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,   -85,     0,     0,     0,     0,   -85,   -85,
       0,     0,   -85,     0,     0,   -85,   -85,   -84,     0,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,     0,   -84,   -84,     0,     0,   -84,     0,
       0,   -84,   -84,   -81,     0,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
     -81,   -81,     0,     0,   -81,     0,     0,   -81,   -81,   -82,
       0,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,     0,   -82,   -82,     0,     0,
     -82,     0,     0,   -82,   -82,   -70,     0,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,   -70,     0,     0,
       0,     0,   -70,   -70,     0,     0,   -70,     0,     0,   -70,
     -70,    20,     0,     1,     2,     3,     4,    21,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,    31,
     164,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,    39,
       0,     0,    40,     0,     0,   369,   -47,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   164,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,     0,
       0,   373,   -47,   -66,     0,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,   -66,     0,     0,     0,     0,
     -66,   -66,     0,     0,   -66,     0,     0,   -66,   -66,   -67,
       0,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,     0,   -67,   -67,     0,     0,
     -67,     0,     0,   -67,   -67,    20,     0,     1,     2,     3,
       4,    21,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,    31,   164,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,    39,     0,     0,    40,     0,     0,   446,
     -47,   -65,     0,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,     0,   -65,     0,     0,     0,     0,   -65,   -65,
       0,     0,   -65,     0,     0,   -65,   -65,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   164,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,     0,
       0,   448,   -47,   -64,     0,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,   -64,     0,     0,     0,     0,
     -64,   -64,     0,     0,   -64,     0,     0,   -64,   -64,   -80,
       0,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,     0,
       0,   -80,     0,     0,     0,     0,   -80,   -80,     0,     0,
     -80,     0,     0,   -80,   -80,   -41,   -41,   -41,   -41,   -41,
     -41,   101,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   102,     0,     0,   -41,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,     0,     0,   -88,   -41,   -41,   -41,   -41,   -41,
     -41,   101,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,   -41,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,   -43,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,   -30,   -30,   -30,   -30,    95,    96,
       0,     0,     0,     0,   -30,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,   -36,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,   -45,   -54,   -54,   -54,   -54,   -54,
     -54,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,     0,     0,   -54,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,   -37,   -44,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,   -44,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,   -31,   -31,   -31,    95,    96,
       0,     0,     0,     0,   -31,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,   -32,   -32,   -32,   -32,    95,    96,
       0,     0,     0,     0,   -32,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,   -34,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,     0,     0,   -56,   -57,   -57,   -57,   -57,   -57,
     -57,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
       0,     0,     0,     0,   -57,   -55,   -55,   -55,   -55,   -55,
     -55,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,     0,     0,   -55,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,     0,   -58,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,     0,   -53,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,   -27,   -27,    93,    94,     0,     0,
       0,     0,     0,     0,   -27,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -41,   -41,   -41,   -41,   -41,   -41,   359,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   360,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -41,   -41,   -41,   -41,
     -41,   -41,   312,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   335,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -41,   -41,
     -41,   -41,   -41,   -41,   359,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -41,   -41,
     -41,   -41,   -41,   -41,   312,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   354,   355,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -54,   -54,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   354,   355,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   354,   355,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -56,   -56,
     -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -58,   -58,   -58,   -58,   -58,   -58,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   -30,   -30,   309,   310,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -54,   -54,   -54,   -54,   -54,   -54,     0,
     -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,
     -31,   309,   310,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,   309,   310,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -56,   -56,
     -56,   -56,   -56,   -56,     0,   -56,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   -55,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -58,   -58,   -58,   -58,   -58,   -58,     0,
     -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -53,   -53,
     -53,   -53,   -53,   -53,     0,   -53,     0,   -53,   -53,   -53,
     -53,   -53,   -53,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   352,   353,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   352,   353,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     352,   353,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   352,   353,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   352,   353,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   307,
     308,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,
     -28,   -28,   307,   308,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,   -29,   -29,   307,   308,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   307,   308,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,
     -27,   307,   308,   -24,   -24,   -24,   -24,   303,   304,     0,
     -24,     0,   305,   306
};

static const yytype_int16 yycheck[] =
{
       0,     0,     9,    14,    20,    27,     6,     6,    27,    28,
      20,    16,    34,    72,    27,    28,   135,   238,    18,     3,
       4,     5,     6,    27,    28,    29,    30,    46,    20,   135,
      37,    12,    13,    46,    20,    42,    17,    27,    19,    20,
      21,    22,    46,    50,    27,    28,    29,    30,     0,   135,
      34,    44,    33,    58,    20,   135,    46,    38,    39,   135,
      67,    42,    33,    46,    71,    34,    35,    74,    75,    76,
      77,    78,    79,    80,    81,    46,   135,   136,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      33,   312,    18,    33,   101,    18,   138,    18,    34,    35,
     159,    27,    28,    46,    27,   105,    27,    28,    23,   274,
      27,    28,   333,    18,    34,    35,   158,    34,   283,    27,
     162,    27,    27,    28,    29,    30,    34,   138,    34,    35,
     137,    33,    18,   138,    33,   135,   135,    33,   359,    27,
     147,    27,    28,    29,    30,    46,    34,   158,    27,    28,
      33,   162,   159,   158,    46,    34,    35,   162,    33,    74,
      75,    76,    33,    78,    79,   172,    81,    33,   175,    27,
      28,    29,    30,    31,    32,    27,    28,    33,    36,    37,
      38,    39,    34,   190,    34,    35,   101,    33,    46,    34,
     197,    12,    13,    38,    39,    46,    17,    20,    19,    20,
      21,    22,    23,    24,    25,   212,    46,    27,    28,    29,
      30,    46,    33,   220,    34,    35,    46,    38,    39,    27,
      28,    42,   137,    34,    35,    46,    34,    35,    46,   236,
     237,   238,   147,    34,    35,    27,    28,    29,    30,    20,
      12,    13,    34,   250,   159,    17,    34,    19,    20,    21,
      22,   258,    27,    28,    29,    30,    34,    35,   265,    34,
      35,    33,     3,     4,     5,     6,    38,    39,   275,   274,
      42,    34,    27,    28,    29,    30,    34,    35,   283,    34,
     287,   288,   289,   290,    46,   292,   293,    20,   295,   296,
     297,   298,    46,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   363,   312,   313,   314,   315,   316,
      44,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   238,    46,    34,   333,   334,   335,    38,
      39,    18,   339,   340,   341,   342,    34,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   468,
      34,   470,   359,   360,   269,   362,    34,    35,   365,   366,
     367,   368,   468,   482,   470,   370,    34,    34,    35,   374,
      38,    39,   287,   288,    34,   290,   482,    34,    37,    34,
     295,   296,   468,   298,   470,    34,    35,    34,   468,    34,
     470,    50,   468,    34,   470,    46,   482,   312,   313,   314,
      34,   316,   482,    34,    38,    39,   482,    38,    39,   468,
     469,   470,    71,    34,    35,    74,    75,    76,   333,    78,
      79,   480,    81,   482,   339,   340,   468,   342,   470,    27,
      28,    29,    30,    31,    32,    34,    95,    96,    36,    37,
     482,    46,   101,    46,   359,    34,    35,    34,    46,    46,
     365,    46,   367,   368,    12,    13,    34,    35,    34,    17,
      33,    19,    20,    21,    22,    23,    24,    25,   468,   468,
     470,   470,    33,   480,    33,    33,    34,    35,   137,    33,
      38,    39,   482,   482,    42,    33,    34,    33,   147,    46,
      38,    39,    40,    41,    34,    35,    33,    12,    13,    33,
     159,    33,    17,    33,    19,    20,    21,    22,    23,    24,
      25,    75,    76,   172,    34,    35,   175,    81,    33,    34,
      33,    33,    33,    38,    39,    18,    18,    42,    34,    18,
      18,   190,    38,    39,    40,    41,    12,    13,   197,    18,
      34,    17,    33,    19,    20,    21,    22,    23,    24,    25,
      34,    34,    34,   212,    34,    18,    34,    33,    33,    33,
      33,   220,    38,    39,    34,   480,    42,    33,    38,    39,
      40,    41,    33,    33,    33,    12,    13,   236,   237,   238,
      17,    33,    19,    20,    21,    22,    23,    24,    25,     0,
      33,   250,     3,     4,     5,     6,    33,    46,    18,   258,
      34,    38,    39,    34,    46,    42,   265,    27,    28,    29,
      30,    31,    32,    33,    46,    34,    36,    37,    38,    39,
      40,    41,    34,    43,    34,    34,    34,    34,   287,   288,
      34,   290,    34,   292,   293,    34,   295,   296,    34,   298,
      34,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,    34,   312,   313,   314,    34,   316,    34,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,    34,    34,    37,   333,   334,   335,    46,    34,    34,
     339,   340,    34,   342,    34,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    46,    46,    46,
     359,   360,    46,   362,    34,     6,   365,    71,   367,   368,
      74,    75,    76,   105,    78,    79,     0,    81,    -1,     3,
       4,     5,     6,   287,   288,    -1,   290,    -1,    -1,    -1,
      -1,   295,   296,    -1,   298,    12,    13,   101,    -1,    -1,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,   313,
     314,    -1,   316,    -1,    -1,    -1,    33,    -1,    -1,    12,
      13,    38,    39,    -1,    17,    42,    19,    20,    21,    22,
      23,    24,    25,   137,    -1,   339,   340,    -1,   342,    -1,
      33,    -1,    -1,   147,    -1,    38,    39,    34,    -1,    42,
      -1,    38,    39,    40,    41,   159,    -1,    12,    13,    -1,
      -1,   365,    17,    -1,    19,    20,    21,    22,   172,    33,
      34,   175,    -1,    -1,    38,    39,    40,    41,    33,    -1,
      -1,   480,    -1,    38,    39,    -1,   190,    42,    -1,    -1,
      -1,    12,    13,   197,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,    -1,    33,    -1,    -1,    -1,   220,    38,    39,    34,
      -1,    42,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      12,    13,   236,   237,   238,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    34,    -1,    -1,   250,    38,    39,    40,
      41,    33,    -1,    18,   258,    -1,    38,    39,    -1,    -1,
      42,   265,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      -1,    -1,    -1,   287,   288,    -1,   290,    -1,   292,   293,
      -1,   295,   296,    -1,   298,    -1,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,    -1,   312,   313,
     314,    -1,   316,    -1,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,    -1,    -1,    37,   333,
     334,   335,    -1,    -1,    -1,   339,   340,    -1,   342,    -1,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,    -1,    -1,    -1,   359,   360,    -1,   362,    -1,
      -1,   365,    71,   367,   368,    74,    75,    76,    -1,    78,
      79,    -1,    81,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   101,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,    -1,    12,    13,    -1,    -1,    -1,    17,   137,    19,
      20,    21,    22,    -1,    -1,    34,    -1,    -1,   147,    38,
      39,    40,    41,    33,    -1,    -1,    -1,    -1,    38,    39,
     159,    34,    42,    -1,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,   172,    12,    13,   175,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    -1,   480,    -1,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    33,    -1,    -1,   197,    -1,
      38,    39,    12,    13,    42,    -1,    18,    17,    -1,    19,
      20,    21,    22,   212,    -1,    27,    28,    29,    30,    31,
      32,   220,    -1,    33,    36,    37,    12,    13,    38,    39,
      -1,    17,    42,    19,    20,    21,    22,   236,   237,   238,
       0,    -1,    -1,     3,     4,     5,     6,    33,    -1,    -1,
      -1,   250,    38,    39,    -1,    -1,    42,    -1,    -1,   258,
      12,    13,    -1,    -1,    18,    17,   265,    19,    20,    21,
      22,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    33,    36,    37,    38,    39,    38,    39,   287,   288,
      42,   290,    -1,   292,   293,    -1,   295,   296,    -1,   298,
      -1,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,    -1,   312,   313,   314,    -1,   316,    -1,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,    -1,    -1,    37,   333,   334,   335,    -1,    -1,    -1,
     339,   340,    -1,   342,    -1,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    -1,    -1,    -1,
     359,   360,    -1,   362,    -1,    -1,   365,    71,   367,   368,
      74,    75,    76,    -1,    78,    79,    -1,    81,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   101,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    -1,    -1,    45,    46,    -1,    12,    13,    -1,
      -1,    -1,    17,   137,    19,    20,    21,    22,    -1,    -1,
      34,    -1,    -1,   147,    38,    39,    40,    41,    33,    -1,
      -1,    -1,    -1,    38,    39,   159,    34,    42,    -1,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,   172,    12,
      13,   175,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,   480,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,
      33,    18,    -1,   197,    -1,    38,    39,    -1,    -1,    42,
      27,    28,    29,    30,    31,    32,    33,    -1,   212,    36,
      37,    38,    39,    40,    41,    -1,   220,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    -1,    18,
      -1,    -1,   236,   237,   238,    -1,    46,    -1,    27,    28,
      29,    30,    31,    32,    33,    -1,   250,    36,    37,    38,
      39,    40,    41,    18,   258,    -1,    -1,    -1,    -1,    -1,
      -1,   265,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,   287,   288,    -1,   290,    -1,   292,   293,
      -1,   295,   296,    -1,   298,    -1,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,    -1,   312,   313,
     314,    -1,   316,    -1,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,    -1,    -1,    37,   333,
     334,   335,    -1,    -1,    -1,   339,   340,    -1,   342,    -1,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,    -1,    -1,    -1,   359,   360,    -1,   362,    -1,
      -1,   365,    71,   367,   368,    74,    75,    76,    -1,    78,
      79,    -1,    81,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   101,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    -1,    34,    45,
      46,    18,    38,    39,    40,    41,    -1,    -1,   137,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,   147,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
     159,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    -1,   172,    -1,    -1,   175,    -1,    -1,    -1,
      46,    -1,    -1,    18,     0,    -1,   480,     3,     4,     5,
       6,   190,    27,    28,    29,    30,    31,    32,   197,    -1,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,   212,    -1,    -1,    36,    37,    38,    39,
      -1,   220,    18,    34,    -1,    -1,    46,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,   236,   237,   238,
      36,    37,    38,    39,    40,    41,    -1,    -1,    34,    -1,
      -1,   250,    38,    39,    40,    41,    34,    -1,    18,   258,
      38,    39,    40,    41,    -1,    -1,   265,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   287,   288,
      -1,   290,    -1,   292,   293,    -1,   295,   296,    -1,   298,
      -1,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,    -1,   312,   313,   314,    -1,   316,    -1,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,    -1,    -1,    37,   333,   334,   335,    -1,    -1,    -1,
     339,   340,    -1,   342,    -1,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,    -1,    -1,    -1,
     359,   360,    -1,   362,    -1,    -1,   365,    71,   367,   368,
      74,    75,    76,    18,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    93,
      94,    36,    37,    38,    39,    40,    41,   101,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,     0,    -1,    -1,     3,     4,
       5,     6,    33,   137,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    34,   147,    45,    46,    38,    39,    40,    41,
      -1,    18,    -1,    -1,    -1,   159,    -1,    -1,    37,    -1,
      27,    28,    29,    30,    31,    32,    18,    -1,   172,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,   480,    -1,    34,    36,    37,   190,    38,    39,    40,
      41,    -1,    71,    -1,    -1,    74,    75,    76,    -1,    78,
      79,    -1,    81,    -1,    -1,    18,    -1,    -1,   212,    -1,
      89,    90,    91,    92,    27,    28,    29,    30,    31,    32,
      -1,    -1,   101,    36,    37,    38,    39,    40,    41,    18,
      -1,    -1,   236,   237,   238,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,   250,    36,    37,    38,
      39,    40,    41,    18,    -1,    -1,    -1,    -1,   137,    -1,
      -1,   265,    27,    28,    29,    30,    31,    32,   147,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
     159,    -1,    -1,   287,   288,    -1,   290,    -1,    -1,    -1,
      -1,   295,   296,   172,   298,    -1,   300,   301,   302,   303,
     304,   305,   306,   307,   308,    -1,    -1,    -1,   312,   313,
     314,   190,   316,    -1,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,    -1,    -1,    -1,    -1,    -1,   333,
     334,   335,    -1,   212,    -1,   339,   340,    -1,   342,    -1,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
      -1,    -1,    -1,    -1,    -1,   359,   360,    -1,   362,   238,
      -1,   365,    71,   367,   368,    74,    75,    76,    -1,    78,
      79,   250,    81,    -1,    -1,    -1,    -1,     0,    87,    88,
       3,     4,     5,     6,    18,     0,   265,    -1,     3,     4,
       5,     6,   101,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,   287,   288,
      -1,   290,    -1,    -1,    -1,    -1,   295,   296,    -1,   298,
      -1,   300,   301,   302,   303,   304,   305,   306,   137,    -1,
      -1,    -1,    -1,   312,   313,   314,    -1,   316,   147,   318,
     319,   320,   321,   322,   323,   324,   325,    -1,    -1,    -1,
     159,    -1,    -1,    -1,   333,   334,   335,    -1,    -1,    -1,
     339,   340,    -1,   342,    -1,   344,   345,   346,   347,   348,
     349,   350,   351,    -1,    -1,    -1,   480,    -1,    -1,    -1,
     359,   360,    -1,   362,    -1,    -1,   365,    71,   367,   368,
      74,    75,    76,    -1,    78,    79,    -1,    81,    -1,    -1,
      18,     0,    86,    -1,     3,     4,     5,     6,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,   101,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,     1,   238,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,   137,    -1,    -1,   265,    -1,    -1,    -1,
      33,    -1,    -1,   147,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,    -1,   159,    -1,    -1,   287,   288,
      -1,   290,    -1,    -1,    -1,    -1,   295,   296,    -1,   298,
      -1,   300,   301,   302,     0,    -1,    -1,     3,     4,     5,
       6,   480,    -1,   312,   313,   314,    -1,   316,    -1,   318,
     319,   320,   321,    71,    -1,    -1,    74,    75,    76,    -1,
      78,    79,    -1,    81,   333,   334,   335,    85,    -1,    -1,
     339,   340,    -1,   342,    -1,   344,   345,   346,   347,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
     359,   360,    18,   362,   238,    -1,   365,    -1,   367,   368,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,   137,
      -1,   265,    -1,    27,    28,    29,    30,    31,    32,   147,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,   159,    46,   287,   288,    -1,   290,    -1,    18,    -1,
      -1,   295,   296,    -1,   298,    -1,   300,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    37,   312,   313,
     314,    -1,   316,    -1,   318,   319,    71,    -1,    -1,    74,
      75,    76,    -1,    78,    79,    -1,    81,    -1,    -1,   333,
     334,   335,    -1,    -1,    -1,   339,   340,    -1,   342,    -1,
     344,   345,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   480,    -1,    -1,    -1,   359,   360,    18,   362,    -1,
     238,   365,    -1,   367,   368,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,   137,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,   159,    36,    37,    38,    39,   287,
     288,    -1,   290,    -1,    -1,    46,    -1,   295,   296,    -1,
     298,    -1,    74,    75,    76,    -1,    78,    79,    -1,    81,
      -1,    -1,    -1,    18,   312,   313,   314,    -1,   316,    -1,
     318,    -1,    27,    28,    29,    30,    31,    32,    -1,   101,
     102,    36,    37,    38,    39,   333,   334,   335,    -1,    18,
      -1,   339,   340,    -1,   342,    -1,   344,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,   480,    36,    37,    38,
      39,   359,   360,   238,   362,   137,    -1,   365,    -1,   367,
     368,    -1,    -1,    -1,    -1,   147,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,   159,    -1,    18,
      74,    75,    76,    -1,    78,    79,    -1,    81,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    -1,   287,   288,    -1,   290,    -1,   101,    -1,    -1,
     295,   296,    -1,   298,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    -1,    18,   312,   313,   314,
      -1,   316,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,   137,    36,    37,    38,    39,   333,   334,
     335,    -1,    -1,   147,   339,   340,   238,   342,    -1,    27,
      28,    29,    30,    31,    32,   159,    -1,    -1,    36,    37,
      38,    39,   480,    -1,   359,   360,    18,   362,    46,    -1,
     365,    -1,   367,   368,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,   287,   288,    -1,   290,    -1,
      -1,    -1,    -1,   295,   296,    -1,   298,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,    18,    36,    37,
     312,   313,   314,    -1,   316,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,   238,    36,    37,    38,    39,    40,
      41,   333,   334,   335,    -1,    -1,    -1,   339,   340,    -1,
     342,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,   359,   360,    -1,
      46,    -1,    -1,   365,    -1,   367,   368,    -1,    -1,    -1,
      -1,    -1,    -1,   287,   288,   480,   290,    -1,    -1,    -1,
      -1,   295,   296,    -1,   298,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,    18,    36,    37,    -1,   312,   313,
     314,    -1,   316,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,   333,
      18,    -1,    -1,    -1,    -1,   339,   340,    -1,   342,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,   359,    -1,    -1,    -1,    -1,
      -1,   365,    -1,   367,   368,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   480,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    -1,     1,   480,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,     1,    46,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,     1,
      46,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    45,    46,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    43,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
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
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
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
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    48,    49,    50,    51,    52,
      76,     0,    50,    20,    53,    84,    44,    73,    33,    46,
       1,     7,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    19,    21,    22,    23,    24,    25,    33,    38,    39,
      42,    45,    52,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    72,    75,    76,
      77,    78,    80,    81,    82,    83,    84,    52,    54,    55,
      56,    33,    33,    67,    33,    33,    33,    33,    33,    33,
      33,    33,    61,    84,    84,    27,    28,    29,    30,    31,
      32,    36,    37,    38,    39,    40,    41,    63,    46,    45,
      77,    33,    43,    84,    34,    35,    57,    66,    46,    67,
      79,    79,    79,    84,    67,    67,    84,    79,    34,    58,
      59,    60,    60,    61,    61,    61,    61,    62,    62,    63,
      63,    67,    71,    72,    55,    34,    46,    18,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    35,    73,    74,
      77,    66,    67,    74,    46,    46,    46,    67,     8,    46,
      74,    66,    34,    74,    20,    12,    13,    17,    19,    20,
      21,    22,    33,    62,    63,    64,    65,    69,    70,    20,
      20,    84,    20,    12,    13,    17,    19,    20,    21,    22,
      33,    58,    59,    60,    61,    62,    63,    64,    65,    69,
      70,    84,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    68,    69,    70,    72,    84,    20,    20,    23,
      24,    25,    57,    68,    72,    84,    38,    39,    33,    46,
      12,    13,    17,    19,    20,    21,    22,    23,    24,    25,
      33,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      68,    69,    70,    72,    84,    27,     1,     7,     9,    10,
      11,    14,    15,    16,    44,    52,    66,    76,    78,    80,
      81,    82,    83,    44,    73,    77,    67,    33,    33,    33,
      33,    61,    40,    41,    63,    33,    33,    33,    33,    61,
      28,    29,    30,    31,    32,    36,    37,    38,    39,    40,
      41,    63,    33,    33,    33,    33,    33,    61,    27,    28,
      29,    30,    31,    32,    36,    37,    38,    39,    40,    41,
      20,    63,    84,    33,    43,    43,    62,    62,    71,    33,
      33,    33,    33,    61,    27,    28,    29,    30,    31,    32,
      36,    37,    38,    39,    40,    41,    20,    63,    84,    33,
      43,    58,    33,    33,    67,    33,    33,    33,    33,    45,
      75,    84,    46,    45,    75,    79,    79,    84,    79,    34,
      63,    63,    79,    79,    84,    79,    34,    59,    60,    60,
      61,    61,    61,    61,    62,    62,    63,    63,    71,    79,
      79,    84,    79,    34,    58,    59,    60,    60,    61,    61,
      61,    61,    62,    62,    63,    63,    71,    72,    72,    34,
      79,    79,    84,    79,    34,    58,    59,    60,    60,    61,
      61,    61,    61,    62,    62,    63,    63,    71,    72,    57,
      66,    46,    79,    84,    67,    67,    45,    46,    45,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    46,
      34,    34,    34,    34,    74,    66,    74,    46,    46,    46,
      46,    66,    34,    74
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
      76,    77,    77,    77,    77,    77,    77,    77,    78,    79,
      80,    80,    81,    81,    82,    82,    82,    83,    84
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
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
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
  case 77: /* statement: error  */
#line 163 "src/syntax/parser.y"
                { yyerrok; }
#line 2880 "./src/syntax/parser.c"
    break;


#line 2884 "./src/syntax/parser.c"

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

#line 191 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
