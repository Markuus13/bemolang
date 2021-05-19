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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  476

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
       0,    50,    50,    56,    59,    62,    63,    64,    67,    73,
      74,    75,    76,    79,    80,    83,    86,    92,    93,    98,
      99,   104,   105,   108,   113,   114,   117,   120,   123,   126,
     131,   134,   137,   138,   141,   146,   147,   150,   155,   156,
     161,   162,   163,   166,   167,   168,   169,   172,   175,   176,
     179,   180,   183,   188,   193,   200,   205,   206,   209,   214,
     219,   224,   231,   234,   235,   238,   239,   242,   245,   248,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   265,
     270,   273,   278,   281,   286,   289,   294,   297,   300,   305,
     310
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

#define YYPACT_NINF (-298)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     608,   -15,    -6,     2,    22,     5,    31,   867,   939,   947,
      29,  1100,  1172,    10,  -298,  1180,   -10,   530,   115,  1333,
      37,    45,    54,    56,   767,   806,    47,    57,    82,   699,
     562,   841,   916,    46,   837,  1000,  1050,  1070,    85,   109,
    1233,  1303,   280,   150,   149,   165,   817,   817,   189,   817,
      26,   177,  1050,  1050,  1050,  1050,  1466,  1658,   138,     3,
     172,   205,   193,   200,   203,   215,  1873,  2009,  2024,  2072,
    2082,  2096,    33,    65,   722,  3276,  1857,   699,  2125,  2173,
    2295,  2305,  2315,   881,   219,  3321,   222,   241,   530,   248,
     251,   257,   259,  1865,   206,   191,   250,  3366,  3411,  3456,
    3501,  3546,  3591,  3636,  3681,  3726,  3771,   492,   265,    78,
     258,    84,   256,   817,   189,   699,   699,   262,  3816,  1983,
    3861,  2050,   -21,    97,  2340,  5186,  4808,  2247,   269,  3906,
     270,   296,   304,   306,   258,  4581,   258,   258,   258,  1074,
    1074,  1074,  1074,  1114,    84,  4624,   298,   315,   319,   147,
    1789,  2369,  5197,  5208,  5134,  5147,  5160,  5173,  2472,   324,
    3951,  3996,  4041,  4086,  4624,   183,  4131,   322,  4624,  4176,
      -1,  1099,   316,   338,   351,   353,   877,   224,  1597,   357,
     360,   366,   699,  1700,  1920,  1149,  1956,  2912,  2957,  1523,
     132,   375,   380,   383,   391,    41,   -14,   192,   404,   413,
     415,   699,    23,   202,   271,  1283,   349,   420,   379,   403,
     151,   406,  1149,  1149,   412,   434,   435,   436,  1326,   665,
    1551,   144,   152,   210,   699,   159,  1559,  1748,  1307,  1840,
     217,  2058,  2221,  1494,  1035,  4221,    94,   438,   432,   530,
     445,   446,   450,   456,  1353,  1513,  1542,   699,  1586,  1614,
    1114,  1740,  1866,  1899,  1386,  4266,  1114,  1114,  2177,   459,
     460,   530,   461,   463,   466,   468,  4311,   206,   439,  2225,
    2287,  2408,  2453,  2511,  2556,  2601,  2646,  1268,   470,   474,
     475,   481,  4819,  4849,  4864,   699,  4879,  4894,  1074,  4909,
    4924,  4939,  4834,  1074,  1074,   482,   817,   817,   189,   817,
     114,   483,  1149,  1149,  3002,   138,   817,   817,   189,   817,
     180,   484,  1283,  1283,  1283,  1283,   408,   138,  3047,  3092,
     817,   817,   189,   817,   234,   486,  1307,  1307,  1307,  1307,
    2283,   138,  4356,  4401,   476,   817,   817,   189,   817,   339,
     488,  1114,  1114,  1939,   138,  4643,  4658,   258,    84,   490,
     817,   189,   699,   699,  2691,  4446,   495,  2736,   530,   817,
     817,   189,   817,   389,   493,  1074,  1074,  4954,   138,  4969,
    4984,   507,   510,   511,   512,  3137,  3182,  3227,  3272,   289,
     514,   526,   528,   531,   417,   421,   472,   518,   558,   568,
     311,   536,   537,   539,   543,  2349,  2404,  2507,  2552,  2597,
    2642,   328,  4491,  4536,   544,   546,   569,   571,  4673,  4688,
    4703,  4718,   369,   -18,   557,  2781,   576,   581,   584,   587,
    2826,  2871,   586,   592,   600,   601,   617,  4999,  5014,  5029,
    5044,   416,  3317,  3362,  3407,  3452,  3497,   599,   609,   648,
     652,   656,  2687,  2732,  2777,  2822,  2867,  4733,  4748,  4763,
    4778,  4793,  4581,    84,  4581,   610,   612,   615,  2916,  5059,
    5074,  5089,  5104,  5119,  2961,   620,  3006,  3051,  3096,  3141,
    4581,   183,  3186,   619,  4581,  3231
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -298,  -298,  -298,   647,  -298,    12,  -298,   588,   320,   534,
     533,   -92,  -298,  1809,  1708,   451,   684,   917,   -72,   171,
    2042,  1150,  1383,  -297,   -59,  -233,    11,   -95,    21,  -120,
     323,   -78,   -69,   -45,   -40,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    94,    44,    45,   122,   123,
     124,   125,   126,    33,    34,    35,    36,    37,    95,    61,
      39,    40,    41,    73,    97,    98,    99,   100,   101,   102,
      62,   103,   104,   105,   106,   210
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    76,   333,   120,   -44,    -9,   134,    13,   379,   134,
      16,    11,    10,   135,   -10,   272,   452,    42,    11,    10,
     390,    12,   -11,    18,   -44,   -44,   -44,   -44,    12,   189,
      43,    14,   -90,   355,   401,    19,    42,   -16,    74,   128,
     150,   -50,   -12,    59,   -90,   152,   153,   412,    64,   170,
     160,   -90,    42,    42,    42,    42,    17,   273,   233,   -90,
      66,   312,   313,   268,   212,   213,   274,   -63,   -63,   166,
      46,   431,   159,   169,   -90,   107,   269,   189,    47,   -90,
     -90,   -90,   -90,   233,    52,    53,    43,    48,    42,    49,
     275,   -50,   -54,   167,   117,   276,    20,    21,   107,    82,
      83,    22,   -53,    23,   171,    24,    25,    26,    27,    28,
     254,    42,   -62,   -62,   131,   189,   189,    29,     1,     2,
       3,     4,    30,    31,   -17,   136,    32,   -52,   -50,   -49,
      57,   -17,   212,   213,   254,   277,   254,   254,   254,   292,
     292,   292,   292,   254,    42,   107,   270,   267,   375,   -14,
     214,   215,   212,   213,   -51,   216,   271,   217,   218,   219,
     220,   221,   222,   223,   107,   189,   -90,   -90,   107,   -43,
     190,   224,   -64,   -64,   -18,   136,    30,    31,   -54,   -54,
      32,   -18,   189,    60,   317,   189,   -53,   -53,    38,   -43,
     -43,   -43,   -43,   -50,   -50,   172,   173,   326,   327,   -13,
     174,   189,   175,   176,   177,   178,   179,   180,   181,   211,
     -45,    67,   189,   189,   384,    75,   182,   -49,   212,   213,
     -32,    30,    31,    77,   189,    32,   238,    78,   233,    72,
     -45,   -45,   -45,   -45,    79,   107,   118,    80,   120,    42,
     -32,   -32,   314,   315,   -52,   -52,    96,   189,   108,    81,
     254,   -51,   -51,   -15,   109,   110,   254,   254,   -44,   112,
     120,    42,   -44,   -44,   -44,   -44,   107,   356,   395,    96,
     240,   241,   212,   213,   111,   242,   414,   243,   244,   245,
     246,   113,    96,   121,   114,   189,   132,   133,   292,   -35,
     115,   247,   116,   292,   292,   -48,    30,    31,   373,   -81,
      32,   129,   189,   189,   145,   233,    96,   255,   382,   -35,
     -35,   -35,   -35,    58,   144,    96,    96,   233,   -43,   -43,
     -43,   -43,   393,   436,    83,   -43,   233,   233,   233,   233,
     146,   233,   272,   107,   272,    96,   295,   406,   147,    96,
     148,   254,   254,   161,   233,   441,    83,   254,    42,   296,
     272,   417,   189,   189,   272,   107,   168,   464,    42,   466,
     162,   425,   446,    83,   163,   292,   292,   -38,   233,   165,
      63,   297,    65,   408,   273,   472,   273,   212,   213,   475,
     268,   465,   268,   274,   298,   274,   299,   -38,   -38,   -38,
     -38,   -54,   273,   269,   -53,   269,   273,   -47,   268,   473,
     -52,   274,   268,   451,    83,   274,    96,   275,   306,   275,
     334,   269,   276,   307,   276,   269,   308,   -47,   -47,   -47,
     -47,   -56,   -54,   427,   309,   275,   -39,   212,   213,   275,
     276,   -53,   349,   -52,   276,   -46,   130,    96,   -51,   -57,
     -90,   -56,   -56,   -56,   -56,   320,   -39,   -39,   -39,   -39,
     463,    83,   277,    42,   277,   -46,   -46,   -46,   -46,   -57,
     -57,   -57,   -57,   270,   267,   270,   267,   321,   322,   323,
     277,   189,   -51,   271,   277,   271,    72,   -90,   335,   336,
     184,   270,   267,   337,   357,   270,   267,    56,    72,   338,
     -33,   271,   347,   348,   350,   271,   351,   204,   204,   352,
     204,   353,    72,   359,    96,    70,    71,   360,   361,   227,
     -33,   -33,   314,   315,   362,    72,   -48,   376,   385,    96,
     396,   403,   409,   418,   419,    58,    96,   428,   184,   422,
     -43,   -43,   -43,   -43,   227,   415,   -34,   -43,   239,    72,
     421,   432,    20,    21,   433,   434,   435,    22,   437,    23,
     171,    24,    25,    26,    27,    28,   -34,   -34,   314,   315,
     438,   249,   439,    29,   204,   440,   184,   184,    30,    31,
     442,   443,    32,   444,   -40,   -40,   -36,   445,   447,   -40,
     448,   -40,   -40,   -40,   -40,   249,   -37,   249,   249,   249,
     287,   287,   287,   287,   249,   -40,   -36,   -36,   -36,   -36,
     -40,   -40,   453,   449,   -40,   450,   -37,   -37,   -37,   -37,
     454,     1,     2,     3,     4,   455,   184,   -59,   456,   371,
     372,   457,   374,    96,    96,    96,   459,   -60,     5,   380,
     381,   458,   383,   184,   460,   461,   304,   -59,   -59,   -59,
     -59,    96,   295,   391,   392,    96,   394,   -60,   -60,   -60,
     -60,   462,   184,   474,    15,   467,   316,   468,   404,   405,
     469,   407,    84,   184,   184,   471,   -58,   413,   149,   151,
     -61,     0,     0,   416,   -55,   184,     0,     0,     0,   330,
       0,     0,   423,   424,     0,   426,   -58,   -58,   -58,   -58,
     -61,   -61,   -61,   -61,   -55,   -55,   -55,   -55,   184,   -44,
     -44,   343,     0,   -44,   -44,   -44,   -44,   249,   249,     0,
       0,   172,   173,   185,     0,     0,   174,     0,   175,   176,
     177,   178,   179,   180,   181,     1,     2,     3,     4,     0,
     205,   205,   182,   205,     0,     0,   184,    30,    31,   367,
       0,    32,   228,     0,   287,   287,     0,   204,   204,     0,
     204,     0,     0,   377,   378,     0,   227,   204,   204,     0,
     204,   185,     0,   204,   204,   388,   389,   228,   227,     0,
       0,   204,   204,     0,   204,     0,     0,   227,   227,   399,
     400,     0,   227,     0,     0,     0,   204,   204,     0,   204,
       0,     0,   410,   411,   250,   227,     0,   205,   249,   185,
     185,   204,     0,   184,   184,   -44,   -44,   -44,   -44,     0,
     204,   204,   -44,   204,     0,     0,   429,   430,   250,   227,
     250,   250,   250,   288,   288,   288,   288,   250,     0,   191,
     192,     0,     0,     0,   193,     0,   194,   195,   196,   197,
     198,   199,   200,     0,   -45,   -45,   -45,   -45,     0,   185,
     201,   -45,     0,   -41,   -41,    30,    31,     0,   -41,    32,
     -41,   -41,   -41,   -41,     0,     0,   185,    -2,     0,   185,
       1,     2,     3,     4,   -41,   -32,   -32,    54,    55,   -41,
     -41,     0,   -32,   -41,     0,   185,     0,     5,     0,   205,
       0,     0,     0,   214,   215,     0,   185,   185,   216,     0,
     217,   218,   219,   220,   221,   222,   223,     0,   185,     0,
     -90,   -90,   228,     0,   224,   -90,   -90,   -90,   -90,    30,
      31,     0,   184,    32,     0,     0,     0,     0,   -42,   -42,
       0,   185,     0,   -42,   250,   -42,   -42,   -42,   -42,    -4,
     250,   250,    -4,    -4,    -4,    -4,   186,    -5,     0,   -42,
      -5,    -5,    -5,    -5,   -42,   -42,     0,     0,   -42,    -4,
       0,     0,     0,   206,   206,     0,   206,    -5,     0,   185,
       0,     0,   288,     0,     0,   229,     0,   288,   288,     0,
     205,   205,     0,   205,     0,     0,   185,   185,     0,   228,
     205,   205,     0,   205,   186,     0,   205,   205,   205,   205,
     229,   228,     0,     0,   205,   205,     0,   205,     0,     0,
     228,   228,   228,   228,     0,   228,     0,     0,     0,   205,
     205,     0,   205,     0,     0,   250,   250,   251,   228,     0,
     206,   250,   186,   186,   205,     0,   185,   185,   -35,   -35,
     -35,   -35,     0,   205,   205,   -35,   205,     0,     0,   288,
     288,   251,   228,   251,   251,   251,   289,   289,   289,   289,
     251,     0,    20,    21,     0,     0,     0,    22,   -90,    23,
     171,    24,    25,   -90,   -90,   -90,   -90,     0,     0,     0,
     -90,   -90,   186,    29,     0,     0,   278,   279,    30,    31,
       0,   280,    32,   281,   282,   283,   284,     0,     0,   186,
      -6,     0,   186,    -6,    -6,    -6,    -6,   285,   -38,   -38,
     -38,   -38,    30,    31,     0,   -38,    32,     0,   186,     0,
      -6,     0,   206,     0,     0,     0,   240,   241,     0,   186,
     186,   242,   -90,   243,   244,   245,   246,   -90,   -90,   -90,
     -90,   186,     0,     0,   -90,   229,     0,   247,     0,     0,
       0,     0,    30,    31,     0,   185,    32,     0,     0,     0,
       0,   172,   173,     0,   186,     0,   174,   251,   175,   176,
     177,   178,    -7,   251,   251,    -7,    -7,    -7,    -7,   187,
      -3,     0,   182,    -3,    -3,    -3,    -3,    30,    31,     0,
       0,    32,    -7,     0,     0,     0,   208,   208,     0,   208,
      -3,     0,   186,     0,     0,   289,     0,     0,   231,     0,
     289,   289,     0,   206,   206,     0,   206,     0,     0,   186,
     186,     0,   229,   206,   206,     0,   206,   187,     0,   206,
     206,   206,   206,   231,   229,     0,     0,   206,   206,     0,
     206,     0,     0,   229,   229,   229,   229,     0,   229,     0,
       0,     0,   206,   206,     0,   206,     0,     0,   251,   251,
     252,   229,     0,   208,   251,   187,   187,   206,     0,   186,
     186,   -47,   -47,   -47,   -47,     0,   206,   206,   -47,   206,
       0,     0,   289,   289,   252,   229,   252,   252,   252,   290,
     290,   290,   290,   252,     0,   191,   192,     0,     0,     0,
     193,    58,   194,   195,   196,   197,   -43,   -43,   -43,   -43,
       0,     0,     0,   -43,   358,   187,   201,     0,     0,   214,
     215,    30,    31,     0,   216,    32,   217,   218,   219,   220,
       0,     0,   187,   -69,     0,   187,   -69,   -69,   -69,   -69,
     224,   -56,   -56,   -56,   -56,    30,    31,     0,   -56,    32,
       0,   187,     0,   -69,     0,   208,     0,     0,     0,   -90,
     -90,   -90,   187,   187,   -90,   -90,   -90,   -90,     0,     0,
       0,   -90,     0,     0,   187,     0,     0,     0,   231,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   186,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,   187,     0,     0,
     252,     0,     0,     0,   -43,     0,   252,   252,     0,     0,
       0,     0,   188,   -43,   -43,   -43,   -43,   -43,   -43,   344,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,   209,
     209,     0,   209,     0,     0,   187,     0,     0,   290,     0,
       0,   232,     0,   290,   290,     0,   208,   208,     0,   208,
       0,     0,   187,   187,     0,   231,   208,   208,     0,   208,
     188,     0,   208,   208,   208,   208,   232,   231,     0,     0,
     208,   208,     0,   208,     0,     0,   231,   231,   231,   231,
       0,   231,     0,     0,     0,   208,   208,     0,   208,     0,
       0,   252,   252,   253,   231,     0,   209,   252,   188,   188,
     208,     0,   187,   187,   -39,   -39,   -39,   -39,     0,   208,
     208,   -39,   208,     0,     0,   290,   290,   253,   231,   253,
     253,   253,   291,   291,   291,   291,   253,   331,   -43,   -43,
       0,   -44,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   188,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   305,   -43,     0,     0,
     -45,   -43,   -43,   -43,   -43,   188,     0,     0,   188,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   188,   -45,   -45,     0,   209,   -45,
     -45,   -45,   -45,   -32,   -32,   188,   188,   -32,   -32,   328,
     329,     0,     0,     0,   -32,     0,     0,   188,     0,     0,
       0,   232,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   187,   -32,   -32,   -32,   -32,   341,   342,     0,     0,
     188,   -45,   -35,   253,     0,   -45,   -45,   -45,   -45,   253,
     253,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -79,     0,
       0,   -79,   -79,   -79,   -79,     0,     0,     0,   188,     0,
       0,   291,     0,     0,     0,     0,   291,   291,   -79,   209,
     209,     0,   209,     0,     0,   188,   188,     0,   232,   209,
     209,     0,   209,     0,     0,   209,   209,   209,   209,     0,
     232,     0,     0,   209,   209,     0,   209,     0,     0,   232,
     232,   232,   232,     0,   232,     0,     0,     0,   209,   209,
       0,   209,     0,     0,   253,   253,     0,   232,     0,     0,
     253,     0,     0,   209,   -32,   188,   188,   183,   -32,   -32,
     302,   303,   209,   209,     0,   209,     0,     0,   291,   291,
       0,   232,     0,     0,   203,   203,     0,   203,   -38,     0,
      68,    69,     0,     0,     0,     0,   226,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -35,   -35,     0,   183,   -35,   -35,   -35,   -35,
     -82,   226,   -82,   -82,   -82,   -82,   -82,   164,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   248,     0,
       0,   203,   -82,   183,   183,     0,     0,   -82,   -82,     0,
       0,   -82,   -82,   -82,   -82,     0,     0,     0,    50,     0,
       0,     0,   248,     0,   248,   248,   248,   286,   286,   286,
     286,   248,     0,     0,   188,   202,   202,    -8,   202,     0,
      -8,    -8,    -8,    -8,     0,   -66,     0,   225,   -66,   -66,
     -66,   -66,     0,   183,   -38,   -38,     0,    -8,   -38,   -38,
     -38,   -38,     0,     0,   -47,   -66,   236,     0,     0,     0,
     183,     0,   225,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,   183,
       0,   -46,   -46,   -46,   -46,     0,     0,   -56,   -46,   127,
     318,   319,   202,     0,   236,   236,   -56,   -56,   -56,   -56,
     -56,   -56,   183,   -56,     0,   -56,   -56,   -56,   -56,   -56,
     -56,     0,     0,   127,     0,   127,   127,   127,   154,   155,
     156,   157,   158,     0,   -35,   183,     0,   -39,   -35,   -35,
     -35,   -35,     0,     0,   345,   346,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   236,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,   -65,     0,     0,   -65,   -65,   -65,   -65,
     -38,   300,     0,   183,   -38,   -38,   -38,   -38,     0,     0,
       0,   369,   370,   -65,   203,   203,     0,   203,     0,     0,
     310,     0,     0,   226,   203,   203,     0,   203,     0,     0,
     386,   387,     0,     0,     0,   226,     0,     0,   203,   203,
       0,   203,     0,   324,   397,   398,     0,     0,     0,   226,
       0,     0,     0,   203,   203,     0,   203,   -57,   -57,   -57,
     -57,     0,   226,     0,   -57,   248,   339,     0,   203,     0,
     183,   183,   -33,   -33,    54,    55,     0,   203,   203,   -33,
     203,    51,     0,     0,     0,     0,   226,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,   -25,   -25,   207,   207,
       0,   207,   -47,   -47,   363,     0,   -47,   -47,   -47,   -47,
     230,     0,     0,     0,     0,   202,   202,     0,   202,     0,
     -34,   -34,    54,    55,   225,   202,   202,   -34,   202,   237,
     -36,   -36,   -36,   -36,     0,   230,   225,   -36,     0,   202,
     202,     0,   202,     0,   -37,   -37,   -37,   -37,     0,     0,
     225,   -37,     0,     0,   202,   202,     0,   202,     0,     0,
       0,     0,     0,   225,     0,   207,   127,   237,   237,   202,
       0,   236,   236,   -59,   -59,   -59,   -59,     0,   202,   202,
     -59,   202,     0,     0,     0,     0,     0,   225,   -78,   183,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,   237,     0,     0,
     -78,   -60,   -60,   -60,   -60,   -78,   -78,     0,   -60,   -78,
     -78,   -78,   -78,     0,   301,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   311,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,   -56,   -56,     0,   -71,   -56,
     -56,   -56,   -56,   -71,   -71,   -31,   325,   -71,   -71,   -71,
     -71,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     236,   -31,     0,   -31,   -31,   256,   257,     0,   -70,   340,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,   -39,   -39,     0,
     -70,   -39,   -39,   -39,   -39,   -70,   -70,   364,     0,   -70,
     -70,   -70,   -70,   -58,   -58,   -58,   -58,     0,   207,   207,
     -58,   207,     0,   -61,   -61,   -61,   -61,   230,   207,   207,
     -61,   207,     0,   -55,   -55,   -55,   -55,     0,     0,   230,
     -55,     0,   207,   207,     0,   207,     0,   -19,   -19,   137,
     138,     0,     0,   230,   -19,     0,     0,   207,   207,     0,
     207,     0,     0,   -46,   -46,     0,   230,   -46,   -46,   -46,
     -46,     0,   207,     0,   237,   237,   -20,   -20,   137,   138,
       0,   207,   207,   -20,   207,     0,     0,     0,     0,   -77,
     230,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,   -57,   -57,
       0,   -77,   -57,   -57,   -57,   -57,   -77,   -77,     0,     0,
     -77,   -77,   -77,   -77,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
     -30,   -72,   -72,     0,     0,   -72,   -72,   -72,   -72,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,     0,   -30,   -30,
     256,   257,   -73,   237,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -33,   -33,     0,   -73,   -33,   -33,   328,   329,   -73,
     -73,     0,     0,   -73,   -73,   -73,   -73,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,   -34,   -34,     0,   -74,
     -34,   -34,   328,   329,   -74,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -36,   -36,     0,   -75,   -36,   -36,   -36,   -36,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,   -37,   -37,     0,   -76,
     -37,   -37,   -37,   -37,   -76,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -59,   -59,     0,   -66,   -59,   -59,   -59,   -59,   -66,
     -66,     0,     0,   -66,   -66,   -66,   -66,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,   -60,   -60,     0,   -80,
     -60,   -60,   -60,   -60,   -80,   -80,     0,     0,   -80,   -80,
     -80,   -80,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,   -58,   -58,     0,   -89,   -58,   -58,   -58,   -58,   -89,
     -89,     0,     0,   -89,   -89,   -89,   -89,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,   -61,   -61,     0,   -65,
     -61,   -61,   -61,   -61,   -65,   -65,     0,     0,   -65,   -65,
     -65,   -65,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -55,   -55,     0,   -69,   -55,   -55,   -55,   -55,   -69,
     -69,     0,     0,   -69,   -69,   -69,   -69,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,   -47,     0,     0,   -79,
     -47,   -47,   -47,   -47,   -79,   -79,     0,     0,   -79,   -79,
     -79,   -79,   -82,     0,   -82,   -82,   -82,   -82,   -82,   470,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,   -56,     0,     0,   -82,   -56,   -56,   -56,   -56,   -82,
     -82,     0,     0,   -82,   -82,   -82,   -82,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,   -39,     0,     0,   -85,
     -39,   -39,   -39,   -39,   -85,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,   -33,     0,     0,   -88,   -33,   -33,   302,   303,   -88,
     -88,     0,     0,   -88,   -88,   -88,   -88,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,   -34,     0,     0,   -87,
     -34,   -34,   302,   303,   -87,   -87,     0,     0,   -87,   -87,
     -87,   -87,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,   -46,     0,     0,   -86,   -46,   -46,   -46,   -46,   -86,
     -86,     0,     0,   -86,   -86,   -86,   -86,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,   -57,     0,     0,   -83,
     -57,   -57,   -57,   -57,   -83,   -83,     0,     0,   -83,   -83,
     -83,   -83,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,   -36,     0,     0,   -84,   -36,   -36,   -36,   -36,   -84,
     -84,     0,     0,   -84,   -84,   -84,   -84,    85,     0,     1,
       2,     3,     4,    86,     0,    87,    88,    89,    20,    21,
      90,    91,    92,    22,     0,    23,   234,    24,    25,    26,
      27,    28,     0,     0,     0,     0,   -37,     0,     0,    29,
     -37,   -37,   -37,   -37,    30,    31,     0,     0,    32,   235,
      93,   -49,   -78,     0,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,
       0,   -59,     0,     0,   -78,   -59,   -59,   -59,   -59,   -78,
     -78,     0,     0,   -78,   -78,   -78,   -78,   -71,     0,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   -60,     0,     0,   -71,
     -60,   -60,   -60,   -60,   -71,   -71,     0,     0,   -71,   -71,
     -71,   -71,    85,     0,     1,     2,     3,     4,    86,     0,
      87,    88,    89,    20,    21,    90,    91,    92,    22,     0,
      23,   234,    24,    25,    26,    27,    28,     0,     0,     0,
       0,   -58,     0,     0,    29,   -58,   -58,   -58,   -58,    30,
      31,     0,     0,    32,   235,   119,   -49,   -70,     0,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -61,     0,     0,   -70,
     -61,   -61,   -61,   -61,   -70,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -68,     0,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -55,     0,     0,   -68,   -55,   -55,   -55,   -55,   -68,
     -68,     0,     0,   -68,   -68,   -68,   -68,   -77,     0,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,     0,     0,     0,   -77,   -77,     0,     0,   -77,   -77,
     -77,   -77,   -72,     0,   -72,   -72,   -72,   -72,   -72,     0,
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
     -74,     0,     0,   -74,   -74,   -74,   -74,   -75,     0,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,     0,     0,   -75,   -75,     0,     0,   -75,   -75,
     -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -76,     0,     0,   -76,   -76,   -76,   -76,   -80,     0,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,   -80,
       0,     0,     0,     0,   -80,   -80,     0,     0,   -80,   -80,
     -80,   -80,   -67,     0,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,   -67,     0,     0,     0,     0,   -67,
     -67,     0,     0,   -67,   -67,   -67,   -67,   -89,     0,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,   -89,
       0,     0,     0,     0,   -89,   -89,     0,     0,   -89,   -89,
     -89,   -89,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,   -85,     0,     0,     0,     0,   -85,
     -85,     0,     0,   -85,   -85,   -85,   -85,   -88,     0,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,     0,   -88,
       0,     0,     0,     0,   -88,   -88,     0,     0,   -88,   -88,
     -88,   -88,   -87,     0,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,     0,   -87,     0,     0,     0,     0,   -87,
     -87,     0,     0,   -87,   -87,   -87,   -87,   -86,     0,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,   -86,
       0,     0,     0,     0,   -86,   -86,     0,     0,   -86,   -86,
     -86,   -86,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,   -83,   -83,   -83,   -84,     0,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,     0,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,    85,     0,     1,     2,     3,     4,    86,     0,
      87,    88,    89,    20,    21,    90,    91,    92,    22,     0,
      23,   234,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    30,
      31,     0,     0,    32,   235,   332,   -49,   -69,     0,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,     0,     0,     0,   -69,   -69,     0,     0,   -69,   -69,
     -69,   -69,    85,     0,     1,     2,     3,     4,    86,     0,
      87,    88,    89,    20,    21,    90,    91,    92,    22,     0,
      23,   234,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    30,
      31,     0,     0,    32,   235,   354,   -49,   -66,     0,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,   -66,
       0,     0,     0,     0,   -66,   -66,     0,     0,   -66,   -66,
     -66,   -66,    85,     0,     1,     2,     3,     4,    86,     0,
      87,    88,    89,    20,    21,    90,    91,    92,    22,     0,
      23,   234,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    30,
      31,     0,     0,    32,   235,   402,   -49,    85,     0,     1,
       2,     3,     4,    86,     0,    87,    88,    89,    20,    21,
      90,    91,    92,    22,     0,    23,   234,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,    30,    31,     0,     0,    32,   235,
     420,   -49,   -65,     0,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,   -65,     0,     0,     0,     0,   -65,
     -65,     0,     0,   -65,   -65,   -65,   -65,   -79,     0,   -79,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,   -79,
       0,     0,     0,     0,   -79,   -79,     0,     0,   -79,   -79,
     -79,   -79,   258,     0,     1,     2,     3,     4,   259,     0,
     260,   261,   262,    20,    21,   263,   264,   265,    22,     0,
      23,   234,    24,    25,    26,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    30,
      31,     0,     0,    32,   266,    85,   -49,     1,     2,     3,
       4,    86,     0,    87,    88,    89,    20,    21,    90,    91,
      92,    22,     0,    23,   234,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,   -33,    30,    31,     0,     0,    32,   235,     0,   -49,
     -33,   -33,   -33,   -33,   -33,   -33,   -34,   -33,     0,   -33,
     -33,   -33,   -33,   341,   342,   -34,   -34,   -34,   -34,   -34,
     -34,   -46,   -34,     0,   -34,   -34,   -34,   -34,   341,   342,
     -46,   -46,   -46,   -46,   -46,   -46,   -57,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -57,   -57,   -57,   -57,   -57,
     -57,   -36,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -36,   -36,   -36,   -36,   -36,   -36,   -37,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -37,   -37,   -37,   -37,   -37,
     -37,   -59,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -59,   -59,   -59,   -59,   -59,   -59,   -60,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -60,   -60,   -60,   -60,   -60,
     -60,   -58,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -58,   -58,   -58,   -58,   -58,   -58,   -61,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -61,   -61,   -61,   -61,   -61,
     -61,   -55,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -55,   -55,   -55,   -55,   -55,   -55,   143,   -55,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,     0,   -24,   -24,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -43,   -43,   -43,   -43,   -43,   -43,   368,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   365,
     366,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -56,   -56,   -56,   -56,
     -56,   -56,     0,   -56,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   365,
     366,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,   365,   366,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -59,   -59,   -59,   -59,
     -59,   -59,     0,   -59,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -58,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,
     -28,   -28,   293,   294,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,   -29,   -29,   293,   294,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   293,   294,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,
     -27,   293,   294,   -21,   -21,   -21,   -21,   139,   140,     0,
     -21,     0,   141,   142,   -22,   -22,   -22,   -22,   139,   140,
       0,   -22,     0,   141,   142,   -23,   -23,   -23,   -23,   139,
     140,     0,   -23,     0,   141,   142
};

static const yytype_int16 yycheck[] =
{
       0,    60,   235,    98,    18,    20,    27,     7,   305,    27,
      10,     0,     0,    34,    20,   135,    34,    17,     7,     7,
     317,     0,    20,    33,    38,    39,    40,    41,     7,    29,
      18,     0,    33,   266,   331,    45,    36,    34,    35,   111,
     135,    18,    20,    43,    45,   137,   138,   344,    48,    20,
     145,    46,    52,    53,    54,    55,    46,   135,    58,    18,
      34,    38,    39,   135,    38,    39,   135,    34,    35,   164,
      33,   368,   144,   168,    33,    75,   135,    77,    33,    38,
      39,    40,    41,    83,    38,    39,    74,    33,    88,    33,
     135,    45,    45,   165,    94,   135,    12,    13,    98,    34,
      35,    17,    45,    19,    20,    21,    22,    23,    24,    25,
     110,   111,    34,    35,   114,   115,   116,    33,     3,     4,
       5,     6,    38,    39,    27,    28,    42,    45,    34,    45,
      45,    34,    38,    39,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   135,   135,    34,    34,
      12,    13,    38,    39,    45,    17,   135,    19,    20,    21,
      22,    23,    24,    25,   164,   165,    34,    35,   168,    18,
      20,    33,    34,    35,    27,    28,    38,    39,    34,    35,
      42,    34,   182,    34,    33,   185,    34,    35,    17,    38,
      39,    40,    41,    34,    35,    12,    13,    38,    39,    34,
      17,   201,    19,    20,    21,    22,    23,    24,    25,    20,
      18,    34,   212,   213,    34,    43,    33,    34,    38,    39,
      18,    38,    39,    18,   224,    42,    20,    34,   228,    58,
      38,    39,    40,    41,    34,   235,    45,    34,   333,   239,
      38,    39,    40,    41,    34,    35,    75,   247,    77,    34,
     250,    34,    35,    34,    83,    33,   256,   257,    34,    88,
     355,   261,    38,    39,    40,    41,   266,   267,    34,    98,
      12,    13,    38,    39,    33,    17,   348,    19,    20,    21,
      22,    33,   111,    25,    33,   285,   115,   116,   288,    18,
      33,    33,    33,   293,   294,    45,    38,    39,   298,    34,
      42,    45,   302,   303,    34,   305,   135,    45,   308,    38,
      39,    40,    41,    33,    45,   144,   145,   317,    38,    39,
      40,    41,   322,    34,    35,    45,   326,   327,   328,   329,
      34,   331,   452,   333,   454,   164,   165,   337,    34,   168,
      34,   341,   342,    45,   344,    34,    35,   347,   348,    33,
     470,   351,   352,   353,   474,   355,    34,   452,   358,   454,
      45,   361,    34,    35,    45,   365,   366,    18,   368,    45,
      47,    33,    49,    34,   452,   470,   454,    38,    39,   474,
     452,   453,   454,   452,    33,   454,    33,    38,    39,    40,
      41,    34,   470,   452,    34,   454,   474,    18,   470,   471,
      34,   470,   474,    34,    35,   474,   235,   452,    33,   454,
     239,   470,   452,    33,   454,   474,    33,    38,    39,    40,
      41,    18,    18,    34,    33,   470,    18,    38,    39,   474,
     470,    18,   261,    18,   474,    18,   113,   266,    18,    18,
      34,    38,    39,    40,    41,    33,    38,    39,    40,    41,
      34,    35,   452,   453,   454,    38,    39,    40,    41,    38,
      39,    40,    41,   452,   452,   454,   454,    33,    33,    33,
     470,   471,    34,   452,   474,   454,   305,    45,    33,    33,
      29,   470,   470,    33,    45,   474,   474,    36,   317,    33,
      18,   470,    33,    33,    33,   474,    33,    46,    47,    33,
      49,    33,   331,    33,   333,    54,    55,    33,    33,    58,
      38,    39,    40,    41,    33,   344,    34,    34,    34,   348,
      34,    45,    34,   352,   353,    33,   355,    34,    77,   358,
      38,    39,    40,    41,    83,    45,    18,    45,    46,   368,
      45,    34,    12,    13,    34,    34,    34,    17,    34,    19,
      20,    21,    22,    23,    24,    25,    38,    39,    40,    41,
      34,   110,    34,    33,   113,    34,   115,   116,    38,    39,
      34,    34,    42,    34,    12,    13,    18,    34,    34,    17,
      34,    19,    20,    21,    22,   134,    18,   136,   137,   138,
     139,   140,   141,   142,   143,    33,    38,    39,    40,    41,
      38,    39,    45,    34,    42,    34,    38,    39,    40,    41,
      34,     3,     4,     5,     6,    34,   165,    18,    34,   296,
     297,    34,   299,   452,   453,   454,    34,    18,    20,   306,
     307,    45,   309,   182,    34,    34,   185,    38,    39,    40,
      41,   470,   471,   320,   321,   474,   323,    38,    39,    40,
      41,    34,   201,    34,     7,    45,   205,    45,   335,   336,
      45,   338,    74,   212,   213,    45,    18,   347,   134,   136,
      18,    -1,    -1,   350,    18,   224,    -1,    -1,    -1,   228,
      -1,    -1,   359,   360,    -1,   362,    38,    39,    40,    41,
      38,    39,    40,    41,    38,    39,    40,    41,   247,    34,
      35,   250,    -1,    38,    39,    40,    41,   256,   257,    -1,
      -1,    12,    13,    29,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,     3,     4,     5,     6,    -1,
      46,    47,    33,    49,    -1,    -1,   285,    38,    39,   288,
      -1,    42,    58,    -1,   293,   294,    -1,   296,   297,    -1,
     299,    -1,    -1,   302,   303,    -1,   305,   306,   307,    -1,
     309,    77,    -1,   312,   313,   314,   315,    83,   317,    -1,
      -1,   320,   321,    -1,   323,    -1,    -1,   326,   327,   328,
     329,    -1,   331,    -1,    -1,    -1,   335,   336,    -1,   338,
      -1,    -1,   341,   342,   110,   344,    -1,   113,   347,   115,
     116,   350,    -1,   352,   353,    38,    39,    40,    41,    -1,
     359,   360,    45,   362,    -1,    -1,   365,   366,   134,   368,
     136,   137,   138,   139,   140,   141,   142,   143,    -1,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    38,    39,    40,    41,    -1,   165,
      33,    45,    -1,    12,    13,    38,    39,    -1,    17,    42,
      19,    20,    21,    22,    -1,    -1,   182,     0,    -1,   185,
       3,     4,     5,     6,    33,    38,    39,    40,    41,    38,
      39,    -1,    45,    42,    -1,   201,    -1,    20,    -1,   205,
      -1,    -1,    -1,    12,    13,    -1,   212,   213,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,   224,    -1,
      33,    34,   228,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,   471,    42,    -1,    -1,    -1,    -1,    12,    13,
      -1,   247,    -1,    17,   250,    19,    20,    21,    22,     0,
     256,   257,     3,     4,     5,     6,    29,     0,    -1,    33,
       3,     4,     5,     6,    38,    39,    -1,    -1,    42,    20,
      -1,    -1,    -1,    46,    47,    -1,    49,    20,    -1,   285,
      -1,    -1,   288,    -1,    -1,    58,    -1,   293,   294,    -1,
     296,   297,    -1,   299,    -1,    -1,   302,   303,    -1,   305,
     306,   307,    -1,   309,    77,    -1,   312,   313,   314,   315,
      83,   317,    -1,    -1,   320,   321,    -1,   323,    -1,    -1,
     326,   327,   328,   329,    -1,   331,    -1,    -1,    -1,   335,
     336,    -1,   338,    -1,    -1,   341,   342,   110,   344,    -1,
     113,   347,   115,   116,   350,    -1,   352,   353,    38,    39,
      40,    41,    -1,   359,   360,    45,   362,    -1,    -1,   365,
     366,   134,   368,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    12,    13,    -1,    -1,    -1,    17,    33,    19,
      20,    21,    22,    38,    39,    40,    41,    -1,    -1,    -1,
      45,    46,   165,    33,    -1,    -1,    12,    13,    38,    39,
      -1,    17,    42,    19,    20,    21,    22,    -1,    -1,   182,
       0,    -1,   185,     3,     4,     5,     6,    33,    38,    39,
      40,    41,    38,    39,    -1,    45,    42,    -1,   201,    -1,
      20,    -1,   205,    -1,    -1,    -1,    12,    13,    -1,   212,
     213,    17,    33,    19,    20,    21,    22,    38,    39,    40,
      41,   224,    -1,    -1,    45,   228,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,   471,    42,    -1,    -1,    -1,
      -1,    12,    13,    -1,   247,    -1,    17,   250,    19,    20,
      21,    22,     0,   256,   257,     3,     4,     5,     6,    29,
       0,    -1,    33,     3,     4,     5,     6,    38,    39,    -1,
      -1,    42,    20,    -1,    -1,    -1,    46,    47,    -1,    49,
      20,    -1,   285,    -1,    -1,   288,    -1,    -1,    58,    -1,
     293,   294,    -1,   296,   297,    -1,   299,    -1,    -1,   302,
     303,    -1,   305,   306,   307,    -1,   309,    77,    -1,   312,
     313,   314,   315,    83,   317,    -1,    -1,   320,   321,    -1,
     323,    -1,    -1,   326,   327,   328,   329,    -1,   331,    -1,
      -1,    -1,   335,   336,    -1,   338,    -1,    -1,   341,   342,
     110,   344,    -1,   113,   347,   115,   116,   350,    -1,   352,
     353,    38,    39,    40,    41,    -1,   359,   360,    45,   362,
      -1,    -1,   365,   366,   134,   368,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    12,    13,    -1,    -1,    -1,
      17,    33,    19,    20,    21,    22,    38,    39,    40,    41,
      -1,    -1,    -1,    45,    46,   165,    33,    -1,    -1,    12,
      13,    38,    39,    -1,    17,    42,    19,    20,    21,    22,
      -1,    -1,   182,     0,    -1,   185,     3,     4,     5,     6,
      33,    38,    39,    40,    41,    38,    39,    -1,    45,    42,
      -1,   201,    -1,    20,    -1,   205,    -1,    -1,    -1,    33,
      34,    35,   212,   213,    38,    39,    40,    41,    -1,    -1,
      -1,    18,    -1,    -1,   224,    -1,    -1,    -1,   228,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,   471,    36,
      37,    38,    39,    40,    41,    -1,    -1,   247,    -1,    -1,
     250,    -1,    -1,    -1,    18,    -1,   256,   257,    -1,    -1,
      -1,    -1,    29,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    46,
      47,    -1,    49,    -1,    -1,   285,    -1,    -1,   288,    -1,
      -1,    58,    -1,   293,   294,    -1,   296,   297,    -1,   299,
      -1,    -1,   302,   303,    -1,   305,   306,   307,    -1,   309,
      77,    -1,   312,   313,   314,   315,    83,   317,    -1,    -1,
     320,   321,    -1,   323,    -1,    -1,   326,   327,   328,   329,
      -1,   331,    -1,    -1,    -1,   335,   336,    -1,   338,    -1,
      -1,   341,   342,   110,   344,    -1,   113,   347,   115,   116,
     350,    -1,   352,   353,    38,    39,    40,    41,    -1,   359,
     360,    45,   362,    -1,    -1,   365,   366,   134,   368,   136,
     137,   138,   139,   140,   141,   142,   143,    33,    34,    35,
      -1,    18,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,   165,    36,
      37,    38,    39,    40,    41,    -1,    33,    34,    -1,    -1,
      18,    38,    39,    40,    41,   182,    -1,    -1,   185,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,   201,    34,    35,    -1,   205,    38,
      39,    40,    41,    34,    35,   212,   213,    38,    39,    40,
      41,    -1,    -1,    -1,    18,    -1,    -1,   224,    -1,    -1,
      -1,   228,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,   471,    36,    37,    38,    39,    40,    41,    -1,    -1,
     247,    34,    18,   250,    -1,    38,    39,    40,    41,   256,
     257,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,     0,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,   285,    -1,
      -1,   288,    -1,    -1,    -1,    -1,   293,   294,    20,   296,
     297,    -1,   299,    -1,    -1,   302,   303,    -1,   305,   306,
     307,    -1,   309,    -1,    -1,   312,   313,   314,   315,    -1,
     317,    -1,    -1,   320,   321,    -1,   323,    -1,    -1,   326,
     327,   328,   329,    -1,   331,    -1,    -1,    -1,   335,   336,
      -1,   338,    -1,    -1,   341,   342,    -1,   344,    -1,    -1,
     347,    -1,    -1,   350,    34,   352,   353,    29,    38,    39,
      40,    41,   359,   360,    -1,   362,    -1,    -1,   365,   366,
      -1,   368,    -1,    -1,    46,    47,    -1,    49,    18,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    34,    35,    -1,    77,    38,    39,    40,    41,
       1,    83,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,   110,    -1,
      -1,   113,    33,   115,   116,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,    -1,    -1,    -1,    29,    -1,
      -1,    -1,   134,    -1,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,   471,    46,    47,     0,    49,    -1,
       3,     4,     5,     6,    -1,     0,    -1,    58,     3,     4,
       5,     6,    -1,   165,    34,    35,    -1,    20,    38,    39,
      40,    41,    -1,    -1,    18,    20,    77,    -1,    -1,    -1,
     182,    -1,    83,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,   201,
      -1,    38,    39,    40,    41,    -1,    -1,    18,    45,   110,
     212,   213,   113,    -1,   115,   116,    27,    28,    29,    30,
      31,    32,   224,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    34,   247,    -1,    18,    38,    39,
      40,    41,    -1,    -1,   256,   257,    27,    28,    29,    30,
      31,    32,    -1,    34,   165,    36,    37,    38,    39,    40,
      41,    -1,    -1,     0,    -1,    -1,     3,     4,     5,     6,
      34,   182,    -1,   285,    38,    39,    40,    41,    -1,    -1,
      -1,   293,   294,    20,   296,   297,    -1,   299,    -1,    -1,
     201,    -1,    -1,   305,   306,   307,    -1,   309,    -1,    -1,
     312,   313,    -1,    -1,    -1,   317,    -1,    -1,   320,   321,
      -1,   323,    -1,   224,   326,   327,    -1,    -1,    -1,   331,
      -1,    -1,    -1,   335,   336,    -1,   338,    38,    39,    40,
      41,    -1,   344,    -1,    45,   347,   247,    -1,   350,    -1,
     352,   353,    38,    39,    40,    41,    -1,   359,   360,    45,
     362,    29,    -1,    -1,    -1,    -1,   368,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    46,    47,
      -1,    49,    34,    35,   285,    -1,    38,    39,    40,    41,
      58,    -1,    -1,    -1,    -1,   296,   297,    -1,   299,    -1,
      38,    39,    40,    41,   305,   306,   307,    45,   309,    77,
      38,    39,    40,    41,    -1,    83,   317,    45,    -1,   320,
     321,    -1,   323,    -1,    38,    39,    40,    41,    -1,    -1,
     331,    45,    -1,    -1,   335,   336,    -1,   338,    -1,    -1,
      -1,    -1,    -1,   344,    -1,   113,   347,   115,   116,   350,
      -1,   352,   353,    38,    39,    40,    41,    -1,   359,   360,
      45,   362,    -1,    -1,    -1,    -1,    -1,   368,     1,   471,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      33,    38,    39,    40,    41,    38,    39,    -1,    45,    42,
      43,    44,    45,    -1,   182,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   201,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,    38,
      39,    40,    41,    38,    39,    18,   224,    42,    43,    44,
      45,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
     471,    34,    -1,    36,    37,    38,    39,    -1,     1,   247,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,
      33,    38,    39,    40,    41,    38,    39,   285,    -1,    42,
      43,    44,    45,    38,    39,    40,    41,    -1,   296,   297,
      45,   299,    -1,    38,    39,    40,    41,   305,   306,   307,
      45,   309,    -1,    38,    39,    40,    41,    -1,    -1,   317,
      45,    -1,   320,   321,    -1,   323,    -1,    27,    28,    29,
      30,    -1,    -1,   331,    34,    -1,    -1,   335,   336,    -1,
     338,    -1,    -1,    34,    35,    -1,   344,    38,    39,    40,
      41,    -1,   350,    -1,   352,   353,    27,    28,    29,    30,
      -1,   359,   360,    34,   362,    -1,    -1,    -1,    -1,     1,
     368,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      18,    38,    39,    -1,    -1,    42,    43,    44,    45,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,     1,   471,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    35,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    35,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    35,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    35,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    35,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    35,    -1,    33,    38,    39,    40,    41,    38,
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
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    34,    -1,    -1,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    33,    38,    39,    40,    41,    38,
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
      39,    -1,    -1,    42,    43,     1,    45,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    18,    38,    39,    -1,    -1,    42,    43,    -1,    45,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    20,    48,    49,    50,    51,
      52,    73,    75,    82,     0,    50,    82,    46,    33,    45,
      12,    13,    17,    19,    21,    22,    23,    24,    25,    33,
      38,    39,    42,    60,    61,    62,    63,    64,    66,    67,
      68,    69,    82,    52,    53,    54,    33,    33,    33,    33,
      60,    67,    38,    39,    40,    41,    62,    45,    33,    82,
      34,    66,    77,    77,    82,    77,    34,    34,    61,    61,
      62,    62,    66,    70,    35,    43,    71,    18,    34,    34,
      34,    34,    34,    35,    54,     1,     7,     9,    10,    11,
      14,    15,    16,    44,    52,    65,    66,    71,    72,    73,
      74,    75,    76,    78,    79,    80,    81,    82,    66,    66,
      33,    33,    66,    33,    33,    33,    33,    82,    45,    44,
      74,    25,    55,    56,    57,    58,    59,    60,    65,    45,
      77,    82,    66,    66,    27,    34,    28,    29,    30,    31,
      32,    36,    37,    18,    45,    34,    34,    34,    34,    56,
      74,    57,    58,    58,    60,    60,    60,    60,    60,    65,
      74,    45,    45,    45,     8,    45,    74,    65,    34,    74,
      20,    20,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    61,    62,    63,    64,    68,    69,    82,
      20,    12,    13,    17,    19,    20,    21,    22,    23,    24,
      25,    33,    60,    61,    62,    63,    64,    67,    68,    69,
      82,    20,    38,    39,    12,    13,    17,    19,    20,    21,
      22,    23,    24,    25,    33,    60,    61,    62,    63,    64,
      67,    68,    69,    82,    20,    43,    60,    67,    20,    46,
      12,    13,    17,    19,    20,    21,    22,    33,    61,    62,
      63,    64,    68,    69,    82,    45,    38,    39,     1,     7,
       9,    10,    11,    14,    15,    16,    43,    52,    65,    71,
      73,    75,    76,    78,    79,    80,    81,    82,    12,    13,
      17,    19,    20,    21,    22,    33,    61,    62,    63,    64,
      68,    69,    82,    38,    39,    66,    33,    33,    33,    33,
      60,    67,    40,    41,    62,    33,    33,    33,    33,    33,
      60,    67,    38,    39,    40,    41,    62,    33,    61,    61,
      33,    33,    33,    33,    60,    67,    38,    39,    40,    41,
      62,    33,    44,    72,    66,    33,    33,    33,    33,    60,
      67,    40,    41,    62,    33,    61,    61,    33,    33,    66,
      33,    33,    33,    33,    44,    72,    82,    45,    46,    33,
      33,    33,    33,    60,    67,    40,    41,    62,    33,    61,
      61,    77,    77,    82,    77,    34,    34,    62,    62,    70,
      77,    77,    82,    77,    34,    34,    61,    61,    62,    62,
      70,    77,    77,    82,    77,    34,    34,    61,    61,    62,
      62,    70,    44,    45,    77,    77,    82,    77,    34,    34,
      62,    62,    70,    55,    65,    45,    77,    82,    66,    66,
      44,    45,    66,    77,    77,    82,    77,    34,    34,    62,
      62,    70,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    45,    34,    34,    34,    34,    45,    34,
      34,    34,    34,    34,    74,    65,    74,    45,    45,    45,
       8,    45,    74,    65,    34,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    52,
      52,    52,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      59,    59,    60,    60,    60,    61,    61,    61,    62,    62,
      63,    63,    63,    64,    64,    64,    64,    64,    65,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    70,    70,    70,    71,    71,    72,    72,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      76,    77,    78,    78,    79,    79,    80,    80,    80,    81,
      82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     6,     1,
       1,     1,     1,     1,     0,     4,     2,     1,     3,     1,
       3,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     0,
       1,     1,     1,     1,     1,     4,     1,     3,     4,     4,
       4,     4,     3,     1,     0,     3,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     3,     5,     7,     9,     5,     5,     5,     5,     3,
       1
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

  case 7: /* external_declaration: assignment_statement  */
#line 64 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2688 "./src/syntax/parser.c"
    break;

  case 8: /* function_definition: type_specifier identifier '(' parameters ')' compound_statement  */
#line 67 "src/syntax/parser.y"
                                                                                     {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-5].token), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                      insert_row_into_symbol_table((yyvsp[-5].token), (yyvsp[-4].ast_node)->value, "function");
                    }
#line 2697 "./src/syntax/parser.c"
    break;

  case 9: /* type_specifier: INT  */
#line 73 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2703 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: FLOAT  */
#line 74 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 2709 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: ELEM  */
#line 75 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 2715 "./src/syntax/parser.c"
    break;

  case 12: /* type_specifier: SET  */
#line 76 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2721 "./src/syntax/parser.c"
    break;

  case 13: /* parameters: parameter_list  */
#line 79 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2727 "./src/syntax/parser.c"
    break;

  case 14: /* parameters: %empty  */
#line 80 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 2733 "./src/syntax/parser.c"
    break;

  case 15: /* parameter_list: type_specifier identifier ',' parameter_list  */
#line 83 "src/syntax/parser.y"
                                                             {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                }
#line 2741 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_list: type_specifier identifier  */
#line 86 "src/syntax/parser.y"
                                          {
                  (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[0].ast_node)->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table((yyvsp[-1].token), (yyvsp[0].ast_node)->value, "variable");
                }
#line 2750 "./src/syntax/parser.c"
    break;

  case 17: /* logical_or_expression: logical_and_expression  */
#line 92 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2756 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 93 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2764 "./src/syntax/parser.c"
    break;

  case 19: /* logical_and_expression: equality_expression  */
#line 98 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2770 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 99 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 2778 "./src/syntax/parser.c"
    break;

  case 21: /* equality_expression: relational_expression  */
#line 104 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2784 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 105 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2792 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 108 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2800 "./src/syntax/parser.c"
    break;

  case 24: /* relational_expression: belongs_to_expression  */
#line 113 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2806 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: EMPTY_CONST  */
#line 114 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 2814 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: relational_expression '<' additive_expression  */
#line 117 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2822 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '>' additive_expression  */
#line 120 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2830 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 123 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2838 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 126 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2846 "./src/syntax/parser.c"
    break;

  case 30: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 131 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2854 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: additive_expression  */
#line 134 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2860 "./src/syntax/parser.c"
    break;

  case 32: /* additive_expression: multiplicative_expression  */
#line 137 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2866 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 138 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2874 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 141 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2882 "./src/syntax/parser.c"
    break;

  case 35: /* multiplicative_expression: unary_expression  */
#line 146 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2888 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 147 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2896 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 150 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2904 "./src/syntax/parser.c"
    break;

  case 38: /* unary_expression: term  */
#line 155 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2910 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: unary_operator unary_expression  */
#line 156 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 2918 "./src/syntax/parser.c"
    break;

  case 40: /* unary_operator: '+'  */
#line 161 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 2924 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '-'  */
#line 162 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 2930 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '!'  */
#line 163 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 2936 "./src/syntax/parser.c"
    break;

  case 43: /* term: identifier  */
#line 166 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2942 "./src/syntax/parser.c"
    break;

  case 44: /* term: INTEGER_CONST  */
#line 167 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2948 "./src/syntax/parser.c"
    break;

  case 45: /* term: FLOAT_CONST  */
#line 168 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2954 "./src/syntax/parser.c"
    break;

  case 46: /* term: '(' additive_expression ')'  */
#line 169 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 2962 "./src/syntax/parser.c"
    break;

  case 47: /* term: function_call_expression  */
#line 172 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2968 "./src/syntax/parser.c"
    break;

  case 48: /* optional_expression: expression  */
#line 175 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2974 "./src/syntax/parser.c"
    break;

  case 49: /* optional_expression: %empty  */
#line 176 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 2980 "./src/syntax/parser.c"
    break;

  case 50: /* expression: additive_expression  */
#line 179 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2986 "./src/syntax/parser.c"
    break;

  case 51: /* expression: function_arg_constant_expression  */
#line 180 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2992 "./src/syntax/parser.c"
    break;

  case 52: /* function_arg_constant_expression: EMPTY_CONST  */
#line 183 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3002 "./src/syntax/parser.c"
    break;

  case 53: /* function_arg_constant_expression: STRING  */
#line 188 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3012 "./src/syntax/parser.c"
    break;

  case 54: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 193 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3022 "./src/syntax/parser.c"
    break;

  case 55: /* function_call_expression: identifier '(' argument_list ')'  */
#line 200 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3032 "./src/syntax/parser.c"
    break;

  case 56: /* function_call_expression: set_function_call_expression  */
#line 205 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3038 "./src/syntax/parser.c"
    break;

  case 57: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 206 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3044 "./src/syntax/parser.c"
    break;

  case 58: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 209 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3054 "./src/syntax/parser.c"
    break;

  case 59: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 214 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3064 "./src/syntax/parser.c"
    break;

  case 60: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 219 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3074 "./src/syntax/parser.c"
    break;

  case 61: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 224 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3084 "./src/syntax/parser.c"
    break;

  case 62: /* argument_list: argument_list ',' expression  */
#line 231 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3092 "./src/syntax/parser.c"
    break;

  case 63: /* argument_list: expression  */
#line 234 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3098 "./src/syntax/parser.c"
    break;

  case 64: /* argument_list: %empty  */
#line 235 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3104 "./src/syntax/parser.c"
    break;

  case 65: /* compound_statement: '{' statement_list '}'  */
#line 238 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3110 "./src/syntax/parser.c"
    break;

  case 66: /* compound_statement: '{' '}'  */
#line 239 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3116 "./src/syntax/parser.c"
    break;

  case 67: /* statement_list: statement_list statement  */
#line 242 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3124 "./src/syntax/parser.c"
    break;

  case 68: /* statement_list: statement  */
#line 245 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3130 "./src/syntax/parser.c"
    break;

  case 69: /* declaration: type_specifier identifier ';'  */
#line 248 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
              insert_row_into_symbol_table((yyvsp[-2].token), (yyvsp[-1].ast_node)->value, "variable");
            }
#line 3139 "./src/syntax/parser.c"
    break;

  case 70: /* statement: declaration  */
#line 254 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3145 "./src/syntax/parser.c"
    break;

  case 71: /* statement: compound_statement  */
#line 255 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3151 "./src/syntax/parser.c"
    break;

  case 72: /* statement: expression_statement  */
#line 256 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3157 "./src/syntax/parser.c"
    break;

  case 73: /* statement: selection_statement  */
#line 257 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3163 "./src/syntax/parser.c"
    break;

  case 74: /* statement: iteration_statement  */
#line 258 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3169 "./src/syntax/parser.c"
    break;

  case 75: /* statement: io_statement  */
#line 259 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3175 "./src/syntax/parser.c"
    break;

  case 76: /* statement: jump_statement  */
#line 260 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3181 "./src/syntax/parser.c"
    break;

  case 77: /* statement: assignment_statement  */
#line 261 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3187 "./src/syntax/parser.c"
    break;

  case 78: /* statement: error  */
#line 262 "src/syntax/parser.y"
                { yyerrok; }
#line 3193 "./src/syntax/parser.c"
    break;

  case 79: /* assignment_statement: identifier '=' expression ';'  */
#line 265 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3201 "./src/syntax/parser.c"
    break;

  case 80: /* expression_statement: optional_expression ';'  */
#line 270 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3207 "./src/syntax/parser.c"
    break;

  case 81: /* set_membership_expression: expression IN expression  */
#line 273 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3215 "./src/syntax/parser.c"
    break;

  case 82: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 278 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3223 "./src/syntax/parser.c"
    break;

  case 83: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 281 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3231 "./src/syntax/parser.c"
    break;

  case 84: /* iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ')' statement  */
#line 286 "src/syntax/parser.y"
                                                                                                               {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3239 "./src/syntax/parser.c"
    break;

  case 85: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 289 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3247 "./src/syntax/parser.c"
    break;

  case 86: /* io_statement: WRITE '(' expression ')' ';'  */
#line 294 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3255 "./src/syntax/parser.c"
    break;

  case 87: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 297 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3263 "./src/syntax/parser.c"
    break;

  case 88: /* io_statement: READ '(' identifier ')' ';'  */
#line 300 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3271 "./src/syntax/parser.c"
    break;

  case 89: /* jump_statement: RETURN expression ';'  */
#line 305 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3279 "./src/syntax/parser.c"
    break;

  case 90: /* identifier: IDENTIFIER  */
#line 310 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 3287 "./src/syntax/parser.c"
    break;


#line 3291 "./src/syntax/parser.c"

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

#line 315 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
