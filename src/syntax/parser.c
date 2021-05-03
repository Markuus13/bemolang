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
  YYSYMBOL_declarator = 53,                /* declarator  */
  YYSYMBOL_parameters = 54,                /* parameters  */
  YYSYMBOL_parameter_list = 55,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 56,     /* parameter_declaration  */
  YYSYMBOL_logical_or_expression = 57,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 58,    /* logical_and_expression  */
  YYSYMBOL_equality_expression = 59,       /* equality_expression  */
  YYSYMBOL_relational_expression = 60,     /* relational_expression  */
  YYSYMBOL_belongs_to_expression = 61,     /* belongs_to_expression  */
  YYSYMBOL_additive_expression = 62,       /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 63, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 64,          /* unary_expression  */
  YYSYMBOL_unary_operator = 65,            /* unary_operator  */
  YYSYMBOL_term = 66,                      /* term  */
  YYSYMBOL_optional_expression = 67,       /* optional_expression  */
  YYSYMBOL_expression = 68,                /* expression  */
  YYSYMBOL_function_arg_constant_expression = 69, /* function_arg_constant_expression  */
  YYSYMBOL_function_call_expression = 70,  /* function_call_expression  */
  YYSYMBOL_set_function_call_expression = 71, /* set_function_call_expression  */
  YYSYMBOL_argument_list = 72,             /* argument_list  */
  YYSYMBOL_compound_statement = 73,        /* compound_statement  */
  YYSYMBOL_statement_list = 74,            /* statement_list  */
  YYSYMBOL_declaration = 75,               /* declaration  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_assignment_statement = 77,      /* assignment_statement  */
  YYSYMBOL_expression_statement = 78,      /* expression_statement  */
  YYSYMBOL_set_membership_expression = 79, /* set_membership_expression  */
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
#define YYLAST   5234

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  472

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
       0,    49,    49,    55,    58,    61,    62,    65,    70,    71,
      72,    73,    76,    81,    82,    85,    88,    91,    96,    97,
     102,   103,   108,   109,   112,   117,   118,   121,   124,   127,
     130,   135,   138,   141,   142,   145,   150,   151,   154,   159,
     160,   165,   166,   167,   170,   171,   172,   173,   176,   179,
     180,   183,   184,   187,   192,   197,   204,   209,   210,   213,
     218,   223,   228,   235,   238,   239,   242,   243,   246,   249,
     252,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     268,   273,   276,   281,   284,   289,   292,   297,   300,   303,
     308,   313
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

#define YYPACT_NINF (-297)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1293,   -18,     7,    10,    21,    44,  2310,  2451,  2461,    31,
    2541,  -297,  2589,   -29,   -22,   -13,   143,  2609,    20,  2658,
     720,    22,    30,   576,    34,    40,    47,    86,    94,    96,
     110,   112,   291,   740,    48,    57,   116,   611,   394,  1085,
    1120,  2724,   155,    27,   896,  1049,  1247,  1081,   124,   133,
     151,  1130,  1194,  1018,  1316,  1614,  1912,  2510,  3691,  3736,
    3781,  3826,  3871,    72,   160,   176,   184,   -24,  1053,   178,
     163,   174,   822,   822,   822,   205,   611,   611,   205,   822,
     201,   193,   191,  1247,  1247,  1247,  1247,  1336,  3916,  2756,
    3961,   209,   576,    69,   198,  1293,  1683,    12,    60,  1358,
    1721,  1654,  1543,   200,  4006,   231,   219,   241,   259,   262,
     276,   279,   283,   286,  1379,  1428,  1492,  1726,  1790,  2024,
      80,   149,   289,   307,  1053,  4681,  1053,  1053,  1053,  1262,
    1262,  1262,  1262,  1351,   178,   611,  4724,  2088,  2121,   301,
     315,   317,  2195,  2321,  2336,   954,  4051,   145,   542,  2357,
    1952,  1981,  1118,  1416,  1561,  1935,  1637,   322,   318,  4096,
    4141,  4186,  4231,   159,  4724,   261,  4276,   340,  4724,  4321,
     832,  4366,   818,   344,   353,   357,   360,   961,   406,  2387,
     362,   365,   369,   611,  2401,  2437,  1383,  2583,  2591,  2700,
    1014,   376,   170,   395,   396,   398,   410,  1706,   499,  1857,
     611,  2004,  2140,  1351,  2155,  2221,  2303,  1840,   419,   420,
     425,   426,    -5,    68,    82,   442,   456,   462,   611,    -1,
     228,   287,  1418,   384,   465,   424,   457,    38,   435,   218,
     452,  1383,  1383,  4411,   454,   460,   467,   470,   538,   637,
    1076,   253,   256,   281,   611,    23,  1253,  1312,  1545,  1374,
     288,  1610,  1662,   950,  1351,  1351,  2563,   473,   479,   576,
     480,   490,   491,   492,  4456,   155,   489,  2632,  2779,  2824,
    2881,  2926,  2971,  3016,  3061,   923,   527,   535,   536,   537,
    4893,  4923,  4938,   611,  4953,  4968,  1262,  4983,  4998,  5013,
    4908,  1262,  1262,   540,  4501,  4546,   822,   822,   205,   822,
     238,   548,  1383,  1383,  2714,   209,   822,   822,   205,   822,
     268,   557,  1351,  1351,  2651,   209,   822,   822,   205,   822,
     451,   558,  1418,  1418,  1418,  1418,   481,   209,  2730,  2775,
     822,   822,   205,   822,   471,   560,  1545,  1545,  1545,  1545,
    1688,   209,  2666,  4743,  1053,   178,   563,   822,   205,   611,
     611,  3106,  4591,   571,  3151,   576,   822,   822,   205,   822,
     587,   588,  1262,  1262,  5028,   209,  5043,  5058,  4636,   593,
     603,   612,   613,  2820,  2836,  2877,  2922,   305,   618,   620,
     627,   633,  4758,  4773,  4788,  4803,   314,   639,   646,   647,
     648,   565,   572,   601,   625,   661,   665,   345,   651,   652,
     653,   655,  1821,  1908,  1960,  1986,  2012,  2175,   383,    15,
     600,  3196,   656,   657,   660,   662,  3241,  3286,   672,   663,
     685,   686,   688,  5073,  5088,  5103,  5118,   403,  2967,  3012,
    3057,  3102,  3147,  4818,  4833,  4848,  4863,  4878,   732,   736,
     749,   778,   782,  2229,  2255,  2268,  2285,  2311,  4681,   178,
    4681,   693,   701,   702,  3331,  5133,  5148,  5163,  5178,  5193,
    3376,   704,  3421,  3466,  3511,  3556,  4681,   261,  3601,   717,
    4681,  3646
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -297,  -297,  -297,   746,  -297,     0,  -297,  -297,   522,  -297,
     411,   632,   631,   135,  -297,  2153,  2073,   583,   881,  1179,
     -66,   343,  2416,  1477,  1775,  -296,    -9,  -163,     1,   -40,
    -113,   -85,   185,   -78,   -75,   -72,   -61,     6
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
       9,    10,    -8,   103,   -91,    17,     9,    10,   295,   377,
     -16,    95,   269,   -91,    90,    15,   -91,   -51,    64,   386,
      18,    16,    63,     1,     2,     3,     4,    -9,   -91,    71,
     -10,   397,    19,   -91,   -91,   -91,   -91,   322,   323,   124,
     270,   -11,   124,   190,    11,   408,   125,   271,    82,   448,
     272,    13,    71,   273,   -14,    68,   -44,   -51,   -51,   266,
      63,   336,   337,    69,   274,    83,    84,    72,   157,   427,
      93,   327,   -51,    73,   207,    71,   -44,   -44,   -44,   -44,
      74,   109,   190,   190,   112,   148,   -45,   -18,   126,    71,
      71,    71,    71,   -55,   -18,    64,   159,   253,    71,   167,
     -46,   352,   -54,   -17,   -17,    91,   -45,   -45,   -45,   -45,
     -44,   -44,   -44,   -44,   -64,   -64,   267,   -44,    92,    75,
     -46,   -46,   -46,   -46,   166,   265,   268,    76,   169,    77,
     207,   275,   207,   207,   207,   290,   290,   290,   290,   207,
      71,   190,    63,    78,    20,    79,     1,     2,     3,     4,
      21,   253,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   -53,    31,   170,    32,    33,    34,    35,    36,    88,
      63,   190,   -19,   126,    63,   191,    37,    63,   -49,   -19,
     192,    38,    39,   144,   145,    40,   171,    41,   -50,   190,
      25,    26,   190,   -63,   -63,    30,   -52,    31,   172,    32,
      33,    34,    35,    36,   -91,   -91,   190,    91,   104,   207,
      94,    37,   -44,   -44,   -44,   -44,    38,    39,   -13,   -44,
      40,   234,   235,   -50,   190,   228,   236,   115,   237,   238,
     239,   240,   241,   242,   243,   114,   233,   190,   190,   231,
     232,   -12,   244,   -65,   -65,   134,   -33,    38,    39,   135,
     190,    40,   -51,   136,   253,    90,   231,   232,   107,   108,
     207,   207,   150,   151,   113,    71,   -33,   -33,   324,   325,
      63,   353,   373,   173,   174,   137,   231,   232,   175,   410,
     176,   177,   178,   179,   180,   181,   182,   -55,   -55,   190,
     -54,   -54,   290,   138,   183,   -50,   139,   290,   290,    38,
      39,    63,   382,    40,   371,   -36,   231,   232,   190,   190,
     140,   253,    90,   141,   380,   -53,   -53,   142,   207,   207,
     143,   253,   -52,   -52,   389,   -36,   -36,   -36,   -36,   -45,
     -45,   -45,   -45,   253,   146,   269,   -45,   269,   400,   432,
     145,   -15,   253,   253,   253,   253,   160,   253,   437,   145,
     207,    71,   -82,   269,   413,   190,   190,   269,    63,    49,
     161,    71,   162,   270,   421,   270,    70,   165,   290,   290,
     271,   253,   271,   272,   168,   272,   273,   296,   273,   442,
     145,   270,   266,   461,   266,   270,   297,   274,   271,   274,
     298,   272,   271,   299,   273,   272,   -55,    49,   273,   -54,
     266,   469,   -39,   -53,   266,   274,   -41,   -41,   460,   274,
     462,   -41,    49,   -41,   -41,   -41,   -41,   447,   145,   110,
     111,   -91,   -39,   -39,   -39,   -39,   468,   -41,   306,   307,
     471,   308,   -41,   -41,   120,   122,   -41,   459,   145,   267,
     -45,   267,   -48,   309,   -45,   -45,   -45,   -45,   265,   268,
     265,   268,   316,   317,   275,    71,   275,   267,   318,   319,
     -55,   267,   -48,   -48,   -48,   -48,   265,   268,    49,   -91,
     265,   268,   275,   190,   -54,   -57,   275,    49,   158,    49,
     -53,   369,   370,   -52,   372,   391,   -52,   330,   163,   231,
     232,   378,   379,   331,   381,   -57,   -57,   -57,   -57,   -40,
     332,   387,   388,   333,   390,   402,   344,    49,   293,   231,
     232,    49,   345,   347,    49,   398,   399,   -45,   401,   -40,
     -40,   -40,   -40,   348,   349,   350,   -45,   -45,   -45,   -45,
     -45,   -45,   412,   -45,   354,   -45,   -45,   -45,   -45,   -45,
     -45,   419,   420,   -83,   422,   -83,   -83,   -83,   -83,   -83,
     164,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     356,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   357,   358,
     359,   -91,   -91,   -91,   -49,   -83,   -91,   -91,   -91,   -91,
     -83,   -83,   374,   -47,   -83,   -83,   -83,   -83,    25,    26,
     -58,   383,   392,    30,   403,    31,   172,    32,    33,    34,
      35,    36,   346,   -47,   -47,   -47,   -47,    49,   411,    37,
     -58,   -58,   -58,   -58,    38,    39,   417,   123,    40,   -34,
     185,   423,   424,   173,   174,   231,   232,   428,   175,    87,
     176,   177,   178,   179,   180,   181,   182,   429,    49,   -34,
     -34,   324,   325,   -35,   183,   449,   430,   431,   120,    38,
      39,   202,   433,    40,   434,   221,   221,   221,   120,   185,
     185,   435,   221,   -35,   -35,   324,   325,   436,   118,   119,
     120,   -45,   -45,   438,   247,   -45,   -45,   -45,   -45,   -37,
     439,   440,   441,   -38,   120,   443,   444,   445,    49,   446,
     450,   451,   414,   415,   452,    49,   453,   455,   418,   -37,
     -37,   -37,   -37,   -38,   -38,   -38,   -38,   202,   120,   202,
     202,   202,   285,   285,   285,   285,   202,   454,   185,   456,
     457,   -79,   458,   -79,   -79,   -79,   -79,   -79,   247,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   463,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   464,   465,   185,   467,
     -60,   470,    12,   -79,   -61,   409,   147,   149,   -79,   -79,
       0,     0,   -79,   -79,   -79,   -79,   185,   -59,     0,   304,
     -60,   -60,   -60,   -60,   -61,   -61,   -61,   -61,   -46,   -46,
     -46,   -46,     0,   185,     0,   -46,   314,   -59,   -59,   -59,
     -59,    49,    49,    49,     0,     0,   -62,     0,     0,     0,
     -56,   185,     0,     0,     0,   326,     0,     0,     0,    49,
     293,     0,     0,    49,   185,   185,   -62,   -62,   -62,   -62,
     -56,   -56,   -56,   -56,     0,     0,     0,   185,     0,     0,
       0,   340,     0,     0,   208,   209,     0,   202,   202,   210,
       0,   211,   212,   213,   214,   215,   216,   217,     0,     0,
       0,   -91,     0,     0,     0,   218,   -91,   -91,   -91,   -91,
      38,    39,     0,   -91,    40,   -91,   185,     0,     0,   364,
     -91,   -91,   -91,   -91,   285,   285,     0,   -91,   -91,   221,
     221,     0,   221,     0,     0,   375,   376,     0,   247,   221,
     221,     0,   221,     0,     0,   384,   385,     0,   247,   221,
     221,     0,   221,     0,     0,   221,   221,   395,   396,     0,
     247,     0,     0,   221,   221,     0,   221,     0,   186,   247,
     247,   406,   407,     0,   247,     0,     0,   202,     0,     0,
     221,     0,   185,   185,   -33,   -33,    85,    86,     0,   221,
     221,   -33,   221,     0,     0,   425,   426,     0,   247,   203,
       0,     0,     0,   222,   222,   222,    91,   186,   186,     0,
     222,   -44,   -44,   -44,   -44,     0,   234,   235,   -44,   355,
       0,   236,   248,   237,   238,   239,   240,   241,   242,   243,
       0,     0,     0,   341,   -44,   -44,     0,   244,   -44,   -44,
     -44,   -44,    38,    39,   -91,   -91,    40,     0,     0,   -91,
     -91,   -91,   -91,     0,     0,   203,     0,   203,   203,   203,
     286,   286,   286,   286,   203,     0,   186,     0,     0,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   248,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,   186,   305,   -44,     0,
     185,   -72,   -44,   -44,   -44,   -44,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   186,   193,   194,   186,     0,     0,
     195,     0,   196,   197,   198,   199,     0,     0,    96,     0,
       0,   186,     0,     0,   203,     0,   200,   -36,   -36,   -36,
     -36,    38,    39,     0,   -36,    40,     0,   -42,   -42,   186,
       0,     0,   -42,   222,   -42,   -42,   -42,   -42,     0,     0,
     -46,   -46,   186,   186,   -46,   -46,   -46,   -46,   -42,   -39,
     -39,   -39,   -39,   -42,   -42,   186,   -39,   -42,     0,   248,
       0,     0,   -43,   -43,     0,   203,   203,   -43,     0,   -43,
     -43,   -43,   -43,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -43,   -29,   -29,   291,   292,   -43,   -43,
       0,     0,   -43,     0,   186,     0,     0,   286,   -48,   -48,
     -48,   -48,   286,   286,     0,   -48,     0,   222,   222,     0,
     222,     0,     0,   186,   186,     0,   248,   222,   222,     0,
     222,     0,     0,   203,   203,     0,   248,   222,   222,     0,
     222,     0,     0,   222,   222,   222,   222,     0,   248,     0,
       0,   222,   222,     0,   222,     0,   187,   248,   248,   248,
     248,     0,   248,     0,     0,   203,     0,     0,   222,     0,
     186,   186,   -57,   -57,   -57,   -57,     0,   222,   222,   -57,
     222,     0,     0,   286,   286,     0,   248,   204,     0,     0,
       0,   223,   223,   223,     0,   187,   187,     0,   223,    25,
      26,     0,     0,     0,    30,     0,    31,   172,    32,    33,
     249,     0,     0,     0,   276,   277,     0,     0,     0,   278,
      37,   279,   280,   281,   282,    38,    39,   -33,   -33,    40,
       0,   -33,   -33,   338,   339,   283,     1,     2,     3,     4,
      38,    39,     0,   204,    40,   204,   204,   204,   287,   287,
     287,   287,   204,     0,   187,     0,     0,    20,     0,     1,
       2,     3,     4,    21,   249,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   170,    32,    33,    34,
      35,    36,     0,     0,   187,     0,   -36,   -36,   186,    37,
     -36,   -36,   -36,   -36,    38,    39,     0,     0,    40,   171,
      89,   -50,   187,   193,   194,   187,     0,     0,   195,     0,
     196,   197,   198,   199,   -40,   -40,   -40,   -40,     0,   187,
       0,   -40,   204,     0,   200,   -20,   -20,   127,   128,    38,
      39,     0,   -20,    40,     0,   173,   174,   187,     0,     0,
     175,   223,   176,   177,   178,   179,     0,     0,   -39,   -39,
     187,   187,   -39,   -39,   -39,   -39,   183,   -47,   -47,   -47,
     -47,    38,    39,   187,   -47,    40,     0,   249,     0,     0,
     208,   209,     0,   204,   204,   210,     0,   211,   212,   213,
     214,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   218,   -30,   -30,   291,   292,    38,    39,     0,     0,
      40,     0,   187,     0,     0,   287,   -58,   -58,   -58,   -58,
     287,   287,     0,   -58,     0,   223,   223,     0,   223,     0,
       0,   187,   187,     0,   249,   223,   223,     0,   223,     0,
       0,   204,   204,     0,   249,   223,   223,     0,   223,     0,
       0,   223,   223,   223,   223,     0,   249,     0,     0,   223,
     223,     0,   223,     0,   188,   249,   249,   249,   249,     0,
     249,     0,     0,   204,     0,     0,   223,     0,   187,   187,
     -34,   -34,    85,    86,     0,   223,   223,   -34,   223,     0,
       0,   287,   287,     0,   249,   205,     0,     0,     0,   225,
     225,   225,     0,   188,   188,     0,   225,   234,   235,     0,
       0,   -32,   236,     0,   237,   238,   239,   240,   251,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   244,   -32,
     -32,   254,   255,    38,    39,     0,     0,    40,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   291,
     292,   205,     0,   205,   205,   205,   288,   288,   288,   288,
     205,     0,   188,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   251,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,   188,     0,   -48,   -48,   187,   -71,   -48,   -48,
     -48,   -48,   -71,   -71,     0,   -31,   -71,   -71,   -71,   -71,
     188,     0,     0,   188,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   133,   -31,   -31,   254,   255,   188,     0,     0,
     205,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
     -25,   -25,     0,     0,     0,   188,   -57,   -57,     0,   225,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,   188,   188,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,
     -26,   188,   -40,   -40,   -91,   251,   -40,   -40,   -40,   -40,
       0,   205,   205,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -22,   -22,
     -22,   -22,   129,   130,     0,   -22,     0,   131,   132,     0,
     188,     0,     0,   288,   -35,   -35,    85,    86,   288,   288,
       0,   -35,     0,   225,   225,     0,   225,     0,     0,   188,
     188,     0,   251,   225,   225,     0,   225,     0,     0,   205,
     205,     0,   251,   225,   225,     0,   225,     0,     0,   225,
     225,   225,   225,     0,   251,     0,     0,   225,   225,     0,
     225,     0,   189,   251,   251,   251,   251,     0,   251,     0,
       0,   205,     0,     0,   225,     0,   188,   188,   -37,   -37,
     -37,   -37,     0,   225,   225,   -37,   225,     0,     0,   288,
     288,     0,   251,   206,     0,     0,     0,   226,   226,   226,
       0,   189,   189,     0,   226,   -47,   -47,     0,   -44,   -47,
     -47,   -47,   -47,     0,     0,     0,   252,   -44,   -44,   -44,
     -44,   -44,   -44,   315,   -44,   -46,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   206,
       0,   206,   206,   206,   289,   289,   289,   289,   206,     0,
     189,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     252,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
     189,     0,   -58,   -58,   188,   -69,   -58,   -58,   -58,   -58,
     -69,   -69,     0,     0,   -69,   -69,   -69,   -69,   189,     0,
       0,   189,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
       0,   -28,   -28,   291,   292,   189,     0,     0,   206,   -23,
     -23,   -23,   -23,   129,   130,     0,   -23,     0,   131,   132,
       0,     0,     0,   189,   -34,   -34,     0,   226,   -34,   -34,
     338,   339,     0,     0,     0,     0,   189,   189,   -24,   -24,
     -24,   -24,   129,   130,     0,   -24,     0,   131,   132,   189,
     -35,   -35,   -33,   252,   -35,   -35,   338,   339,     0,   206,
     206,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,   312,   313,   -37,   -37,     0,     0,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   189,     0,
       0,   289,   -38,   -38,   -38,   -38,   289,   289,     0,   -38,
       0,   226,   226,     0,   226,     0,     0,   189,   189,     0,
     252,   226,   226,     0,   226,     0,     0,   206,   206,     0,
     252,   226,   226,     0,   226,     0,     0,   226,   226,   226,
     226,     0,   252,     0,     0,   226,   226,     0,   226,     0,
     184,   252,   252,   252,   252,     0,   252,     0,     0,   206,
       0,     0,   226,     0,   189,   189,   -60,   -60,   -60,   -60,
       0,   226,   226,   -60,   226,     0,     0,   289,   289,     0,
     252,   201,     0,     0,     0,   220,   220,   220,     0,   184,
     184,     0,   220,     0,     0,     0,   116,   117,   -36,   -61,
     -61,   -61,   -61,     0,   246,     0,   -61,   -36,   -36,   -36,
     -36,   -36,   -36,   -39,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
      80,   -39,   -39,   -39,   -39,   -39,   -39,   201,     0,   201,
     201,   201,   284,   284,   284,   284,   201,     0,   184,   -38,
     -38,     0,     0,   -38,   -38,   -38,   -38,     0,   246,     0,
       0,   102,     0,     0,     0,   219,   219,   219,     0,   229,
     229,     0,   219,   -59,   -59,   -59,   -59,     0,   184,   -48,
     -59,     0,   189,     0,   245,     0,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,   184,   -48,   -48,   -48,
     -48,   -48,   -48,   -60,   -60,     0,     0,   -60,   -60,   -60,
     -60,     0,     0,   184,     0,     0,     0,   102,     0,   102,
     102,   102,   152,   153,   154,   155,   156,     0,   229,   -61,
     -61,   184,     0,   -61,   -61,   -61,   -61,     0,   245,     0,
       0,     0,   -59,   -59,   328,   329,   -59,   -59,   -59,   -59,
      -2,     0,     0,     1,     2,     3,     4,   184,   229,   -62,
     -62,   -57,     0,   -62,   -62,   -62,   -62,   342,   343,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   300,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -56,   -56,     0,     0,   -56,
     -56,   -56,   -56,   310,     0,     0,   184,     0,     0,   -62,
     -62,   -62,   -62,     0,   366,   367,   -62,     0,     0,   220,
     220,   320,   220,     0,   -56,   -56,   -56,   -56,   246,   220,
     220,   -56,   220,     0,   -21,   -21,   127,   128,   246,   220,
     220,   -21,   220,     0,     0,   393,   394,   334,     0,     0,
     246,     0,     0,   220,   220,     0,   220,     0,     0,   404,
     405,     0,     0,     0,   246,     0,     0,   201,     0,     0,
     220,   -46,   184,   184,     0,   -46,   -46,   -46,   -46,   220,
     220,     0,   220,     0,     0,   -33,   360,     0,   246,   -33,
     -33,   302,   303,     0,     0,     0,     0,     0,     0,   219,
     219,    -4,   219,    81,    -4,    -4,    -4,    -4,   245,   219,
     219,    -5,   219,     0,    -5,    -5,    -5,    -5,   245,   219,
     219,   -36,   219,     0,     0,   -36,   -36,   -36,   -36,     0,
     245,     0,     0,   219,   219,     0,   219,     0,   224,   224,
     224,     0,   230,   230,   245,   224,     0,   102,     0,     0,
     219,     0,   229,   229,     0,     0,     0,   250,     0,   219,
     219,   -78,   219,   -78,   -78,   -78,   -78,   -78,   245,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     184,    -6,     0,   -78,    -6,    -6,    -6,    -6,   -78,   -78,
       0,   230,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,   250,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   230,   -79,   -79,   -79,   -79,   -79,   -79,   -79,    -3,
       0,     0,    -3,    -3,    -3,    -3,   -79,     0,     0,   301,
       0,   -79,   -79,     0,     0,   -79,   -79,   -79,   -79,    -7,
       0,     0,    -7,    -7,    -7,    -7,   311,   -39,     0,     0,
     229,   -39,   -39,   -39,   -39,   -48,     0,     0,     0,   -48,
     -48,   -48,   -48,   -72,   321,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -70,     0,
     335,   -70,   -70,   -70,   -70,   -72,     0,     0,     0,   -40,
     -72,   -72,     0,     0,   -72,   -72,   -72,   -72,   -40,   -40,
     -40,   -40,   -40,   -40,   -34,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -34,   -34,   -34,   -34,   -34,   -34,   361,
     -34,     0,   -34,   -34,   -34,   -34,   312,   313,     0,     0,
       0,     0,   224,   224,     0,   224,     0,     0,     0,     0,
       0,   250,   224,   224,   -67,   224,     0,   -67,   -67,   -67,
     -67,   250,   224,   224,   -57,   224,     0,     0,   -57,   -57,
     -57,   -57,     0,   250,     0,     0,   224,   224,   -40,   224,
       0,     0,   -40,   -40,   -40,   -40,   -66,   250,     0,   -66,
     -66,   -66,   -66,   224,   -34,   230,   230,     0,   -34,   -34,
     302,   303,   224,   224,     0,   224,     0,     0,     0,     0,
     -71,   250,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,   -35,
       0,     0,   -71,   -35,   -35,   302,   303,   -71,   -71,     0,
       0,   -71,   -71,   -71,   -71,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,   -47,     0,     0,   -78,   -47,   -47,
     -47,   -47,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -58,     0,     0,     0,   -58,   -58,   -58,   -58,     0,     0,
       0,     0,   -73,   230,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,   -37,     0,     0,   -73,   -37,   -37,   -37,   -37,   -73,
     -73,     0,     0,   -73,   -73,   -73,   -73,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,   -38,     0,     0,   -74,
     -38,   -38,   -38,   -38,   -74,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,   -60,     0,     0,   -75,   -60,   -60,   -60,   -60,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,   -61,     0,     0,   -76,
     -61,   -61,   -61,   -61,   -76,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,   -59,     0,     0,   -77,   -59,   -59,   -59,   -59,   -77,
     -77,     0,     0,   -77,   -77,   -77,   -77,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,   -62,     0,     0,   -67,
     -62,   -62,   -62,   -62,   -67,   -67,     0,     0,   -67,   -67,
     -67,   -67,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,   -56,     0,     0,   -81,   -56,   -56,   -56,   -56,   -81,
     -81,     0,     0,   -81,   -81,   -81,   -81,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,     0,     0,     0,   -90,   -90,     0,     0,   -90,   -90,
     -90,   -90,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,     0,   -66,     0,     0,     0,     0,   -66,
     -66,     0,     0,   -66,   -66,   -66,   -66,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,   -70,
       0,     0,     0,     0,   -70,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   466,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,   -83,   -83,     0,     0,   -83,   -83,
     -83,   -83,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,   -86,
     -86,     0,     0,   -86,   -86,   -86,   -86,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,   -89,
       0,     0,     0,     0,   -89,   -89,     0,     0,   -89,   -89,
     -89,   -89,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,     0,     0,     0,   -88,     0,     0,     0,     0,   -88,
     -88,     0,     0,   -88,   -88,   -88,   -88,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,     0,     0,     0,     0,   -87,
       0,     0,     0,     0,   -87,   -87,     0,     0,   -87,   -87,
     -87,   -87,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,   -84,     0,     0,     0,     0,   -84,
     -84,     0,     0,   -84,   -84,   -84,   -84,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,   -85,
       0,     0,     0,     0,   -85,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -73,     0,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,   -73,
     -73,     0,     0,   -73,   -73,   -73,   -73,   -74,     0,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -74,
       0,     0,     0,     0,   -74,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -76,     0,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,   -76,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -77,     0,     0,     0,     0,   -77,
     -77,     0,     0,   -77,   -77,   -77,   -77,   -81,     0,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,   -81,   -81,     0,     0,   -81,   -81,
     -81,   -81,   -68,     0,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,   -68,     0,     0,     0,     0,   -68,
     -68,     0,     0,   -68,   -68,   -68,   -68,   -90,     0,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,     0,     0,     0,   -90,   -90,     0,     0,   -90,   -90,
     -90,   -90,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,     0,     0,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -86,     0,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,     0,     0,     0,     0,     0,   -86,
       0,     0,     0,     0,   -86,   -86,     0,     0,   -86,   -86,
     -86,   -86,   -89,     0,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,
       0,     0,     0,     0,   -89,     0,     0,     0,     0,   -89,
     -89,     0,     0,   -89,   -89,   -89,   -89,   -88,     0,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,     0,   -88,
       0,     0,     0,     0,   -88,   -88,     0,     0,   -88,   -88,
     -88,   -88,   -87,     0,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,
       0,     0,     0,     0,   -87,     0,     0,     0,     0,   -87,
     -87,     0,     0,   -87,   -87,   -87,   -87,   -84,     0,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,   -84,
       0,     0,     0,     0,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,   -85,     0,     0,     0,     0,   -85,
     -85,     0,     0,   -85,   -85,   -85,   -85,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   170,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   171,
     294,   -50,   -70,     0,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,   -70,
     -70,     0,     0,   -70,   -70,   -70,   -70,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   170,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   171,
     351,   -50,   -67,     0,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,   -67,     0,     0,     0,     0,   -67,
     -67,     0,     0,   -67,   -67,   -67,   -67,    20,     0,     1,
       2,     3,     4,    21,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,    31,   170,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,    40,   171,
     368,   -50,    20,     0,     1,     2,     3,     4,    21,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
      31,   170,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
      39,     0,     0,    40,   171,   416,   -50,   -66,     0,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,   -66,
       0,     0,     0,     0,   -66,   -66,     0,     0,   -66,   -66,
     -66,   -66,   256,     0,     1,     2,     3,     4,   257,     0,
     258,   259,   260,    25,    26,   261,   262,   263,    30,     0,
      31,   170,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
      39,     0,     0,    40,   264,    20,   -50,     1,     2,     3,
       4,    21,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,    31,   170,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,   -35,    38,    39,     0,     0,    40,   171,     0,   -50,
     -35,   -35,   -35,   -35,   -35,   -35,   -47,   -35,     0,   -35,
     -35,   -35,   -35,   312,   313,   -47,   -47,   -47,   -47,   -47,
     -47,   -58,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -58,   -58,   -58,   -58,   -58,   -58,   -37,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -37,   -37,   -37,   -37,   -37,
     -37,   -38,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -38,   -38,   -38,   -38,   -38,   -38,   -60,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -60,   -60,   -60,   -60,   -60,
     -60,   -61,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -61,   -61,   -61,   -61,   -61,   -61,   -59,   -61,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -59,   -59,   -59,   -59,   -59,
     -59,   -62,   -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -62,   -62,   -62,   -62,   -62,   -62,   -56,   -62,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -44,   -44,   -44,   -44,   -44,
     -44,   365,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
     -33,   -33,   -33,   362,   363,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -40,   -40,   -40,   -40,   -40,
     -40,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,   362,   363,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   362,   363,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -58,   -58,   -58,   -58,   -58,
     -58,     0,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,   -38,
     -38,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,     0,   -56,
     -56,   -56,   -56,   -56,   -56
};

static const yytype_int16 yycheck[] =
{
       0,     0,    20,    69,    33,    14,     6,     6,   171,   305,
      34,    35,   125,    18,    54,     9,    45,    18,    18,   315,
      33,    43,    16,     3,     4,     5,     6,    20,    33,    23,
      20,   327,    45,    38,    39,    40,    41,    38,    39,    27,
     125,    20,    27,    37,     0,   341,    34,   125,    42,    34,
     125,    20,    46,   125,    34,    33,    18,    34,    35,   125,
      54,    38,    39,    33,   125,    38,    39,    33,   134,   365,
      64,    33,    45,    33,    68,    69,    38,    39,    40,    41,
      33,    75,    76,    77,    78,   125,    18,    27,    28,    83,
      84,    85,    86,    45,    34,    95,   136,    91,    92,   165,
      18,   264,    45,    34,    35,    33,    38,    39,    40,    41,
      38,    39,    40,    41,    34,    35,   125,    45,    46,    33,
      38,    39,    40,    41,   164,   125,   125,    33,   168,    33,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    33,     1,    33,     3,     4,     5,     6,
       7,   145,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    45,    19,    20,    21,    22,    23,    24,    25,    45,
     164,   165,    27,    28,   168,    20,    33,   171,    45,    34,
      20,    38,    39,    34,    35,    42,    43,    44,    45,   183,
      12,    13,   186,    34,    35,    17,    45,    19,    20,    21,
      22,    23,    24,    25,    34,    35,   200,    33,    45,   203,
      34,    33,    38,    39,    40,    41,    38,    39,    34,    45,
      42,    12,    13,    45,   218,    20,    17,    34,    19,    20,
      21,    22,    23,    24,    25,    34,    45,   231,   232,    38,
      39,    43,    33,    34,    35,    45,    18,    38,    39,    18,
     244,    42,    34,    34,   248,   295,    38,    39,    73,    74,
     254,   255,   127,   128,    79,   259,    38,    39,    40,    41,
     264,   265,    34,    12,    13,    34,    38,    39,    17,   345,
      19,    20,    21,    22,    23,    24,    25,    34,    35,   283,
      34,    35,   286,    34,    33,    34,    34,   291,   292,    38,
      39,   295,    34,    42,   298,    18,    38,    39,   302,   303,
      34,   305,   352,    34,   308,    34,    35,    34,   312,   313,
      34,   315,    34,    35,   318,    38,    39,    40,    41,    38,
      39,    40,    41,   327,    45,   448,    45,   450,   332,    34,
      35,    34,   336,   337,   338,   339,    45,   341,    34,    35,
     344,   345,    34,   466,   348,   349,   350,   470,   352,    16,
      45,   355,    45,   448,   358,   450,    23,    45,   362,   363,
     448,   365,   450,   448,    34,   450,   448,    33,   450,    34,
      35,   466,   448,   449,   450,   470,    33,   448,   466,   450,
      33,   466,   470,    33,   466,   470,    34,    54,   470,    34,
     466,   467,    18,    34,   470,   466,    12,    13,   448,   470,
     450,    17,    69,    19,    20,    21,    22,    34,    35,    76,
      77,    45,    38,    39,    40,    41,   466,    33,    33,    33,
     470,    33,    38,    39,    91,    92,    42,    34,    35,   448,
      34,   450,    18,    33,    38,    39,    40,    41,   448,   448,
     450,   450,    33,    33,   448,   449,   450,   466,    33,    33,
      18,   470,    38,    39,    40,    41,   466,   466,   125,    34,
     470,   470,   466,   467,    18,    18,   470,   134,   135,   136,
      18,   296,   297,    18,   299,    34,    34,    33,   145,    38,
      39,   306,   307,    33,   309,    38,    39,    40,    41,    18,
      33,   316,   317,    33,   319,    34,    33,   164,   165,    38,
      39,   168,    33,    33,   171,   330,   331,    18,   333,    38,
      39,    40,    41,    33,    33,    33,    27,    28,    29,    30,
      31,    32,   347,    34,    45,    36,    37,    38,    39,    40,
      41,   356,   357,     1,   359,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      33,    19,    20,    21,    22,    23,    24,    25,    33,    33,
      33,    33,    34,    35,    34,    33,    38,    39,    40,    41,
      38,    39,    34,    18,    42,    43,    44,    45,    12,    13,
      18,    34,    34,    17,    34,    19,    20,    21,    22,    23,
      24,    25,   259,    38,    39,    40,    41,   264,    45,    33,
      38,    39,    40,    41,    38,    39,    45,    95,    42,    18,
      37,    34,    34,    12,    13,    38,    39,    34,    17,    46,
      19,    20,    21,    22,    23,    24,    25,    34,   295,    38,
      39,    40,    41,    18,    33,    45,    34,    34,   305,    38,
      39,    68,    34,    42,    34,    72,    73,    74,   315,    76,
      77,    34,    79,    38,    39,    40,    41,    34,    85,    86,
     327,    34,    35,    34,    91,    38,    39,    40,    41,    18,
      34,    34,    34,    18,   341,    34,    34,    34,   345,    34,
      34,    34,   349,   350,    34,   352,    34,    34,   355,    38,
      39,    40,    41,    38,    39,    40,    41,   124,   365,   126,
     127,   128,   129,   130,   131,   132,   133,    45,   135,    34,
      34,     1,    34,     3,     4,     5,     6,     7,   145,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    45,    19,
      20,    21,    22,    23,    24,    25,    45,    45,   165,    45,
      18,    34,     6,    33,    18,   344,   124,   126,    38,    39,
      -1,    -1,    42,    43,    44,    45,   183,    18,    -1,   186,
      38,    39,    40,    41,    38,    39,    40,    41,    38,    39,
      40,    41,    -1,   200,    -1,    45,   203,    38,    39,    40,
      41,   448,   449,   450,    -1,    -1,    18,    -1,    -1,    -1,
      18,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,   466,
     467,    -1,    -1,   470,   231,   232,    38,    39,    40,    41,
      38,    39,    40,    41,    -1,    -1,    -1,   244,    -1,    -1,
      -1,   248,    -1,    -1,    12,    13,    -1,   254,   255,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    33,    38,    39,    40,    41,
      38,    39,    -1,    45,    42,    33,   283,    -1,    -1,   286,
      38,    39,    40,    41,   291,   292,    -1,    45,    46,   296,
     297,    -1,   299,    -1,    -1,   302,   303,    -1,   305,   306,
     307,    -1,   309,    -1,    -1,   312,   313,    -1,   315,   316,
     317,    -1,   319,    -1,    -1,   322,   323,   324,   325,    -1,
     327,    -1,    -1,   330,   331,    -1,   333,    -1,    37,   336,
     337,   338,   339,    -1,   341,    -1,    -1,   344,    -1,    -1,
     347,    -1,   349,   350,    38,    39,    40,    41,    -1,   356,
     357,    45,   359,    -1,    -1,   362,   363,    -1,   365,    68,
      -1,    -1,    -1,    72,    73,    74,    33,    76,    77,    -1,
      79,    38,    39,    40,    41,    -1,    12,    13,    45,    46,
      -1,    17,    91,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    33,    34,    35,    -1,    33,    38,    39,
      40,    41,    38,    39,    33,    34,    42,    -1,    -1,    38,
      39,    40,    41,    -1,    -1,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,   135,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,   145,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,   165,    33,    34,    -1,
     467,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,   183,    12,    13,   186,    -1,    -1,
      17,    -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,
      -1,   200,    -1,    -1,   203,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    45,    42,    -1,    12,    13,   218,
      -1,    -1,    17,   222,    19,    20,    21,    22,    -1,    -1,
      34,    35,   231,   232,    38,    39,    40,    41,    33,    38,
      39,    40,    41,    38,    39,   244,    45,    42,    -1,   248,
      -1,    -1,    12,    13,    -1,   254,   255,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,    33,    36,    37,    38,    39,    38,    39,
      -1,    -1,    42,    -1,   283,    -1,    -1,   286,    38,    39,
      40,    41,   291,   292,    -1,    45,    -1,   296,   297,    -1,
     299,    -1,    -1,   302,   303,    -1,   305,   306,   307,    -1,
     309,    -1,    -1,   312,   313,    -1,   315,   316,   317,    -1,
     319,    -1,    -1,   322,   323,   324,   325,    -1,   327,    -1,
      -1,   330,   331,    -1,   333,    -1,    37,   336,   337,   338,
     339,    -1,   341,    -1,    -1,   344,    -1,    -1,   347,    -1,
     349,   350,    38,    39,    40,    41,    -1,   356,   357,    45,
     359,    -1,    -1,   362,   363,    -1,   365,    68,    -1,    -1,
      -1,    72,    73,    74,    -1,    76,    77,    -1,    79,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      91,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    17,
      33,    19,    20,    21,    22,    38,    39,    34,    35,    42,
      -1,    38,    39,    40,    41,    33,     3,     4,     5,     6,
      38,    39,    -1,   124,    42,   126,   127,   128,   129,   130,
     131,   132,   133,    -1,   135,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,   145,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,   165,    -1,    34,    35,   467,    33,
      38,    39,    40,    41,    38,    39,    -1,    -1,    42,    43,
      44,    45,   183,    12,    13,   186,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    38,    39,    40,    41,    -1,   200,
      -1,    45,   203,    -1,    33,    27,    28,    29,    30,    38,
      39,    -1,    34,    42,    -1,    12,    13,   218,    -1,    -1,
      17,   222,    19,    20,    21,    22,    -1,    -1,    34,    35,
     231,   232,    38,    39,    40,    41,    33,    38,    39,    40,
      41,    38,    39,   244,    45,    42,    -1,   248,    -1,    -1,
      12,    13,    -1,   254,   255,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,    33,    36,    37,    38,    39,    38,    39,    -1,    -1,
      42,    -1,   283,    -1,    -1,   286,    38,    39,    40,    41,
     291,   292,    -1,    45,    -1,   296,   297,    -1,   299,    -1,
      -1,   302,   303,    -1,   305,   306,   307,    -1,   309,    -1,
      -1,   312,   313,    -1,   315,   316,   317,    -1,   319,    -1,
      -1,   322,   323,   324,   325,    -1,   327,    -1,    -1,   330,
     331,    -1,   333,    -1,    37,   336,   337,   338,   339,    -1,
     341,    -1,    -1,   344,    -1,    -1,   347,    -1,   349,   350,
      38,    39,    40,    41,    -1,   356,   357,    45,   359,    -1,
      -1,   362,   363,    -1,   365,    68,    -1,    -1,    -1,    72,
      73,    74,    -1,    76,    77,    -1,    79,    12,    13,    -1,
      -1,    18,    17,    -1,    19,    20,    21,    22,    91,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    33,    36,
      37,    38,    39,    38,    39,    -1,    -1,    42,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,   135,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,   145,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,   165,    -1,    34,    35,   467,    33,    38,    39,
      40,    41,    38,    39,    -1,    18,    42,    43,    44,    45,
     183,    -1,    -1,   186,    27,    28,    29,    30,    31,    32,
      -1,    34,    18,    36,    37,    38,    39,   200,    -1,    -1,
     203,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    -1,    -1,    -1,   218,    34,    35,    -1,   222,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,   231,   232,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,   244,    34,    35,    18,   248,    38,    39,    40,    41,
      -1,   254,   255,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    -1,
     283,    -1,    -1,   286,    38,    39,    40,    41,   291,   292,
      -1,    45,    -1,   296,   297,    -1,   299,    -1,    -1,   302,
     303,    -1,   305,   306,   307,    -1,   309,    -1,    -1,   312,
     313,    -1,   315,   316,   317,    -1,   319,    -1,    -1,   322,
     323,   324,   325,    -1,   327,    -1,    -1,   330,   331,    -1,
     333,    -1,    37,   336,   337,   338,   339,    -1,   341,    -1,
      -1,   344,    -1,    -1,   347,    -1,   349,   350,    38,    39,
      40,    41,    -1,   356,   357,    45,   359,    -1,    -1,   362,
     363,    -1,   365,    68,    -1,    -1,    -1,    72,    73,    74,
      -1,    76,    77,    -1,    79,    34,    35,    -1,    18,    38,
      39,    40,    41,    -1,    -1,    -1,    91,    27,    28,    29,
      30,    31,    32,    33,    34,    18,    36,    37,    38,    39,
      40,    41,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,   124,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
     135,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
     145,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
     165,    -1,    34,    35,   467,    33,    38,    39,    40,    41,
      38,    39,    -1,    -1,    42,    43,    44,    45,   183,    -1,
      -1,   186,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,   200,    -1,    -1,   203,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      -1,    -1,    -1,   218,    34,    35,    -1,   222,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,   231,   232,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,   244,
      34,    35,    18,   248,    38,    39,    40,    41,    -1,   254,
     255,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    34,    35,    -1,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,   283,    -1,
      -1,   286,    38,    39,    40,    41,   291,   292,    -1,    45,
      -1,   296,   297,    -1,   299,    -1,    -1,   302,   303,    -1,
     305,   306,   307,    -1,   309,    -1,    -1,   312,   313,    -1,
     315,   316,   317,    -1,   319,    -1,    -1,   322,   323,   324,
     325,    -1,   327,    -1,    -1,   330,   331,    -1,   333,    -1,
      37,   336,   337,   338,   339,    -1,   341,    -1,    -1,   344,
      -1,    -1,   347,    -1,   349,   350,    38,    39,    40,    41,
      -1,   356,   357,    45,   359,    -1,    -1,   362,   363,    -1,
     365,    68,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      77,    -1,    79,    -1,    -1,    -1,    83,    84,    18,    38,
      39,    40,    41,    -1,    91,    -1,    45,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      37,    36,    37,    38,    39,    40,    41,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,   135,    34,
      35,    -1,    -1,    38,    39,    40,    41,    -1,   145,    -1,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      77,    -1,    79,    38,    39,    40,    41,    -1,   165,    18,
      45,    -1,   467,    -1,    91,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,   183,    36,    37,    38,
      39,    40,    41,    34,    35,    -1,    -1,    38,    39,    40,
      41,    -1,    -1,   200,    -1,    -1,    -1,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,   135,    34,
      35,   218,    -1,    38,    39,    40,    41,    -1,   145,    -1,
      -1,    -1,    34,    35,   231,   232,    38,    39,    40,    41,
       0,    -1,    -1,     3,     4,     5,     6,   244,   165,    34,
      35,    18,    -1,    38,    39,    40,    41,   254,   255,    -1,
      27,    28,    29,    30,    31,    32,   183,    34,    -1,    36,
      37,    38,    39,    40,    41,    34,    35,    -1,    -1,    38,
      39,    40,    41,   200,    -1,    -1,   283,    -1,    -1,    38,
      39,    40,    41,    -1,   291,   292,    45,    -1,    -1,   296,
     297,   218,   299,    -1,    38,    39,    40,    41,   305,   306,
     307,    45,   309,    -1,    27,    28,    29,    30,   315,   316,
     317,    34,   319,    -1,    -1,   322,   323,   244,    -1,    -1,
     327,    -1,    -1,   330,   331,    -1,   333,    -1,    -1,   336,
     337,    -1,    -1,    -1,   341,    -1,    -1,   344,    -1,    -1,
     347,    34,   349,   350,    -1,    38,    39,    40,    41,   356,
     357,    -1,   359,    -1,    -1,    34,   283,    -1,   365,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,   296,
     297,     0,   299,    37,     3,     4,     5,     6,   305,   306,
     307,     0,   309,    -1,     3,     4,     5,     6,   315,   316,
     317,    34,   319,    -1,    -1,    38,    39,    40,    41,    -1,
     327,    -1,    -1,   330,   331,    -1,   333,    -1,    72,    73,
      74,    -1,    76,    77,   341,    79,    -1,   344,    -1,    -1,
     347,    -1,   349,   350,    -1,    -1,    -1,    91,    -1,   356,
     357,     1,   359,     3,     4,     5,     6,     7,   365,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
     467,     0,    -1,    33,     3,     4,     5,     6,    38,    39,
      -1,   135,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   165,    19,    20,    21,    22,    23,    24,    25,     0,
      -1,    -1,     3,     4,     5,     6,    33,    -1,    -1,   183,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     0,
      -1,    -1,     3,     4,     5,     6,   200,    34,    -1,    -1,
     467,    38,    39,    40,    41,    34,    -1,    -1,    -1,    38,
      39,    40,    41,     1,   218,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,     0,    -1,
     244,     3,     4,     5,     6,    33,    -1,    -1,    -1,    18,
      38,    39,    -1,    -1,    42,    43,    44,    45,    27,    28,
      29,    30,    31,    32,    18,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,   283,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,   296,   297,    -1,   299,    -1,    -1,    -1,    -1,
      -1,   305,   306,   307,     0,   309,    -1,     3,     4,     5,
       6,   315,   316,   317,    34,   319,    -1,    -1,    38,    39,
      40,    41,    -1,   327,    -1,    -1,   330,   331,    34,   333,
      -1,    -1,    38,    39,    40,    41,     0,   341,    -1,     3,
       4,     5,     6,   347,    34,   349,   350,    -1,    38,    39,
      40,    41,   356,   357,    -1,   359,    -1,    -1,    -1,    -1,
       1,   365,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    43,    44,    45,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    43,    44,    45,
      34,    -1,    -1,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,     1,   467,     3,     4,     5,     6,     7,     8,
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
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    43,
      44,    45,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
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
      32,    -1,    34,    -1,    36,    37,    38,    39,    40,    41,
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
      37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
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
      76,    67,    76,    45,    45,    45,     8,    45,    76,    67,
      34,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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
static const yytype_int8 yyr2[] =
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
#line 49 "src/syntax/parser.y"
                                            {
                    (yyval.ast_node) = create_ast_node(TRANSLATION_UNIT, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                    ast = (yyval.ast_node);
                  }
#line 2657 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 55 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2665 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 58 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2671 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 61 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2677 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 62 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2683 "./src/syntax/parser.c"
    break;

  case 7: /* function_definition: type_specifier declarator compound_statement  */
#line 65 "src/syntax/parser.y"
                                                                  {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, NULL, (yyvsp[-2].ast_node), (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 2691 "./src/syntax/parser.c"
    break;

  case 8: /* type_specifier: INT  */
#line 70 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2697 "./src/syntax/parser.c"
    break;

  case 9: /* type_specifier: FLOAT  */
#line 71 "src/syntax/parser.y"
                      { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2703 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: ELEM  */
#line 72 "src/syntax/parser.y"
                     { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2709 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: SET  */
#line 73 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2715 "./src/syntax/parser.c"
    break;

  case 12: /* declarator: identifier '(' parameters ')'  */
#line 76 "src/syntax/parser.y"
                                          {
              (yyval.ast_node) = create_ast_node(DECLARATOR, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
            }
#line 2723 "./src/syntax/parser.c"
    break;

  case 13: /* parameters: parameter_list  */
#line 81 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2729 "./src/syntax/parser.c"
    break;

  case 14: /* parameters: %empty  */
#line 82 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 2735 "./src/syntax/parser.c"
    break;

  case 15: /* parameter_list: parameter_declaration ',' parameter_list  */
#line 85 "src/syntax/parser.y"
                                                         {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 2743 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_list: parameter_declaration  */
#line 88 "src/syntax/parser.y"
                                      { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2749 "./src/syntax/parser.c"
    break;

  case 17: /* parameter_declaration: type_specifier identifier  */
#line 91 "src/syntax/parser.y"
                                                 {
                        (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2757 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_and_expression  */
#line 96 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2763 "./src/syntax/parser.c"
    break;

  case 19: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 97 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2771 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: equality_expression  */
#line 102 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2777 "./src/syntax/parser.c"
    break;

  case 21: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 103 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 2785 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: relational_expression  */
#line 108 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2791 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 109 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2799 "./src/syntax/parser.c"
    break;

  case 24: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 112 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2807 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: belongs_to_expression  */
#line 117 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2813 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: EMPTY_CONST  */
#line 118 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 2821 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '<' additive_expression  */
#line 121 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2829 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression '>' additive_expression  */
#line 124 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2837 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 127 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2845 "./src/syntax/parser.c"
    break;

  case 30: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 130 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2853 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 135 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2861 "./src/syntax/parser.c"
    break;

  case 32: /* belongs_to_expression: additive_expression  */
#line 138 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2867 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: multiplicative_expression  */
#line 141 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2873 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 142 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2881 "./src/syntax/parser.c"
    break;

  case 35: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 145 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2889 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 150 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2895 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 151 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2903 "./src/syntax/parser.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 154 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2911 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: term  */
#line 159 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2917 "./src/syntax/parser.c"
    break;

  case 40: /* unary_expression: unary_operator unary_expression  */
#line 160 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 2925 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '+'  */
#line 165 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 2931 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '-'  */
#line 166 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 2937 "./src/syntax/parser.c"
    break;

  case 43: /* unary_operator: '!'  */
#line 167 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 2943 "./src/syntax/parser.c"
    break;

  case 44: /* term: identifier  */
#line 170 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2949 "./src/syntax/parser.c"
    break;

  case 45: /* term: INTEGER_CONST  */
#line 171 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2955 "./src/syntax/parser.c"
    break;

  case 46: /* term: FLOAT_CONST  */
#line 172 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2961 "./src/syntax/parser.c"
    break;

  case 47: /* term: '(' additive_expression ')'  */
#line 173 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 2969 "./src/syntax/parser.c"
    break;

  case 48: /* term: function_call_expression  */
#line 176 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2975 "./src/syntax/parser.c"
    break;

  case 49: /* optional_expression: expression  */
#line 179 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2981 "./src/syntax/parser.c"
    break;

  case 50: /* optional_expression: %empty  */
#line 180 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 2987 "./src/syntax/parser.c"
    break;

  case 51: /* expression: additive_expression  */
#line 183 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2993 "./src/syntax/parser.c"
    break;

  case 52: /* expression: function_arg_constant_expression  */
#line 184 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2999 "./src/syntax/parser.c"
    break;

  case 53: /* function_arg_constant_expression: EMPTY_CONST  */
#line 187 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3009 "./src/syntax/parser.c"
    break;

  case 54: /* function_arg_constant_expression: STRING  */
#line 192 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3019 "./src/syntax/parser.c"
    break;

  case 55: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 197 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3029 "./src/syntax/parser.c"
    break;

  case 56: /* function_call_expression: identifier '(' argument_list ')'  */
#line 204 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3039 "./src/syntax/parser.c"
    break;

  case 57: /* function_call_expression: set_function_call_expression  */
#line 209 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3045 "./src/syntax/parser.c"
    break;

  case 58: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 210 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3051 "./src/syntax/parser.c"
    break;

  case 59: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 213 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3061 "./src/syntax/parser.c"
    break;

  case 60: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 218 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3071 "./src/syntax/parser.c"
    break;

  case 61: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 223 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3081 "./src/syntax/parser.c"
    break;

  case 62: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 228 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3091 "./src/syntax/parser.c"
    break;

  case 63: /* argument_list: argument_list ',' expression  */
#line 235 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3099 "./src/syntax/parser.c"
    break;

  case 64: /* argument_list: expression  */
#line 238 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3105 "./src/syntax/parser.c"
    break;

  case 65: /* argument_list: %empty  */
#line 239 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3111 "./src/syntax/parser.c"
    break;

  case 66: /* compound_statement: '{' statement_list '}'  */
#line 242 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3117 "./src/syntax/parser.c"
    break;

  case 67: /* compound_statement: '{' '}'  */
#line 243 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3123 "./src/syntax/parser.c"
    break;

  case 68: /* statement_list: statement_list statement  */
#line 246 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3131 "./src/syntax/parser.c"
    break;

  case 69: /* statement_list: statement  */
#line 249 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3137 "./src/syntax/parser.c"
    break;

  case 70: /* declaration: type_specifier identifier ';'  */
#line 252 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, NULL, (yyvsp[-2].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
            }
#line 3145 "./src/syntax/parser.c"
    break;

  case 71: /* statement: declaration  */
#line 257 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3151 "./src/syntax/parser.c"
    break;

  case 72: /* statement: compound_statement  */
#line 258 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3157 "./src/syntax/parser.c"
    break;

  case 73: /* statement: expression_statement  */
#line 259 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3163 "./src/syntax/parser.c"
    break;

  case 74: /* statement: selection_statement  */
#line 260 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3169 "./src/syntax/parser.c"
    break;

  case 75: /* statement: iteration_statement  */
#line 261 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3175 "./src/syntax/parser.c"
    break;

  case 76: /* statement: io_statement  */
#line 262 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3181 "./src/syntax/parser.c"
    break;

  case 77: /* statement: jump_statement  */
#line 263 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3187 "./src/syntax/parser.c"
    break;

  case 78: /* statement: assignment_statement  */
#line 264 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3193 "./src/syntax/parser.c"
    break;

  case 79: /* statement: error  */
#line 265 "src/syntax/parser.y"
                { yyerrok; }
#line 3199 "./src/syntax/parser.c"
    break;

  case 80: /* assignment_statement: identifier '=' expression ';'  */
#line 268 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3207 "./src/syntax/parser.c"
    break;

  case 81: /* expression_statement: optional_expression ';'  */
#line 273 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3213 "./src/syntax/parser.c"
    break;

  case 82: /* set_membership_expression: expression IN expression  */
#line 276 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3221 "./src/syntax/parser.c"
    break;

  case 83: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 281 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3229 "./src/syntax/parser.c"
    break;

  case 84: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 284 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3237 "./src/syntax/parser.c"
    break;

  case 85: /* iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ')' statement  */
#line 289 "src/syntax/parser.y"
                                                                                                               {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3245 "./src/syntax/parser.c"
    break;

  case 86: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 292 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3253 "./src/syntax/parser.c"
    break;

  case 87: /* io_statement: WRITE '(' expression ')' ';'  */
#line 297 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3261 "./src/syntax/parser.c"
    break;

  case 88: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 300 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3269 "./src/syntax/parser.c"
    break;

  case 89: /* io_statement: READ '(' identifier ')' ';'  */
#line 303 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3277 "./src/syntax/parser.c"
    break;

  case 90: /* jump_statement: RETURN expression ';'  */
#line 308 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3285 "./src/syntax/parser.c"
    break;

  case 91: /* identifier: IDENTIFIER  */
#line 313 "src/syntax/parser.y"
                       { (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3291 "./src/syntax/parser.c"
    break;


#line 3295 "./src/syntax/parser.c"

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

#line 316 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
