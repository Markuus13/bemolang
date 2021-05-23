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
  YYSYMBOL_optional_for_expression = 67,   /* optional_for_expression  */
  YYSYMBOL_for_expression = 68,            /* for_expression  */
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
#define YYLAST   8159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  715

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
     184,   187,   188,   191,   192,   193,   196,   197,   200,   205,
     210,   217,   222,   223,   226,   231,   236,   241,   248,   251,
     252,   255,   255,   266,   269,   272,   275,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   292,   297,   300,   305,
     308,   313,   316,   321,   324,   327,   332,   337
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
  "unary_operator", "term", "optional_expression",
  "optional_for_expression", "for_expression", "expression",
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

#define YYPACT_NINF (-378)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     156,    17,    19,    21,    25,     1,    60,   567,   624,   875,
      64,   968,   993,    48,  -378,  1029,     9,   739,    65,  1101,
      47,    59,    72,   102,   513,  1219,   118,   140,   173,   885,
     262,  1124,  1359,    57,  1758,  1785,  1387,  1922,   189,   200,
    2008,  2068,  1084,    73,   924,   924,   203,   924,   -33,   221,
    1387,  1387,  1387,  1387,  2089,  1269,   205,   237,   224,   226,
     253,   242,   260,   265,   268,  2196,  2231,  2241,  2277,  2350,
    2426,    28,    76,   135,   261,   885,  2465,  2514,  2574,  2595,
    2702,  1152,  1381,  5035,  1349,   274,   149,   279,  1605,  6369,
    5081,   282,   284,   739,   290,   316,   336,   345,   310,   311,
     339,  5127,  5173,  5219,  5265,  5311,  5357,  5403,  5449,  5495,
    5541,  1372,   783,   168,   343,   924,   203,   885,   885,   347,
    5587,  1775,  5633,  8089,   -11,   169,   696,  8100,  2328,  6918,
      37,   353,   355,  1677,  5679,   386,   388,   396,   402,   783,
    6413,   783,   783,   783,  1610,  1610,  1610,  1610,  1634,   829,
     168,   739,  6369,   397,   399,   423,   177,  1070,  1170,  8111,
    8122,  8015,  8028,  8041,  8054,  6933,   436,   438,   441,  5725,
    5771,  5817,  5863,  6369,  1189,  5909,   414,  6369,  5955,    54,
    1691,   462,   469,   475,   476,   333,   920,  1006,   487,   489,
     503,   885,  1932,  2018,  1658,  2287,  2524,  2783,  1943,   510,
     511,   512,   516,    86,   213,   223,   538,   539,   542,   885,
      10,   271,   288,  1772,   300,   543,   324,   378,    90,   529,
    1658,  1658,   532,   533,   545,   546,  1601,  2931,  3032,   181,
     199,   232,   885,    99,  3088,  3147,  1800,  3159,   256,  3307,
    3358,  1821,   286,   174,   541,  1878,  6001,   530,   739,   549,
     550,   551,   553,  2450,  2858,  2956,   885,  3426,  4031,  1634,
    6678,  6693,  6708,  2834,   555,   557,   559,   561,  2145,  2302,
    2381,  1999,   885,   -15,   755,  2505,  2348,  2266,  2415,  2651,
    1831,  2689,  2808,  2887,  6047,  1634,  1634,  1266,   205,  1574,
     564,   565,   739,   568,   570,   572,   580,  6093,   310,   554,
    2080,  2586,  3092,  3294,  3401,  4260,  4319,  4371,  1959,   589,
     599,   606,   612,  7389,  7704,  7719,   885,  7734,  7749,  1610,
    7764,  7779,  7794,  7404,  1610,  1610,   613,   618,   619,   629,
    4084,  2118,  2624,  1910,   885,   165,    87,   988,  3238,  3349,
    3467,  3761,  4057,  1865,  4143,   634,  4182,  6483,  4108,   924,
     924,   203,   924,   211,   637,  1658,  1658,  2793,   205,   924,
     924,   203,   924,   231,   641,  1772,  1772,  1772,  1772,   434,
     205,  2970,  2983,   924,   924,   203,   924,   239,   642,  1800,
    1800,  1800,  1800,  3436,   205,  6139,  6369,   635,   924,   924,
     203,   924,   297,   649,  1634,  1634,  6723,   205,   924,   924,
     203,   924,   349,   651,  1266,  1266,  1266,  1893,  1893,  1893,
    1893,  1831,  1831,  1831,  1831,  1831,  1403,  2921,  2183,  6738,
    6753,    39,   298,   783,   168,   643,   924,   203,   885,   885,
    4418,  6369,   645,  4469,   739,   924,   924,   203,   924,   364,
     653,  1610,  1610,  7809,   205,  7824,  7839,   924,   924,   203,
     924,   387,   654,  1294,  1325,  1294,  1294,  1294,  1936,  1936,
    1936,  1936,  1865,  1865,  1865,  1865,  1865,  6435,  6498,  6459,
     205,   885,   658,   664,   672,   673,  3020,  3452,  3502,  3664,
     325,   674,   677,   682,   686,   450,   458,   474,   488,   501,
     577,   342,   716,   719,   720,   721,  3483,  3514,  3561,  3688,
    3742,  3831,   357,  6185,  6231,   723,   731,   732,   733,  6768,
    6783,  6798,  6813,   398,   735,   741,   742,   745,  3134,  3195,
    1440,  3011,  3112,   740,   747,   753,   756,  3720,  4202,  6966,
     885,  3648,  6986,  7006,  1893,  7026,  7046,  7066,  6946,  3859,
    7326,  7339,  2772,  3325,  3552,  3590,  3614,  3679,    67,   746,
    4529,   759,   760,   763,   764,  6277,  4575,   761,   775,   777,
     778,   785,  7854,  7869,  7884,  7899,   416,   786,   789,   790,
     793,  6513,  6528,   144,   794,  1494,  8067,  8078,   797,   798,
     799,   805,  7359,  7419,  7434,   885,  4280,  7449,  7464,  1936,
    7479,  7494,  7509,  7374,  4489,  7989,  8002,  6903,  6543,  6558,
    6573,  6588,   459,   806,  3696,  3803,  3921,  4042,  4116,   656,
     662,   694,   796,   852,  3843,  3875,  3883,  3903,  3933,  6323,
    6828,  6843,  6858,  6873,  6888,  3793,  3822,  3976,  4001,   924,
     924,   203,   924,   401,   809,  1893,  1893,  1893,  1893,  7086,
     205,  6413,   168,  6413,   801,   813,   815,  4621,  4667,  7914,
    7929,  7944,  7959,  7974,  6603,  6618,  6633,  6648,   924,   924,
     203,   924,   486,   810,  1936,  1936,  1936,  1936,  7524,   205,
    6663,   818,   821,   830,   831,  7106,  7126,  7146,  7166,  7186,
    7206,   466,  4713,   820,  4759,  4805,  4851,  4897,   838,   840,
     842,   853,  7539,  7554,  7569,  7584,  7599,  7614,   498,  7226,
    7246,  7266,  7286,  7306,  6413,  1189,  7629,  7644,  7659,  7674,
    7689,  4943,   854,  6413,  4989
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,  -378,  -378,   832,  -378,  -378,    15,  -378,   804,   -86,
      63,  -101,  -109,    24,  3522,  3103,   597,  1103,  1609,  -136,
    -131,  -147,   429,  3818,  2115,  2621,  -202,   -50,  -238,  -377,
      14,   -20,    18,  -105,  1104,   -93,   -79,   -34,   -31,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    43,    98,    58,    59,   130,
     273,   274,   275,   276,   210,   211,   212,   213,   214,    99,
     131,   132,    60,   215,   216,   217,    72,   101,    89,   102,
     103,   104,   105,   106,    61,   107,   108,   109,   110,   218
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    65,   166,   127,   299,   220,   221,    13,   386,   503,
      16,   126,   -18,   404,    11,    10,   139,    42,    12,   167,
     -18,    11,    10,   140,    84,    12,   124,   345,   -56,   198,
     127,   -18,   127,   159,   160,   303,    42,   -10,   126,   -11,
     158,   -12,    18,   176,   -97,   -13,    63,   304,   365,   366,
      42,    42,    42,    42,   555,    19,   241,    73,    57,   431,
      14,   305,   -69,   -69,   287,   338,   -19,   404,    -8,    -8,
      -8,    -8,   149,   337,   -19,   198,     1,     2,     3,     4,
      44,   241,   122,   -53,   179,   -19,   422,   -97,   335,   111,
     300,    17,    45,    42,   139,    50,    51,    57,   119,    -8,
     -97,   641,   111,   -56,   -97,    46,   306,   -15,   -44,   307,
      80,    81,   263,   133,   -18,   455,   136,   198,   198,   -97,
     157,   -18,   -18,   370,   -97,   -97,   -97,   -97,   -44,   -44,
     -44,   -44,   169,   -56,   -56,    47,   128,   379,   380,   263,
     308,   263,   263,   263,   323,   323,   323,   323,   263,   133,
     133,    42,   111,   175,   301,   298,   480,   178,   302,     1,
       2,     3,     4,   128,   -60,   128,   128,   128,   491,   -17,
      82,   -19,   455,   111,   348,   125,     5,   111,   -19,   -19,
     264,   265,   502,   -68,   -68,   266,   -59,   267,   268,   269,
     270,   198,   453,   271,   198,   513,   -18,   141,   339,   -53,
     454,   272,   156,   -18,   -19,   141,    30,    31,   -56,   198,
      32,   -19,   220,   221,   -52,   -60,   -60,   222,   223,   -58,
     198,   198,   224,   219,   225,   226,   227,   228,   229,   230,
     231,   -45,   198,   -59,   -59,    55,   241,   336,   232,   -70,
     -70,   -46,   566,    30,    31,   476,   -57,    32,    42,   220,
     221,   -45,   -45,   -45,   -45,    66,   198,   242,    74,   263,
     -14,   -46,   -46,   -46,   -46,   485,   -58,   -58,   602,   220,
     221,    75,   198,   496,   -41,   -41,    76,   220,   221,   -41,
     418,   -41,   -41,   -41,   -41,   263,   263,   418,   241,   -33,
     -57,   -57,    42,   549,    77,   -41,   521,   522,   432,    78,
     -41,   -41,    79,   520,   -41,    83,   -36,   574,   -88,   -33,
     -33,   367,   368,   -16,   127,   112,   198,   113,   -39,   323,
     -97,   -97,   126,   115,   323,   323,   -36,   -36,   -36,   -36,
     247,   509,   547,    81,   198,   220,   221,   548,   -39,   -39,
     -39,   -39,   -48,   469,   338,   338,   338,   576,   577,   116,
     421,   474,   337,   337,   575,   198,   198,   120,   241,   608,
      81,   483,   -48,   -48,   -48,   -48,   -97,   -97,   335,   117,
     241,   -97,   -97,   -97,   -97,   494,   613,    81,   118,   241,
     241,   241,   241,   518,   241,   -49,   111,   220,   221,   134,
     507,   618,    81,   284,   263,   263,   -62,   241,   562,   150,
     516,   -51,   220,   221,   418,   418,   418,   538,   538,   538,
     538,   418,   418,   418,   418,   418,   -62,   -62,   -62,   -62,
     152,   571,   153,   263,   133,   220,   221,   552,   198,   198,
     154,   111,   624,    81,    42,   675,   155,   560,   681,   220,
     221,   323,   323,   170,   241,   171,    38,   128,   177,   569,
     653,    81,   -40,   469,   348,   469,   469,   469,   593,   593,
     593,   593,   469,   469,   469,   469,   469,   698,   -47,   172,
     241,   198,   -40,   -40,   -40,   -40,   -63,   339,   339,   339,
     339,   339,   -54,   122,   174,    71,   125,   -55,   -47,   -47,
     -47,   -47,   -34,   670,    81,   349,   -63,   -63,   -63,   -63,
     703,    81,   350,   111,    85,   299,   -35,   299,   351,   352,
      86,   683,   -34,   -34,   367,   368,   573,   336,   100,   -37,
     692,   -60,   114,   -59,   220,   221,   -35,   -35,   367,   368,
     198,   100,   710,    81,   538,   122,   303,   -58,   303,   -37,
     -37,   -37,   -37,   359,   360,   361,   137,   138,   304,   362,
     304,   -45,   -45,   -45,   -45,   111,   -60,   -59,   345,   -45,
     -58,   -57,   305,   -97,   305,   373,   374,    -2,   299,   100,
       1,     2,     3,     4,   712,   -57,   -97,   299,   375,   376,
     168,   100,   388,   389,   390,   198,   391,     5,   398,   593,
     399,   300,   400,   300,   401,   -38,   338,   423,   424,   303,
     433,   426,   100,   427,   337,   428,   100,   306,   303,   306,
     307,   304,   307,   429,    35,   -38,   -38,   -38,   -38,   335,
     304,   682,   435,   684,    -4,   305,   193,    -4,    -4,    -4,
      -4,   673,   436,    54,   305,   538,   538,   538,   538,   437,
     241,   308,   133,   308,    -4,   438,   447,    35,    35,    69,
      70,   448,   449,   235,   300,   301,   298,   301,   298,   302,
     690,   302,   450,   300,   593,   593,   593,   593,   -51,   241,
     306,   477,   193,   307,   -65,   486,   497,   387,   235,   306,
     -66,   504,   307,   510,   711,   519,    35,   563,   572,   550,
      35,   556,   604,   714,   -65,   -65,   -65,   -65,   605,    35,
     -66,   -66,   -66,   -66,   308,   348,   606,   607,   609,   258,
     279,   610,   -64,   308,   193,   193,   611,    71,   301,   298,
     612,   425,   302,   -20,   -20,   142,   143,   301,   298,   339,
     -20,   302,   -64,   -64,   -64,   -64,   258,    35,   258,   258,
     258,   318,   318,   318,   318,   258,   279,   279,    35,    35,
     614,    20,    21,   615,   616,   617,    22,   620,    23,   180,
      24,    25,    26,    27,    28,   621,   622,   623,   336,   625,
      35,   342,    29,   629,    35,   626,   627,    30,    31,   628,
     630,    32,   -20,   -20,   405,   406,   631,    71,   193,   632,
     -20,   357,   642,   643,   644,   249,   250,   645,   646,    71,
     251,   -20,   252,   253,   254,   255,   193,   648,   123,   649,
     369,   650,   651,    71,   -67,   100,   256,   193,   193,   652,
     654,    30,    31,   655,   656,    32,    71,   657,   -54,   193,
     658,   659,   660,   383,   -67,   -67,   -67,   -67,   661,    15,
     -55,   264,   265,   676,   693,    35,   266,   685,   267,   268,
     269,   270,   699,   193,   271,   700,   396,   553,   554,   686,
     100,   687,   272,   557,   701,   702,   705,    30,    31,   193,
     -61,    32,   706,    71,   707,    -5,   708,   417,    -5,    -5,
      -5,    -5,   258,   258,   279,   235,    87,   709,   713,    35,
     -61,   -61,   -61,   -61,     0,    -5,     0,   181,   182,    71,
     603,     0,   183,     0,   184,   185,   186,   187,   188,   189,
     190,     0,     0,   193,     0,     0,   443,     0,   191,     0,
       0,   318,   318,    30,    31,     0,     0,    32,     0,     0,
       0,   193,   100,     0,     0,     0,   199,   200,     0,     0,
     468,   201,     0,   202,   203,   204,   205,   206,   207,   208,
       0,     0,   478,   479,   -45,   235,     0,   209,   -45,   -45,
     -45,   -45,    30,    31,   489,   490,    32,   235,    -6,     0,
       0,    -6,    -6,    -6,    -6,     0,   235,   235,   500,   501,
       0,   235,     0,    35,   100,     0,     0,     0,    -6,     0,
       0,   511,   512,    -7,   235,     0,    -7,    -7,    -7,    -7,
       0,   279,   279,   279,   533,   533,   533,   533,   279,   279,
     279,   545,   546,    -7,     0,   -20,   -20,   456,   457,     0,
     258,   279,   -20,   -20,     0,   193,   193,     0,    35,    -3,
       0,    35,    -3,    -3,    -3,    -3,     0,     0,   564,   565,
     -46,   235,     0,     0,   -46,   -46,   -46,   -46,     0,    -3,
     342,   342,   342,   342,   342,   588,   588,   588,   588,   342,
     342,   342,   600,   601,     0,     0,     0,   235,   193,    71,
     100,   -89,   100,   -89,   -89,   -89,   -89,   -89,   173,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,    71,     0,
      35,   -76,     0,   -89,   -76,   -76,   -76,   -76,   -89,   -89,
       0,     0,   -89,     0,   -89,   -89,   -89,    56,     0,     0,
      36,   -76,   -44,   -44,   -44,   -44,     0,   193,     0,     0,
     -44,   639,   194,   100,     0,     0,   -42,   -42,     0,    36,
       0,   -42,   100,   -42,   -42,   -42,   -42,     0,     0,    62,
       0,    64,    35,    36,    36,    36,    36,   -42,     0,   236,
       0,     0,   -42,   -42,   222,   223,   -42,     0,     0,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   194,     0,
       0,     0,   193,     0,   236,   232,   668,     0,     0,     0,
      30,    31,    36,     0,    32,     0,    36,   -21,   -21,   142,
     143,   326,   327,     0,   -21,    36,   328,     0,   329,   330,
     331,   332,     0,     0,   333,   259,   280,     0,     0,   135,
     194,   194,   334,   -52,     0,     0,     0,    30,    31,     0,
       0,    32,   533,   533,   679,   680,     0,   235,    35,   279,
      35,     0,   259,    36,   259,   259,   259,   319,   319,   319,
     319,   259,   280,   280,    36,    36,     0,   -46,   -46,   -46,
     -46,   588,   588,   696,   697,   -46,   235,     0,     0,   -86,
       0,     0,   -86,   -86,   -86,   -86,    36,   343,   264,   265,
      36,     0,     0,   266,     0,   267,   416,   269,   270,   -86,
       0,   271,     0,     0,   194,     0,     0,   194,     0,   272,
       0,    35,   342,     0,    30,    31,   326,   327,    32,     0,
      35,   328,   194,   329,   467,   331,   332,     0,     0,   333,
       0,     0,     0,   194,   194,     0,     0,   334,     0,     0,
       0,     0,    30,    31,     0,   194,    32,   326,   327,   236,
       0,     0,   328,     0,   329,   330,   331,   332,     0,    -9,
     333,    36,    -9,    -9,    -9,    -9,     0,     0,   334,   194,
       0,     0,   259,    30,    31,     0,     0,    32,     0,    -9,
       0,   -43,   -43,     0,     0,   194,   -43,     0,   -43,   -43,
     -43,   -43,     0,   280,     1,     2,     3,     4,   259,   259,
     280,   236,   -43,     0,     0,    36,     0,   -43,   -43,    20,
      21,   -43,     0,     0,    22,    56,    23,   180,    24,    25,
     -44,   -44,   -44,   -44,     0,   248,     0,     0,   -44,   194,
      29,   -97,   319,     0,     0,    30,    31,   319,   319,    32,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   194,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,     0,   343,     0,     0,   -97,
       0,     0,     0,   472,   473,     0,   475,     0,   194,   194,
       0,   236,     0,   481,   482,     0,   484,   -21,   -21,   405,
     406,     0,     0,   236,     0,   -21,     0,   492,   493,     0,
     495,     0,   236,   236,   236,   236,   -21,   236,     0,    36,
       0,     0,   505,   506,     0,   508,     0,   259,   259,     0,
     236,     0,   514,   515,     0,   517,     0,   280,   280,   280,
     534,   534,   534,   534,   280,   280,   280,   280,   280,     0,
       0,   -21,   -21,   456,   457,     0,   259,   280,   -21,   -21,
     551,   194,   194,     0,    36,     0,     0,    36,     0,   558,
     559,     0,   561,     0,   319,   319,     0,   236,     0,     0,
       0,   567,   568,     0,   570,     0,   343,   343,   343,   343,
     343,   589,   589,   589,   589,   343,   343,   343,   343,   343,
       0,     0,     0,   236,   194,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,     0,     0,     0,   -73,    36,   -85,   -73,   -73,
     -73,   -73,   -85,   -85,     0,     0,   -85,     0,   -85,   -85,
     -85,     0,   309,   310,     0,   -73,    37,   311,     0,   312,
     313,   314,   315,   194,   -97,   -97,   -97,   534,   195,   -97,
     -97,   -97,   -97,   316,     0,    37,   249,   250,    30,    31,
       0,   251,    32,   252,   253,   254,   255,     0,    36,    37,
      37,    37,    37,     0,     0,   237,     0,   256,     0,     0,
     181,   182,    30,    31,     0,   183,    32,   184,   185,   186,
     187,     0,     0,     0,   195,     0,     0,     0,   194,     0,
     237,   191,   589,     0,     0,   -44,    30,    31,    37,     0,
      32,     0,    37,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     288,    37,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     151,   260,   281,   -44,   -97,     0,   195,   195,     0,   -97,
     -97,   -97,   -97,   671,   672,     0,   674,   -97,   534,   534,
     534,   534,     0,   236,    36,   280,    36,     0,   260,    37,
     260,   260,   260,   320,   320,   320,   320,   260,   281,   281,
      37,    37,   688,   689,     0,   691,     0,   589,   589,   589,
     589,     0,   236,     0,     0,   -72,     0,     0,   -72,   -72,
     -72,   -72,    37,   344,   199,   200,    37,     0,     0,   201,
       0,   202,   203,   204,   205,   -72,   -33,   -33,    52,    53,
     195,     0,     0,   195,   -33,   209,     0,    36,   343,     0,
      30,    31,   222,   223,    32,     0,    36,   224,   195,   225,
     226,   227,   228,   -36,   -36,   -36,   -36,     0,     0,   195,
     195,   -36,     0,   232,     0,     0,     0,     0,    30,    31,
       0,   195,    32,   264,   265,   237,     0,     0,   266,     0,
     267,   416,   269,   270,   384,   -44,   -44,    37,     0,   -44,
     -44,   -44,   -44,     0,   272,   195,     0,     0,   260,    30,
      31,     0,     0,    32,     0,     0,     0,   326,   327,     0,
       0,   195,   328,     0,   329,   467,   331,   332,     0,   281,
       0,     0,     0,     0,   260,   260,   281,   237,   334,     0,
       0,    37,     0,    30,    31,   523,   524,    32,     0,     0,
     525,   -97,   526,   527,   528,   529,   -97,   -97,   -97,   -97,
       0,   -97,     0,     0,   -97,   195,   530,     0,   320,     0,
       0,    30,    31,   320,   320,    32,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   195,   -26,   -26,   -26,   -26,   578,   579,
       0,     0,   344,   580,     0,   581,   582,   583,   584,     0,
     -39,   -39,   -39,   -39,   195,   195,   -33,   237,   -39,   585,
     -33,   -33,   355,   356,    30,    31,   358,   -44,    32,   237,
       0,   -44,   -44,   -44,   -44,     0,     0,     0,   237,   237,
     237,   237,    56,   237,     0,    37,     0,   -44,   -44,   -44,
     -44,     0,   434,   260,   260,   -44,   237,     0,     0,     0,
       0,     0,     0,   281,   281,   281,   535,   535,   535,   535,
     281,   281,   281,   281,   281,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   260,   281,   -26,   -26,   -26,   195,   195,     0,
      37,     0,     0,    37,     0,   -26,   -48,   -48,   -48,   -48,
     320,   320,   -36,   237,   -48,     0,   -36,   -36,   -36,   -36,
       0,     0,   344,   344,   344,   344,   344,   590,   590,   590,
     590,   344,   344,   344,   344,   344,     0,     0,     0,   237,
     195,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -62,   -62,   -62,   -62,
       0,     0,    37,   -78,   -62,     0,     0,     0,   -78,   -78,
       0,     0,   -78,     0,   -78,   -78,   -78,   -40,   -40,   -40,
     -40,     0,    40,     0,     0,   -40,   -45,     0,     0,   195,
       0,     0,     0,   535,   196,   -45,   -45,   -45,   -45,   -45,
     -45,    40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,   -97,    37,    40,    40,    40,    40,     0,
       0,   239,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,     0,
     196,   -97,     0,     0,   195,     0,   239,     0,   590,     0,
       0,   -44,     0,     0,    40,     0,     0,     0,    40,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   288,    40,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,   261,   282,   -44,
       0,     0,   196,   196,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,   -47,     0,   535,   535,   535,   535,     0,   237,
      37,   281,    37,     0,   261,    40,   261,   261,   261,   321,
     321,   321,   321,   261,   282,   282,    40,    40,     0,   -63,
     -63,   -63,   -63,   590,   590,   590,   590,   -63,   237,   -34,
     -34,    52,    53,     0,   -32,     0,     0,   -34,    40,   346,
       0,     0,    40,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -32,   -32,   412,   413,   196,     0,     0,   196,
       0,     0,   -32,    37,   344,   -35,   -35,    52,    53,     0,
     -45,   -39,    37,   -35,   196,   -39,   -39,   -39,   -39,   -45,
     -45,   -45,   -45,   -45,   -45,   196,   196,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   148,   196,   -45,     0,
       0,   239,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,    40,   -25,   -25,   411,     0,     0,     0,
       0,   196,     0,     0,   261,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -25,   -25,     0,   196,   -37,   -37,
     -37,   -37,     0,     0,   -25,   282,   -37,     0,     0,   -46,
     261,   261,   282,   239,     0,     0,     0,    40,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,   -46,     0,     0,
       0,   196,     0,   -33,   321,     0,     0,     0,     0,   321,
     321,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   196,
     -33,   -33,   -33,   -33,   -33,   414,   415,     0,   346,     0,
       0,   -33,     0,     0,   -38,   -38,   -38,   -38,   -97,     0,
     196,   196,   -38,   239,     0,     0,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   239,   -97,   -97,   -97,   -97,
     -97,   -97,     0,     0,   239,   239,   239,   239,     0,   239,
       0,    40,     0,   -65,   -65,   -65,   -65,     0,     0,   261,
     261,   -65,   239,     0,     0,     0,     0,     0,     0,   282,
     282,   282,   536,   536,   536,   536,   282,   282,   282,   282,
     282,     0,   -22,   -22,   -22,   -22,   407,   408,   261,   282,
     -22,   409,   410,   196,   196,     0,    40,     0,     0,    40,
       0,   -22,   -66,   -66,   -66,   -66,   321,   321,   -48,   239,
     -66,     0,   -48,   -48,   -48,   -48,     0,     0,   346,   346,
     346,   346,   346,   591,   591,   591,   591,   346,   346,   346,
     346,   346,     0,     0,     0,   239,   196,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -64,   -64,   -64,   -64,     0,     0,    40,   -77,
     -64,     0,     0,     0,   -77,   -77,     0,     0,   -77,     0,
     -77,   -77,   -77,   -67,   -67,   -67,   -67,     0,    41,     0,
       0,   -67,   -46,     0,     0,   196,     0,     0,     0,   536,
     197,   -46,   -46,   -46,   -46,   -46,   -46,    41,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,   -36,
      40,    41,    41,    41,    41,     0,     0,   240,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,   197,   -36,     0,     0,
     196,     0,   240,     0,   591,     0,     0,   -39,     0,     0,
      41,     0,     0,     0,    41,     0,   -39,   -39,   -39,   -39,
     -39,   -39,     0,    41,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,   262,   283,   -39,     0,     0,   197,   197,
     -61,   -61,   -61,   -61,     0,     0,     0,     0,   -61,     0,
     536,   536,   536,   536,     0,   239,    40,   282,    40,     0,
     262,    41,   262,   262,   262,   322,   322,   322,   322,   262,
     283,   283,    41,    41,     0,     0,     0,     0,     0,   591,
     591,   591,   591,     0,   239,     0,     0,     0,     0,     0,
     -31,     0,     0,     0,    41,   347,     0,     0,    41,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
     412,   413,   197,     0,     0,   197,     0,   -62,   -31,    40,
     346,   -62,   -62,   -62,   -62,     0,   -48,   -40,    40,     0,
     197,   -40,   -40,   -40,   -40,   -48,   -48,   -48,   -48,   -48,
     -48,   197,   197,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,     0,   -44,   197,   -48,     0,     0,   240,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   397,   -44,    41,
     -44,   -44,   -44,   -44,   -44,   -44,   -45,   197,     0,     0,
     262,     0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   197,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   283,     0,     0,     0,   -62,   262,   262,   283,   240,
       0,     0,     0,    41,   -62,   -62,   -62,   -62,   -62,   -62,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,     0,   -62,     0,     0,     0,   197,     0,   -40,
     322,     0,     0,     0,     0,   322,   322,     0,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   197,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   347,   -45,   -45,   -40,     0,   -45,
     -45,   -45,   -45,     0,   -46,     0,   197,   197,     0,   240,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   240,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
     240,   240,   240,   240,   -34,   240,     0,    41,   -34,   -34,
     355,   356,     0,     0,     0,   262,   262,   -35,   240,     0,
       0,   -35,   -35,   355,   356,   283,   283,   283,   537,   537,
     537,   537,   283,   283,   283,   283,   283,     0,   -23,   -23,
     -23,   -23,   407,   408,   262,   283,   -23,   409,   410,   197,
     197,     0,    41,     0,   -47,    41,     0,   -23,   -47,   -47,
     -47,   -47,   322,   322,     0,   240,   -46,   -46,     0,     0,
     -46,   -46,   -46,   -46,   347,   347,   347,   347,   347,   592,
     592,   592,   592,   347,   347,   347,   347,   347,     0,     0,
       0,   240,   197,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,
      34,     0,   -33,   -33,    41,   -84,   -33,   -33,   381,   382,
     -84,   -84,   192,     0,   -84,     0,   -84,   -84,   -84,   -24,
     -24,   -24,   -24,   407,   408,     0,     0,   -24,   409,   410,
       0,   197,   -47,    67,    68,   537,     0,     0,   -24,   234,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,    41,     0,   192,     0,
     -47,   -36,   -36,     0,   234,   -36,   -36,   -36,   -36,     0,
       0,     0,    34,   -39,   -39,     0,    34,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,    34,   197,     0,     0,     0,
     592,     0,     0,   -63,     0,   257,   278,     0,     0,     0,
     192,   192,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,   -63,   257,    34,   257,   257,   257,   317,   317,   317,
     317,   257,   278,   278,    34,    34,   537,   537,   537,   537,
       0,   240,    41,   283,    41,   -22,   -22,   -22,   -22,   458,
     459,     0,   -22,   -22,   460,   461,    34,   341,     0,     0,
      34,     0,     0,     0,     0,   592,   592,   592,   592,     0,
     240,     0,     0,     0,   192,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   192,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,   371,   372,    41,   347,   -79,     0,     0,
       0,     0,   -79,   -79,    41,   192,   -79,     0,   -79,   -79,
     -79,   -48,   -48,   -34,     0,   -48,   -48,   -48,   -48,     0,
       0,    34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   192,
     -34,   -34,   -34,   -34,   -34,   414,   415,   462,     0,     0,
       0,   -34,     0,     0,     0,   192,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,     0,   419,   420,
     278,   234,   -62,   -62,     0,    34,   -62,   -62,   -62,   -62,
       0,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   192,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   445,   446,     0,
       0,     0,     0,     0,   -80,     0,     0,   192,     0,   -80,
     -80,     0,     0,   -80,   -33,   -80,   -80,   -80,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   234,   -33,   -33,   -33,   -33,   394,   395,   487,   488,
     -40,   -40,     0,   234,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,   498,   499,     0,   -32,   -63,   234,     0,    34,
     -63,   -63,   -63,   -63,   -32,   -32,   -32,   -32,   -32,   -32,
     234,   -32,   -32,   -32,   -32,   463,   464,   278,   278,   278,
     532,   532,   532,   532,   278,   543,   544,   -47,   -47,     0,
       0,   -47,   -47,   -47,   -47,     0,   257,   278,     0,     0,
       0,   192,   192,     0,    34,     0,   -37,    34,     0,    33,
     -37,   -37,   -37,   -37,     0,     0,     0,   234,   -63,   -63,
       0,    48,   -63,   -63,   -63,   -63,   341,   341,   341,   341,
     341,   587,   587,   587,   587,   341,   598,   599,     0,     0,
     -35,     0,     0,   234,   192,     0,     0,     0,   233,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   414,   415,     0,   -34,   -34,   243,   -35,   -34,
     -34,   381,   382,   233,     0,     0,    34,     0,   -37,     0,
       0,    33,     0,     0,     0,    33,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,    33,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -38,   192,   129,   277,   -37,     0,     0,   243,
     243,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,    34,     0,
     -38,   129,    33,   129,   129,   129,   161,   162,   163,   164,
     165,   277,   277,    33,    33,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,   -29,   -29,   635,   636,   192,     0,
       0,     0,     0,     0,   -29,    33,   340,   -61,   -38,    33,
       0,     0,   -38,   -38,   -38,   -38,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   353,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,     0,   -35,   -35,     0,   -61,   -35,   -35,   381,   382,
     -65,   363,     0,     0,   -65,   -65,   -65,   -65,   677,   678,
       0,     0,     0,   234,    34,   278,    34,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   377,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,     0,     0,     0,     0,   -97,   694,   695,     0,
      33,     0,   234,     0,     0,     0,   -37,   -37,   392,   -33,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   402,   -33,   -33,   -33,   -33,   -33,
     -33,   465,   466,     0,     0,     0,     0,    34,   341,   277,
     233,   -65,     0,     0,    33,     0,    34,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,    39,     0,   -66,   439,   -65,
     -66,   -66,   -66,   -66,   -66,     0,     0,    49,     0,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   451,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -38,   -38,     0,   -66,   -38,
     -38,   -38,   -38,     0,   238,     0,     0,   -65,   -65,     0,
     233,   -65,   -65,   -65,   -65,     0,   -30,   -30,   -30,   -30,
     -30,   -30,   233,   244,   -30,   -30,   -30,   635,   636,   238,
       0,     0,     0,     0,     0,   -30,   233,    39,    33,   -66,
     -66,    39,     0,   -66,   -66,   -66,   -66,   -64,   -64,   233,
      39,   -64,   -64,   -64,   -64,     0,   277,   277,   277,   531,
     539,   540,   541,   542,     0,   244,   244,   -67,   -67,     0,
       0,   -67,   -67,   -67,   -67,   129,   277,     0,     0,     0,
     243,   243,     0,    33,     0,   -64,    33,     0,    39,   -64,
     -64,   -64,   -64,     0,     0,     0,   233,   -61,   -61,    39,
      39,   -61,   -61,   -61,   -61,   340,   340,   340,   340,   340,
     586,   594,   595,   596,   597,     0,     0,     0,     0,     0,
       0,    39,   233,   243,   -64,    39,     0,     0,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   354,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -67,
       0,     0,   -64,     0,     0,    33,     0,   364,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -67,     0,   -36,
     378,     0,   633,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,    39,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   393,   -36,   -67,    33,     0,     0,
     -67,   -67,   -67,   -67,   -36,   -36,   -36,   -36,   -36,   -36,
     403,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,     0,   -97,     0,     0,     0,   238,   662,     0,     0,
      39,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -44,   -97,     0,     0,
       0,     0,     0,     0,   440,   -44,   -44,   -44,   -44,   -44,
     -44,   470,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -61,   471,   452,     0,   -61,   -61,   -61,   -61,     0,     0,
       0,   -39,   233,    33,   277,    33,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   238,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,   238,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,     0,   238,     0,    39,     0,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   238,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,     0,    33,   340,     0,   -45,
     -45,   -45,   -45,   -45,   -45,    33,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   244,   244,   -45,    39,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   238,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   238,   244,
       0,     0,     0,   -81,     0,     0,     0,     0,   -81,   -81,
       0,     0,   -81,     0,   -81,   -81,   -81,   -29,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   664,   665,
     -82,    39,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,   634,     0,
       0,     0,   -82,     0,     0,     0,     0,   -82,   -82,     0,
       0,   -82,     0,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,   -83,    39,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,   663,   -83,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,     0,   -83,   -83,   -83,     0,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,   -73,   -73,   238,    39,
     -73,    39,   -73,   -73,   -73,     0,     0,     0,     0,     0,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   238,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,     0,   -87,     0,     0,     0,     0,   -87,   -87,     0,
       0,   -87,     0,   -87,   -87,   -87,   -30,   -30,   -30,   -30,
     -30,   -30,    39,   -30,   -30,   -30,   -30,   664,   665,     0,
     -96,    39,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,     0,     0,     0,     0,     0,
       0,     0,   -96,     0,     0,     0,     0,   -96,   -96,     0,
       0,   -96,     0,   -96,   -96,   -96,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,   -76,   -76,     0,     0,   -76,     0,   -76,
     -76,   -76,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,   -72,
     -72,     0,     0,   -72,     0,   -72,   -72,   -72,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,     0,     0,     0,   -86,   -86,     0,     0,   -86,
       0,   -86,   -86,   -86,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   704,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,   -89,     0,     0,     0,
       0,   -89,   -89,     0,     0,   -89,     0,   -89,   -89,   -89,
     -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,     0,
       0,     0,   -92,     0,     0,     0,     0,   -92,   -92,     0,
       0,   -92,     0,   -92,   -92,   -92,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     0,     0,     0,     0,     0,     0,     0,   -95,     0,
       0,     0,     0,   -95,   -95,     0,     0,   -95,     0,   -95,
     -95,   -95,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,     0,     0,
       0,     0,     0,     0,   -94,     0,     0,     0,     0,   -94,
     -94,     0,     0,   -94,     0,   -94,   -94,   -94,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,     0,     0,     0,     0,     0,     0,
     -93,     0,     0,     0,     0,   -93,   -93,     0,     0,   -93,
       0,   -93,   -93,   -93,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,     0,     0,     0,     0,   -90,     0,     0,     0,
       0,   -90,   -90,     0,     0,   -90,     0,   -90,   -90,   -90,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,   -91,     0,     0,     0,     0,   -91,   -91,     0,
       0,   -91,     0,   -91,   -91,   -91,   -71,     0,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,     0,   -71,     0,
       0,     0,     0,   -71,   -71,     0,     0,   -71,     0,   -71,
      88,   -71,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,   -85,     0,     0,     0,     0,   -85,
     -85,     0,     0,   -85,     0,   -85,   -85,   -85,   -78,     0,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
     -78,     0,     0,     0,     0,   -78,   -78,     0,     0,   -78,
       0,   -78,   -78,   -78,    90,     0,     1,     2,     3,     4,
      91,     0,    92,    93,    94,    20,    21,    95,    96,    97,
      22,     0,    23,   245,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,    30,    31,     0,     0,    32,     0,   246,   121,   -50,
     -77,     0,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,     0,     0,     0,   -77,   -77,     0,
       0,   -77,     0,   -77,   -77,   -77,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,   -75,     0,
       0,     0,     0,   -75,   -75,     0,     0,   -75,     0,   -75,
     -75,   -75,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,     0,     0,     0,   -84,     0,     0,     0,     0,   -84,
     -84,     0,     0,   -84,     0,   -84,   -84,   -84,   -79,     0,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
     -79,     0,     0,     0,     0,   -79,   -79,     0,     0,   -79,
       0,   -79,   -79,   -79,   -80,     0,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,   -80,     0,     0,     0,
       0,   -80,   -80,     0,     0,   -80,     0,   -80,   -80,   -80,
     -81,     0,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,   -81,     0,     0,     0,     0,   -81,   -81,     0,
       0,   -81,     0,   -81,   -81,   -81,   -82,     0,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,   -82,   -82,     0,     0,   -82,     0,   -82,
     -82,   -82,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,     0,   -83,
     -83,     0,     0,   -83,     0,   -83,   -83,   -83,   -87,     0,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,     0,     0,     0,
     -87,     0,     0,     0,     0,   -87,   -87,     0,     0,   -87,
       0,   -87,   -87,   -87,   -74,     0,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
       0,   -74,   -74,     0,     0,   -74,     0,   -74,   -74,   -74,
     -96,     0,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,     0,     0,     0,     0,     0,
       0,     0,   -96,     0,     0,     0,     0,   -96,   -96,     0,
       0,   -96,     0,   -96,   -96,   -96,   -92,     0,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,     0,     0,     0,     0,     0,     0,   -92,     0,
       0,     0,     0,   -92,   -92,     0,     0,   -92,     0,   -92,
     -92,   -92,   -95,     0,   -95,   -95,   -95,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
       0,     0,     0,     0,   -95,     0,     0,     0,     0,   -95,
     -95,     0,     0,   -95,     0,   -95,   -95,   -95,   -94,     0,
     -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,     0,     0,     0,     0,     0,     0,     0,
     -94,     0,     0,     0,     0,   -94,   -94,     0,     0,   -94,
       0,   -94,   -94,   -94,   -93,     0,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
       0,     0,     0,     0,     0,     0,   -93,     0,     0,     0,
       0,   -93,   -93,     0,     0,   -93,     0,   -93,   -93,   -93,
     -90,     0,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,
       0,     0,   -90,     0,     0,     0,     0,   -90,   -90,     0,
       0,   -90,     0,   -90,   -90,   -90,   -91,     0,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,     0,     0,     0,     0,     0,     0,   -91,     0,
       0,     0,     0,   -91,   -91,     0,     0,   -91,     0,   -91,
     -91,   -91,   -71,     0,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,   -71,     0,     0,     0,     0,   -71,
     -71,     0,     0,   -71,     0,   -71,   385,   -71,   -76,     0,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,     0,     0,     0,   -76,   -76,     0,     0,   -76,
       0,   -76,   -76,   -76,   -71,     0,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,     0,   -71,     0,     0,     0,
       0,   -71,   -71,     0,     0,   -71,     0,   -71,   430,   -71,
     -73,     0,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,   -73,     0,     0,     0,     0,   -73,   -73,     0,
       0,   -73,     0,   -73,   -73,   -73,    90,     0,     1,     2,
       3,     4,    91,     0,    92,    93,    94,    20,    21,    95,
      96,    97,    22,     0,    23,   245,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,    30,    31,     0,     0,    32,     0,   246,
     619,   -50,   -86,     0,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,   -86,
     -86,     0,     0,   -86,     0,   -86,   -86,   -86,    90,     0,
       1,     2,     3,     4,    91,     0,    92,    93,    94,    20,
      21,    95,    96,    97,    22,     0,    23,   245,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,    30,    31,     0,     0,    32,
       0,   246,   647,   -50,   -72,     0,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,   -72,   -72,     0,     0,   -72,     0,   -72,   -72,   -72,
      90,     0,     1,     2,     3,     4,    91,     0,    92,    93,
      94,    20,    21,    95,    96,    97,    22,     0,    23,   245,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,    30,    31,     0,
       0,    32,     0,   246,   289,   -50,     1,     2,     3,     4,
     290,     0,   291,   292,   293,    20,    21,   294,   295,   296,
      22,     0,    23,   245,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,    30,    31,   -97,     0,    32,     0,   297,     0,   -50,
       0,     0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   470,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -40,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -40,   -40,   -40,   -40,   -40,
     -40,   -47,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -47,   -47,   -47,   -47,   -47,   -47,   -63,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -63,   -63,   -63,   -63,   -63,
     -63,   -34,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -34,   -34,   -34,   -34,   -34,   -34,   -35,   -34,   -34,   -34,
     -34,   -34,   -34,   465,   466,   -35,   -35,   -35,   -35,   -35,
     -35,   -37,   -35,   -35,   -35,   -35,   -35,   -35,   465,   466,
     -37,   -37,   -37,   -37,   -37,   -37,   -38,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,   -38,
     -38,   -65,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -64,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -64,   -64,   -64,   -64,   -64,   -64,   -67,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -67,   -67,   -67,   -67,   -67,
     -67,   -61,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -61,   -61,   -61,   -61,   -61,   -61,   -39,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -39,   -39,   -39,   -39,   -39,
     -39,   -48,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -48,   -48,   -48,   -48,   -48,   -48,   -62,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -62,   -62,   -62,   -62,   -62,
     -62,   -40,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -40,   -40,   -40,   -40,   -40,   -40,   -34,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -34,   -34,   -34,   -34,   -34,
     -34,   -35,   -34,     0,   -34,   -34,   -34,   -34,   394,   395,
     -35,   -35,   -35,   -35,   -35,   -35,   -47,   -35,     0,   -35,
     -35,   -35,   -35,   394,   395,   -47,   -47,   -47,   -47,   -47,
     -47,   -63,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -63,   -63,   -63,   -63,   -63,   -63,   -37,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -37,   -37,   -37,   -37,   -37,
     -37,   -38,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -38,   -38,   -38,   -38,   -38,   -38,   -65,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -65,   -65,   -65,   -65,   -65,
     -65,   -66,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -66,   -66,   -66,   -66,   -66,   -66,   -64,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -64,   -64,   -64,   -64,   -64,
     -64,   -67,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -67,   -67,   -67,   -67,   -67,   -67,   -61,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -61,   -61,   -61,   -61,   -61,
     -61,   -31,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -31,   -31,   -31,   -31,   -31,   -31,   -32,   -31,   -31,   -31,
     -31,   463,   464,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -31,   -32,     0,   -32,   -32,   285,   286,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,   -31,
     -31,   285,   286,   -44,   -44,   -44,   -44,   -44,   -44,   640,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,   -44,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,   -46,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   637,   638,     0,     0,
       0,     0,   -33,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,   -39,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,   -48,   -62,   -62,   -62,   -62,   -62,   -62,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,   -62,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,   -40,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,   -47,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,     0,   -63,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   637,   638,     0,     0,
       0,     0,   -34,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   637,   638,     0,     0,
       0,     0,   -35,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,   -37,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,     0,   -38,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,   -65,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -66,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,   -64,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -67,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,     0,   -61,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,   635,   636,   -28,   -28,   -28,   -28,
     -28,   -28,   -27,     0,   -28,   -28,   -28,   635,   636,     0,
       0,     0,     0,     0,     0,   -28,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -44,   -44,   -44,   -44,   -44,   -44,   669,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,
     -97,   -44,   -44,   -44,   -44,   -44,   -44,   444,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   666,
     667,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   666,
     667,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   666,   667,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,   441,   442,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,   441,   442,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,   441,
     442,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   664,   665,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     664,   665,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
       0,   -29,   -29,   324,   325,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,     0,   -30,   -30,   324,   325,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   324,
     325,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,
     -28,   -28,   324,   325,   -23,   -23,   -23,   -23,   458,   459,
       0,   -23,   -23,   460,   461,   -24,   -24,   -24,   -24,   458,
     459,     0,   -24,   -24,   460,   461,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,     0,   -26,   -26,   -22,   -22,   -22,
     -22,   144,   145,     0,   -22,     0,   146,   147,   -23,   -23,
     -23,   -23,   144,   145,     0,   -23,     0,   146,   147,   -24,
     -24,   -24,   -24,   144,   145,     0,   -24,     0,   146,   147
};

static const yytype_int16 yycheck[] =
{
       0,    34,   149,   112,   140,    38,    39,     7,   246,   386,
      10,   112,    27,    28,     0,     0,    27,    17,     0,   150,
      35,     7,     7,    34,    74,     7,   112,   174,    18,    29,
     139,    46,   141,   142,   143,   140,    36,    20,   139,    20,
     141,    20,    33,   174,    43,    20,    46,   140,    38,    39,
      50,    51,    52,    53,   431,    46,    56,    57,    43,   297,
       0,   140,    34,    35,    27,   174,    27,    28,     3,     4,
       5,     6,    35,   174,    35,    75,     3,     4,     5,     6,
      33,    81,   102,    46,    20,    46,   288,    33,   174,    89,
     140,    43,    33,    93,    27,    38,    39,    82,    98,    34,
      46,    34,   102,    46,    18,    33,   140,    34,    18,   140,
      34,    35,   112,   113,    27,    28,   116,   117,   118,    33,
     140,    34,    35,    33,    38,    39,    40,    41,    38,    39,
      40,    41,   152,    34,    35,    33,   112,    38,    39,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   173,   140,   140,   358,   177,   140,     3,
       4,     5,     6,   139,    46,   141,   142,   143,   370,    34,
      35,    27,    28,   173,   174,   112,    20,   177,    34,    35,
      12,    13,   384,    34,    35,    17,    46,    19,    20,    21,
      22,   191,    27,    25,   194,   397,    27,    28,   174,    34,
      35,    33,   139,    34,    27,    28,    38,    39,    34,   209,
      42,    34,    38,    39,    46,    34,    35,    12,    13,    46,
     220,   221,    17,    20,    19,    20,    21,    22,    23,    24,
      25,    18,   232,    34,    35,    46,   236,   174,    33,    34,
      35,    18,   444,    38,    39,    34,    46,    42,   248,    38,
      39,    38,    39,    40,    41,    34,   256,    20,    34,   259,
      34,    38,    39,    40,    41,    34,    34,    35,   470,    38,
      39,    18,   272,    34,    12,    13,    34,    38,    39,    17,
     280,    19,    20,    21,    22,   285,   286,   287,   288,    18,
      34,    35,   292,   424,    34,    33,   405,   406,   298,    34,
      38,    39,    34,   404,    42,    44,    18,   454,    34,    38,
      39,    40,    41,    34,   423,    33,   316,    33,    18,   319,
      34,    35,   423,    33,   324,   325,    38,    39,    40,    41,
      20,    34,    34,    35,   334,    38,    39,   423,    38,    39,
      40,    41,    18,   343,   453,   454,   455,   456,   457,    33,
     287,   351,   453,   454,   455,   355,   356,    46,   358,    34,
      35,   361,    38,    39,    40,    41,    33,    34,   454,    33,
     370,    38,    39,    40,    41,   375,    34,    35,    33,   379,
     380,   381,   382,    34,   384,    46,   386,    38,    39,    46,
     390,    34,    35,    46,   394,   395,    18,   397,    34,    46,
     400,    46,    38,    39,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,    38,    39,    40,    41,
      34,    34,    34,   423,   424,    38,    39,   427,   428,   429,
      34,   431,    34,    35,   434,    34,    34,   437,   640,    38,
      39,   441,   442,    46,   444,    46,    17,   423,    34,   449,
      34,    35,    18,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   669,    18,    46,
     470,   471,    38,    39,    40,    41,    18,   453,   454,   455,
     456,   457,    46,   503,    46,    56,   423,    46,    38,    39,
      40,    41,    18,    34,    35,    33,    38,    39,    40,    41,
      34,    35,    33,   503,    75,   641,    18,   643,    33,    33,
      81,   642,    38,    39,    40,    41,   453,   454,    89,    18,
      34,    34,    93,    34,    38,    39,    38,    39,    40,    41,
     530,   102,    34,    35,   534,   555,   641,    34,   643,    38,
      39,    40,    41,    33,    33,    33,   117,   118,   641,    33,
     643,    38,    39,    40,    41,   555,    18,    18,   705,    46,
      18,    18,   641,    34,   643,    33,    33,     0,   704,   140,
       3,     4,     5,     6,   705,    34,    46,   713,    33,    33,
     151,   152,    33,    33,    33,   585,    33,    20,    33,   589,
      33,   641,    33,   643,    33,    18,   705,    33,    33,   704,
      46,    33,   173,    33,   705,    33,   177,   641,   713,   643,
     641,   704,   643,    33,    17,    38,    39,    40,    41,   705,
     713,   641,    33,   643,     0,   704,    29,     3,     4,     5,
       6,   631,    33,    36,   713,   635,   636,   637,   638,    33,
     640,   641,   642,   643,    20,    33,    33,    50,    51,    52,
      53,    33,    33,    56,   704,   641,   641,   643,   643,   641,
     660,   643,    33,   713,   664,   665,   666,   667,    34,   669,
     704,    34,    75,   704,    18,    34,    34,   248,    81,   713,
      18,    46,   713,    34,   704,    34,    89,    34,    34,    46,
      93,    46,    34,   713,    38,    39,    40,    41,    34,   102,
      38,    39,    40,    41,   704,   705,    34,    34,    34,   112,
     113,    34,    18,   713,   117,   118,    34,   288,   704,   704,
      34,   292,   704,    27,    28,    29,    30,   713,   713,   705,
      34,   713,    38,    39,    40,    41,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      34,    12,    13,    34,    34,    34,    17,    34,    19,    20,
      21,    22,    23,    24,    25,    34,    34,    34,   705,    34,
     173,   174,    33,    33,   177,    34,    34,    38,    39,    34,
      33,    42,    27,    28,    29,    30,    33,   358,   191,    33,
      35,   194,    46,    34,    34,    12,    13,    34,    34,   370,
      17,    46,    19,    20,    21,    22,   209,    46,    25,    34,
     213,    34,    34,   384,    18,   386,    33,   220,   221,    34,
      34,    38,    39,    34,    34,    42,   397,    34,    34,   232,
      33,    33,    33,   236,    38,    39,    40,    41,    33,     7,
      34,    12,    13,    34,    34,   248,    17,    46,    19,    20,
      21,    22,    34,   256,    25,    34,   259,   428,   429,    46,
     431,    46,    33,   434,    34,    34,    46,    38,    39,   272,
      18,    42,    34,   444,    34,     0,    34,   280,     3,     4,
       5,     6,   285,   286,   287,   288,    82,    34,    34,   292,
      38,    39,    40,    41,    -1,    20,    -1,    12,    13,   470,
     471,    -1,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,   316,    -1,    -1,   319,    -1,    33,    -1,
      -1,   324,   325,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,   334,   503,    -1,    -1,    -1,    12,    13,    -1,    -1,
     343,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,   355,   356,    34,   358,    -1,    33,    38,    39,
      40,    41,    38,    39,   367,   368,    42,   370,     0,    -1,
      -1,     3,     4,     5,     6,    -1,   379,   380,   381,   382,
      -1,   384,    -1,   386,   555,    -1,    -1,    -1,    20,    -1,
      -1,   394,   395,     0,   397,    -1,     3,     4,     5,     6,
      -1,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,    20,    -1,    27,    28,    29,    30,    -1,
     423,   424,    34,    35,    -1,   428,   429,    -1,   431,     0,
      -1,   434,     3,     4,     5,     6,    -1,    -1,   441,   442,
      34,   444,    -1,    -1,    38,    39,    40,    41,    -1,    20,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,    -1,    -1,    -1,   470,   471,   640,
     641,     1,   643,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,   669,    -1,
     503,     0,    -1,    33,     3,     4,     5,     6,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,    33,    -1,    -1,
      17,    20,    38,    39,    40,    41,    -1,   530,    -1,    -1,
      46,   534,    29,   704,    -1,    -1,    12,    13,    -1,    36,
      -1,    17,   713,    19,    20,    21,    22,    -1,    -1,    45,
      -1,    47,   555,    50,    51,    52,    53,    33,    -1,    56,
      -1,    -1,    38,    39,    12,    13,    42,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    75,    -1,
      -1,    -1,   585,    -1,    81,    33,   589,    -1,    -1,    -1,
      38,    39,    89,    -1,    42,    -1,    93,    27,    28,    29,
      30,    12,    13,    -1,    34,   102,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    25,   112,   113,    -1,    -1,   115,
     117,   118,    33,    34,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,   635,   636,   637,   638,    -1,   640,   641,   642,
     643,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,    -1,    38,    39,    40,
      41,   664,   665,   666,   667,    46,   669,    -1,    -1,     0,
      -1,    -1,     3,     4,     5,     6,   173,   174,    12,    13,
     177,    -1,    -1,    17,    -1,    19,    20,    21,    22,    20,
      -1,    25,    -1,    -1,   191,    -1,    -1,   194,    -1,    33,
      -1,   704,   705,    -1,    38,    39,    12,    13,    42,    -1,
     713,    17,   209,    19,    20,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,   220,   221,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,   232,    42,    12,    13,   236,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,     0,
      25,   248,     3,     4,     5,     6,    -1,    -1,    33,   256,
      -1,    -1,   259,    38,    39,    -1,    -1,    42,    -1,    20,
      -1,    12,    13,    -1,    -1,   272,    17,    -1,    19,    20,
      21,    22,    -1,   280,     3,     4,     5,     6,   285,   286,
     287,   288,    33,    -1,    -1,   292,    -1,    38,    39,    12,
      13,    42,    -1,    -1,    17,    33,    19,    20,    21,    22,
      38,    39,    40,    41,    -1,    43,    -1,    -1,    46,   316,
      33,    18,   319,    -1,    -1,    38,    39,   324,   325,    42,
      27,    28,    29,    30,    31,    32,    33,   334,    35,    36,
      37,    38,    39,    40,    41,    -1,   343,    -1,    -1,    46,
      -1,    -1,    -1,   349,   350,    -1,   352,    -1,   355,   356,
      -1,   358,    -1,   359,   360,    -1,   362,    27,    28,    29,
      30,    -1,    -1,   370,    -1,    35,    -1,   373,   374,    -1,
     376,    -1,   379,   380,   381,   382,    46,   384,    -1,   386,
      -1,    -1,   388,   389,    -1,   391,    -1,   394,   395,    -1,
     397,    -1,   398,   399,    -1,   401,    -1,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,    -1,
      -1,    27,    28,    29,    30,    -1,   423,   424,    34,    35,
     426,   428,   429,    -1,   431,    -1,    -1,   434,    -1,   435,
     436,    -1,   438,    -1,   441,   442,    -1,   444,    -1,    -1,
      -1,   447,   448,    -1,   450,    -1,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
      -1,    -1,    -1,   470,   471,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,     0,   503,    33,     3,     4,
       5,     6,    38,    39,    -1,    -1,    42,    -1,    44,    45,
      46,    -1,    12,    13,    -1,    20,    17,    17,    -1,    19,
      20,    21,    22,   530,    33,    34,    35,   534,    29,    38,
      39,    40,    41,    33,    -1,    36,    12,    13,    38,    39,
      -1,    17,    42,    19,    20,    21,    22,    -1,   555,    50,
      51,    52,    53,    -1,    -1,    56,    -1,    33,    -1,    -1,
      12,    13,    38,    39,    -1,    17,    42,    19,    20,    21,
      22,    -1,    -1,    -1,    75,    -1,    -1,    -1,   585,    -1,
      81,    33,   589,    -1,    -1,    18,    38,    39,    89,    -1,
      42,    -1,    93,    -1,    27,    28,    29,    30,    31,    32,
      33,   102,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,   112,   113,    46,    33,    -1,   117,   118,    -1,    38,
      39,    40,    41,   629,   630,    -1,   632,    46,   635,   636,
     637,   638,    -1,   640,   641,   642,   643,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   658,   659,    -1,   661,    -1,   664,   665,   666,
     667,    -1,   669,    -1,    -1,     0,    -1,    -1,     3,     4,
       5,     6,   173,   174,    12,    13,   177,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    20,    38,    39,    40,    41,
     191,    -1,    -1,   194,    46,    33,    -1,   704,   705,    -1,
      38,    39,    12,    13,    42,    -1,   713,    17,   209,    19,
      20,    21,    22,    38,    39,    40,    41,    -1,    -1,   220,
     221,    46,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,   232,    42,    12,    13,   236,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    33,    34,    35,   248,    -1,    38,
      39,    40,    41,    -1,    33,   256,    -1,    -1,   259,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    12,    13,    -1,
      -1,   272,    17,    -1,    19,    20,    21,    22,    -1,   280,
      -1,    -1,    -1,    -1,   285,   286,   287,   288,    33,    -1,
      -1,   292,    -1,    38,    39,    12,    13,    42,    -1,    -1,
      17,    33,    19,    20,    21,    22,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    46,   316,    33,    -1,   319,    -1,
      -1,    38,    39,   324,   325,    42,    -1,    27,    28,    29,
      30,    31,    32,   334,    34,    35,    36,    37,    12,    13,
      -1,    -1,   343,    17,    -1,    19,    20,    21,    22,    -1,
      38,    39,    40,    41,   355,   356,    34,   358,    46,    33,
      38,    39,    40,    41,    38,    39,    33,    34,    42,   370,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,   379,   380,
     381,   382,    33,   384,    -1,   386,    -1,    38,    39,    40,
      41,    -1,    43,   394,   395,    46,   397,    -1,    -1,    -1,
      -1,    -1,    -1,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,    -1,    27,    28,    29,    30,
      31,    32,   423,   424,    35,    36,    37,   428,   429,    -1,
     431,    -1,    -1,   434,    -1,    46,    38,    39,    40,    41,
     441,   442,    34,   444,    46,    -1,    38,    39,    40,    41,
      -1,    -1,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,    -1,    -1,    -1,   470,
     471,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    38,    39,    40,    41,
      -1,    -1,   503,    33,    46,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,    38,    39,    40,
      41,    -1,    17,    -1,    -1,    46,    18,    -1,    -1,   530,
      -1,    -1,    -1,   534,    29,    27,    28,    29,    30,    31,
      32,    36,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    18,   555,    50,    51,    52,    53,    -1,
      -1,    56,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      75,    46,    -1,    -1,   585,    -1,    81,    -1,   589,    -1,
      -1,    18,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,
      27,    28,    29,    30,    31,    32,    33,   102,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,   112,   113,    46,
      -1,    -1,   117,   118,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    -1,   635,   636,   637,   638,    -1,   640,
     641,   642,   643,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    38,
      39,    40,    41,   664,   665,   666,   667,    46,   669,    38,
      39,    40,    41,    -1,    18,    -1,    -1,    46,   173,   174,
      -1,    -1,   177,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,   191,    -1,    -1,   194,
      -1,    -1,    46,   704,   705,    38,    39,    40,    41,    -1,
      18,    34,   713,    46,   209,    38,    39,    40,    41,    27,
      28,    29,    30,    31,    32,   220,   221,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    18,   232,    46,    -1,
      -1,   236,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,   248,    36,    37,    18,    -1,    -1,    -1,
      -1,   256,    -1,    -1,   259,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    -1,   272,    38,    39,
      40,    41,    -1,    -1,    46,   280,    46,    -1,    -1,    18,
     285,   286,   287,   288,    -1,    -1,    -1,   292,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,   316,    -1,    18,   319,    -1,    -1,    -1,    -1,   324,
     325,    -1,    27,    28,    29,    30,    31,    32,    -1,   334,
      35,    36,    37,    38,    39,    40,    41,    -1,   343,    -1,
      -1,    46,    -1,    -1,    38,    39,    40,    41,    18,    -1,
     355,   356,    46,   358,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,   370,    36,    37,    38,    39,
      40,    41,    -1,    -1,   379,   380,   381,   382,    -1,   384,
      -1,   386,    -1,    38,    39,    40,    41,    -1,    -1,   394,
     395,    46,   397,    -1,    -1,    -1,    -1,    -1,    -1,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,    -1,    27,    28,    29,    30,    31,    32,   423,   424,
      35,    36,    37,   428,   429,    -1,   431,    -1,    -1,   434,
      -1,    46,    38,    39,    40,    41,   441,   442,    34,   444,
      46,    -1,    38,    39,    40,    41,    -1,    -1,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,    -1,    -1,    -1,   470,   471,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    38,    39,    40,    41,    -1,    -1,   503,    33,
      46,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,
      44,    45,    46,    38,    39,    40,    41,    -1,    17,    -1,
      -1,    46,    18,    -1,    -1,   530,    -1,    -1,    -1,   534,
      29,    27,    28,    29,    30,    31,    32,    36,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    18,
     555,    50,    51,    52,    53,    -1,    -1,    56,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    75,    46,    -1,    -1,
     585,    -1,    81,    -1,   589,    -1,    -1,    18,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    27,    28,    29,    30,
      31,    32,    -1,   102,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,   112,   113,    46,    -1,    -1,   117,   118,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
     635,   636,   637,   638,    -1,   640,   641,   642,   643,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,   664,
     665,   666,   667,    -1,   669,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,   173,   174,    -1,    -1,   177,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,   191,    -1,    -1,   194,    -1,    34,    46,   704,
     705,    38,    39,    40,    41,    -1,    18,    34,   713,    -1,
     209,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,   220,   221,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    18,   232,    46,    -1,    -1,   236,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,   248,
      36,    37,    38,    39,    40,    41,    18,   256,    -1,    -1,
     259,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    34,   272,    36,    37,    38,    39,    40,    41,
      -1,   280,    -1,    -1,    -1,    18,   285,   286,   287,   288,
      -1,    -1,    -1,   292,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,   316,    -1,    18,
     319,    -1,    -1,    -1,    -1,   324,   325,    -1,    27,    28,
      29,    30,    31,    32,    -1,   334,    35,    36,    37,    38,
      39,    40,    41,    -1,   343,    34,    35,    46,    -1,    38,
      39,    40,    41,    -1,    18,    -1,   355,   356,    -1,   358,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,   370,    36,    37,    38,    39,    40,    41,    -1,    -1,
     379,   380,   381,   382,    34,   384,    -1,   386,    38,    39,
      40,    41,    -1,    -1,    -1,   394,   395,    34,   397,    -1,
      -1,    38,    39,    40,    41,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,    -1,    27,    28,
      29,    30,    31,    32,   423,   424,    35,    36,    37,   428,
     429,    -1,   431,    -1,    34,   434,    -1,    46,    38,    39,
      40,    41,   441,   442,    -1,   444,    34,    35,    -1,    -1,
      38,    39,    40,    41,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,    -1,    -1,
      -1,   470,   471,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      17,    -1,    34,    35,   503,    33,    38,    39,    40,    41,
      38,    39,    29,    -1,    42,    -1,    44,    45,    46,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      -1,   530,    18,    50,    51,   534,    -1,    -1,    46,    56,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,   555,    -1,    75,    -1,
      46,    34,    35,    -1,    81,    38,    39,    40,    41,    -1,
      -1,    -1,    89,    34,    35,    -1,    93,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,   102,   585,    -1,    -1,    -1,
     589,    -1,    -1,    18,    -1,   112,   113,    -1,    -1,    -1,
     117,   118,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   635,   636,   637,   638,
      -1,   640,   641,   642,   643,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,   173,   174,    -1,    -1,
     177,    -1,    -1,    -1,    -1,   664,   665,   666,   667,    -1,
     669,    -1,    -1,    -1,   191,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   209,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,   220,   221,   704,   705,    33,    -1,    -1,
      -1,    -1,    38,    39,   713,   232,    42,    -1,    44,    45,
      46,    34,    35,    18,    -1,    38,    39,    40,    41,    -1,
      -1,   248,    27,    28,    29,    30,    31,    32,    -1,   256,
      35,    36,    37,    38,    39,    40,    41,    18,    -1,    -1,
      -1,    46,    -1,    -1,    -1,   272,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    -1,   285,   286,
     287,   288,    34,    35,    -1,   292,    38,    39,    40,    41,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   316,
      19,    20,    21,    22,    23,    24,    25,   324,   325,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,   334,    -1,    38,
      39,    -1,    -1,    42,    18,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      34,   358,    36,    37,    38,    39,    40,    41,   365,   366,
      34,    35,    -1,   370,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,   379,   380,    -1,    18,    34,   384,    -1,   386,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
     397,    34,    35,    36,    37,    38,    39,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,    34,    35,    -1,
      -1,    38,    39,    40,    41,    -1,   423,   424,    -1,    -1,
      -1,   428,   429,    -1,   431,    -1,    34,   434,    -1,    17,
      38,    39,    40,    41,    -1,    -1,    -1,   444,    34,    35,
      -1,    29,    38,    39,    40,    41,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,    -1,    -1,
      18,    -1,    -1,   470,   471,    -1,    -1,    -1,    56,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    34,    35,    75,    46,    38,
      39,    40,    41,    81,    -1,    -1,   503,    -1,    18,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    27,    28,    29,
      30,    31,    32,    -1,   102,    35,    36,    37,    38,    39,
      40,    41,    18,   530,   112,   113,    46,    -1,    -1,   117,
     118,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,   555,    -1,
      46,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,   585,    -1,
      -1,    -1,    -1,    -1,    46,   173,   174,    18,    34,   177,
      -1,    -1,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,   191,    35,    36,    37,    38,    39,    40,
      41,    -1,    34,    35,    -1,    46,    38,    39,    40,    41,
      34,   209,    -1,    -1,    38,    39,    40,    41,   635,   636,
      -1,    -1,    -1,   640,   641,   642,   643,    27,    28,    29,
      30,    31,    32,    33,   232,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    46,   664,   665,    -1,
     248,    -1,   669,    -1,    -1,    -1,    34,    35,   256,    18,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,   272,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,   704,   705,   287,
     288,    18,    -1,    -1,   292,    -1,   713,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    17,    -1,    34,   316,    46,
      18,    38,    39,    40,    41,    -1,    -1,    29,    -1,    27,
      28,    29,    30,    31,    32,    -1,   334,    35,    36,    37,
      38,    39,    40,    41,    -1,    34,    35,    -1,    46,    38,
      39,    40,    41,    -1,    56,    -1,    -1,    34,    35,    -1,
     358,    38,    39,    40,    41,    -1,    27,    28,    29,    30,
      31,    32,   370,    75,    35,    36,    37,    38,    39,    81,
      -1,    -1,    -1,    -1,    -1,    46,   384,    89,   386,    34,
      35,    93,    -1,    38,    39,    40,    41,    34,    35,   397,
     102,    38,    39,    40,    41,    -1,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,   117,   118,    34,    35,    -1,
      -1,    38,    39,    40,    41,   423,   424,    -1,    -1,    -1,
     428,   429,    -1,   431,    -1,    34,   434,    -1,   140,    38,
      39,    40,    41,    -1,    -1,    -1,   444,    34,    35,   151,
     152,    38,    39,    40,    41,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,    -1,    -1,    -1,    -1,    -1,
      -1,   173,   470,   471,    18,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,   191,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    18,
      -1,    -1,    46,    -1,    -1,   503,    -1,   209,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,    18,
     232,    -1,   530,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,   248,    36,    37,    38,
      39,    40,    41,    -1,   256,    18,    34,   555,    -1,    -1,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
     272,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    18,    -1,    -1,    -1,   288,   585,    -1,    -1,
     292,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    18,    43,    -1,    -1,
      -1,    -1,    -1,    -1,   316,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      34,    43,   334,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    18,   640,   641,   642,   643,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,   358,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,   370,    -1,
      -1,   669,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,   384,    -1,   386,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,   397,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,   704,   705,    -1,    27,
      28,    29,    30,    31,    32,   713,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,   428,   429,    46,   431,
      -1,    -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,   444,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,   470,   471,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    -1,    44,    45,    46,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
       1,   503,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,   530,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   555,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,   585,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    44,    45,    46,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,   640,   641,
      42,   643,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   669,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,    45,    46,    27,    28,    29,    30,
      31,    32,   704,    34,    35,    36,    37,    38,    39,    -1,
       1,   713,     3,     4,     5,     6,     7,     8,     9,    10,
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
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    46,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    44,     1,    46,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    18,    -1,    42,    -1,    44,    -1,    46,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
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
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    -1,    36,
      37,    38,    39,    40,    41,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    18,    34,    35,    36,
      37,    38,    39,    -1,    -1,    27,    28,    29,    30,    31,
      32,    18,    34,    -1,    36,    37,    38,    39,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    27,    28,    29,    30,
      31,    32,    46,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
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
      36,    37,    38,    39,    40,    41,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    37,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,    37,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37
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
       1,     7,     9,    10,    11,    14,    15,    16,    53,    66,
      69,    74,    76,    77,    78,    79,    80,    82,    83,    84,
      85,    86,    33,    33,    69,    33,    33,    33,    33,    86,
      46,    45,    78,    25,    56,    57,    58,    59,    60,    61,
      56,    67,    68,    86,    46,    81,    86,    69,    69,    27,
      34,    28,    29,    30,    31,    32,    36,    37,    18,    35,
      46,    43,    34,    34,    34,    34,    57,    78,    58,    59,
      59,    61,    61,    61,    61,    61,    68,    67,    69,    78,
      46,    46,    46,     8,    46,    78,    67,    34,    78,    20,
      20,    12,    13,    17,    19,    20,    21,    22,    23,    24,
      25,    33,    62,    63,    64,    65,    71,    72,    86,    12,
      13,    17,    19,    20,    21,    22,    23,    24,    25,    33,
      61,    62,    63,    64,    65,    70,    71,    72,    86,    20,
      38,    39,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    61,    62,    63,    64,    65,    70,    71,
      72,    86,    20,    61,    70,    20,    44,    20,    43,    12,
      13,    17,    19,    20,    21,    22,    33,    62,    63,    64,
      65,    71,    72,    86,    12,    13,    17,    19,    20,    21,
      22,    25,    33,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    71,    72,    46,    38,    39,    27,    33,     1,
       7,     9,    10,    11,    14,    15,    16,    44,    53,    66,
      74,    77,    79,    80,    82,    83,    84,    85,    86,    12,
      13,    17,    19,    20,    21,    22,    33,    62,    63,    64,
      65,    71,    72,    86,    38,    39,    12,    13,    17,    19,
      20,    21,    22,    25,    33,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    68,    71,    72,    86,    33,
      33,    33,    33,    61,    70,    40,    41,    63,    33,    33,
      33,    33,    33,    61,    70,    38,    39,    40,    41,    63,
      33,    62,    62,    33,    33,    33,    33,    61,    70,    38,
      39,    40,    41,    63,    33,    45,    75,    69,    33,    33,
      33,    33,    61,    70,    40,    41,    63,    33,    33,    33,
      33,    33,    61,    70,    28,    29,    30,    31,    32,    36,
      37,    18,    38,    39,    40,    41,    20,    63,    86,    62,
      62,    57,    73,    33,    33,    69,    33,    33,    33,    33,
      45,    75,    86,    46,    43,    33,    33,    33,    33,    61,
      70,    40,    41,    63,    33,    62,    62,    33,    33,    33,
      33,    61,    70,    27,    35,    28,    29,    30,    31,    32,
      36,    37,    18,    38,    39,    40,    41,    20,    63,    86,
      33,    43,    81,    81,    86,    81,    34,    34,    63,    63,
      73,    81,    81,    86,    81,    34,    34,    62,    62,    63,
      63,    73,    81,    81,    86,    81,    34,    34,    62,    62,
      63,    63,    73,    76,    46,    81,    81,    86,    81,    34,
      34,    63,    63,    73,    81,    81,    86,    81,    34,    34,
      58,    59,    59,    12,    13,    17,    19,    20,    21,    22,
      33,    61,    62,    63,    64,    65,    71,    72,    86,    61,
      61,    61,    61,    62,    62,    63,    63,    34,    56,    67,
      46,    81,    86,    69,    69,    76,    46,    69,    81,    81,
      86,    81,    34,    34,    63,    63,    73,    81,    81,    86,
      81,    34,    34,    57,    68,    58,    59,    59,    12,    13,
      17,    19,    20,    21,    22,    33,    61,    62,    63,    64,
      65,    71,    72,    86,    61,    61,    61,    61,    62,    62,
      63,    63,    73,    69,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    45,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    33,
      33,    33,    33,    61,    70,    38,    39,    40,    41,    63,
      33,    34,    46,    34,    34,    34,    34,    45,    46,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    33,    33,
      33,    33,    61,    70,    38,    39,    40,    41,    63,    33,
      34,    81,    81,    86,    81,    34,    34,    62,    62,    63,
      63,    73,    78,    67,    78,    46,    46,    46,    81,    81,
      86,    81,    34,    34,    62,    62,    63,    63,    73,    34,
      34,    34,    34,    34,     8,    46,    34,    34,    34,    34,
      34,    78,    67,    34,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    52,    51,
      53,    53,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    75,    74,    74,    76,    76,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    80,    81,    82,
      82,    83,    83,    84,    84,    84,    85,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     0,     7,
       1,     1,     1,     1,     1,     0,     4,     2,     1,     3,
       1,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       0,     1,     0,     1,     3,     3,     1,     1,     1,     1,
       1,     4,     1,     3,     4,     4,     4,     4,     3,     1,
       0,     0,     4,     2,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     3,     5,
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
  case 2: /* translation_unit: external_declaration_list  */
#line 53 "src/syntax/parser.y"
                                            {
                    (yyval.ast_node) = create_ast_node(TRANSLATION_UNIT, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                    ast = (yyval.ast_node);
                  }
#line 3318 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 59 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3326 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 62 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3332 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 65 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3338 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 66 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3344 "./src/syntax/parser.c"
    break;

  case 7: /* external_declaration: assignment_statement  */
#line 67 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3350 "./src/syntax/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 70 "src/syntax/parser.y"
                                                   {
                      is_a_function_declaration = 1;
                      scope_counter++;
                      current_scope = push_scope(current_scope, scope_counter);
                    }
#line 3360 "./src/syntax/parser.c"
    break;

  case 9: /* function_definition: type_specifier identifier '(' $@1 parameters ')' compound_statement  */
#line 74 "src/syntax/parser.y"
                                                        {
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-6].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      insert_row_into_symbol_table(current_scope, (yyvsp[-6].token), (yyvsp[-5].ast_node)->value, "function");
                    }
#line 3369 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: INT  */
#line 80 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 3375 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: FLOAT  */
#line 81 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 3381 "./src/syntax/parser.c"
    break;

  case 12: /* type_specifier: ELEM  */
#line 82 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 3387 "./src/syntax/parser.c"
    break;

  case 13: /* type_specifier: SET  */
#line 83 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 3393 "./src/syntax/parser.c"
    break;

  case 14: /* parameters: parameter_list  */
#line 86 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3399 "./src/syntax/parser.c"
    break;

  case 15: /* parameters: %empty  */
#line 87 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 3405 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_list: type_specifier identifier ',' parameter_list  */
#line 90 "src/syntax/parser.y"
                                                             {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-3].token), (yyvsp[-2].ast_node)->value, "parameter");
                }
#line 3414 "./src/syntax/parser.c"
    break;

  case 17: /* parameter_list: type_specifier identifier  */
#line 94 "src/syntax/parser.y"
                                          {
                  (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[0].ast_node)->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-1].token), (yyvsp[0].ast_node)->value, "parameter");
                }
#line 3423 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_and_expression  */
#line 100 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3429 "./src/syntax/parser.c"
    break;

  case 19: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 101 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3437 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: equality_expression  */
#line 106 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3443 "./src/syntax/parser.c"
    break;

  case 21: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 107 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 3451 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: relational_expression  */
#line 112 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3457 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 113 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3465 "./src/syntax/parser.c"
    break;

  case 24: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 116 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3473 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: belongs_to_expression  */
#line 121 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3479 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: EMPTY_CONST  */
#line 122 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 3487 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '<' additive_expression  */
#line 125 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3495 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression '>' additive_expression  */
#line 128 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3503 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 131 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3511 "./src/syntax/parser.c"
    break;

  case 30: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 134 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3519 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 139 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3527 "./src/syntax/parser.c"
    break;

  case 32: /* belongs_to_expression: additive_expression  */
#line 142 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3533 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: multiplicative_expression  */
#line 145 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3539 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 146 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3547 "./src/syntax/parser.c"
    break;

  case 35: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 149 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3555 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 154 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3561 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 155 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3569 "./src/syntax/parser.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 158 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 3577 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: term  */
#line 163 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3583 "./src/syntax/parser.c"
    break;

  case 40: /* unary_expression: unary_operator unary_expression  */
#line 164 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 3591 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '+'  */
#line 169 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 3597 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '-'  */
#line 170 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 3603 "./src/syntax/parser.c"
    break;

  case 43: /* unary_operator: '!'  */
#line 171 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 3609 "./src/syntax/parser.c"
    break;

  case 44: /* term: identifier  */
#line 174 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3615 "./src/syntax/parser.c"
    break;

  case 45: /* term: INTEGER_CONST  */
#line 175 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3621 "./src/syntax/parser.c"
    break;

  case 46: /* term: FLOAT_CONST  */
#line 176 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 3627 "./src/syntax/parser.c"
    break;

  case 47: /* term: '(' additive_expression ')'  */
#line 177 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 3635 "./src/syntax/parser.c"
    break;

  case 48: /* term: function_call_expression  */
#line 180 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3641 "./src/syntax/parser.c"
    break;

  case 49: /* optional_expression: expression  */
#line 183 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3647 "./src/syntax/parser.c"
    break;

  case 50: /* optional_expression: %empty  */
#line 184 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3653 "./src/syntax/parser.c"
    break;

  case 51: /* optional_for_expression: for_expression  */
#line 187 "src/syntax/parser.y"
                                        { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3659 "./src/syntax/parser.c"
    break;

  case 52: /* optional_for_expression: %empty  */
#line 188 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3665 "./src/syntax/parser.c"
    break;

  case 53: /* for_expression: logical_or_expression  */
#line 191 "src/syntax/parser.y"
                                      { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3671 "./src/syntax/parser.c"
    break;

  case 54: /* for_expression: logical_or_expression ',' for_expression  */
#line 192 "src/syntax/parser.y"
                                                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3677 "./src/syntax/parser.c"
    break;

  case 55: /* for_expression: identifier '=' expression  */
#line 193 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3683 "./src/syntax/parser.c"
    break;

  case 56: /* expression: additive_expression  */
#line 196 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3689 "./src/syntax/parser.c"
    break;

  case 57: /* expression: function_arg_constant_expression  */
#line 197 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3695 "./src/syntax/parser.c"
    break;

  case 58: /* function_arg_constant_expression: EMPTY_CONST  */
#line 200 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3705 "./src/syntax/parser.c"
    break;

  case 59: /* function_arg_constant_expression: STRING  */
#line 205 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3715 "./src/syntax/parser.c"
    break;

  case 60: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 210 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3725 "./src/syntax/parser.c"
    break;

  case 61: /* function_call_expression: identifier '(' argument_list ')'  */
#line 217 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3735 "./src/syntax/parser.c"
    break;

  case 62: /* function_call_expression: set_function_call_expression  */
#line 222 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3741 "./src/syntax/parser.c"
    break;

  case 63: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 223 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3747 "./src/syntax/parser.c"
    break;

  case 64: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 226 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3757 "./src/syntax/parser.c"
    break;

  case 65: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 231 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3767 "./src/syntax/parser.c"
    break;

  case 66: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 236 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3777 "./src/syntax/parser.c"
    break;

  case 67: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 241 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3787 "./src/syntax/parser.c"
    break;

  case 68: /* argument_list: argument_list ',' expression  */
#line 248 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3795 "./src/syntax/parser.c"
    break;

  case 69: /* argument_list: expression  */
#line 251 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3801 "./src/syntax/parser.c"
    break;

  case 70: /* argument_list: %empty  */
#line 252 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3807 "./src/syntax/parser.c"
    break;

  case 71: /* $@2: %empty  */
#line 255 "src/syntax/parser.y"
                        {
                      if (!is_a_function_declaration) {
                        scope_counter++;
                        current_scope = push_scope(current_scope, scope_counter);
                      }
                      is_a_function_declaration = 0;
                    }
#line 3819 "./src/syntax/parser.c"
    break;

  case 72: /* compound_statement: '{' $@2 statement_list '}'  */
#line 261 "src/syntax/parser.y"
                                         {
                      (yyval.ast_node) = (yyvsp[-1].ast_node);
                      scope_counter--;
                      current_scope = current_scope->parent;
                    }
#line 3829 "./src/syntax/parser.c"
    break;

  case 73: /* compound_statement: '{' '}'  */
#line 266 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3835 "./src/syntax/parser.c"
    break;

  case 74: /* statement_list: statement_list statement  */
#line 269 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3843 "./src/syntax/parser.c"
    break;

  case 75: /* statement_list: statement  */
#line 272 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3849 "./src/syntax/parser.c"
    break;

  case 76: /* declaration: type_specifier identifier ';'  */
#line 275 "src/syntax/parser.y"
                                           {
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
              insert_row_into_symbol_table(current_scope, (yyvsp[-2].token), (yyvsp[-1].ast_node)->value, "variable");
            }
#line 3858 "./src/syntax/parser.c"
    break;

  case 77: /* statement: declaration  */
#line 281 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3864 "./src/syntax/parser.c"
    break;

  case 78: /* statement: compound_statement  */
#line 282 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3870 "./src/syntax/parser.c"
    break;

  case 79: /* statement: expression_statement  */
#line 283 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3876 "./src/syntax/parser.c"
    break;

  case 80: /* statement: selection_statement  */
#line 284 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3882 "./src/syntax/parser.c"
    break;

  case 81: /* statement: iteration_statement  */
#line 285 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3888 "./src/syntax/parser.c"
    break;

  case 82: /* statement: io_statement  */
#line 286 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3894 "./src/syntax/parser.c"
    break;

  case 83: /* statement: jump_statement  */
#line 287 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3900 "./src/syntax/parser.c"
    break;

  case 84: /* statement: assignment_statement  */
#line 288 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3906 "./src/syntax/parser.c"
    break;

  case 85: /* statement: error  */
#line 289 "src/syntax/parser.y"
                { yyerrok; }
#line 3912 "./src/syntax/parser.c"
    break;

  case 86: /* assignment_statement: identifier '=' expression ';'  */
#line 292 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3920 "./src/syntax/parser.c"
    break;

  case 87: /* expression_statement: optional_expression ';'  */
#line 297 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3926 "./src/syntax/parser.c"
    break;

  case 88: /* set_membership_expression: expression IN expression  */
#line 300 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3934 "./src/syntax/parser.c"
    break;

  case 89: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 305 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3942 "./src/syntax/parser.c"
    break;

  case 90: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 308 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3950 "./src/syntax/parser.c"
    break;

  case 91: /* iteration_statement: FOR '(' optional_for_expression ';' optional_for_expression ';' optional_for_expression ')' statement  */
#line 313 "src/syntax/parser.y"
                                                                                                                           {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3958 "./src/syntax/parser.c"
    break;

  case 92: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 316 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3966 "./src/syntax/parser.c"
    break;

  case 93: /* io_statement: WRITE '(' expression ')' ';'  */
#line 321 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3974 "./src/syntax/parser.c"
    break;

  case 94: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 324 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3982 "./src/syntax/parser.c"
    break;

  case 95: /* io_statement: READ '(' identifier ')' ';'  */
#line 327 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3990 "./src/syntax/parser.c"
    break;

  case 96: /* jump_statement: RETURN expression ';'  */
#line 332 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3998 "./src/syntax/parser.c"
    break;

  case 97: /* identifier: IDENTIFIER  */
#line 337 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 4006 "./src/syntax/parser.c"
    break;


#line 4010 "./src/syntax/parser.c"

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

#line 342 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
