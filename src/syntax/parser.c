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
  extern scope *initial_scope;
  extern symbol_table_row *initial_symbol_table;
  extern scope *current_scope;
  extern ast_node *ast;

  int is_a_function_declaration = 0;
  int scope_counter = 0;

#line 90 "./src/syntax/parser.c"

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
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_type_specifier = 53,            /* type_specifier  */
  YYSYMBOL_parameters = 54,                /* parameters  */
  YYSYMBOL_parameter_list = 55,            /* parameter_list  */
  YYSYMBOL_logical_or_expression = 56,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 57,    /* logical_and_expression  */
  YYSYMBOL_equality_expression = 58,       /* equality_expression  */
  YYSYMBOL_relational_expression = 59,     /* relational_expression  */
  YYSYMBOL_belongs_to_expression = 60,     /* belongs_to_expression  */
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
  YYSYMBOL_73_2 = 73,                      /* $@2  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5488

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  473

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
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    59,    62,    65,    66,    67,    70,    70,
      80,    81,    82,    83,    86,    87,    90,    94,   100,   101,
     106,   107,   112,   113,   116,   121,   122,   125,   128,   131,
     134,   139,   142,   145,   146,   149,   154,   155,   158,   163,
     164,   169,   170,   171,   174,   175,   176,   177,   180,   183,
     184,   191,   192,   195,   200,   205,   212,   217,   218,   221,
     226,   231,   236,   243,   246,   247,   250,   250,   261,   264,
     267,   270,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   287,   292,   295,   300,   303,   308,   312,   317,   320,
     323,   328,   333
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
  "function_definition", "$@1", "type_specifier", "parameters",
  "parameter_list", "logical_or_expression", "logical_and_expression",
  "equality_expression", "relational_expression", "belongs_to_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "unary_operator", "term", "optional_expression", "expression",
  "function_arg_constant_expression", "function_call_expression",
  "set_function_call_expression", "argument_list", "compound_statement",
  "$@2", "statement_list", "declaration", "statement",
  "assignment_statement", "expression_statement",
  "set_membership_expression", "selection_statement",
  "iteration_statement", "io_statement", "jump_statement", "identifier", YY_NULLPTR
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

#define YYPACT_NINF (-328)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     528,   -17,    10,    12,    23,   -15,    63,    67,   247,   852,
      54,   918,   968,    26,  -328,  1025,   -27,   195,     8,  1179,
      47,    73,   102,   123,   731,   868,    50,    68,   116,   252,
     407,   624,   745,    -5,  1001,  1039,   779,  1168,   124,   133,
    1209,  1339,   663,    34,   505,   505,   169,   505,    81,   172,
     779,   779,   779,   779,  1407,  1190,   152,   176,   179,   189,
     207,   193,   202,   211,   214,  1547,  1664,  1677,  1715,  1726,
    1875,    13,    69,   163,   210,   252,  1884,  1957,  2002,  2026,
    2038,   714,  1183,  3854,  1198,   225,   170,   229,  1240,  5188,
    3900,   235,   237,   195,   253,   262,   269,   295,   279,   284,
     286,  3946,  3992,  4038,  4084,  4130,  4176,  4222,  4268,  4314,
    4360,  1326,    88,   291,   298,   505,   169,   252,   252,   302,
    4406,  1307,  4452,  1618,    51,    32,    95,  1847,  1405,  1071,
     306,  4498,   300,   320,   331,   333,    88,  5232,    88,    88,
      88,   829,   829,   829,   829,   863,   342,  5188,   344,   347,
     349,    49,  2181,   280,  1956,  1984,  1509,  1747,  1799,  1828,
    1123,  5188,  4544,  4590,  4636,  4682,  5188,  4728,  4774,   -25,
     848,   346,   366,   368,   370,   512,  1518,  1856,   375,   383,
     388,   252,  1985,  2075,   878,  2374,  2418,  2492,  1493,   390,
     392,   398,   404,   162,    93,   110,   420,   421,   423,   252,
       6,   203,   240,   913,   394,   424,   437,   466,   191,   409,
     878,   878,   414,   417,   419,   425,  1543,   119,  1056,   248,
     254,   263,   252,    56,  2056,  2065,   945,  2114,   270,  2129,
    2213,  1625,   288,   129,   422,  1452,  4820,   408,   195,   426,
     428,   430,   431,   973,  1034,  1195,   252,  1234,  1265,   863,
    1311,  1372,  1436,  1098,  4866,   863,   863,  2802,   448,   449,
     195,   453,   454,   457,   468,  4912,   279,   462,  2888,  2934,
    2980,  3026,  3072,  3118,  3164,  3210,  1482,   470,   480,   481,
     482,  2576,  2268,  2393,   252,  2593,  2727,   829,  2824,  5252,
    5267,  2638,   829,   829,   505,   505,   169,   505,   144,   485,
     878,   878,  2532,   152,   505,   505,   169,   505,   154,   486,
     913,   913,   913,   913,   471,   152,  2544,  2612,   505,   505,
     169,   505,   201,   489,   945,   945,   945,   945,  2247,   152,
    4958,  5188,   491,   505,   505,   169,   505,   223,   501,   863,
     863,  1533,   152,  1572,  1603,    88,   494,   495,   505,   169,
     252,   252,  3256,  5188,   496,  3302,   195,   505,   505,   169,
     505,   278,   515,   829,   829,  5282,   152,  5297,  5312,   521,
     522,   523,   525,  2621,  2647,  2663,  2678,   312,   530,   533,
     535,   538,   550,   556,   568,   580,   594,   611,   323,   541,
     542,   544,   545,  2278,  2320,  2330,  2338,  2364,  2407,   327,
    5004,  5050,   546,   548,   549,   558,  1649,  1710,  1774,  1871,
     339,    65,   516,  3348,   569,   571,   579,   582,  5096,  3394,
     576,   583,   591,   593,   596,  5327,  5342,  5357,  5372,   351,
    2686,  2700,  2743,  2751,  2761,   635,   651,   675,   775,   825,
    2440,  2480,  2515,  2524,  2603,  5142,  1910,  1941,  2092,  2203,
    2239,  5232,   597,  5232,   592,   608,   613,  3440,  3486,  5387,
    5402,  5417,  5432,  5447,  3532,  5232,  3578,  3624,  3670,  3716,
    5232,  3762,  3808
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,   621,  -328,  -328,    15,  -328,   578,   316,
     504,   526,   274,  -328,  2245,  2000,   355,   693,  1031,  -132,
    2420,  2380,  1369,  1707,  -280,   -73,  -234,  -327,     9,   -82,
      18,  -110,   266,   -83,   -76,   -55,   -49,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    43,    98,    58,    59,   124,
     125,   126,   127,   128,   200,   201,   202,   203,   204,    99,
      60,   205,   206,   207,    72,   101,    89,   102,   103,   104,
     105,   106,    61,   107,   108,   109,   110,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    84,   331,   -10,   400,   267,    18,    13,   -92,    11,
      16,    -8,    -8,    -8,    -8,    10,    11,    42,    12,    19,
     122,   -92,    10,   377,   -51,    12,   418,   271,   -92,   188,
     -11,   353,   -12,    50,    51,   388,    42,     1,     2,     3,
       4,   -51,    -8,   -13,   310,   311,    63,   -64,   -64,   399,
      42,    42,    42,    42,   272,   152,   231,    73,    57,   -18,
     138,   273,   410,    14,   268,   162,   -18,    -2,   -15,    17,
       1,     2,     3,     4,   169,   188,   -19,   138,   136,   167,
      44,   231,   274,   -19,   168,   137,   429,     5,   275,   111,
     -51,   -51,   136,    42,   324,   325,   -55,    57,   119,   451,
     239,   240,   111,    80,    81,   241,    45,   242,   243,   244,
     245,   -45,   253,   123,   -54,    65,   133,   188,   188,   210,
     211,   246,   -20,   -20,   139,   140,    30,    31,   -46,   -20,
      32,   -45,   -45,   -45,   -45,    46,   253,   276,   253,   253,
     253,   291,   291,   291,   291,   253,   269,   111,   -46,   -46,
     -46,   -46,   266,   -45,   -45,   270,    47,   -45,   -45,   -45,
     -45,   111,   -53,   -51,   212,   213,   111,   210,   211,   214,
      55,   215,   216,   217,   218,   219,   220,   221,   373,   -52,
     -92,   188,   210,   211,   188,   222,   -65,   -65,   382,   209,
      30,    31,   210,   211,    32,   -92,   232,   -17,    82,   188,
     -92,   -92,   -92,   -92,   -63,   -63,    66,    20,    21,   -44,
     188,   188,    22,    74,    23,   170,    24,    25,    26,    27,
      28,   -33,   188,   -14,   315,    75,   231,    76,    29,   -44,
     -44,   -44,   -44,    30,    31,   393,    77,    32,    42,   210,
     211,   -33,   -33,   312,   313,    78,   188,    -4,    79,   253,
      -4,    -4,    -4,    -4,    83,   253,   253,   406,   -36,   -83,
      42,   210,   211,   -16,   171,   172,   354,    -4,   112,   173,
     113,   174,   175,   176,   177,   178,   179,   180,   -36,   -36,
     -36,   -36,   -55,   -55,   188,   181,   115,   291,   -54,   -54,
      30,    31,   291,   291,    32,   116,   371,   -53,   -53,   237,
     188,   188,   117,   231,   -52,   -52,   380,   -21,   -21,   139,
     140,    62,   425,    64,   -21,   231,   210,   211,   122,   267,
     391,   267,   -92,   -92,   231,   231,   231,   231,   118,   231,
     120,   111,   -49,   267,   147,   404,   122,   130,   267,   253,
     253,   271,   231,   271,   131,   253,   434,    81,   254,   415,
     188,   188,   146,   111,   148,   271,    42,   439,    81,   423,
     271,   444,    81,   291,   291,   149,   231,   150,   272,   464,
     272,   466,    35,   450,    81,   273,   161,   273,   268,   294,
     268,   132,   272,   471,   183,   463,    81,   272,   472,   273,
     163,    54,   268,   164,   273,   165,   274,   268,   274,   295,
     111,   296,   275,   297,   275,    35,    35,    69,    70,   -55,
     274,   225,   -39,   154,   155,   274,   275,   -54,   111,   -41,
     -41,   275,   -53,   304,   -41,   305,   -41,   -41,   -41,   -41,
     183,   306,   -39,   -39,   -39,   -39,   225,   307,   -55,   -54,
     -41,   -53,   -52,   -92,    35,   -41,   -41,   318,    35,   -41,
     319,   276,   320,   276,   -92,   -48,   -52,    35,   321,   333,
     269,   334,   269,   335,   336,   276,   266,   248,   266,   270,
     276,   270,   183,   183,   269,   -48,   -48,   -48,   -48,   269,
     266,   345,   346,   270,   -57,   266,   348,   349,   270,   -40,
     350,   248,    35,   248,   248,   248,   286,   286,   286,   286,
     248,   351,    35,   357,   -57,   -57,   -57,   -57,   355,   -40,
     -40,   -40,   -40,   358,   359,   360,    35,   189,   190,   374,
     383,    35,   191,   394,   192,   193,   194,   195,   196,   197,
     198,     1,     2,     3,     4,   407,   183,   401,   199,   302,
     412,   413,   419,    30,    31,   -92,   -92,    32,     5,   426,
     -92,   -92,   -92,   -92,   183,   430,   431,   432,   314,   433,
     369,   370,   452,   372,   435,   183,   183,   436,   -47,   437,
     378,   379,   438,   381,   -58,   440,   441,   183,   442,   443,
     446,   328,   447,   448,   389,   390,   -34,   392,   -47,   -47,
     -47,   -47,   449,    35,   -58,   -58,   -58,   -58,   -35,   402,
     403,   183,   405,   453,   341,   454,   -34,   -34,   312,   313,
     248,   248,   -37,   455,   414,    35,   456,   459,   -35,   -35,
     312,   313,   458,   421,   422,   460,   424,   461,    15,   -38,
     462,   465,   -37,   -37,   -37,   -37,   -42,   -42,   467,   183,
     151,   -42,   365,   -42,   -42,   -42,   -42,   286,   286,   -38,
     -38,   -38,   -38,   -60,   468,   375,   376,   -42,   225,   469,
      87,   411,   -42,   -42,   153,     0,   -42,   386,   387,   -61,
     225,     0,     0,   -60,   -60,   -60,   -60,     0,     0,   225,
     225,   397,   398,     0,   225,     0,    35,     0,     0,   -61,
     -61,   -61,   -61,   -59,   408,   409,    56,   225,     0,     0,
     248,   -44,   -44,   -44,   -44,   183,   183,     0,    35,   -44,
      36,    35,     0,   -59,   -59,   -59,   -59,     0,   427,   428,
       0,   225,   184,     0,     0,     0,   212,   213,     0,    36,
       0,   214,     0,   215,   216,   217,   218,   219,   220,   221,
       0,     0,     0,    36,    36,    36,    36,   222,     0,   226,
       0,     0,    30,    31,     0,    35,    32,   -43,   -43,     0,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,   184,   -45,
     -45,   -45,   -45,    35,   226,     0,     0,   -45,   -43,     0,
       0,     0,    36,   -43,   -43,     0,    36,   -43,     0,     0,
       0,    20,    21,   -62,     0,    36,    22,     0,    23,   170,
      24,    25,     0,     0,     0,   249,    35,     0,    35,     0,
     184,   184,    29,   -62,   -62,   -62,   -62,    30,    31,     0,
      35,    32,     0,     0,     0,    35,     0,     0,     0,   249,
      36,   249,   249,   249,   287,   287,   287,   287,   249,     0,
      36,   277,   278,   -56,     0,     0,   279,     0,   280,   281,
     282,   283,    -5,     0,    36,    -5,    -5,    -5,    -5,    36,
       0,     0,   284,   -56,   -56,   -56,   -56,    30,    31,     0,
       0,    32,    -5,     0,   184,   239,   240,   184,     0,     0,
     241,   -92,   242,   243,   244,   245,   -92,   -92,   -92,   -92,
     171,   172,   184,     0,   -92,   173,   246,   174,   175,   176,
     177,    30,    31,   184,   184,    32,   -46,   -46,   -46,   -46,
       0,   181,     0,     0,   -46,   184,    30,    31,    -6,   226,
      32,    -6,    -6,    -6,    -6,   189,   190,     0,     0,     0,
     191,    36,   192,   193,   194,   195,     0,     0,    -6,   184,
       0,     0,   249,     0,     0,     0,   199,     0,   249,   249,
       0,    30,    31,    36,     0,    32,     0,   212,   213,     0,
       0,     0,   214,     0,   215,   216,   217,   218,    -7,     0,
       0,    -7,    -7,    -7,    -7,     0,     0,   184,   222,     0,
     287,     0,     0,    30,    31,   287,   287,    32,    -7,     0,
       0,   -92,     0,   184,   184,     0,   226,     0,     0,     0,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   226,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,   226,   226,   226,
     226,     0,   226,     0,    36,    -3,     0,     0,    -3,    -3,
      -3,    -3,   249,   249,     0,   226,     0,     0,   249,   -33,
     -33,    52,    53,   184,   184,    -3,    36,   -33,    37,    36,
       0,     0,   -45,     0,     0,     0,   287,   287,     0,   226,
     185,   -45,   -45,   -45,   -45,   -45,   -45,    37,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -36,   -36,   -36,
     -36,    37,    37,    37,    37,   -36,     0,   227,     0,   -32,
     -46,   -46,     0,    36,   -46,   -46,   -46,   -46,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   185,   -32,   -32,   255,
     256,    36,   227,     0,     0,     0,   -44,     0,     0,     0,
      37,     0,     0,     0,    37,   -44,   -44,   -44,   -44,   -44,
     -44,   342,   -44,    37,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -31,     0,   250,    36,     0,    36,     0,   185,   185,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,    36,   -31,
     -31,   255,   256,    36,     0,     0,     0,   250,    37,   250,
     250,   250,   288,   288,   288,   288,   250,     0,    37,   -71,
       0,     0,   -71,   -71,   -71,   -71,     1,     2,     3,     4,
     -81,     0,    37,   -81,   -81,   -81,   -81,    37,    -9,   -71,
       0,    -9,    -9,    -9,    -9,     0,   -39,   -39,   -39,   -39,
     -81,     0,   185,   -46,   -39,   185,     0,     0,    -9,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     185,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
     -68,   185,   185,   -68,   -68,   -68,   -68,   -48,   -48,   -48,
     -48,     0,   -33,   185,     0,   -48,     0,   227,     0,     0,
     -68,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,    37,
     -33,   -33,   -33,   -33,   339,   340,     0,   185,     0,     0,
     250,     0,     0,   -36,     0,     0,   250,   250,     0,     0,
       0,    37,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -67,     0,     0,
     -67,   -67,   -67,   -67,     0,   185,     0,     0,   288,     0,
       0,     0,     0,   288,   288,     0,     0,   -67,     0,   -39,
       0,   185,   185,     0,   227,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   227,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,   227,   227,   227,   227,    56,
     227,     0,    37,     0,   -44,   -44,   -44,   -44,     0,   238,
     250,   250,   -44,   227,     0,     0,   250,   -57,   -57,   -57,
     -57,   185,   185,     0,    37,   -57,    40,    37,     0,     0,
     -48,     0,     0,     0,   288,   288,     0,   227,   186,   -48,
     -48,   -48,   -48,   -48,   -48,    40,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,    40,
      40,    40,    40,   145,     0,   229,     0,     0,     0,     0,
       0,    37,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,   -25,   -25,     0,   186,   -40,   -40,   -40,   -40,    37,
     229,     0,     0,   -40,   -57,     0,     0,     0,    40,     0,
       0,     0,    40,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,    40,   -57,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,   251,    37,     0,    37,   -92,   186,   186,     0,     0,
     -92,   -92,   -92,   -92,     0,   -92,    37,     0,   -92,     0,
       0,    37,     0,     0,     0,   251,    40,   251,   251,   251,
     289,   289,   289,   289,   251,    56,    40,     0,     0,     0,
     -44,   -44,   -44,   -44,     0,   356,   303,   -44,   -44,     0,
      40,   -44,   -44,   -44,   -44,    40,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   292,   293,     0,
     186,   -40,   -45,   186,     0,     0,   -45,   -45,   -45,   -45,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   186,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -92,   -92,   -92,   186,
     186,   -92,   -92,   -92,   -92,   -47,   -47,   -47,   -47,     0,
     -34,   186,     0,   -47,     0,   229,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,    40,   -34,   -34,
     -34,   -34,   339,   340,     0,   186,     0,     0,   251,     0,
       0,   -35,     0,     0,   251,   251,     0,     0,     0,    40,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
     -35,   -35,   -35,   339,   340,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   186,   -26,   -26,   289,     0,   329,   -44,
     -44,   289,   289,   -44,   -44,   -44,   -44,   -47,     0,   186,
     186,     0,   229,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   229,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,   229,   229,   229,   229,     0,   229,     0,
      40,     0,   -58,   -58,   -58,   -58,     0,     0,   251,   251,
     -58,   229,     0,     0,   251,   -34,   -34,    52,    53,   186,
     186,     0,    40,   -34,    41,    40,     0,     0,   -58,     0,
       0,     0,   289,   289,     0,   229,   187,   -58,   -58,   -58,
     -58,   -58,   -58,    41,   -58,     0,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -35,   -35,    52,    53,    41,    41,    41,
      41,   -35,     0,   230,   -37,   -37,   -37,   -37,     0,    40,
       0,     0,   -37,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   187,   -30,   -30,   292,   293,    40,   230,     0,
       0,     0,   -37,     0,     0,     0,    41,     0,     0,     0,
      41,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,    41,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,   252,
      40,     0,    40,     0,   187,   187,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,    40,   -27,   -27,   292,   293,    40,
       0,     0,     0,   252,    41,   252,   252,   252,   290,   290,
     290,   290,   252,     0,    41,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   292,   293,    41,     0,
       0,     0,     0,    41,   -22,   -22,   -22,   -22,   141,   142,
       0,   -22,     0,   143,   144,     0,     0,     0,   187,   -38,
     -46,   187,     0,     0,   -46,   -46,   -46,   -46,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   187,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   187,   187,     0,
       0,   -38,   -60,   -60,   -60,   -60,     0,     0,   -60,   187,
     -60,     0,     0,   230,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,     0,   -60,    41,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   187,     0,     0,   252,     0,     0,   -61,
       0,     0,   252,   252,     0,     0,     0,    41,   -61,   -61,
     -61,   -61,   -61,   -61,     0,   -61,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -23,   -23,   -23,   -23,   141,   142,     0,
     -23,   187,   143,   144,   290,   -61,   -61,   -61,   -61,   290,
     290,     0,     0,   -61,     0,     0,     0,   187,   187,     0,
     230,   -24,   -24,   -24,   -24,   141,   142,    34,   -24,   -33,
     143,   144,   230,   -33,   -33,   300,   301,     0,     0,   182,
       0,   230,   230,   230,   230,     0,   230,     0,    41,     0,
     -59,   -59,   -59,   -59,     0,     0,   252,   252,   -59,   230,
      67,    68,   252,     0,     0,     0,   224,   187,   187,     0,
      41,     0,     0,    41,   -62,   -62,   -62,   -62,     0,     0,
     290,   290,   -62,   230,     0,   182,   -56,   -56,   -56,   -56,
       0,   224,     0,     0,   -56,     0,     0,     0,     0,    34,
     -33,   -33,     0,    34,   -33,   -33,   326,   327,     0,   -36,
     -36,     0,    34,   -36,   -36,   -36,   -36,    41,     0,   -36,
     -59,     0,   247,   -36,   -36,   -36,   -36,   182,   182,   -59,
     -59,   -59,   -59,   -59,   -59,    41,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,     0,     0,   247,    34,   247,   247,
     247,   285,   285,   285,   285,   247,     0,    34,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -39,     0,     0,    41,     0,
      41,    34,     0,   -48,   -48,     0,    34,   -48,   -48,   -48,
     -48,     0,    41,     0,     0,     0,     0,    41,     0,     0,
       0,   182,   -84,     0,   -84,   -84,   -84,   -84,   -84,   166,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   182,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
     316,   317,     0,     0,   -84,     0,     0,     0,     0,   -84,
     -84,   -62,   182,   -84,     0,   -84,   -84,   -84,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,    34,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   182,   -57,   -57,     0,
       0,   -57,   -57,   -57,   -57,   343,   344,   -56,     0,     0,
      34,     0,    33,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,     0,   -56,    48,   -56,   -56,   -56,   -56,   -56,
     -56,   -40,   -40,     0,   182,   -40,   -40,   -40,   -40,     0,
       0,     0,   367,   368,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   223,   -45,   224,   -45,   -45,   -45,   -45,   -45,   -45,
     384,   385,   -47,   -47,     0,   224,   -47,   -47,   -47,   -47,
     233,     0,     0,     0,   395,   396,   223,     0,     0,   224,
       0,    34,     0,     0,    33,     0,     0,     0,    33,     0,
       0,     0,   224,     0,     0,   247,     0,    33,     0,     0,
     182,   182,     0,    34,   -58,   -58,    34,   129,   -58,   -58,
     -58,   -58,   233,   233,   -34,   -34,   224,     0,   -34,   -34,
     326,   327,   -35,   -35,     0,     0,   -35,   -35,   326,   327,
       0,   129,    33,   129,   129,   129,   156,   157,   158,   159,
     160,     0,    33,     0,     0,     0,     0,    39,   -37,   -37,
      34,     0,   -37,   -37,   -37,   -37,    33,     0,   -39,    49,
       0,    33,   -39,   -39,   -39,   -39,     0,     0,    34,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   298,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   228,    38,     0,     0,
       0,   -38,   -38,     0,   308,   -38,   -38,   -38,   -38,     0,
       0,    34,   -48,    34,     0,   234,   -48,   -48,   -48,   -48,
       0,   228,     0,     0,     0,    34,     0,   322,     0,    39,
      34,     0,     0,    39,   -60,   -60,    71,     0,   -60,   -60,
     -60,   -60,    39,    33,     0,     0,     0,     0,     0,     0,
       0,   337,     0,     0,     0,    85,     0,   234,   234,     0,
       0,    86,     0,     0,     0,    33,     0,     0,     0,   100,
       0,     0,     0,   114,   -61,   -61,     0,    39,   -61,   -61,
     -61,   -61,   100,     0,     0,     0,   -57,    39,     0,   361,
     -57,   -57,   -57,   -57,     0,     0,     0,   134,   135,     0,
       0,    39,     0,     0,     0,     0,    39,     0,   223,   -59,
     -59,     0,     0,   -59,   -59,   -59,   -59,   100,   -62,   -62,
     223,   299,   -62,   -62,   -62,   -62,   -40,   100,     0,     0,
     -40,   -40,   -40,   -40,   223,     0,    33,     0,   -34,   309,
       0,   100,   -34,   -34,   300,   301,   100,   223,     0,     0,
     129,     0,     0,     0,     0,   233,   233,     0,    33,     0,
       0,    33,   323,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   223,   -92,   -92,   -92,   -92,   -92,   -92,    39,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   338,   -33,     0,   -33,
     -33,   -33,   -33,   363,   364,     0,     0,   -56,   -56,     0,
      39,   -56,   -56,   -56,   -56,    33,   -35,     0,     0,     0,
     -35,   -35,   300,   301,     0,   -47,     0,     0,   332,   -47,
     -47,   -47,   -47,    33,   362,   -44,   -44,   -44,   -44,   -44,
     -44,   366,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     347,   -58,     0,   228,     0,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,     0,     0,   228,    33,   -37,    33,     0,
       0,   -37,   -37,   -37,   -37,     0,     0,     0,     0,   228,
      33,    39,   -38,     0,     0,    33,   -38,   -38,   -38,   -38,
     -60,     0,   228,    71,   -60,   -60,   -60,   -60,     0,     0,
     234,   234,     0,    39,   -61,    71,    39,     0,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,   228,     0,     0,    71,
       0,   100,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,    71,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     416,   417,     0,   100,     0,     0,   420,   -59,     0,     0,
      39,   -59,   -59,   -59,   -59,   -62,    71,     0,     0,   -62,
     -62,   -62,   -62,     0,     0,   -56,     0,     0,    39,   -56,
     -56,   -56,   -56,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     100,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,    39,     0,    39,     0,   -80,     0,     0,   100,     0,
     -80,   -80,     0,     0,   -80,    39,   -80,   -80,   -80,     0,
      39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
       0,   100,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,   -73,
     100,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,   -73,   -73,     0,     0,
     -73,     0,   -73,   -73,   -73,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,   -72,   -72,     0,     0,   -72,     0,   -72,   -72,
     -72,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,   -79,     0,     0,     0,     0,   -79,   -79,
       0,     0,   -79,     0,   -79,   -79,   -79,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -74,
       0,     0,     0,     0,   -74,   -74,     0,     0,   -74,     0,
     -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,     0,     0,     0,
     -75,   -75,     0,     0,   -75,     0,   -75,   -75,   -75,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,   -76,   -76,     0,     0,
     -76,     0,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   -77,     0,     0,
       0,     0,   -77,   -77,     0,     0,   -77,     0,   -77,   -77,
     -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,   -78,     0,     0,     0,     0,   -78,   -78,
       0,     0,   -78,     0,   -78,   -78,   -78,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,   -68,
       0,     0,     0,     0,   -68,   -68,     0,     0,   -68,     0,
     -68,   -68,   -68,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,   -82,     0,     0,     0,     0,
     -82,   -82,     0,     0,   -82,     0,   -82,   -82,   -82,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,     0,
       0,   -91,     0,     0,     0,     0,   -91,   -91,     0,     0,
     -91,     0,   -91,   -91,   -91,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,   -71,   -71,     0,     0,   -71,     0,   -71,   -71,
     -71,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,     0,   -67,     0,     0,     0,     0,   -67,   -67,
       0,     0,   -67,     0,   -67,   -67,   -67,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,   -81,
       0,     0,     0,     0,   -81,   -81,     0,     0,   -81,     0,
     -81,   -81,   -81,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     470,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
       0,     0,     0,     0,     0,   -84,     0,     0,     0,     0,
     -84,   -84,     0,     0,   -84,     0,   -84,   -84,   -84,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,   -87,     0,     0,     0,     0,   -87,   -87,     0,     0,
     -87,     0,   -87,   -87,   -87,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,     0,     0,     0,     0,     0,     0,   -90,     0,     0,
       0,     0,   -90,   -90,     0,     0,   -90,     0,   -90,   -90,
     -90,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,
       0,     0,     0,   -89,     0,     0,     0,     0,   -89,   -89,
       0,     0,   -89,     0,   -89,   -89,   -89,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,     0,   -88,
       0,     0,     0,     0,   -88,   -88,     0,     0,   -88,     0,
     -88,   -88,   -88,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,   -86,     0,     0,     0,     0,
     -86,   -86,     0,     0,   -86,     0,   -86,   -86,   -86,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,   -85,   -85,     0,     0,
     -85,     0,   -85,   -85,   -85,   -66,     0,   -66,   -66,   -66,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,   -66,     0,     0,
       0,     0,   -66,   -66,     0,     0,   -66,     0,   -66,    88,
     -66,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,   -80,   -80,
       0,     0,   -80,     0,   -80,   -80,   -80,   -73,     0,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,   -73,
       0,     0,     0,     0,   -73,   -73,     0,     0,   -73,     0,
     -73,   -73,   -73,    90,     0,     1,     2,     3,     4,    91,
       0,    92,    93,    94,    20,    21,    95,    96,    97,    22,
       0,    23,   235,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
      30,    31,     0,     0,    32,     0,   236,   121,   -50,   -72,
       0,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,   -72,   -72,     0,     0,
     -72,     0,   -72,   -72,   -72,   -70,     0,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,   -70,     0,     0,
       0,     0,   -70,   -70,     0,     0,   -70,     0,   -70,   -70,
     -70,   -79,     0,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,   -79,     0,     0,     0,     0,   -79,   -79,
       0,     0,   -79,     0,   -79,   -79,   -79,   -74,     0,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -74,
       0,     0,     0,     0,   -74,   -74,     0,     0,   -74,     0,
     -74,   -74,   -74,   -75,     0,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,     0,     0,     0,
     -75,   -75,     0,     0,   -75,     0,   -75,   -75,   -75,   -76,
       0,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,   -76,   -76,     0,     0,
     -76,     0,   -76,   -76,   -76,   -77,     0,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   -77,     0,     0,
       0,     0,   -77,   -77,     0,     0,   -77,     0,   -77,   -77,
     -77,   -78,     0,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,   -78,     0,     0,     0,     0,   -78,   -78,
       0,     0,   -78,     0,   -78,   -78,   -78,   -82,     0,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,   -82,
       0,     0,     0,     0,   -82,   -82,     0,     0,   -82,     0,
     -82,   -82,   -82,   -69,     0,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,   -69,     0,     0,     0,     0,
     -69,   -69,     0,     0,   -69,     0,   -69,   -69,   -69,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,     0,
       0,   -91,     0,     0,     0,     0,   -91,   -91,     0,     0,
     -91,     0,   -91,   -91,   -91,   -87,     0,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,   -87,     0,     0,
       0,     0,   -87,   -87,     0,     0,   -87,     0,   -87,   -87,
     -87,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,
       0,     0,     0,   -90,     0,     0,     0,     0,   -90,   -90,
       0,     0,   -90,     0,   -90,   -90,   -90,   -89,     0,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,     0,     0,     0,     0,     0,   -89,
       0,     0,     0,     0,   -89,   -89,     0,     0,   -89,     0,
     -89,   -89,   -89,   -88,     0,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,   -88,     0,     0,     0,     0,
     -88,   -88,     0,     0,   -88,     0,   -88,   -88,   -88,   -86,
       0,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,   -86,   -86,     0,     0,
     -86,     0,   -86,   -86,   -86,   -85,     0,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
       0,     0,   -85,   -85,     0,     0,   -85,     0,   -85,   -85,
     -85,   -66,     0,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,   -66,     0,     0,     0,     0,   -66,   -66,
       0,     0,   -66,     0,   -66,   330,   -66,   -71,     0,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,   -71,   -71,     0,     0,   -71,     0,
     -71,   -71,   -71,   -66,     0,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,   -66,     0,     0,     0,     0,
     -66,   -66,     0,     0,   -66,     0,   -66,   352,   -66,   -68,
       0,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,   -68,     0,     0,
     -68,     0,   -68,   -68,   -68,    90,     0,     1,     2,     3,
       4,    91,     0,    92,    93,    94,    20,    21,    95,    96,
      97,    22,     0,    23,   235,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,    30,    31,     0,     0,    32,     0,   236,   445,
     -50,   -81,     0,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   -81,     0,     0,     0,     0,   -81,   -81,
       0,     0,   -81,     0,   -81,   -81,   -81,    90,     0,     1,
       2,     3,     4,    91,     0,    92,    93,    94,    20,    21,
      95,    96,    97,    22,     0,    23,   235,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,    30,    31,     0,     0,    32,     0,
     236,   457,   -50,   -67,     0,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,     0,     0,   -67,     0,     0,     0,     0,
     -67,   -67,     0,     0,   -67,     0,   -67,   -67,   -67,    90,
       0,     1,     2,     3,     4,    91,     0,    92,    93,    94,
      20,    21,    95,    96,    97,    22,     0,    23,   235,    24,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,    30,    31,     0,     0,
      32,     0,   236,   257,   -50,     1,     2,     3,     4,   258,
       0,   259,   260,   261,    20,    21,   262,   263,   264,    22,
       0,    23,   235,    24,    25,    26,    27,    28,     0,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
      30,    31,     0,     0,    32,     0,   265,     0,   -50,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -57,   -57,   -57,   -57,   -57,   -57,
       0,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,     0,   -34,   -34,   -34,   -34,   363,   364,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,
     -35,   -35,   363,   364,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -58,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -60,   -60,   -60,   -60,   -60,   -60,
       0,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -59,   -59,   -59,   -59,   -59,   -59,
       0,   -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -56,   -56,   -56,   -56,   -56,   -56,
       0,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56
};

static const yytype_int16 yycheck[] =
{
       0,    74,   236,    20,   331,   137,    33,     7,    33,     0,
      10,     3,     4,     5,     6,     0,     7,    17,     0,    46,
     102,    46,     7,   303,    18,     7,   353,   137,    43,    29,
      20,   265,    20,    38,    39,   315,    36,     3,     4,     5,
       6,    46,    34,    20,    38,    39,    46,    34,    35,   329,
      50,    51,    52,    53,   137,   137,    56,    57,    43,    27,
      28,   137,   342,     0,   137,   147,    34,     0,    34,    43,
       3,     4,     5,     6,    20,    75,    27,    28,    27,   161,
      33,    81,   137,    34,   166,    34,   366,    20,   137,    89,
      34,    35,    27,    93,    38,    39,    46,    82,    98,    34,
      12,    13,   102,    34,    35,    17,    33,    19,    20,    21,
      22,    18,   112,    25,    46,    34,   116,   117,   118,    38,
      39,    33,    27,    28,    29,    30,    38,    39,    18,    34,
      42,    38,    39,    40,    41,    33,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   137,   147,    38,    39,
      40,    41,   137,    34,    35,   137,    33,    38,    39,    40,
      41,   161,    46,    34,    12,    13,   166,    38,    39,    17,
      46,    19,    20,    21,    22,    23,    24,    25,    34,    46,
      18,   181,    38,    39,   184,    33,    34,    35,    34,    20,
      38,    39,    38,    39,    42,    33,    20,    34,    35,   199,
      38,    39,    40,    41,    34,    35,    34,    12,    13,    18,
     210,   211,    17,    34,    19,    20,    21,    22,    23,    24,
      25,    18,   222,    34,    33,    18,   226,    34,    33,    38,
      39,    40,    41,    38,    39,    34,    34,    42,   238,    38,
      39,    38,    39,    40,    41,    34,   246,     0,    34,   249,
       3,     4,     5,     6,    44,   255,   256,    34,    18,    34,
     260,    38,    39,    34,    12,    13,   266,    20,    33,    17,
      33,    19,    20,    21,    22,    23,    24,    25,    38,    39,
      40,    41,    34,    35,   284,    33,    33,   287,    34,    35,
      38,    39,   292,   293,    42,    33,   296,    34,    35,    20,
     300,   301,    33,   303,    34,    35,   306,    27,    28,    29,
      30,    45,    34,    47,    34,   315,    38,    39,   400,   451,
     320,   453,    34,    35,   324,   325,   326,   327,    33,   329,
      46,   331,    46,   465,    34,   335,   418,    46,   470,   339,
     340,   451,   342,   453,    46,   345,    34,    35,    46,   349,
     350,   351,    46,   353,    34,   465,   356,    34,    35,   359,
     470,    34,    35,   363,   364,    34,   366,    34,   451,   451,
     453,   453,    17,    34,    35,   451,    34,   453,   451,    33,
     453,   115,   465,   465,    29,    34,    35,   470,   470,   465,
      46,    36,   465,    46,   470,    46,   451,   470,   453,    33,
     400,    33,   451,    33,   453,    50,    51,    52,    53,    34,
     465,    56,    18,   139,   140,   470,   465,    34,   418,    12,
      13,   470,    34,    33,    17,    33,    19,    20,    21,    22,
      75,    33,    38,    39,    40,    41,    81,    33,    18,    18,
      33,    18,    18,    34,    89,    38,    39,    33,    93,    42,
      33,   451,    33,   453,    46,    18,    34,   102,    33,    33,
     451,    33,   453,    33,    33,   465,   451,   112,   453,   451,
     470,   453,   117,   118,   465,    38,    39,    40,    41,   470,
     465,    33,    33,   465,    18,   470,    33,    33,   470,    18,
      33,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    33,   147,    33,    38,    39,    40,    41,    46,    38,
      39,    40,    41,    33,    33,    33,   161,    12,    13,    34,
      34,   166,    17,    34,    19,    20,    21,    22,    23,    24,
      25,     3,     4,     5,     6,    34,   181,    46,    33,   184,
      46,    46,    46,    38,    39,    33,    34,    42,    20,    34,
      38,    39,    40,    41,   199,    34,    34,    34,   203,    34,
     294,   295,    46,   297,    34,   210,   211,    34,    18,    34,
     304,   305,    34,   307,    18,    34,    34,   222,    34,    34,
      34,   226,    34,    34,   318,   319,    18,   321,    38,    39,
      40,    41,    34,   238,    38,    39,    40,    41,    18,   333,
     334,   246,   336,    34,   249,    34,    38,    39,    40,    41,
     255,   256,    18,    34,   348,   260,    34,    34,    38,    39,
      40,    41,    46,   357,   358,    34,   360,    34,     7,    18,
      34,    34,    38,    39,    40,    41,    12,    13,    46,   284,
     136,    17,   287,    19,    20,    21,    22,   292,   293,    38,
      39,    40,    41,    18,    46,   300,   301,    33,   303,    46,
      82,   345,    38,    39,   138,    -1,    42,   312,   313,    18,
     315,    -1,    -1,    38,    39,    40,    41,    -1,    -1,   324,
     325,   326,   327,    -1,   329,    -1,   331,    -1,    -1,    38,
      39,    40,    41,    18,   339,   340,    33,   342,    -1,    -1,
     345,    38,    39,    40,    41,   350,   351,    -1,   353,    46,
      17,   356,    -1,    38,    39,    40,    41,    -1,   363,   364,
      -1,   366,    29,    -1,    -1,    -1,    12,    13,    -1,    36,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    50,    51,    52,    53,    33,    -1,    56,
      -1,    -1,    38,    39,    -1,   400,    42,    12,    13,    -1,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    75,    38,
      39,    40,    41,   418,    81,    -1,    -1,    46,    33,    -1,
      -1,    -1,    89,    38,    39,    -1,    93,    42,    -1,    -1,
      -1,    12,    13,    18,    -1,   102,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,   112,   451,    -1,   453,    -1,
     117,   118,    33,    38,    39,    40,    41,    38,    39,    -1,
     465,    42,    -1,    -1,    -1,   470,    -1,    -1,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    -1,
     147,    12,    13,    18,    -1,    -1,    17,    -1,    19,    20,
      21,    22,     0,    -1,   161,     3,     4,     5,     6,   166,
      -1,    -1,    33,    38,    39,    40,    41,    38,    39,    -1,
      -1,    42,    20,    -1,   181,    12,    13,   184,    -1,    -1,
      17,    33,    19,    20,    21,    22,    38,    39,    40,    41,
      12,    13,   199,    -1,    46,    17,    33,    19,    20,    21,
      22,    38,    39,   210,   211,    42,    38,    39,    40,    41,
      -1,    33,    -1,    -1,    46,   222,    38,    39,     0,   226,
      42,     3,     4,     5,     6,    12,    13,    -1,    -1,    -1,
      17,   238,    19,    20,    21,    22,    -1,    -1,    20,   246,
      -1,    -1,   249,    -1,    -1,    -1,    33,    -1,   255,   256,
      -1,    38,    39,   260,    -1,    42,    -1,    12,    13,    -1,
      -1,    -1,    17,    -1,    19,    20,    21,    22,     0,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,   284,    33,    -1,
     287,    -1,    -1,    38,    39,   292,   293,    42,    20,    -1,
      -1,    18,    -1,   300,   301,    -1,   303,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,   315,    36,
      37,    38,    39,    40,    41,    -1,    -1,   324,   325,   326,
     327,    -1,   329,    -1,   331,     0,    -1,    -1,     3,     4,
       5,     6,   339,   340,    -1,   342,    -1,    -1,   345,    38,
      39,    40,    41,   350,   351,    20,   353,    46,    17,   356,
      -1,    -1,    18,    -1,    -1,    -1,   363,   364,    -1,   366,
      29,    27,    28,    29,    30,    31,    32,    36,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    38,    39,    40,
      41,    50,    51,    52,    53,    46,    -1,    56,    -1,    18,
      34,    35,    -1,   400,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    75,    36,    37,    38,
      39,   418,    81,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    93,    27,    28,    29,    30,    31,
      32,    33,    34,   102,    36,    37,    38,    39,    40,    41,
      -1,    18,    -1,   112,   451,    -1,   453,    -1,   117,   118,
      27,    28,    29,    30,    31,    32,    -1,    34,   465,    36,
      37,    38,    39,   470,    -1,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,     0,
      -1,    -1,     3,     4,     5,     6,     3,     4,     5,     6,
       0,    -1,   161,     3,     4,     5,     6,   166,     0,    20,
      -1,     3,     4,     5,     6,    -1,    38,    39,    40,    41,
      20,    -1,   181,    18,    46,   184,    -1,    -1,    20,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
     199,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
       0,   210,   211,     3,     4,     5,     6,    38,    39,    40,
      41,    -1,    18,   222,    -1,    46,    -1,   226,    -1,    -1,
      20,    27,    28,    29,    30,    31,    32,    -1,    34,   238,
      36,    37,    38,    39,    40,    41,    -1,   246,    -1,    -1,
     249,    -1,    -1,    18,    -1,    -1,   255,   256,    -1,    -1,
      -1,   260,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,     0,    -1,    -1,
       3,     4,     5,     6,    -1,   284,    -1,    -1,   287,    -1,
      -1,    -1,    -1,   292,   293,    -1,    -1,    20,    -1,    18,
      -1,   300,   301,    -1,   303,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,   315,    36,    37,    38,
      39,    40,    41,    -1,    -1,   324,   325,   326,   327,    33,
     329,    -1,   331,    -1,    38,    39,    40,    41,    -1,    43,
     339,   340,    46,   342,    -1,    -1,   345,    38,    39,    40,
      41,   350,   351,    -1,   353,    46,    17,   356,    -1,    -1,
      18,    -1,    -1,    -1,   363,   364,    -1,   366,    29,    27,
      28,    29,    30,    31,    32,    36,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    18,    -1,    56,    -1,    -1,    -1,    -1,
      -1,   400,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    -1,    75,    38,    39,    40,    41,   418,
      81,    -1,    -1,    46,    18,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    93,    27,    28,    29,    30,    31,    32,    -1,
      34,   102,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,   112,   451,    -1,   453,    33,   117,   118,    -1,    -1,
      38,    39,    40,    41,    -1,    43,   465,    -1,    46,    -1,
      -1,   470,    -1,    -1,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    33,   147,    -1,    -1,    -1,
      38,    39,    40,    41,    -1,    43,    33,    34,    46,    -1,
     161,    38,    39,    40,    41,   166,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    -1,
     181,    18,    34,   184,    -1,    -1,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    -1,    34,   199,    36,
      37,    38,    39,    40,    41,    -1,    33,    34,    35,   210,
     211,    38,    39,    40,    41,    38,    39,    40,    41,    -1,
      18,   222,    -1,    46,    -1,   226,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,   238,    36,    37,
      38,    39,    40,    41,    -1,   246,    -1,    -1,   249,    -1,
      -1,    18,    -1,    -1,   255,   256,    -1,    -1,    -1,   260,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    -1,    34,   284,    36,    37,   287,    -1,    33,    34,
      35,   292,   293,    38,    39,    40,    41,    18,    -1,   300,
     301,    -1,   303,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,   315,    36,    37,    38,    39,    40,
      41,    -1,    -1,   324,   325,   326,   327,    -1,   329,    -1,
     331,    -1,    38,    39,    40,    41,    -1,    -1,   339,   340,
      46,   342,    -1,    -1,   345,    38,    39,    40,    41,   350,
     351,    -1,   353,    46,    17,   356,    -1,    -1,    18,    -1,
      -1,    -1,   363,   364,    -1,   366,    29,    27,    28,    29,
      30,    31,    32,    36,    34,    -1,    36,    37,    38,    39,
      40,    41,    -1,    38,    39,    40,    41,    50,    51,    52,
      53,    46,    -1,    56,    38,    39,    40,    41,    -1,   400,
      -1,    -1,    46,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    75,    36,    37,    38,    39,   418,    81,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      93,    27,    28,    29,    30,    31,    32,    -1,    34,   102,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,   112,
     451,    -1,   453,    -1,   117,   118,    27,    28,    29,    30,
      31,    32,    -1,    34,   465,    36,    37,    38,    39,   470,
      -1,    -1,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,    -1,   147,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,   161,    -1,
      -1,    -1,    -1,   166,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    -1,    -1,    -1,   181,    18,
      34,   184,    -1,    -1,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,   199,    36,    37,    38,
      39,    40,    41,    38,    39,    40,    41,   210,   211,    -1,
      -1,    46,    38,    39,    40,    41,    -1,    -1,    18,   222,
      46,    -1,    -1,   226,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    34,   238,    36,    37,    38,    39,
      40,    41,    -1,   246,    -1,    -1,   249,    -1,    -1,    18,
      -1,    -1,   255,   256,    -1,    -1,    -1,   260,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    -1,
      34,   284,    36,    37,   287,    38,    39,    40,    41,   292,
     293,    -1,    -1,    46,    -1,    -1,    -1,   300,   301,    -1,
     303,    27,    28,    29,    30,    31,    32,    17,    34,    34,
      36,    37,   315,    38,    39,    40,    41,    -1,    -1,    29,
      -1,   324,   325,   326,   327,    -1,   329,    -1,   331,    -1,
      38,    39,    40,    41,    -1,    -1,   339,   340,    46,   342,
      50,    51,   345,    -1,    -1,    -1,    56,   350,   351,    -1,
     353,    -1,    -1,   356,    38,    39,    40,    41,    -1,    -1,
     363,   364,    46,   366,    -1,    75,    38,    39,    40,    41,
      -1,    81,    -1,    -1,    46,    -1,    -1,    -1,    -1,    89,
      34,    35,    -1,    93,    38,    39,    40,    41,    -1,    34,
      35,    -1,   102,    38,    39,    40,    41,   400,    -1,    34,
      18,    -1,   112,    38,    39,    40,    41,   117,   118,    27,
      28,    29,    30,    31,    32,   418,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,    34,    35,
      -1,    -1,    38,    39,    40,    41,    -1,    -1,   451,    -1,
     453,   161,    -1,    34,    35,    -1,   166,    38,    39,    40,
      41,    -1,   465,    -1,    -1,    -1,    -1,   470,    -1,    -1,
      -1,   181,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   199,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
     210,   211,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    18,   222,    42,    -1,    44,    45,    46,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,   238,    36,
      37,    38,    39,    40,    41,    -1,   246,    34,    35,    -1,
      -1,    38,    39,    40,    41,   255,   256,    18,    -1,    -1,
     260,    -1,    17,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,    29,    36,    37,    38,    39,    40,
      41,    34,    35,    -1,   284,    38,    39,    40,    41,    -1,
      -1,    -1,   292,   293,    -1,    27,    28,    29,    30,    31,
      32,    56,    34,   303,    36,    37,    38,    39,    40,    41,
     310,   311,    34,    35,    -1,   315,    38,    39,    40,    41,
      75,    -1,    -1,    -1,   324,   325,    81,    -1,    -1,   329,
      -1,   331,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,   342,    -1,    -1,   345,    -1,   102,    -1,    -1,
     350,   351,    -1,   353,    34,    35,   356,   112,    38,    39,
      40,    41,   117,   118,    34,    35,   366,    -1,    38,    39,
      40,    41,    34,    35,    -1,    -1,    38,    39,    40,    41,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    -1,   147,    -1,    -1,    -1,    -1,    17,    34,    35,
     400,    -1,    38,    39,    40,    41,   161,    -1,    34,    29,
      -1,   166,    38,    39,    40,    41,    -1,    -1,   418,    -1,
      27,    28,    29,    30,    31,    32,   181,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    56,    17,    -1,    -1,
      -1,    34,    35,    -1,   199,    38,    39,    40,    41,    -1,
      -1,   451,    34,   453,    -1,    75,    38,    39,    40,    41,
      -1,    81,    -1,    -1,    -1,   465,    -1,   222,    -1,    89,
     470,    -1,    -1,    93,    34,    35,    56,    -1,    38,    39,
      40,    41,   102,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    75,    -1,   117,   118,    -1,
      -1,    81,    -1,    -1,    -1,   260,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    93,    34,    35,    -1,   137,    38,    39,
      40,    41,   102,    -1,    -1,    -1,    34,   147,    -1,   284,
      38,    39,    40,    41,    -1,    -1,    -1,   117,   118,    -1,
      -1,   161,    -1,    -1,    -1,    -1,   166,    -1,   303,    34,
      35,    -1,    -1,    38,    39,    40,    41,   137,    34,    35,
     315,   181,    38,    39,    40,    41,    34,   147,    -1,    -1,
      38,    39,    40,    41,   329,    -1,   331,    -1,    34,   199,
      -1,   161,    38,    39,    40,    41,   166,   342,    -1,    -1,
     345,    -1,    -1,    -1,    -1,   350,   351,    -1,   353,    -1,
      -1,   356,   222,    27,    28,    29,    30,    31,    32,    33,
      34,   366,    36,    37,    38,    39,    40,    41,   238,    -1,
      27,    28,    29,    30,    31,    32,   246,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    34,    35,    -1,
     260,    38,    39,    40,    41,   400,    34,    -1,    -1,    -1,
      38,    39,    40,    41,    -1,    34,    -1,    -1,   238,    38,
      39,    40,    41,   418,   284,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
     260,    34,    -1,   303,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,   315,   451,    34,   453,    -1,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,   329,
     465,   331,    34,    -1,    -1,   470,    38,    39,    40,    41,
      34,    -1,   342,   303,    38,    39,    40,    41,    -1,    -1,
     350,   351,    -1,   353,    34,   315,   356,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,   366,    -1,    -1,   329,
      -1,   331,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,   342,    36,    37,    38,    39,    40,    41,    -1,
     350,   351,    -1,   353,    -1,    -1,   356,    34,    -1,    -1,
     400,    38,    39,    40,    41,    34,   366,    -1,    -1,    38,
      39,    40,    41,    -1,    -1,    34,    -1,    -1,   418,    38,
      39,    40,    41,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
     400,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,   451,    -1,   453,    -1,    33,    -1,    -1,   418,    -1,
      38,    39,    -1,    -1,    42,   465,    44,    45,    46,    -1,
     470,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,   451,    -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,     1,
     470,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,     1,    46,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    20,    48,    49,    50,    51,
      53,    75,    77,    84,     0,    50,    84,    43,    33,    46,
      12,    13,    17,    19,    21,    22,    23,    24,    25,    33,
      38,    39,    42,    61,    62,    63,    64,    65,    67,    68,
      69,    70,    84,    52,    33,    33,    33,    33,    61,    68,
      38,    39,    40,    41,    63,    46,    33,    53,    54,    55,
      67,    79,    79,    84,    79,    34,    34,    62,    62,    63,
      63,    67,    71,    84,    34,    18,    34,    34,    34,    34,
      34,    35,    35,    44,    72,    67,    67,    55,    45,    73,
       1,     7,     9,    10,    11,    14,    15,    16,    53,    66,
      67,    72,    74,    75,    76,    77,    78,    80,    81,    82,
      83,    84,    33,    33,    67,    33,    33,    33,    33,    84,
      46,    45,    76,    25,    56,    57,    58,    59,    60,    61,
      46,    46,    79,    84,    67,    67,    27,    34,    28,    29,
      30,    31,    32,    36,    37,    18,    46,    34,    34,    34,
      34,    57,    76,    58,    59,    59,    61,    61,    61,    61,
      61,    34,    76,    46,    46,    46,     8,    76,    76,    20,
      20,    12,    13,    17,    19,    20,    21,    22,    23,    24,
      25,    33,    62,    63,    64,    65,    69,    70,    84,    12,
      13,    17,    19,    20,    21,    22,    23,    24,    25,    33,
      61,    62,    63,    64,    65,    68,    69,    70,    84,    20,
      38,    39,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    61,    62,    63,    64,    65,    68,    69,
      70,    84,    20,    61,    68,    20,    44,    20,    43,    12,
      13,    17,    19,    20,    21,    22,    33,    62,    63,    64,
      65,    69,    70,    84,    46,    38,    39,     1,     7,     9,
      10,    11,    14,    15,    16,    44,    53,    66,    72,    75,
      77,    78,    80,    81,    82,    83,    84,    12,    13,    17,
      19,    20,    21,    22,    33,    62,    63,    64,    65,    69,
      70,    84,    38,    39,    33,    33,    33,    33,    61,    68,
      40,    41,    63,    33,    33,    33,    33,    33,    61,    68,
      38,    39,    40,    41,    63,    33,    62,    62,    33,    33,
      33,    33,    61,    68,    38,    39,    40,    41,    63,    33,
      45,    73,    67,    33,    33,    33,    33,    61,    68,    40,
      41,    63,    33,    62,    62,    33,    33,    67,    33,    33,
      33,    33,    45,    73,    84,    46,    43,    33,    33,    33,
      33,    61,    68,    40,    41,    63,    33,    62,    62,    79,
      79,    84,    79,    34,    34,    63,    63,    71,    79,    79,
      84,    79,    34,    34,    62,    62,    63,    63,    71,    79,
      79,    84,    79,    34,    34,    62,    62,    63,    63,    71,
      74,    46,    79,    79,    84,    79,    34,    34,    63,    63,
      71,    56,    46,    46,    79,    84,    67,    67,    74,    46,
      67,    79,    79,    84,    79,    34,    34,    63,    63,    71,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    45,    34,    34,    34,    34,
      34,    34,    46,    34,    34,    34,    34,    45,    46,    34,
      34,    34,    34,    34,    76,    34,    76,    46,    46,    46,
       8,    76,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    52,    51,
      53,    53,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    69,    70,
      70,    70,    70,    71,    71,    71,    73,    72,    72,    74,
      74,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    78,    79,    80,    80,    81,    81,    82,    82,
      82,    83,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     7,
       1,     1,     1,     1,     1,     0,     4,     2,     1,     3,
       1,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       0,     1,     1,     1,     1,     1,     4,     1,     3,     4,
       4,     4,     4,     3,     1,     0,     0,     4,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     3,     5,     7,     6,     5,     5,     5,
       5,     3,     1
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
#line 53 "src/syntax/parser.y"
                                            {
                    (yyval.ast_node) = create_ast_node(TRANSLATION_UNIT, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                    ast = (yyval.ast_node);
                  }
#line 2709 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 59 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2717 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 62 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2723 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 65 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2729 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 66 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2735 "./src/syntax/parser.c"
    break;

  case 7: /* external_declaration: assignment_statement  */
#line 67 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2741 "./src/syntax/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 70 "src/syntax/parser.y"
                                                   {
                      is_a_function_declaration = 1;
                      scope_counter++;
                      current_scope = push_scope(current_scope, scope_counter);
                    }
#line 2751 "./src/syntax/parser.c"
    break;

  case 9: /* function_definition: type_specifier identifier '(' $@1 parameters ')' compound_statement  */
#line 74 "src/syntax/parser.y"
                                                        {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-6].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      insert_row_into_symbol_table(current_scope, (yyvsp[-6].token), (yyvsp[-5].ast_node)->value, "function");
                    }
#line 2760 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: INT  */
#line 80 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2766 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: FLOAT  */
#line 81 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 2772 "./src/syntax/parser.c"
    break;

  case 12: /* type_specifier: ELEM  */
#line 82 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 2778 "./src/syntax/parser.c"
    break;

  case 13: /* type_specifier: SET  */
#line 83 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2784 "./src/syntax/parser.c"
    break;

  case 14: /* parameters: parameter_list  */
#line 86 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2790 "./src/syntax/parser.c"
    break;

  case 15: /* parameters: %empty  */
#line 87 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 2796 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_list: type_specifier identifier ',' parameter_list  */
#line 90 "src/syntax/parser.y"
                                                             {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-3].token), (yyvsp[-2].ast_node)->value, "parameter");
                }
#line 2805 "./src/syntax/parser.c"
    break;

  case 17: /* parameter_list: type_specifier identifier  */
#line 94 "src/syntax/parser.y"
                                          {
                  (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[0].ast_node)->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-1].token), (yyvsp[0].ast_node)->value, "parameter");
                }
#line 2814 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_and_expression  */
#line 100 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2820 "./src/syntax/parser.c"
    break;

  case 19: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 101 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2828 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: equality_expression  */
#line 106 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2834 "./src/syntax/parser.c"
    break;

  case 21: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 107 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 2842 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: relational_expression  */
#line 112 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2848 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 113 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2856 "./src/syntax/parser.c"
    break;

  case 24: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 116 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2864 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: belongs_to_expression  */
#line 121 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2870 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: EMPTY_CONST  */
#line 122 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 2878 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '<' additive_expression  */
#line 125 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2886 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression '>' additive_expression  */
#line 128 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2894 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 131 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2902 "./src/syntax/parser.c"
    break;

  case 30: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 134 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2910 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 139 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2918 "./src/syntax/parser.c"
    break;

  case 32: /* belongs_to_expression: additive_expression  */
#line 142 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2924 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: multiplicative_expression  */
#line 145 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2930 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 146 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2938 "./src/syntax/parser.c"
    break;

  case 35: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 149 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2946 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 154 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2952 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 155 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2960 "./src/syntax/parser.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 158 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2968 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: term  */
#line 163 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2974 "./src/syntax/parser.c"
    break;

  case 40: /* unary_expression: unary_operator unary_expression  */
#line 164 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 2982 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '+'  */
#line 169 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 2988 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '-'  */
#line 170 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 2994 "./src/syntax/parser.c"
    break;

  case 43: /* unary_operator: '!'  */
#line 171 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 3000 "./src/syntax/parser.c"
    break;

  case 44: /* term: identifier  */
#line 174 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3006 "./src/syntax/parser.c"
    break;

  case 45: /* term: INTEGER_CONST  */
#line 175 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3012 "./src/syntax/parser.c"
    break;

  case 46: /* term: FLOAT_CONST  */
#line 176 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3018 "./src/syntax/parser.c"
    break;

  case 47: /* term: '(' additive_expression ')'  */
#line 177 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 3026 "./src/syntax/parser.c"
    break;

  case 48: /* term: function_call_expression  */
#line 180 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3032 "./src/syntax/parser.c"
    break;

  case 49: /* optional_expression: expression  */
#line 183 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3038 "./src/syntax/parser.c"
    break;

  case 50: /* optional_expression: %empty  */
#line 184 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3044 "./src/syntax/parser.c"
    break;

  case 51: /* expression: additive_expression  */
#line 191 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3050 "./src/syntax/parser.c"
    break;

  case 52: /* expression: function_arg_constant_expression  */
#line 192 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3056 "./src/syntax/parser.c"
    break;

  case 53: /* function_arg_constant_expression: EMPTY_CONST  */
#line 195 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3066 "./src/syntax/parser.c"
    break;

  case 54: /* function_arg_constant_expression: STRING  */
#line 200 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3076 "./src/syntax/parser.c"
    break;

  case 55: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 205 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3086 "./src/syntax/parser.c"
    break;

  case 56: /* function_call_expression: identifier '(' argument_list ')'  */
#line 212 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3096 "./src/syntax/parser.c"
    break;

  case 57: /* function_call_expression: set_function_call_expression  */
#line 217 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3102 "./src/syntax/parser.c"
    break;

  case 58: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 218 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3108 "./src/syntax/parser.c"
    break;

  case 59: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 221 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3118 "./src/syntax/parser.c"
    break;

  case 60: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 226 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3128 "./src/syntax/parser.c"
    break;

  case 61: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 231 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3138 "./src/syntax/parser.c"
    break;

  case 62: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 236 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3148 "./src/syntax/parser.c"
    break;

  case 63: /* argument_list: argument_list ',' expression  */
#line 243 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3156 "./src/syntax/parser.c"
    break;

  case 64: /* argument_list: expression  */
#line 246 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3162 "./src/syntax/parser.c"
    break;

  case 65: /* argument_list: %empty  */
#line 247 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3168 "./src/syntax/parser.c"
    break;

  case 66: /* $@2: %empty  */
#line 250 "src/syntax/parser.y"
                        {
                      if (!is_a_function_declaration) {
                        scope_counter++;
                        current_scope = push_scope(current_scope, scope_counter);
                      }
                      is_a_function_declaration = 0;
                    }
#line 3180 "./src/syntax/parser.c"
    break;

  case 67: /* compound_statement: '{' $@2 statement_list '}'  */
#line 256 "src/syntax/parser.y"
                                         {
                      (yyval.ast_node) = (yyvsp[-1].ast_node);
                      scope_counter--;
                      current_scope = current_scope->parent;
                    }
#line 3190 "./src/syntax/parser.c"
    break;

  case 68: /* compound_statement: '{' '}'  */
#line 261 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3196 "./src/syntax/parser.c"
    break;

  case 69: /* statement_list: statement_list statement  */
#line 264 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3204 "./src/syntax/parser.c"
    break;

  case 70: /* statement_list: statement  */
#line 267 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3210 "./src/syntax/parser.c"
    break;

  case 71: /* declaration: type_specifier identifier ';'  */
#line 270 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
              insert_row_into_symbol_table(current_scope, (yyvsp[-2].token), (yyvsp[-1].ast_node)->value, "variable");
            }
#line 3219 "./src/syntax/parser.c"
    break;

  case 72: /* statement: declaration  */
#line 276 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3225 "./src/syntax/parser.c"
    break;

  case 73: /* statement: compound_statement  */
#line 277 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3231 "./src/syntax/parser.c"
    break;

  case 74: /* statement: expression_statement  */
#line 278 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3237 "./src/syntax/parser.c"
    break;

  case 75: /* statement: selection_statement  */
#line 279 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3243 "./src/syntax/parser.c"
    break;

  case 76: /* statement: iteration_statement  */
#line 280 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3249 "./src/syntax/parser.c"
    break;

  case 77: /* statement: io_statement  */
#line 281 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3255 "./src/syntax/parser.c"
    break;

  case 78: /* statement: jump_statement  */
#line 282 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3261 "./src/syntax/parser.c"
    break;

  case 79: /* statement: assignment_statement  */
#line 283 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3267 "./src/syntax/parser.c"
    break;

  case 80: /* statement: error  */
#line 284 "src/syntax/parser.y"
                { yyerrok; }
#line 3273 "./src/syntax/parser.c"
    break;

  case 81: /* assignment_statement: identifier '=' expression ';'  */
#line 287 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3281 "./src/syntax/parser.c"
    break;

  case 82: /* expression_statement: optional_expression ';'  */
#line 292 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3287 "./src/syntax/parser.c"
    break;

  case 83: /* set_membership_expression: expression IN expression  */
#line 295 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3295 "./src/syntax/parser.c"
    break;

  case 84: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 300 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3303 "./src/syntax/parser.c"
    break;

  case 85: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 303 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3311 "./src/syntax/parser.c"
    break;

  case 86: /* iteration_statement: FOR '(' ';' ';' ')' statement  */
#line 308 "src/syntax/parser.y"
                                                      {

                      // $$ = create_ast_node(ITERATION_STATEMENT, NULL, $3, $5, $7, $9);
                    }
#line 3320 "./src/syntax/parser.c"
    break;

  case 87: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 312 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3328 "./src/syntax/parser.c"
    break;

  case 88: /* io_statement: WRITE '(' expression ')' ';'  */
#line 317 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3336 "./src/syntax/parser.c"
    break;

  case 89: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 320 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3344 "./src/syntax/parser.c"
    break;

  case 90: /* io_statement: READ '(' identifier ')' ';'  */
#line 323 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3352 "./src/syntax/parser.c"
    break;

  case 91: /* jump_statement: RETURN expression ';'  */
#line 328 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3360 "./src/syntax/parser.c"
    break;

  case 92: /* identifier: IDENTIFIER  */
#line 333 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 3368 "./src/syntax/parser.c"
    break;


#line 3372 "./src/syntax/parser.c"

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

#line 338 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
