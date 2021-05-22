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
  YYSYMBOL_optional_for_expression = 66,   /* optional_for_expression  */
  YYSYMBOL_for_expression = 67,            /* for_expression  */
  YYSYMBOL_optional_assignment = 68,       /* optional_assignment  */
  YYSYMBOL_expression = 69,                /* expression  */
  YYSYMBOL_function_arg_constant_expression = 70, /* function_arg_constant_expression  */
  YYSYMBOL_function_call_expression = 71,  /* function_call_expression  */
  YYSYMBOL_set_function_call_expression = 72, /* set_function_call_expression  */
  YYSYMBOL_argument_list = 73,             /* argument_list  */
  YYSYMBOL_compound_statement = 74,        /* compound_statement  */
  YYSYMBOL_75_2 = 75,                      /* $@2  */
  YYSYMBOL_statement_list = 76,            /* statement_list  */
  YYSYMBOL_declaration = 77,               /* declaration  */
  YYSYMBOL_statement = 78,                 /* statement  */
  YYSYMBOL_assignment_statement = 79,      /* assignment_statement  */
  YYSYMBOL_expression_statement = 80,      /* expression_statement  */
  YYSYMBOL_set_membership_expression = 81, /* set_membership_expression  */
  YYSYMBOL_selection_statement = 82,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 83,       /* iteration_statement  */
  YYSYMBOL_io_statement = 84,              /* io_statement  */
  YYSYMBOL_jump_statement = 85,            /* jump_statement  */
  YYSYMBOL_identifier = 86                 /* identifier  */
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
#define YYLAST   8044

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  709

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
     184,   187,   188,   191,   192,   195,   196,   199,   204,   209,
     216,   221,   222,   225,   230,   235,   240,   247,   250,   251,
     254,   254,   265,   268,   271,   274,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   291,   296,   299,   304,   307,
     312,   315,   320,   323,   326,   331,   336
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
  "unary_operator", "term", "optional_for_expression", "for_expression",
  "optional_assignment", "expression", "function_arg_constant_expression",
  "function_call_expression", "set_function_call_expression",
  "argument_list", "compound_statement", "$@2", "statement_list",
  "declaration", "statement", "assignment_statement",
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

#define YYPACT_NINF (-384)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     102,     3,    13,    18,    46,    27,    74,   332,   612,   758,
      68,   964,  1019,    35,  -384,  1060,   -19,   269,    39,  1067,
      49,    59,    65,    79,   680,  1261,    94,   110,   134,   760,
     237,  1161,  1576,    58,  1306,  1368,  1591,  1561,   143,   148,
    1614,  1647,  1125,    57,   923,   923,   190,   923,   177,   203,
    1591,  1591,  1591,  1591,  1768,  1106,   162,   214,   240,   249,
     180,   253,   267,   276,   280,  1782,  1893,  1972,  2023,  2076,
    2109,    80,   104,   198,   227,   760,  2146,  2230,  2244,  2354,
    2434,   973,   164,  4652,  1131,   282,   234,   290,  1220,  5986,
    4698,   293,   298,   269,   307,   309,   320,   324,  2352,   351,
      -7,    -9,   339,  3059,   779,  1462,   337,    48,  4744,  4790,
    4836,  4882,  4928,  4974,  5020,  5066,  5112,  5158,  2548,  1253,
       2,   340,   923,   190,   760,   760,   344,  1379,  1379,  1379,
    1379,  1623,  1623,  1623,  1623,  1841,  5204,  1379,  1248,  5250,
     144,   372,   380,  5296,   363,   394,   396,   398,    44,  1111,
    3346,  3756,  2521,  2844,  3448,  3646,  1504,    41,  6030,   308,
     269,  5986,   400,   402,   418,  1693,   432,   436,  5342,  5388,
    5434,  5480,  5986,  1222,  5526,   409,  5986,  5572,    31,  1425,
     453,   457,   459,   463,  1333,   811,  1795,   482,   499,   502,
     760,  2257,  2607,  1874,  2694,  2719,  2793,  1683,   505,   515,
     521,   525,    62,   108,   184,   542,   548,   551,   760,    16,
     189,   200,  1905,   226,   560,   360,   506,   103,   546,  1874,
    1874,   549,   555,   586,   594,  1174,   433,  1249,   262,   278,
     288,   760,   386,  1320,  1447,  2038,  2457,   314,  2481,  2558,
    1391,   325,   397,   609,   616,   618,   620,   631,  2883,   709,
    2496,   760,  5618,  3583,  3623,  1841,  3713,  3795,  6052,   623,
    1841,  1841,   162,   269,   638,   640,   642,   643,  1922,  3676,
    3738,  1541,   760,   123,  1120,  1839,  1754,  2103,  6697,  6712,
    2053,  6727,  6742,  6757,  2384,  5664,  2965,  3490,   651,   653,
     659,   661,  6952,  1723,  2185,   760,  2647,  6992,  1623,  7012,
    7032,  7052,  6972,  1253,  1623,  1623,  2155,   662,   663,   269,
     667,   668,   671,   672,  5710,   351,   626,  2617,  2784,  3034,
    3197,  3845,  3900,  3954,  4008,  3296,   676,   677,   681,   683,
    6364,  6412,  6427,  2216,   760,   118,    83,   218,  2678,  1292,
    1641,  6442,  6457,  2085,  6472,   354,  6487,  6502,  6388,   923,
     923,   190,   923,   411,   649,  1874,  1874,  2868,   162,   923,
     923,   190,   923,   455,   698,  1905,  1905,  1905,  1905,   567,
     162,  3043,  3136,   923,   923,   190,   923,   492,   699,  2038,
    2038,  2038,  2038,  2857,   162,   923,   923,   190,   923,   501,
     717,  5756,  5986,  1841,  1841,  6076,  6100,  6124,   361,   707,
     923,   923,   190,   923,   518,   720,  1253,  1253,  1253,  2303,
    2303,  2303,  2303,  2053,  2053,  2053,  2053,  2053,  6772,   162,
     923,   923,   190,   923,   529,   722,  1623,  1623,  7072,   162,
     272,  7092,  7112,  1253,     2,   713,   923,   190,   760,   760,
    4054,  5986,   723,  4100,   269,   923,   923,   190,   923,   538,
     736,  1435,  1435,  1435,  1435,  2336,  2336,  2336,  2336,  2085,
    2085,  2085,  2085,  2085,  6517,  1435,   162,   740,   741,   742,
     752,  3186,  3206,  3281,  3359,   369,   753,   754,   756,   757,
     639,   650,   690,   783,   795,   819,   446,   761,   766,   769,
     770,  2893,  2921,  2941,  2980,  3030,  3109,   465,   778,   785,
     792,   793,  6148,  6172,  5802,  6196,  6220,  6244,  5848,   797,
     804,   805,   806,  6787,  6802,  1598,  2003,  2301,   759,   815,
     828,   830,  3251,  7642,  7657,   760,  7966,  7672,  7687,  2303,
    7702,  7717,  7732,  7342,  7979,  7992,  8005,  2428,  6817,  6832,
    6847,  6862,   476,   832,   833,   846,   852,  7132,  7152,  7172,
    7192,   493,   165,   748,  4146,   856,   858,   859,   860,  5894,
    4192,   818,   864,   865,   868,   870,  6532,  6547,   250,  1416,
    2813,  3226,   872,   878,   879,   893,  7312,  7357,  7372,   760,
    3093,  7387,  7402,  2336,  7417,  7432,  7447,  7327,  7927,  7940,
    7953,  1966,  6562,  6577,  6592,  6607,   178,   568,  3398,  3500,
    3522,  3536,  3548,   844,   869,   911,   963,   989,  3269,  3306,
    3323,  3370,  3425,  6268,  6292,  6316,  6340,  5940,  6877,  6892,
    6907,  6922,   923,   923,   190,   923,   575,   896,  2303,  2303,
    2303,  2303,  7747,   162,  6937,  7212,  7232,  7252,  7272,  7292,
    6030,   308,  6030,   885,   887,   888,  4238,  4284,  6622,  6637,
    6652,  6667,   923,   923,   190,   923,   628,   903,  2336,  2336,
    2336,  2336,  7462,   162,  6682,   904,   905,   920,   921,  7762,
    7777,  7792,  7807,  7822,  7837,   591,  4330,   912,  4376,  4422,
    4468,  4514,   925,   929,   937,   938,  7477,  7492,  7507,  7522,
    7537,  7552,   602,  7852,  7867,  7882,  7897,  7912,  6030,  1222,
    7567,  7582,  7597,  7612,  7627,  4560,   939,  6030,  4606
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -384,  -384,  -384,   950,  -384,  -384,     4,  -384,   519,   -88,
     -60,    36,   -89,    69,  3140,  2727,   462,   924,  1386,  -157,
    -167,   544,   772,  3377,  1848,  2310,  -193,   -42,  -249,  -383,
       5,    45,     8,  -145,  3068,  -137,  -134,  -133,  -123,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    43,    99,    58,    59,   100,
     101,   102,   103,   104,   209,   210,   211,   212,   213,   106,
     107,   141,    60,   214,   215,   216,    72,   108,    89,   109,
     110,   111,   112,   113,    61,   114,   115,   116,   117,   217
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,   316,   166,   392,    10,    11,   345,    13,    12,   504,
      16,    10,    11,   320,    18,    12,   175,    42,   -18,   128,
     127,   321,     5,   -10,   322,   323,   -18,    19,   -51,   197,
     275,   140,    84,   -11,   -55,   324,    42,   -18,   -12,   -51,
     150,   151,    -8,    -8,    -8,    -8,    63,    57,   -54,   157,
      42,    42,    42,    42,   365,   366,   240,    73,   559,   273,
       1,     2,     3,     4,   -96,   441,   -13,   148,   127,   398,
     -96,   -19,   128,    -8,    14,   197,   -52,   -96,    17,   -19,
     -96,   240,    44,   137,   338,   335,    57,   -52,   178,   118,
     -19,   -15,    45,    42,   -49,   -96,    50,    51,    46,   126,
     -96,   -96,   -96,   -96,   -55,     1,     2,     3,     4,   118,
     -18,   452,    47,   336,   -68,   -68,   317,   -18,   -18,   284,
     142,   -44,     5,   145,   197,   197,   -45,   287,   287,   287,
     287,   302,   302,   302,   302,   287,   370,   287,    80,    81,
     -59,   -44,   -44,   -44,   -44,   451,   -45,   -45,   -45,   -45,
     -18,   406,   -51,   -51,   139,   274,   -58,   -18,   325,   287,
      42,   118,   315,   318,   149,   475,   319,     1,     2,     3,
       4,   303,   118,   348,   221,   222,   118,   486,   158,   223,
     -57,   224,   225,   226,   227,   228,   229,   230,   276,    55,
     197,   497,   303,   197,   -56,   231,   -69,   -69,    75,   640,
      30,    31,   -46,   165,    32,   451,   168,   -33,   197,   337,
     218,    65,   -52,   -52,   275,   219,   220,   174,   -36,   197,
     197,   177,   -46,   -46,   -46,   -46,   542,   -33,   -33,   367,
     368,   197,   -17,    82,   241,   240,   551,    66,   -36,   -36,
     -36,   -36,   339,   430,   -39,   -20,   -20,   453,   454,   -41,
     -41,   197,   -20,   -20,   -41,   287,   -41,   -41,   -41,   -41,
     287,   287,   240,    42,   -39,   -39,   -39,   -39,   -67,   -67,
     -41,    83,   197,   597,    74,   -41,   -41,   -19,   452,   -41,
     284,    20,    21,   -14,   -19,   -19,    22,    76,    23,   179,
      24,    25,    26,    27,    28,   197,   -59,   -59,   302,   -19,
     406,    77,    29,   284,   302,   302,   -19,    30,    31,    42,
      78,    32,   -58,   -58,    79,   442,   -87,   275,   516,   517,
     244,   245,   -57,   -57,   -16,   246,   119,   247,   286,   249,
     250,   120,    -2,    98,   197,     1,     2,     3,     4,   274,
     122,   251,   123,   348,   275,   552,    30,    31,   -56,   -56,
      32,   469,     5,   124,   -50,   197,   197,   125,   240,   -96,
     -96,   478,   338,   338,   570,   571,   -20,   -20,   129,   130,
     240,   259,   276,   273,   -20,   489,   338,   596,   -48,   240,
     240,   240,   240,   136,   240,   -20,   143,   500,   -49,   465,
     285,   568,   118,   287,   287,   507,    81,   161,   -48,   -48,
     -48,   -48,   511,   602,    81,   336,   284,   284,   284,   533,
     533,   533,   533,   284,   284,   284,   284,   284,   159,   240,
     -55,   -55,   545,   160,   379,   380,   302,   302,   162,   240,
     163,   -55,   164,   284,   142,   219,   220,   556,   197,   197,
     675,   118,   515,   176,    42,   471,   169,   564,   170,   219,
     220,   348,   348,   348,   348,   587,   587,   587,   587,   348,
     348,   348,   348,   348,   171,   348,   240,   -45,   -45,   274,
     692,   -45,   -45,   -45,   -45,   276,   276,   276,   173,    35,
     607,    81,   -53,   316,   677,   316,   349,   337,   569,   480,
     350,   192,   351,   219,   220,   320,   352,   320,    54,   612,
      81,   337,   276,   321,   118,   321,   322,   323,   322,   323,
     634,    81,    35,    35,    69,    70,   -59,   324,   234,   324,
     339,   339,   339,   339,   -61,   197,   491,   639,    81,   533,
     219,   220,   345,   -58,   339,   502,   -57,   192,   359,   219,
     220,   316,   706,   234,   -61,   -61,   -61,   -61,   360,   139,
     316,   254,   513,   320,   361,    35,   219,   220,   362,   118,
     -59,   321,   320,   547,   322,   323,   -58,   219,   220,   -57,
     321,   254,   566,   322,   323,   324,   219,   220,   -56,   197,
     -96,   279,   373,   587,   324,   -40,   192,   192,   374,   254,
     254,   254,   254,   297,   297,   297,   297,   254,   317,   254,
     317,    87,   664,    81,   139,   -40,   -40,   -40,   -40,   669,
     338,   335,    -4,   219,   220,    -4,    -4,    -4,    -4,   375,
     254,   254,    35,   254,   667,   697,    81,   376,   533,   533,
     533,   533,    -4,   240,   254,   342,   704,    81,   254,   336,
     325,   287,   325,   -56,   315,   318,   315,   318,   319,   385,
     319,   386,   192,   387,   684,   357,   317,   -47,   587,   587,
     587,   587,   686,   240,   388,   317,   219,   220,   -62,   -96,
     192,   400,   443,   401,   369,   402,   403,   -47,   -47,   -47,
     -47,   192,   192,   472,   420,   676,   421,   678,   -62,   -62,
     -62,   -62,   422,   192,   423,   433,   434,   383,   325,   348,
     436,   437,   315,   318,   438,   439,   319,   325,   -34,   445,
     446,   315,   318,   192,   447,   319,   448,   395,   -45,   -45,
     -45,   -45,   254,   254,   234,    35,   -45,   -45,   -34,   -34,
     367,   368,   481,   492,   192,   337,   -45,   -45,   -45,   -45,
     -45,   -45,   418,   705,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   503,   708,   508,   514,   -45,   548,   192,    -5,   554,
     428,    -5,    -5,    -5,    -5,   279,   297,   297,   339,   560,
     567,    35,   180,   181,   598,   599,   600,   182,    -5,   183,
     184,   185,   186,   187,   188,   189,   601,   603,   604,    38,
     605,   606,   622,   190,   641,   608,   192,   135,    30,    31,
     609,   -35,    32,   610,   611,   464,   -25,   -25,   -25,   -25,
     -25,   -25,   613,   -37,   -25,   -25,   -25,   473,   474,   614,
     234,   -35,   -35,   367,   368,   -25,   615,   616,    71,   484,
     485,   618,   234,   -37,   -37,   -37,   -37,   -38,   619,   620,
     621,   234,   234,   495,   496,   -45,   234,    85,   623,   -45,
     -45,   -45,   -45,    86,   254,   505,   506,   -38,   -38,   -38,
     -38,   624,   -64,   625,   647,   121,   635,   636,   279,   279,
     279,   528,   528,   528,   528,   279,   279,   279,   540,   541,
     637,   234,   -64,   -64,   -64,   -64,   638,   -65,   549,   550,
     642,   234,   643,   644,   645,   279,   146,   147,   648,   649,
     192,   192,   650,   254,   651,   652,    35,   -65,   -65,   -65,
     -65,   653,   654,   342,   342,   342,   342,   582,   582,   582,
     582,   342,   342,   342,   594,   595,   655,   342,   234,   -63,
     670,   679,   167,   680,   681,   198,   199,   687,   693,   694,
     200,    36,   201,   202,   203,   204,   205,   206,   207,   -63,
     -63,   -63,   -63,   193,   695,   696,   208,    15,   699,   700,
      36,    30,    31,   701,    -6,    32,   254,    -6,    -6,    -6,
      -6,   702,   703,   707,    36,    36,    36,    36,   553,     0,
     235,   -66,     0,     0,    -6,   221,   222,   192,     0,     0,
     223,   632,   224,   225,   226,   227,   228,   229,   230,   193,
       0,   -66,   -66,   -66,   -66,   235,   231,   -60,     0,     0,
       0,    30,    31,   255,     0,    32,     0,    36,     0,    -7,
       0,   254,    -7,    -7,    -7,    -7,     0,   -60,   -60,   -60,
     -60,     0,     0,   255,    71,   399,     0,     0,     0,    -7,
       0,   192,     0,   280,     0,   662,     0,     0,   193,   193,
       0,   255,   255,   255,   255,   298,   298,   298,   298,   255,
      -3,   255,     0,    -3,    -3,    -3,    -3,   -75,     0,     0,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
      -3,   435,   255,   255,    36,   255,     0,   -75,     0,     0,
     528,   528,   673,   674,     0,   234,   255,   343,     0,     0,
     255,     0,   254,   254,   254,     0,   -85,     0,     0,   -85,
     -85,   -85,   -85,     0,   193,     0,     0,   193,     0,     0,
     582,   582,   690,   691,     0,   234,   -85,     0,     0,     0,
      71,    -9,   193,     0,    -9,    -9,    -9,    -9,   -21,   -21,
     129,   130,    71,   193,   193,     0,   -21,   -20,   -20,   407,
     408,    -9,     0,     0,   -20,   193,    71,   -21,    56,   235,
     254,   342,     0,   -44,   -44,   -44,   -44,     0,     0,   254,
       0,   -44,     0,   -42,   -42,   193,     0,     0,   -42,   255,
     -42,   -42,   -42,   -42,   255,   255,   235,    36,     0,     0,
       0,    71,     0,     0,   -42,     0,   193,     0,     0,   -42,
     -42,    71,     0,   -42,   280,     0,     0,   -96,   -96,   -96,
     557,   558,   -96,   -96,   -96,   -96,   561,     0,     0,   193,
     -72,     0,   298,   -72,   -72,   -72,   -72,   280,   298,   298,
       0,     0,     0,    36,   326,   327,     0,     0,    71,   328,
     -72,   329,   330,   331,   332,     0,     0,   333,   -71,     0,
       0,   -71,   -71,   -71,   -71,   334,   -50,     0,   193,     0,
      30,    31,     0,     0,    32,   264,   265,   343,   -71,     0,
     266,     0,   267,   268,   269,   270,     0,     0,   271,   193,
     193,     0,   235,   -46,   -46,     0,   272,   -46,   -46,   -46,
     -46,    30,    31,     0,   235,    32,     0,     0,     0,   -46,
     -46,   -46,   -46,   235,   235,   235,   235,   -46,   235,     0,
     459,     0,     0,     0,     0,     0,   255,   255,   255,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     280,   280,   280,   529,   529,   529,   529,   280,   280,   280,
     280,   280,     0,   235,   -33,   -33,    52,    53,     0,     0,
     298,   298,   -33,   235,   -33,   -33,     0,   280,   -33,   -33,
     381,   382,   193,   193,     0,   255,   -96,   -96,    36,     0,
       0,   -96,   -96,   -96,   -96,   343,   343,   343,   343,   583,
     583,   583,   583,   343,   343,   343,   343,   343,     0,   343,
     235,   244,   245,     0,     0,     0,   246,     0,   247,   286,
     249,   250,     0,    37,    98,    71,   -36,   -36,   -36,   -36,
       0,     0,   251,     0,   -36,   194,     0,    30,    31,     0,
       0,    32,    37,     0,   384,   -44,   -44,     0,   255,   -44,
     -44,   -44,   -44,     0,     0,    71,    37,    37,    37,    37,
       0,     0,   236,   -21,   -21,   453,   454,   326,   327,   193,
     -21,   -21,   328,   529,   329,   330,   331,   332,   -96,     0,
     333,   194,     0,   -96,   -96,   -96,   -96,   236,   334,     0,
       0,   -96,     0,    30,    31,   256,     0,    32,     0,    37,
     -32,   -36,   -36,   255,     0,   -36,   -36,   -36,   -36,   -32,
     -32,   -32,   -32,   -32,   -32,   256,     0,   -32,   -32,   -32,
     260,   261,     0,   193,     0,   281,     0,   583,   -32,     0,
     194,   194,     0,   256,   256,   256,   256,   299,   299,   299,
     299,   256,   -31,   256,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,   260,   261,   256,   256,    37,   256,     0,     0,
     -31,     0,   529,   529,   529,   529,     0,   235,   256,   344,
       0,     0,   256,     0,   255,   255,   255,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   194,   -26,   -26,   194,
       0,     0,   583,   583,   583,   583,     0,   235,   -43,   -43,
       0,     0,     0,   -43,   194,   -43,   -43,   -43,   -43,   -39,
     -39,   -39,   -39,    20,    21,   194,   194,   -39,    22,   -43,
      23,   179,    24,    25,   -43,   -43,     0,   194,   -43,     0,
       0,   236,   255,   343,    29,   -21,   -21,   407,   408,    30,
      31,   255,   -21,    32,     0,   288,   289,   194,     0,     0,
     290,   256,   291,   292,   293,   294,   256,   256,   236,    37,
       0,     0,   -48,   -48,   -48,   -48,   295,     0,   194,   -32,
     -48,    30,    31,     0,     0,    32,   281,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   460,
     461,   194,     0,     0,   299,   -61,   -61,   -61,   -61,   281,
     299,   299,     0,   -61,   -88,    37,   -88,   -88,   -88,   -88,
     -88,   172,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   358,   -44,   -88,     0,
     194,   -44,   -44,   -44,   -44,     0,   -88,     0,     0,   344,
       0,   -88,   -88,     0,     0,   -88,     0,   -88,   -88,   -88,
       0,   194,   194,     0,   236,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   236,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   236,   236,   236,   236,   -45,
     236,     0,   413,     0,     0,     0,     0,     0,   256,   256,
     256,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
     -25,   -25,   281,   281,   281,   530,   530,   530,   530,   281,
     281,   281,   281,   281,     0,   236,   -40,   -40,   -40,   -40,
       0,     0,   299,   299,   -40,   236,     0,     0,     0,   281,
     -47,   -47,   -47,   -47,   194,   194,     0,   256,   -47,   -46,
      37,     0,     0,   -46,   -46,   -46,   -46,   344,   344,   344,
     344,   584,   584,   584,   584,   344,   344,   344,   344,   344,
       0,   344,   236,   244,   245,     0,     0,     0,   246,     0,
     247,   286,   249,   250,     0,    40,   -22,   -22,   -22,   -22,
     409,   410,     0,   -22,   251,   411,   412,   195,     0,    30,
      31,     0,     0,    32,    40,     0,   180,   181,     0,     0,
     256,   182,     0,   183,   184,   185,   186,     0,    40,    40,
      40,    40,     0,     0,   238,     0,     0,   190,     0,     0,
       0,   194,    30,    31,     0,   530,    32,   198,   199,     0,
       0,     0,   200,   195,   201,   202,   203,   204,     0,   238,
       0,   -62,   -62,   -62,   -62,     0,     0,   257,   208,   -62,
     -96,    40,     0,    30,    31,   256,     0,    32,     0,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   257,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   194,     0,   282,     0,   584,
       0,     0,   195,   195,     0,   257,   257,   257,   257,   300,
     300,   300,   300,   257,   -31,   257,     0,     0,     0,     0,
       0,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   460,   461,   257,   257,    40,   257,
     -34,   -34,    52,    53,   530,   530,   530,   530,   -34,   236,
     257,   346,     0,     0,   257,     0,   256,   256,   256,     0,
     -23,   -23,   -23,   -23,   409,   410,     0,   -23,   195,   411,
     412,   195,     0,     0,   584,   584,   584,   584,     0,   236,
     221,   222,     0,     0,     0,   223,   195,   224,   225,   226,
     227,   -35,   -35,    52,    53,   264,   265,   195,   195,   -35,
     266,   231,   267,   268,   269,   270,    30,    31,     0,   195,
      32,     0,     0,   238,   256,   344,   272,     0,     0,     0,
       0,    30,    31,   256,     0,    32,     0,   326,   327,   195,
       0,     0,   328,   257,   329,   330,   331,   332,   257,   257,
     238,    40,     0,     0,   -37,   -37,   -37,   -37,   334,     0,
     195,   -32,   -37,    30,    31,     0,     0,    32,   282,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,
     -32,   414,   415,   195,     0,     0,   300,   -38,   -38,   -38,
     -38,   282,   300,   300,     0,   -38,   -84,    40,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,     0,     0,
     -84,     0,   195,     0,   -64,   -64,   -64,   -64,   -84,     0,
       0,   346,   -64,   -84,   -84,     0,     0,   -84,     0,   -84,
     -84,   -84,     0,   195,   195,     0,   238,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   238,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   238,   238,   238,
     238,   -46,   238,     0,     0,     0,     0,     0,     0,     0,
     257,   257,   257,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   282,   282,   282,   531,   531,   531,
     531,   282,   282,   282,   282,   282,     0,   238,   -65,   -65,
     -65,   -65,     0,     0,   300,   300,   -65,   238,     0,     0,
       0,   282,   -63,   -63,   -63,   -63,   195,   195,     0,   257,
     -63,   -33,    40,     0,     0,   -33,   -33,   355,   356,   346,
     346,   346,   346,   585,   585,   585,   585,   346,   346,   346,
     346,   346,     0,   346,   238,   518,   519,     0,     0,     0,
     520,     0,   521,   522,   523,   524,     0,    41,   -24,   -24,
     -24,   -24,   409,   410,     0,   -24,   525,   411,   412,   196,
       0,    30,    31,     0,     0,    32,    41,     0,   572,   573,
       0,     0,   257,   574,     0,   575,   576,   577,   578,     0,
      41,    41,    41,    41,     0,     0,   239,     0,     0,   579,
       0,     0,     0,   195,    30,    31,     0,   531,    32,   -26,
     -26,   -26,   -26,   -26,   -26,   196,     0,   -26,   -26,   -26,
       0,   239,   -66,   -66,   -66,   -66,     0,     0,   -26,   258,
     -66,     0,   -44,    41,     0,     0,     0,   257,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   419,   -44,   258,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   195,     0,   283,
       0,   585,     0,     0,   196,   196,     0,   258,   258,   258,
     258,   301,   301,   301,   301,   258,   -31,   258,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,     0,   -31,   -31,   414,   415,   258,   258,
      41,   258,   -60,   -60,   -60,   -60,   531,   531,   531,   531,
     -60,   238,   258,   347,     0,     0,   258,     0,   257,   257,
     257,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,     0,
     196,     0,     0,   196,     0,     0,   585,   585,   585,   585,
       0,   238,     0,     0,   -46,   -48,   -48,     0,   196,   -48,
     -48,   -48,   -48,   -46,   -46,   -46,   -46,   -46,   -46,   196,
     196,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,   196,   -46,     0,     0,   239,   257,   346,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   257,   -29,   -29,   -29,   304,
     305,   196,     0,     0,     0,   258,   -44,   -29,     0,     0,
     258,   258,   239,    41,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   262,   196,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     283,   263,   -61,   -61,   -44,     0,   -61,   -61,   -61,   -61,
       0,     0,     0,     0,     0,   196,     0,     0,   301,     0,
       0,     0,     0,   283,   301,   301,     0,     0,   -77,    41,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
       0,   -36,   -77,     0,   196,   -36,   -36,   -36,   -36,     0,
     -77,     0,     0,   347,     0,   -77,   -77,     0,     0,   -77,
       0,   -77,   -77,   -77,     0,   196,   196,     0,   239,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     239,     0,   -33,   -33,   -33,   -33,   -33,   426,   427,   239,
     239,   239,   239,   -33,   239,     0,     0,     0,     0,     0,
       0,     0,   258,   258,   258,   -22,   -22,   -22,   -22,   455,
     456,     0,   -22,   -22,   457,   458,   283,   283,   283,   532,
     532,   532,   532,   283,   283,   283,   283,   283,   -39,   239,
       0,     0,   -39,   -39,   -39,   -39,   301,   301,     0,   239,
       0,     0,     0,   283,    34,     0,     0,     0,   196,   196,
       0,   258,     0,   -48,    41,     0,   191,   -48,   -48,   -48,
     -48,   347,   347,   347,   347,   586,   586,   586,   586,   347,
     347,   347,   347,   347,     0,   347,   239,    67,    68,     0,
       0,     0,     0,   233,     0,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   191,   -76,   -76,   -76,   -76,     0,   233,   -76,
       0,     0,     0,     0,   258,     0,   253,   -76,     0,     0,
      34,     0,   -76,   -76,     0,     0,   -76,   -61,   -76,   -76,
     -76,   -61,   -61,   -61,   -61,   196,   253,     0,     0,   532,
     -23,   -23,   -23,   -23,   455,   456,   278,   -23,   -23,   457,
     458,   191,   191,     0,   253,   253,   253,   253,   296,   296,
     296,   296,   253,     0,   253,     0,     0,     0,     0,   258,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   304,   305,     0,   253,   253,    34,   253,   196,
     -30,   -40,   -40,   586,     0,   -40,   -40,   -40,   -40,   253,
     341,   -96,   -40,   253,     0,     0,   -40,   -40,   -40,   -40,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   191,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,     0,   -96,   -47,   -47,   -96,
       0,   -47,   -47,   -47,   -47,   191,     0,     0,   532,   532,
     532,   532,     0,   239,     0,     0,   371,   372,     0,     0,
     258,   258,   258,     0,     0,   -62,   -62,     0,   191,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,   586,   586,
     586,   586,     0,   239,     0,   -34,   -34,     0,   191,   -34,
     -34,   381,   382,   -96,     0,     0,     0,   396,   397,   233,
      34,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   191,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   258,   347,
       0,   -96,     0,     0,   -35,   -35,     0,   258,   -35,   -35,
     381,   382,   191,     0,     0,     0,     0,     0,     0,     0,
     278,   431,   432,     0,     0,   -83,    34,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,     0,     0,   -83,
       0,   191,     0,     0,   -37,   -37,     0,   -83,   -37,   -37,
     -37,   -37,   -83,   -83,     0,     0,   -83,   -34,   -83,   -83,
     -83,   -34,   -34,   355,   356,   233,   -22,   -22,   -22,   -22,
     131,   132,   482,   483,   -22,   133,   134,   233,     0,     0,
       0,     0,     0,     0,     0,   -22,   493,   494,     0,     0,
       0,   233,     0,    62,     0,    64,     0,     0,     0,   253,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   658,   659,   278,   278,   278,   527,   527,   527,   527,
     278,   538,   539,   -38,   -38,     0,   233,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,   233,    33,     0,     0,
     278,     0,     0,     0,     0,   191,   191,     0,   253,    48,
     -35,    34,     0,     0,   -35,   -35,   355,   356,   341,   341,
     341,   341,   581,   581,   581,   581,   341,   592,   593,     0,
     144,     0,   341,   233,     0,     0,   232,     0,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   242,   -78,   -78,   -78,   -78,
     -47,   232,   -78,     0,   -47,   -47,   -47,   -47,     0,   105,
     -78,   253,     0,    33,     0,   -78,   -78,     0,     0,   -78,
     -62,   -78,   -78,   -78,   -62,   -62,   -62,   -62,     0,   105,
       0,     0,   191,   -24,   -24,   -24,   -24,   455,   456,   277,
     -24,   -24,   457,   458,   242,   242,     0,   105,   105,   105,
     105,   152,   153,   154,   155,   156,     0,   105,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   253,   -96,   -96,   -96,
     -96,   -96,   -96,     0,     0,     0,     0,     0,   105,   105,
      33,   105,     0,   -64,   -64,     0,   191,   -64,   -64,   -64,
     -64,     0,   105,   340,   -44,   -37,   105,     0,     0,   -37,
     -37,   -37,   -37,   -44,   -44,   -44,   -44,   -44,   -44,   262,
     353,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   444,
     -65,   -65,   -44,     0,   -65,   -65,   -65,   -65,   363,     0,
       0,     0,     0,     0,     0,   671,   672,   -63,   -63,     0,
     233,   -63,   -63,   -63,   -63,     0,     0,   253,   253,   253,
       0,   377,     0,   -23,   -23,   -23,   -23,   131,   132,     0,
       0,   -23,   133,   134,     0,   688,   689,     0,     0,     0,
     233,   389,   -23,   -38,    39,     0,     0,   -38,   -38,   -38,
     -38,     0,   232,    33,   -66,   -66,    49,     0,   -66,   -66,
     -66,   -66,   404,     0,     0,     0,     0,   467,   468,     0,
     470,     0,     0,     0,     0,   253,   341,   476,   477,     0,
     479,     0,   -64,   237,   253,   424,   -64,   -64,   -64,   -64,
       0,   487,   488,   277,   490,     0,     0,     0,     0,    33,
       0,     0,   243,   498,   499,     0,   501,     0,   237,   -60,
     -60,     0,     0,   -60,   -60,   -60,   -60,     0,   509,   510,
      39,   512,     0,     0,   449,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,   -27,   -27,   -27,   304,   305,   543,   544,
       0,   546,     0,     0,   -27,     0,     0,     0,   232,     0,
       0,   243,   243,     0,   555,     0,     0,     0,   -44,     0,
     232,     0,     0,   562,   563,     0,   565,   -44,   -44,   -44,
     -44,   -44,   -44,   262,   232,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   105,     0,   -65,     0,   -44,    39,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,   277,   277,   277,   526,
     534,   535,   536,   537,     0,     0,   -63,     0,     0,   232,
     -63,   -63,   -63,   -63,     0,     0,     0,   354,     0,   232,
     -66,     0,     0,   277,   -66,   -66,   -66,   -66,   242,   242,
       0,   105,   -60,     0,    33,   364,   -60,   -60,   -60,   -60,
       0,   340,   340,   340,   340,   580,   588,   589,   590,   591,
       0,   -33,     0,     0,     0,   340,   232,     0,   378,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,
     -33,   -33,   -33,   393,   394,     0,     0,     0,   390,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
      39,   -36,     0,     0,   105,     0,     0,     0,     0,   405,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   626,     0,     0,     0,   -36,
       0,     0,   425,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,   -28,   -28,   -28,   304,   305,    39,     0,     0,     0,
     665,   666,   -28,   668,   -45,     0,     0,     0,     0,   105,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   450,   -45,   -45,   -45,   -45,   -45,   -45,     0,   656,
     682,   683,     0,   685,     0,     0,     0,     0,     0,     0,
       0,   -39,     0,     0,     0,   237,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   237,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -46,     0,     0,   -39,
       0,   237,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   232,   -46,   -46,   -46,   -46,   -46,   -46,
     105,   105,   105,   -24,   -24,   -24,   -24,   131,   132,     0,
       0,   -24,   133,   134,     0,     0,   237,     0,     0,     0,
       0,     0,   -24,   232,     0,     0,   237,     0,     0,     0,
       0,     0,     0,   -48,     0,   243,   243,     0,     0,     0,
       0,    39,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   105,   340,
       0,   -48,     0,   237,     0,     0,   -79,   105,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,     0,     0,
     -79,     0,     0,     0,     0,     0,     0,     0,   -79,     0,
       0,     0,     0,   -79,   -79,     0,     0,   -79,     0,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,   627,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,   -80,   -80,
       0,     0,   -80,     0,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   657,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
       0,     0,   -81,   -81,     0,     0,   -81,     0,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     237,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,     0,     0,   -82,     0,     0,     0,     0,     0,     0,
     237,   -82,     0,     0,     0,     0,   -82,   -82,     0,     0,
     -82,     0,   -82,   -82,   -82,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,     0,     0,   -72,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,   -72,   -72,     0,     0,   -72,     0,   -72,   -72,
     -72,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,
     -86,   -86,   -86,     0,     0,   -86,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,     0,     0,     0,   -86,   -86,
       0,     0,   -86,     0,   -86,   -86,   -86,   -95,     0,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,     0,
       0,   -95,     0,     0,     0,     0,     0,     0,     0,   -95,
       0,     0,     0,     0,   -95,   -95,     0,     0,   -95,     0,
     -95,   -95,   -95,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,     0,     0,   -75,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,     0,     0,     0,
     -75,   -75,     0,     0,   -75,     0,   -75,   -75,   -75,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,     0,     0,   -71,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,   -71,   -71,     0,     0,
     -71,     0,   -71,   -71,   -71,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,     0,     0,   -85,
       0,     0,     0,     0,     0,     0,     0,   -85,     0,     0,
       0,     0,   -85,   -85,     0,     0,   -85,     0,   -85,   -85,
     -85,   -88,     0,   -88,   -88,   -88,   -88,   -88,   698,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,     0,     0,   -88,     0,     0,     0,     0,
       0,     0,     0,   -88,     0,     0,     0,     0,   -88,   -88,
       0,     0,   -88,     0,   -88,   -88,   -88,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,     0,
       0,   -91,     0,     0,     0,     0,     0,     0,     0,   -91,
       0,     0,     0,     0,   -91,   -91,     0,     0,   -91,     0,
     -91,   -91,   -91,   -94,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -94,   -94,   -94,   -94,     0,     0,   -94,     0,     0,
       0,     0,     0,     0,     0,   -94,     0,     0,     0,     0,
     -94,   -94,     0,     0,   -94,     0,   -94,   -94,   -94,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,
     -93,     0,     0,   -93,     0,     0,     0,     0,     0,     0,
       0,   -93,     0,     0,     0,     0,   -93,   -93,     0,     0,
     -93,     0,   -93,   -93,   -93,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,   -92,     0,     0,   -92,
       0,     0,     0,     0,     0,     0,     0,   -92,     0,     0,
       0,     0,   -92,   -92,     0,     0,   -92,     0,   -92,   -92,
     -92,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,   -89,     0,     0,   -89,     0,     0,     0,     0,
       0,     0,     0,   -89,     0,     0,     0,     0,   -89,   -89,
       0,     0,   -89,     0,   -89,   -89,   -89,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,     0,
       0,   -90,     0,     0,     0,     0,     0,     0,     0,   -90,
       0,     0,     0,     0,   -90,   -90,     0,     0,   -90,     0,
     -90,   -90,   -90,   -70,     0,   -70,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,     0,     0,   -70,     0,     0,
       0,     0,     0,     0,     0,   -70,     0,     0,     0,     0,
     -70,   -70,     0,     0,   -70,     0,   -70,    88,   -70,   -84,
       0,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,   -84,   -84,     0,     0,
     -84,     0,   -84,   -84,   -84,   -77,     0,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,     0,     0,   -77,
       0,     0,     0,     0,     0,     0,     0,   -77,     0,     0,
       0,     0,   -77,   -77,     0,     0,   -77,     0,   -77,   -77,
     -77,    90,     0,     1,     2,     3,     4,    91,     0,    92,
      93,    94,   244,   245,    95,    96,    97,   246,     0,   247,
     248,   249,   250,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     0,    30,    31,
       0,     0,    32,     0,   252,   138,   -50,   -76,     0,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,     0,
       0,   -76,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,   -76,   -76,     0,     0,   -76,     0,
     -76,   -76,   -76,   -74,     0,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,     0,     0,   -74,     0,     0,
       0,     0,     0,     0,     0,   -74,     0,     0,     0,     0,
     -74,   -74,     0,     0,   -74,     0,   -74,   -74,   -74,   -83,
       0,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,     0,     0,   -83,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,     0,   -83,   -83,     0,     0,
     -83,     0,   -83,   -83,   -83,   -78,     0,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,     0,     0,   -78,
       0,     0,     0,     0,     0,     0,     0,   -78,     0,     0,
       0,     0,   -78,   -78,     0,     0,   -78,     0,   -78,   -78,
     -78,   -79,     0,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,     0,     0,   -79,     0,     0,     0,     0,
       0,     0,     0,   -79,     0,     0,     0,     0,   -79,   -79,
       0,     0,   -79,     0,   -79,   -79,   -79,   -80,     0,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,     0,
       0,   -80,     0,     0,     0,     0,     0,     0,     0,   -80,
       0,     0,     0,     0,   -80,   -80,     0,     0,   -80,     0,
     -80,   -80,   -80,   -81,     0,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
     -81,   -81,     0,     0,   -81,     0,   -81,   -81,   -81,   -82,
       0,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,     0,     0,   -82,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,     0,   -82,   -82,     0,     0,
     -82,     0,   -82,   -82,   -82,   -86,     0,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,     0,     0,   -86,
       0,     0,     0,     0,     0,     0,     0,   -86,     0,     0,
       0,     0,   -86,   -86,     0,     0,   -86,     0,   -86,   -86,
     -86,   -73,     0,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,
     -73,   -73,   -73,     0,     0,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,   -73,   -73,
       0,     0,   -73,     0,   -73,   -73,   -73,   -95,     0,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,     0,
       0,   -95,     0,     0,     0,     0,     0,     0,     0,   -95,
       0,     0,     0,     0,   -95,   -95,     0,     0,   -95,     0,
     -95,   -95,   -95,   -91,     0,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,     0,     0,   -91,     0,     0,
       0,     0,     0,     0,     0,   -91,     0,     0,     0,     0,
     -91,   -91,     0,     0,   -91,     0,   -91,   -91,   -91,   -94,
       0,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,
     -94,     0,     0,   -94,     0,     0,     0,     0,     0,     0,
       0,   -94,     0,     0,     0,     0,   -94,   -94,     0,     0,
     -94,     0,   -94,   -94,   -94,   -93,     0,   -93,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -93,   -93,     0,     0,   -93,
       0,     0,     0,     0,     0,     0,     0,   -93,     0,     0,
       0,     0,   -93,   -93,     0,     0,   -93,     0,   -93,   -93,
     -93,   -92,     0,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,     0,     0,   -92,     0,     0,     0,     0,
       0,     0,     0,   -92,     0,     0,     0,     0,   -92,   -92,
       0,     0,   -92,     0,   -92,   -92,   -92,   -89,     0,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,     0,
       0,   -89,     0,     0,     0,     0,     0,     0,     0,   -89,
       0,     0,     0,     0,   -89,   -89,     0,     0,   -89,     0,
     -89,   -89,   -89,   -90,     0,   -90,   -90,   -90,   -90,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
       0,   -90,   -90,   -90,   -90,     0,     0,   -90,     0,     0,
       0,     0,     0,     0,     0,   -90,     0,     0,     0,     0,
     -90,   -90,     0,     0,   -90,     0,   -90,   -90,   -90,   -70,
       0,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,     0,     0,   -70,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,     0,     0,   -70,   -70,     0,     0,
     -70,     0,   -70,   391,   -70,   -75,     0,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,     0,     0,   -75,
       0,     0,     0,     0,     0,     0,     0,   -75,     0,     0,
       0,     0,   -75,   -75,     0,     0,   -75,     0,   -75,   -75,
     -75,   -70,     0,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,     0,     0,   -70,     0,     0,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,     0,   -70,   -70,
       0,     0,   -70,     0,   -70,   440,   -70,   -72,     0,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,     0,
       0,   -72,     0,     0,     0,     0,     0,     0,     0,   -72,
       0,     0,     0,     0,   -72,   -72,     0,     0,   -72,     0,
     -72,   -72,   -72,    90,     0,     1,     2,     3,     4,    91,
       0,    92,    93,    94,   244,   245,    95,    96,    97,   246,
       0,   247,   248,   249,   250,     0,     0,    98,     0,     0,
       0,     0,     0,     0,     0,   251,     0,     0,     0,     0,
      30,    31,     0,     0,    32,     0,   252,   617,   -50,   -85,
       0,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,     0,     0,   -85,     0,     0,     0,     0,     0,     0,
       0,   -85,     0,     0,     0,     0,   -85,   -85,     0,     0,
     -85,     0,   -85,   -85,   -85,    90,     0,     1,     2,     3,
       4,    91,     0,    92,    93,    94,   244,   245,    95,    96,
      97,   246,     0,   247,   248,   249,   250,     0,     0,    98,
       0,     0,     0,     0,     0,     0,     0,   251,     0,     0,
       0,     0,    30,    31,     0,     0,    32,     0,   252,   646,
     -50,   -71,     0,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,     0,     0,   -71,     0,     0,     0,     0,
       0,     0,     0,   -71,     0,     0,     0,     0,   -71,   -71,
       0,     0,   -71,     0,   -71,   -71,   -71,    90,     0,     1,
       2,     3,     4,    91,     0,    92,    93,    94,   244,   245,
      95,    96,    97,   246,     0,   247,   248,   249,   250,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,   251,
       0,     0,     0,     0,    30,    31,     0,     0,    32,     0,
     252,   306,   -50,     1,     2,     3,     4,   307,     0,   308,
     309,   310,   244,   245,   311,   312,   313,   246,     0,   247,
     248,   249,   250,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,     0,    30,    31,
     -61,     0,    32,     0,   314,     0,   -50,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -40,     0,     0,     0,   -61,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -34,     0,
       0,     0,   -40,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     393,   394,   -35,     0,     0,     0,   -34,     0,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -35,   -35,   393,   394,   -47,     0,     0,     0,
     -35,     0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -62,     0,     0,     0,   -47,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -37,     0,     0,     0,   -62,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -38,     0,
       0,     0,   -37,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -60,     0,     0,     0,   -38,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -64,     0,     0,     0,
     -60,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,     0,     0,     0,   -64,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -63,     0,     0,     0,   -65,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -66,     0,
       0,     0,   -63,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -96,     0,     0,     0,   -66,     0,     0,     0,
       0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   466,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -46,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -46,   -46,   -46,   -46,   -46,   -46,
     -33,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -33,
     -33,   -33,   -33,   -33,   -33,   -36,   -33,   -33,   -33,   -33,
     -33,   -33,   462,   463,   -36,   -36,   -36,   -36,   -36,   -36,
     -39,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -39,
     -39,   -39,   -39,   -39,   -39,   -48,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -48,   -48,   -48,   -48,   -48,   -48,
     -61,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -61,
     -61,   -61,   -61,   -61,   -61,   -40,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -40,   -40,   -40,   -40,   -40,   -40,
     -47,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -47,
     -47,   -47,   -47,   -47,   -47,   -62,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -62,   -62,   -62,   -62,   -62,   -62,
     -34,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -34,
     -34,   -34,   -34,   -34,   -34,   -35,   -34,   -34,   -34,   -34,
     -34,   -34,   462,   463,   -35,   -35,   -35,   -35,   -35,   -35,
     -37,   -35,   -35,   -35,   -35,   -35,   -35,   462,   463,   -37,
     -37,   -37,   -37,   -37,   -37,   -38,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,   -38,   -38,
     -64,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -64,
     -64,   -64,   -64,   -64,   -64,   -65,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,
     -63,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -63,
     -63,   -63,   -63,   -63,   -63,   -66,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
     -60,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -60,
     -60,   -60,   -60,   -60,   -60,   -33,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -33,   -33,   -33,   -33,   -33,   -33,
     -36,   -33,     0,   -33,   -33,   -33,   -33,   416,   417,   -36,
     -36,   -36,   -36,   -36,   -36,   -39,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -39,   -39,   -39,   -39,   -39,   -39,
     -48,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -48,
     -48,   -48,   -48,   -48,   -48,   -61,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -61,   -61,   -61,   -61,   -61,   -61,
     -40,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -40,
     -40,   -40,   -40,   -40,   -40,   -47,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -47,   -47,   -47,   -47,   -47,   -47,
     -62,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -62,
     -62,   -62,   -62,   -62,   -62,   -34,   -62,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -34,   -34,   -34,   -34,   -34,   -34,
     -35,   -34,     0,   -34,   -34,   -34,   -34,   416,   417,   -35,
     -35,   -35,   -35,   -35,   -35,   -37,   -35,     0,   -35,   -35,
     -35,   -35,   416,   417,   -37,   -37,   -37,   -37,   -37,   -37,
     -38,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -38,
     -38,   -38,   -38,   -38,   -38,   -64,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -65,
     -65,   -65,   -65,   -65,   -65,   -63,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,   -63,   -63,
     -66,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -66,
     -66,   -66,   -66,   -66,   -66,   -60,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -60,   -60,   -60,   -60,   -60,   -60,
       0,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,     0,     0,     0,     0,   -96,   -44,
     -44,   -44,   -44,   -44,   -44,   429,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,   -44,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,   -36,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,     0,     0,     0,   -48,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,   -40,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -34,   -34,   426,   427,     0,     0,     0,     0,   -34,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   426,   427,     0,     0,     0,     0,   -35,   -47,
     -47,   -47,   -47,   -47,   -47,     0,     0,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,     0,     0,     0,     0,   -47,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,     0,     0,     0,     0,   -62,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,   -64,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -65,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,   -63,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -66,   -60,
     -60,   -60,   -60,   -60,   -60,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,   -60,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -44,   -44,   -44,   -44,   -44,   -44,
     663,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   633,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   660,   661,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -61,   -61,   -61,   -61,   -61,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   660,   661,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   660,   661,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -60,   -60,   -60,   -60,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,   -33,   630,   631,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -40,   -40,   -40,   -40,   -40,   -40,
       0,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,
     -34,   -34,   630,   631,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,     0,   -35,   -35,   -35,   -35,   630,   631,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,   -38,   -38,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -63,
     -63,   -63,   -63,   -63,   -63,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -60,
     -60,   -60,   -60,   -60,   -60,     0,   -60,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   658,   659,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   658,   659,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   658,   659,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,     0,   -29,   -29,   628,   629,   -30,   -30,   -30,   -30,
     -30,   -30,     0,   -30,     0,   -30,   -30,   628,   629,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,
     628,   629,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
       0,   -28,   -28,   628,   629
};

static const yytype_int16 yycheck[] =
{
       0,   158,   159,   252,     0,     0,   173,     7,     0,   392,
      10,     7,     7,   158,    33,     7,   173,    17,    27,    28,
      27,   158,    20,    20,   158,   158,    35,    46,    35,    29,
     119,   119,    74,    20,    18,   158,    36,    46,    20,    46,
     129,   130,     3,     4,     5,     6,    46,    43,    46,   137,
      50,    51,    52,    53,    38,    39,    56,    57,   441,   119,
       3,     4,     5,     6,    33,   314,    20,   127,    27,   262,
      43,    27,    28,    34,     0,    75,    35,    46,    43,    35,
      18,    81,    33,    35,   173,   173,    82,    46,    20,    89,
      46,    34,    33,    93,    46,    33,    38,    39,    33,    99,
      38,    39,    40,    41,    46,     3,     4,     5,     6,   109,
      27,    28,    33,   173,    34,    35,   158,    34,    35,   119,
     120,    18,    20,   123,   124,   125,    18,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    33,   137,    34,    35,
      46,    38,    39,    40,    41,    27,    38,    39,    40,    41,
      27,    28,    34,    35,   109,   119,    46,    34,   158,   159,
     160,   161,   158,   158,   128,   358,   158,     3,     4,     5,
       6,    27,   172,   173,    12,    13,   176,   370,    34,    17,
      46,    19,    20,    21,    22,    23,    24,    25,   119,    46,
     190,   384,    27,   193,    46,    33,    34,    35,    18,    34,
      38,    39,    18,   158,    42,    27,   161,    18,   208,   173,
      20,    34,    34,    35,   303,    38,    39,   172,    18,   219,
     220,   176,    38,    39,    40,    41,   419,    38,    39,    40,
      41,   231,    34,    35,    20,   235,   429,    34,    38,    39,
      40,    41,   173,   303,    18,    27,    28,    29,    30,    12,
      13,   251,    34,    35,    17,   255,    19,    20,    21,    22,
     260,   261,   262,   263,    38,    39,    40,    41,    34,    35,
      33,    44,   272,   466,    34,    38,    39,    27,    28,    42,
     280,    12,    13,    34,    34,    35,    17,    34,    19,    20,
      21,    22,    23,    24,    25,   295,    34,    35,   298,    27,
      28,    34,    33,   303,   304,   305,    34,    38,    39,   309,
      34,    42,    34,    35,    34,   315,    34,   406,   407,   408,
      12,    13,    34,    35,    34,    17,    33,    19,    20,    21,
      22,    33,     0,    25,   334,     3,     4,     5,     6,   303,
      33,    33,    33,   343,   433,   433,    38,    39,    34,    35,
      42,   351,    20,    33,    46,   355,   356,    33,   358,    34,
      35,   361,   451,   452,   453,   454,    27,    28,    29,    30,
     370,    20,   303,   433,    35,   375,   465,   465,    18,   379,
     380,   381,   382,    46,   384,    46,    46,   387,    34,    35,
      46,   451,   392,   393,   394,    34,    35,    34,    38,    39,
      40,    41,   402,    34,    35,   465,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,    46,   419,
      34,    35,   422,    43,    38,    39,   426,   427,    34,   429,
      34,    34,    34,   433,   434,    38,    39,   437,   438,   439,
     633,   441,   406,    34,   444,    34,    46,   447,    46,    38,
      39,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,    46,   465,   466,    34,    35,   433,
     663,    38,    39,    40,    41,   406,   407,   408,    46,    17,
      34,    35,    46,   640,   641,   642,    33,   451,   452,    34,
      33,    29,    33,    38,    39,   640,    33,   642,    36,    34,
      35,   465,   433,   640,   504,   642,   640,   640,   642,   642,
      34,    35,    50,    51,    52,    53,    34,   640,    56,   642,
     451,   452,   453,   454,    18,   525,    34,    34,    35,   529,
      38,    39,   699,    34,   465,    34,    34,    75,    33,    38,
      39,   698,   699,    81,    38,    39,    40,    41,    33,   504,
     707,    89,    34,   698,    33,    93,    38,    39,    33,   559,
      18,   698,   707,    34,   698,   698,    18,    38,    39,    18,
     707,   109,    34,   707,   707,   698,    38,    39,    18,   579,
      34,   119,    33,   583,   707,    18,   124,   125,    33,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   640,   137,
     642,    82,    34,    35,   559,    38,    39,    40,    41,    34,
     699,   699,     0,    38,    39,     3,     4,     5,     6,    33,
     158,   159,   160,   161,   624,    34,    35,    33,   628,   629,
     630,   631,    20,   633,   172,   173,    34,    35,   176,   699,
     640,   641,   642,    34,   640,   640,   642,   642,   640,    33,
     642,    33,   190,    33,   654,   193,   698,    18,   658,   659,
     660,   661,    34,   663,    33,   707,    38,    39,    18,    46,
     208,    33,    46,    33,   212,    33,    33,    38,    39,    40,
      41,   219,   220,    34,    33,   640,    33,   642,    38,    39,
      40,    41,    33,   231,    33,    33,    33,   235,   698,   699,
      33,    33,   698,   698,    33,    33,   698,   707,    18,    33,
      33,   707,   707,   251,    33,   707,    33,   255,    38,    39,
      40,    41,   260,   261,   262,   263,    46,    18,    38,    39,
      40,    41,    34,    34,   272,   699,    27,    28,    29,    30,
      31,    32,   280,   698,    35,    36,    37,    38,    39,    40,
      41,    34,   707,    46,    34,    46,    34,   295,     0,    46,
     298,     3,     4,     5,     6,   303,   304,   305,   699,    46,
      34,   309,    12,    13,    34,    34,    34,    17,    20,    19,
      20,    21,    22,    23,    24,    25,    34,    34,    34,    17,
      34,    34,    33,    33,    46,    34,   334,    18,    38,    39,
      34,    18,    42,    34,    34,   343,    27,    28,    29,    30,
      31,    32,    34,    18,    35,    36,    37,   355,   356,    34,
     358,    38,    39,    40,    41,    46,    34,    34,    56,   367,
     368,    34,   370,    38,    39,    40,    41,    18,    34,    34,
      34,   379,   380,   381,   382,    34,   384,    75,    33,    38,
      39,    40,    41,    81,   392,   393,   394,    38,    39,    40,
      41,    33,    18,    33,    46,    93,    34,    34,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
      34,   419,    38,    39,    40,    41,    34,    18,   426,   427,
      34,   429,    34,    34,    34,   433,   124,   125,    34,    34,
     438,   439,    34,   441,    34,    33,   444,    38,    39,    40,
      41,    33,    33,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,    33,   465,   466,    18,
      34,    46,   160,    46,    46,    12,    13,    34,    34,    34,
      17,    17,    19,    20,    21,    22,    23,    24,    25,    38,
      39,    40,    41,    29,    34,    34,    33,     7,    46,    34,
      36,    38,    39,    34,     0,    42,   504,     3,     4,     5,
       6,    34,    34,    34,    50,    51,    52,    53,   434,    -1,
      56,    18,    -1,    -1,    20,    12,    13,   525,    -1,    -1,
      17,   529,    19,    20,    21,    22,    23,    24,    25,    75,
      -1,    38,    39,    40,    41,    81,    33,    18,    -1,    -1,
      -1,    38,    39,    89,    -1,    42,    -1,    93,    -1,     0,
      -1,   559,     3,     4,     5,     6,    -1,    38,    39,    40,
      41,    -1,    -1,   109,   262,   263,    -1,    -1,    -1,    20,
      -1,   579,    -1,   119,    -1,   583,    -1,    -1,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   137,    -1,     3,     4,     5,     6,     0,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      20,   309,   158,   159,   160,   161,    -1,    20,    -1,    -1,
     628,   629,   630,   631,    -1,   633,   172,   173,    -1,    -1,
     176,    -1,   640,   641,   642,    -1,     0,    -1,    -1,     3,
       4,     5,     6,    -1,   190,    -1,    -1,   193,    -1,    -1,
     658,   659,   660,   661,    -1,   663,    20,    -1,    -1,    -1,
     358,     0,   208,    -1,     3,     4,     5,     6,    27,    28,
      29,    30,   370,   219,   220,    -1,    35,    27,    28,    29,
      30,    20,    -1,    -1,    34,   231,   384,    46,    33,   235,
     698,   699,    -1,    38,    39,    40,    41,    -1,    -1,   707,
      -1,    46,    -1,    12,    13,   251,    -1,    -1,    17,   255,
      19,    20,    21,    22,   260,   261,   262,   263,    -1,    -1,
      -1,   419,    -1,    -1,    33,    -1,   272,    -1,    -1,    38,
      39,   429,    -1,    42,   280,    -1,    -1,    33,    34,    35,
     438,   439,    38,    39,    40,    41,   444,    -1,    -1,   295,
       0,    -1,   298,     3,     4,     5,     6,   303,   304,   305,
      -1,    -1,    -1,   309,    12,    13,    -1,    -1,   466,    17,
      20,    19,    20,    21,    22,    -1,    -1,    25,     0,    -1,
      -1,     3,     4,     5,     6,    33,    34,    -1,   334,    -1,
      38,    39,    -1,    -1,    42,    12,    13,   343,    20,    -1,
      17,    -1,    19,    20,    21,    22,    -1,    -1,    25,   355,
     356,    -1,   358,    34,    35,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,   370,    42,    -1,    -1,    -1,    38,
      39,    40,    41,   379,   380,   381,   382,    46,   384,    -1,
      18,    -1,    -1,    -1,    -1,    -1,   392,   393,   394,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,    -1,   419,    38,    39,    40,    41,    -1,    -1,
     426,   427,    46,   429,    34,    35,    -1,   433,    38,    39,
      40,    41,   438,   439,    -1,   441,    33,    34,   444,    -1,
      -1,    38,    39,    40,    41,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,    -1,   465,
     466,    12,    13,    -1,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    -1,    17,    25,   633,    38,    39,    40,    41,
      -1,    -1,    33,    -1,    46,    29,    -1,    38,    39,    -1,
      -1,    42,    36,    -1,    33,    34,    35,    -1,   504,    38,
      39,    40,    41,    -1,    -1,   663,    50,    51,    52,    53,
      -1,    -1,    56,    27,    28,    29,    30,    12,    13,   525,
      34,    35,    17,   529,    19,    20,    21,    22,    33,    -1,
      25,    75,    -1,    38,    39,    40,    41,    81,    33,    -1,
      -1,    46,    -1,    38,    39,    89,    -1,    42,    -1,    93,
      18,    34,    35,   559,    -1,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,   109,    -1,    35,    36,    37,
      38,    39,    -1,   579,    -1,   119,    -1,   583,    46,    -1,
     124,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,   135,    18,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,   158,   159,   160,   161,    -1,    -1,
      46,    -1,   628,   629,   630,   631,    -1,   633,   172,   173,
      -1,    -1,   176,    -1,   640,   641,   642,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,   190,    36,    37,   193,
      -1,    -1,   658,   659,   660,   661,    -1,   663,    12,    13,
      -1,    -1,    -1,    17,   208,    19,    20,    21,    22,    38,
      39,    40,    41,    12,    13,   219,   220,    46,    17,    33,
      19,    20,    21,    22,    38,    39,    -1,   231,    42,    -1,
      -1,   235,   698,   699,    33,    27,    28,    29,    30,    38,
      39,   707,    34,    42,    -1,    12,    13,   251,    -1,    -1,
      17,   255,    19,    20,    21,    22,   260,   261,   262,   263,
      -1,    -1,    38,    39,    40,    41,    33,    -1,   272,    18,
      46,    38,    39,    -1,    -1,    42,   280,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,   295,    -1,    -1,   298,    38,    39,    40,    41,   303,
     304,   305,    -1,    46,     1,   309,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    33,    34,    25,    -1,
     334,    38,    39,    40,    41,    -1,    33,    -1,    -1,   343,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
      -1,   355,   356,    -1,   358,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,   370,    -1,    35,    36,
      37,    38,    39,    40,    41,   379,   380,   381,   382,    46,
     384,    -1,    18,    -1,    -1,    -1,    -1,    -1,   392,   393,
     394,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,    -1,   419,    38,    39,    40,    41,
      -1,    -1,   426,   427,    46,   429,    -1,    -1,    -1,   433,
      38,    39,    40,    41,   438,   439,    -1,   441,    46,    34,
     444,    -1,    -1,    38,    39,    40,    41,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
      -1,   465,   466,    12,    13,    -1,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    17,    27,    28,    29,    30,
      31,    32,    -1,    34,    33,    36,    37,    29,    -1,    38,
      39,    -1,    -1,    42,    36,    -1,    12,    13,    -1,    -1,
     504,    17,    -1,    19,    20,    21,    22,    -1,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    -1,    33,    -1,    -1,
      -1,   525,    38,    39,    -1,   529,    42,    12,    13,    -1,
      -1,    -1,    17,    75,    19,    20,    21,    22,    -1,    81,
      -1,    38,    39,    40,    41,    -1,    -1,    89,    33,    46,
      18,    93,    -1,    38,    39,   559,    -1,    42,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,   109,    36,    37,
      38,    39,    40,    41,    -1,   579,    -1,   119,    -1,   583,
      -1,    -1,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    18,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,   158,   159,   160,   161,
      38,    39,    40,    41,   628,   629,   630,   631,    46,   633,
     172,   173,    -1,    -1,   176,    -1,   640,   641,   642,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,   190,    36,
      37,   193,    -1,    -1,   658,   659,   660,   661,    -1,   663,
      12,    13,    -1,    -1,    -1,    17,   208,    19,    20,    21,
      22,    38,    39,    40,    41,    12,    13,   219,   220,    46,
      17,    33,    19,    20,    21,    22,    38,    39,    -1,   231,
      42,    -1,    -1,   235,   698,   699,    33,    -1,    -1,    -1,
      -1,    38,    39,   707,    -1,    42,    -1,    12,    13,   251,
      -1,    -1,    17,   255,    19,    20,    21,    22,   260,   261,
     262,   263,    -1,    -1,    38,    39,    40,    41,    33,    -1,
     272,    18,    46,    38,    39,    -1,    -1,    42,   280,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,   295,    -1,    -1,   298,    38,    39,    40,
      41,   303,   304,   305,    -1,    46,     1,   309,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    -1,    -1,
      25,    -1,   334,    -1,    38,    39,    40,    41,    33,    -1,
      -1,   343,    46,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,    -1,   355,   356,    -1,   358,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,   370,    -1,
      35,    36,    37,    38,    39,    40,    41,   379,   380,   381,
     382,    46,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     392,   393,   394,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,    -1,   419,    38,    39,
      40,    41,    -1,    -1,   426,   427,    46,   429,    -1,    -1,
      -1,   433,    38,    39,    40,    41,   438,   439,    -1,   441,
      46,    34,   444,    -1,    -1,    38,    39,    40,    41,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,    -1,   465,   466,    12,    13,    -1,    -1,    -1,
      17,    -1,    19,    20,    21,    22,    -1,    17,    27,    28,
      29,    30,    31,    32,    -1,    34,    33,    36,    37,    29,
      -1,    38,    39,    -1,    -1,    42,    36,    -1,    12,    13,
      -1,    -1,   504,    17,    -1,    19,    20,    21,    22,    -1,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,    33,
      -1,    -1,    -1,   525,    38,    39,    -1,   529,    42,    27,
      28,    29,    30,    31,    32,    75,    -1,    35,    36,    37,
      -1,    81,    38,    39,    40,    41,    -1,    -1,    46,    89,
      46,    -1,    18,    93,    -1,    -1,    -1,   559,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,   109,
      36,    37,    38,    39,    40,    41,    -1,   579,    -1,   119,
      -1,   583,    -1,    -1,   124,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    18,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,   158,   159,
     160,   161,    38,    39,    40,    41,   628,   629,   630,   631,
      46,   633,   172,   173,    -1,    -1,   176,    -1,   640,   641,
     642,    34,    35,    -1,    -1,    38,    39,    40,    41,    -1,
     190,    -1,    -1,   193,    -1,    -1,   658,   659,   660,   661,
      -1,   663,    -1,    -1,    18,    34,    35,    -1,   208,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,   219,
     220,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,   231,    46,    -1,    -1,   235,   698,   699,    27,    28,
      29,    30,    31,    32,    -1,   707,    35,    36,    37,    38,
      39,   251,    -1,    -1,    -1,   255,    18,    46,    -1,    -1,
     260,   261,   262,   263,    -1,    27,    28,    29,    30,    31,
      32,    33,   272,    35,    36,    37,    38,    39,    40,    41,
     280,    43,    34,    35,    46,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,   298,    -1,
      -1,    -1,    -1,   303,   304,   305,    -1,    -1,     1,   309,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      -1,    34,    25,    -1,   334,    38,    39,    40,    41,    -1,
      33,    -1,    -1,   343,    -1,    38,    39,    -1,    -1,    42,
      -1,    44,    45,    46,    -1,   355,   356,    -1,   358,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
     370,    -1,    35,    36,    37,    38,    39,    40,    41,   379,
     380,   381,   382,    46,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   392,   393,   394,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,    34,   419,
      -1,    -1,    38,    39,    40,    41,   426,   427,    -1,   429,
      -1,    -1,    -1,   433,    17,    -1,    -1,    -1,   438,   439,
      -1,   441,    -1,    34,   444,    -1,    29,    38,    39,    40,
      41,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,    -1,   465,   466,    50,    51,    -1,
      -1,    -1,    -1,    56,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    75,    19,    20,    21,    22,    -1,    81,    25,
      -1,    -1,    -1,    -1,   504,    -1,    89,    33,    -1,    -1,
      93,    -1,    38,    39,    -1,    -1,    42,    34,    44,    45,
      46,    38,    39,    40,    41,   525,   109,    -1,    -1,   529,
      27,    28,    29,    30,    31,    32,   119,    34,    35,    36,
      37,   124,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    -1,   137,    -1,    -1,    -1,    -1,   559,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    -1,   158,   159,   160,   161,   579,
      46,    34,    35,   583,    -1,    38,    39,    40,    41,   172,
     173,    18,    34,   176,    -1,    -1,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,   190,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    34,    35,    46,
      -1,    38,    39,    40,    41,   208,    -1,    -1,   628,   629,
     630,   631,    -1,   633,    -1,    -1,   219,   220,    -1,    -1,
     640,   641,   642,    -1,    -1,    34,    35,    -1,   231,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,   658,   659,
     660,   661,    -1,   663,    -1,    34,    35,    -1,   251,    38,
      39,    40,    41,    18,    -1,    -1,    -1,   260,   261,   262,
     263,    -1,    27,    28,    29,    30,    31,    32,    33,   272,
      35,    36,    37,    38,    39,    40,    41,    -1,   698,   699,
      -1,    46,    -1,    -1,    34,    35,    -1,   707,    38,    39,
      40,    41,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,   304,   305,    -1,    -1,     1,   309,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,   334,    -1,    -1,    34,    35,    -1,    33,    38,    39,
      40,    41,    38,    39,    -1,    -1,    42,    34,    44,    45,
      46,    38,    39,    40,    41,   358,    27,    28,    29,    30,
      31,    32,   365,   366,    35,    36,    37,   370,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,   379,   380,    -1,    -1,
      -1,   384,    -1,    45,    -1,    47,    -1,    -1,    -1,   392,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,    34,    35,    -1,   419,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,   429,    17,    -1,    -1,
     433,    -1,    -1,    -1,    -1,   438,   439,    -1,   441,    29,
      34,   444,    -1,    -1,    38,    39,    40,    41,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,    -1,
     122,    -1,   465,   466,    -1,    -1,    56,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    75,    19,    20,    21,    22,
      34,    81,    25,    -1,    38,    39,    40,    41,    -1,    89,
      33,   504,    -1,    93,    -1,    38,    39,    -1,    -1,    42,
      34,    44,    45,    46,    38,    39,    40,    41,    -1,   109,
      -1,    -1,   525,    27,    28,    29,    30,    31,    32,   119,
      34,    35,    36,    37,   124,   125,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,   137,    27,    28,
      29,    30,    31,    32,    33,    34,   559,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,    -1,    34,    35,    -1,   579,    38,    39,    40,
      41,    -1,   172,   173,    18,    34,   176,    -1,    -1,    38,
      39,    40,    41,    27,    28,    29,    30,    31,    32,    33,
     190,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      34,    35,    46,    -1,    38,    39,    40,    41,   208,    -1,
      -1,    -1,    -1,    -1,    -1,   628,   629,    34,    35,    -1,
     633,    38,    39,    40,    41,    -1,    -1,   640,   641,   642,
      -1,   231,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    -1,   658,   659,    -1,    -1,    -1,
     663,   251,    46,    34,    17,    -1,    -1,    38,    39,    40,
      41,    -1,   262,   263,    34,    35,    29,    -1,    38,    39,
      40,    41,   272,    -1,    -1,    -1,    -1,   349,   350,    -1,
     352,    -1,    -1,    -1,    -1,   698,   699,   359,   360,    -1,
     362,    -1,    34,    56,   707,   295,    38,    39,    40,    41,
      -1,   373,   374,   303,   376,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    75,   385,   386,    -1,   388,    -1,    81,    34,
      35,    -1,    -1,    38,    39,    40,    41,    -1,   400,   401,
      93,   403,    -1,    -1,   334,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,   420,   421,
      -1,   423,    -1,    -1,    46,    -1,    -1,    -1,   358,    -1,
      -1,   124,   125,    -1,   436,    -1,    -1,    -1,    18,    -1,
     370,    -1,    -1,   445,   446,    -1,   448,    27,    28,    29,
      30,    31,    32,    33,   384,    35,    36,    37,    38,    39,
      40,    41,   392,    -1,    34,    -1,    46,   160,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,   406,   407,   408,   409,
     410,   411,   412,   413,    -1,    -1,    34,    -1,    -1,   419,
      38,    39,    40,    41,    -1,    -1,    -1,   190,    -1,   429,
      34,    -1,    -1,   433,    38,    39,    40,    41,   438,   439,
      -1,   441,    34,    -1,   444,   208,    38,    39,    40,    41,
      -1,   451,   452,   453,   454,   455,   456,   457,   458,   459,
      -1,    18,    -1,    -1,    -1,   465,   466,    -1,   231,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,   251,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,
     263,    18,    -1,    -1,   504,    -1,    -1,    -1,    -1,   272,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,   525,    -1,    -1,    -1,    46,
      -1,    -1,   295,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,   309,    -1,    -1,    -1,
     622,   623,    46,   625,    18,    -1,    -1,    -1,    -1,   559,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,   334,    36,    37,    38,    39,    40,    41,    -1,   579,
     652,   653,    -1,   655,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,   370,    35,    36,
      37,    38,    39,    40,    41,    -1,    18,    -1,    -1,    46,
      -1,   384,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,   633,    36,    37,    38,    39,    40,    41,
     640,   641,   642,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    -1,    -1,   419,    -1,    -1,    -1,
      -1,    -1,    46,   663,    -1,    -1,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,   438,   439,    -1,    -1,    -1,
      -1,   444,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,   698,   699,
      -1,    46,    -1,   466,    -1,    -1,     1,   707,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,   525,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,   579,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
     633,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
     663,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    46,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    -1,    44,    45,    46,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,     1,    46,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      18,    -1,    42,    -1,    44,    -1,    46,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    18,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    18,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    18,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      18,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    18,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    27,
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
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    20,    48,    49,    50,    51,
      53,    77,    79,    86,     0,    50,    86,    43,    33,    46,
      12,    13,    17,    19,    21,    22,    23,    24,    25,    33,
      38,    39,    42,    61,    62,    63,    64,    65,    69,    70,
      71,    72,    86,    52,    33,    33,    33,    33,    61,    70,
      38,    39,    40,    41,    63,    46,    33,    53,    54,    55,
      69,    81,    81,    86,    81,    34,    34,    62,    62,    63,
      63,    69,    73,    86,    34,    18,    34,    34,    34,    34,
      34,    35,    35,    44,    74,    69,    69,    55,    45,    75,
       1,     7,     9,    10,    11,    14,    15,    16,    25,    53,
      56,    57,    58,    59,    60,    61,    66,    67,    74,    76,
      77,    78,    79,    80,    82,    83,    84,    85,    86,    33,
      33,    69,    33,    33,    33,    33,    86,    27,    28,    29,
      30,    31,    32,    36,    37,    18,    46,    35,    45,    78,
      56,    68,    86,    46,    81,    86,    69,    69,    57,    58,
      59,    59,    61,    61,    61,    61,    61,    56,    34,    46,
      43,    34,    34,    34,    34,    78,    66,    69,    78,    46,
      46,    46,     8,    46,    78,    66,    34,    78,    20,    20,
      12,    13,    17,    19,    20,    21,    22,    23,    24,    25,
      33,    62,    63,    64,    65,    71,    72,    86,    12,    13,
      17,    19,    20,    21,    22,    23,    24,    25,    33,    61,
      62,    63,    64,    65,    70,    71,    72,    86,    20,    38,
      39,    12,    13,    17,    19,    20,    21,    22,    23,    24,
      25,    33,    61,    62,    63,    64,    65,    70,    71,    72,
      86,    20,    61,    70,    12,    13,    17,    19,    20,    21,
      22,    33,    44,    62,    63,    64,    65,    71,    72,    20,
      38,    39,    33,    43,    12,    13,    17,    19,    20,    21,
      22,    25,    33,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    71,    72,    86,    46,    20,    86,    12,    13,
      17,    19,    20,    21,    22,    33,    62,    63,    64,    65,
      71,    72,    86,    27,    38,    39,     1,     7,     9,    10,
      11,    14,    15,    16,    44,    53,    66,    74,    77,    79,
      80,    82,    83,    84,    85,    86,    12,    13,    17,    19,
      20,    21,    22,    25,    33,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    67,    71,    72,    86,    33,
      33,    33,    33,    61,    70,    40,    41,    63,    33,    33,
      33,    33,    33,    61,    70,    38,    39,    40,    41,    63,
      33,    62,    62,    33,    33,    33,    33,    61,    70,    38,
      39,    40,    41,    63,    33,    33,    33,    33,    33,    61,
      70,    45,    75,    40,    41,    63,    62,    62,    73,    69,
      33,    33,    33,    33,    61,    70,    28,    29,    30,    31,
      32,    36,    37,    18,    38,    39,    40,    41,    63,    33,
      33,    33,    33,    33,    61,    70,    40,    41,    63,    33,
      57,    62,    62,    33,    33,    69,    33,    33,    33,    33,
      45,    75,    86,    46,    43,    33,    33,    33,    33,    61,
      70,    27,    28,    29,    30,    31,    32,    36,    37,    18,
      38,    39,    40,    41,    63,    35,    33,    81,    81,    86,
      81,    34,    34,    63,    63,    73,    81,    81,    86,    81,
      34,    34,    62,    62,    63,    63,    73,    81,    81,    86,
      81,    34,    34,    62,    62,    63,    63,    73,    81,    81,
      86,    81,    34,    34,    76,    63,    63,    34,    46,    81,
      81,    86,    81,    34,    34,    58,    59,    59,    12,    13,
      17,    19,    20,    21,    22,    33,    61,    62,    63,    64,
      65,    71,    72,    86,    61,    61,    61,    61,    62,    62,
      63,    63,    73,    81,    81,    86,    81,    34,    34,    63,
      63,    73,    56,    68,    46,    81,    86,    69,    69,    76,
      46,    69,    81,    81,    86,    81,    34,    34,    57,    58,
      59,    59,    12,    13,    17,    19,    20,    21,    22,    33,
      61,    62,    63,    64,    65,    71,    72,    86,    61,    61,
      61,    61,    62,    62,    63,    63,    56,    73,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    45,    34,    34,
      34,    34,    33,    33,    33,    33,    61,    70,    38,    39,
      40,    41,    63,    33,    34,    34,    34,    34,    34,    34,
      34,    46,    34,    34,    34,    34,    45,    46,    34,    34,
      34,    34,    33,    33,    33,    33,    61,    70,    38,    39,
      40,    41,    63,    33,    34,    81,    81,    86,    81,    34,
      34,    62,    62,    63,    63,    73,    78,    66,    78,    46,
      46,    46,    81,    81,    86,    81,    34,    34,    62,    62,
      63,    63,    73,    34,    34,    34,    34,    34,     8,    46,
      34,    34,    34,    34,    34,    78,    66,    34,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    52,    51,
      53,    53,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    70,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      75,    74,    74,    76,    76,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    80,    81,    82,    82,
      83,    83,    84,    84,    84,    85,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     7,
       1,     1,     1,     1,     1,     0,     4,     2,     1,     3,
       1,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       0,     1,     3,     3,     0,     1,     1,     1,     1,     1,
       4,     1,     3,     4,     4,     4,     4,     3,     1,     0,
       0,     4,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     2,     3,     5,     7,
       9,     5,     5,     5,     5,     3,     1
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
#line 3293 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 59 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3301 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 62 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3307 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 65 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3313 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 66 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3319 "./src/syntax/parser.c"
    break;

  case 7: /* external_declaration: assignment_statement  */
#line 67 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3325 "./src/syntax/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 70 "src/syntax/parser.y"
                                                   {
                      is_a_function_declaration = 1;
                      scope_counter++;
                      current_scope = push_scope(current_scope, scope_counter);
                    }
#line 3335 "./src/syntax/parser.c"
    break;

  case 9: /* function_definition: type_specifier identifier '(' $@1 parameters ')' compound_statement  */
#line 74 "src/syntax/parser.y"
                                                        {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-6].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      insert_row_into_symbol_table(current_scope, (yyvsp[-6].token), (yyvsp[-5].ast_node)->value, "function");
                    }
#line 3344 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: INT  */
#line 80 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 3350 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: FLOAT  */
#line 81 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 3356 "./src/syntax/parser.c"
    break;

  case 12: /* type_specifier: ELEM  */
#line 82 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 3362 "./src/syntax/parser.c"
    break;

  case 13: /* type_specifier: SET  */
#line 83 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 3368 "./src/syntax/parser.c"
    break;

  case 14: /* parameters: parameter_list  */
#line 86 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3374 "./src/syntax/parser.c"
    break;

  case 15: /* parameters: %empty  */
#line 87 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 3380 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_list: type_specifier identifier ',' parameter_list  */
#line 90 "src/syntax/parser.y"
                                                             {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-3].token), (yyvsp[-2].ast_node)->value, "parameter");
                }
#line 3389 "./src/syntax/parser.c"
    break;

  case 17: /* parameter_list: type_specifier identifier  */
#line 94 "src/syntax/parser.y"
                                          {
                  (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[0].ast_node)->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-1].token), (yyvsp[0].ast_node)->value, "parameter");
                }
#line 3398 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_and_expression  */
#line 100 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3404 "./src/syntax/parser.c"
    break;

  case 19: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 101 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3412 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: equality_expression  */
#line 106 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3418 "./src/syntax/parser.c"
    break;

  case 21: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 107 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 3426 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: relational_expression  */
#line 112 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3432 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 113 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3440 "./src/syntax/parser.c"
    break;

  case 24: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 116 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3448 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: belongs_to_expression  */
#line 121 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3454 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: EMPTY_CONST  */
#line 122 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 3462 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '<' additive_expression  */
#line 125 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3470 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression '>' additive_expression  */
#line 128 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3478 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 131 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3486 "./src/syntax/parser.c"
    break;

  case 30: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 134 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3494 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 139 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3502 "./src/syntax/parser.c"
    break;

  case 32: /* belongs_to_expression: additive_expression  */
#line 142 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3508 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: multiplicative_expression  */
#line 145 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3514 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 146 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3522 "./src/syntax/parser.c"
    break;

  case 35: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 149 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3530 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 154 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3536 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 155 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3544 "./src/syntax/parser.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 158 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3552 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: term  */
#line 163 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3558 "./src/syntax/parser.c"
    break;

  case 40: /* unary_expression: unary_operator unary_expression  */
#line 164 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 3566 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '+'  */
#line 169 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 3572 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '-'  */
#line 170 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 3578 "./src/syntax/parser.c"
    break;

  case 43: /* unary_operator: '!'  */
#line 171 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 3584 "./src/syntax/parser.c"
    break;

  case 44: /* term: identifier  */
#line 174 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3590 "./src/syntax/parser.c"
    break;

  case 45: /* term: INTEGER_CONST  */
#line 175 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3596 "./src/syntax/parser.c"
    break;

  case 46: /* term: FLOAT_CONST  */
#line 176 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3602 "./src/syntax/parser.c"
    break;

  case 47: /* term: '(' additive_expression ')'  */
#line 177 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 3610 "./src/syntax/parser.c"
    break;

  case 48: /* term: function_call_expression  */
#line 180 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3616 "./src/syntax/parser.c"
    break;

  case 49: /* optional_for_expression: for_expression  */
#line 183 "src/syntax/parser.y"
                                        { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3622 "./src/syntax/parser.c"
    break;

  case 50: /* optional_for_expression: %empty  */
#line 184 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3628 "./src/syntax/parser.c"
    break;

  case 51: /* for_expression: logical_or_expression  */
#line 187 "src/syntax/parser.y"
                                      { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3634 "./src/syntax/parser.c"
    break;

  case 52: /* for_expression: for_expression ',' logical_or_expression  */
#line 188 "src/syntax/parser.y"
                                                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3640 "./src/syntax/parser.c"
    break;

  case 53: /* optional_assignment: identifier '=' expression  */
#line 191 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3646 "./src/syntax/parser.c"
    break;

  case 54: /* optional_assignment: %empty  */
#line 192 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3652 "./src/syntax/parser.c"
    break;

  case 55: /* expression: additive_expression  */
#line 195 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3658 "./src/syntax/parser.c"
    break;

  case 56: /* expression: function_arg_constant_expression  */
#line 196 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3664 "./src/syntax/parser.c"
    break;

  case 57: /* function_arg_constant_expression: EMPTY_CONST  */
#line 199 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3674 "./src/syntax/parser.c"
    break;

  case 58: /* function_arg_constant_expression: STRING  */
#line 204 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3684 "./src/syntax/parser.c"
    break;

  case 59: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 209 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3694 "./src/syntax/parser.c"
    break;

  case 60: /* function_call_expression: identifier '(' argument_list ')'  */
#line 216 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3704 "./src/syntax/parser.c"
    break;

  case 61: /* function_call_expression: set_function_call_expression  */
#line 221 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3710 "./src/syntax/parser.c"
    break;

  case 62: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 222 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3716 "./src/syntax/parser.c"
    break;

  case 63: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 225 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3726 "./src/syntax/parser.c"
    break;

  case 64: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 230 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3736 "./src/syntax/parser.c"
    break;

  case 65: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 235 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3746 "./src/syntax/parser.c"
    break;

  case 66: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 240 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3756 "./src/syntax/parser.c"
    break;

  case 67: /* argument_list: argument_list ',' expression  */
#line 247 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3764 "./src/syntax/parser.c"
    break;

  case 68: /* argument_list: expression  */
#line 250 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3770 "./src/syntax/parser.c"
    break;

  case 69: /* argument_list: %empty  */
#line 251 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3776 "./src/syntax/parser.c"
    break;

  case 70: /* $@2: %empty  */
#line 254 "src/syntax/parser.y"
                        {
                      if (!is_a_function_declaration) {
                        scope_counter++;
                        current_scope = push_scope(current_scope, scope_counter);
                      }
                      is_a_function_declaration = 0;
                    }
#line 3788 "./src/syntax/parser.c"
    break;

  case 71: /* compound_statement: '{' $@2 statement_list '}'  */
#line 260 "src/syntax/parser.y"
                                         {
                      (yyval.ast_node) = (yyvsp[-1].ast_node);
                      scope_counter--;
                      current_scope = current_scope->parent;
                    }
#line 3798 "./src/syntax/parser.c"
    break;

  case 72: /* compound_statement: '{' '}'  */
#line 265 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3804 "./src/syntax/parser.c"
    break;

  case 73: /* statement_list: statement_list statement  */
#line 268 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3812 "./src/syntax/parser.c"
    break;

  case 74: /* statement_list: statement  */
#line 271 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3818 "./src/syntax/parser.c"
    break;

  case 75: /* declaration: type_specifier identifier ';'  */
#line 274 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
              insert_row_into_symbol_table(current_scope, (yyvsp[-2].token), (yyvsp[-1].ast_node)->value, "variable");
            }
#line 3827 "./src/syntax/parser.c"
    break;

  case 76: /* statement: declaration  */
#line 280 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3833 "./src/syntax/parser.c"
    break;

  case 77: /* statement: compound_statement  */
#line 281 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3839 "./src/syntax/parser.c"
    break;

  case 78: /* statement: expression_statement  */
#line 282 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3845 "./src/syntax/parser.c"
    break;

  case 79: /* statement: selection_statement  */
#line 283 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3851 "./src/syntax/parser.c"
    break;

  case 80: /* statement: iteration_statement  */
#line 284 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3857 "./src/syntax/parser.c"
    break;

  case 81: /* statement: io_statement  */
#line 285 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3863 "./src/syntax/parser.c"
    break;

  case 82: /* statement: jump_statement  */
#line 286 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3869 "./src/syntax/parser.c"
    break;

  case 83: /* statement: assignment_statement  */
#line 287 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3875 "./src/syntax/parser.c"
    break;

  case 84: /* statement: error  */
#line 288 "src/syntax/parser.y"
                { yyerrok; }
#line 3881 "./src/syntax/parser.c"
    break;

  case 85: /* assignment_statement: identifier '=' expression ';'  */
#line 291 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3889 "./src/syntax/parser.c"
    break;

  case 86: /* expression_statement: optional_for_expression ';'  */
#line 296 "src/syntax/parser.y"
                                                  { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3895 "./src/syntax/parser.c"
    break;

  case 87: /* set_membership_expression: expression IN expression  */
#line 299 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3903 "./src/syntax/parser.c"
    break;

  case 88: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 304 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3911 "./src/syntax/parser.c"
    break;

  case 89: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 307 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3919 "./src/syntax/parser.c"
    break;

  case 90: /* iteration_statement: FOR '(' optional_assignment ';' optional_for_expression ';' optional_for_expression ')' statement  */
#line 312 "src/syntax/parser.y"
                                                                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3927 "./src/syntax/parser.c"
    break;

  case 91: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 315 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3935 "./src/syntax/parser.c"
    break;

  case 92: /* io_statement: WRITE '(' expression ')' ';'  */
#line 320 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3943 "./src/syntax/parser.c"
    break;

  case 93: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 323 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3951 "./src/syntax/parser.c"
    break;

  case 94: /* io_statement: READ '(' identifier ')' ';'  */
#line 326 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3959 "./src/syntax/parser.c"
    break;

  case 95: /* jump_statement: RETURN expression ';'  */
#line 331 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3967 "./src/syntax/parser.c"
    break;

  case 96: /* identifier: IDENTIFIER  */
#line 336 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 3975 "./src/syntax/parser.c"
    break;


#line 3979 "./src/syntax/parser.c"

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

#line 341 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
