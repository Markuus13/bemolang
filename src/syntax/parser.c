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
  extern struct scope *initial_scope;
  extern struct symbol_table_row *initial_symbol_table;

  struct ast_node *ast = NULL;
  struct scope *current_scope = NULL;

  int is_a_function = 0;

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
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* '='  */
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
#define YYLAST   5295

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

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
       0,    53,    53,    61,    64,    67,    68,    69,    72,    72,
      95,    96,    97,    98,   101,   102,   105,   108,   116,   117,
     122,   123,   128,   129,   132,   137,   138,   141,   144,   147,
     150,   155,   158,   161,   162,   165,   170,   171,   174,   179,
     180,   185,   186,   187,   190,   191,   192,   193,   196,   199,
     200,   203,   204,   207,   212,   217,   224,   229,   230,   233,
     238,   243,   248,   255,   258,   259,   262,   262,   281,   284,
     287,   290,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   309,   314,   317,   322,   325,   330,   333,   338,   341,
     344,   349,   354
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
      42,    47,    33,   123,   125,    59,    61
};
#endif

#define YYPACT_NINF (-315)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      63,   -11,     3,    20,    25,     2,    74,    22,   663,  1047,
      62,  1206,  1235,    55,  -315,  1295,     4,   215,    -1,  1318,
      78,    81,    86,    90,   898,  1860,    41,    76,    82,   715,
      87,  1024,  1212,    58,  2148,  2222,  1254,  2275,    89,   106,
    2328,  2338,   432,    10,   909,   909,   132,   909,   227,   134,
    1254,  1254,  1254,  1254,  2488,  1343,   536,   166,   155,   162,
     194,   173,   187,   196,   199,  2582,  2597,  2610,  2625,  2650,
    2660,   128,   189,   212,   208,   715,  2674,  2703,  2787,  3117,
    3162,   972,   759,  3488,  1351,   221,   264,   226,  1509,  4793,
    3533,   237,   246,   215,   253,   256,   258,   270,   286,   266,
     268,  3578,  3623,  3668,  3713,  3758,  3803,  3848,  3893,  3938,
    3983,  1413,   996,   152,   273,   909,   132,   715,   715,   275,
    4028,  1538,  4073,  1725,     5,   126,  3219,  1817,  1119,   935,
     278,  4118,   293,   300,   304,   306,   996,  4836,   996,   996,
     996,  1292,  1292,  1292,  1292,  1320,   152,  4793,   303,   314,
     319,   192,   855,  3264,  1829,  1931,  2379,  5230,  5243,  5256,
    1844,   324,  4163,  4208,  4253,  4298,  4793,   623,  4343,   337,
    4793,  4388,    40,   711,   345,   348,   366,   370,   916,    38,
     420,   375,   378,   386,   715,  1899,  2002,  1515,  2519,  2544,
    3304,  1219,   392,   396,   402,   404,   117,    92,   141,   429,
     446,   462,   715,    23,   165,   170,  1557,   177,   466,   204,
     276,   160,   442,  1515,  1515,   464,   468,   476,   486,  1777,
    1521,  1563,   274,   291,   342,   715,    53,  2048,  2103,  1595,
    2187,   352,  2260,  2399,  1853,   362,   263,   461,  1580,  4433,
     454,   215,   487,   489,   493,   495,   412,   244,   564,   715,
    1802,  1886,  1320,  1916,  2040,  2252,  1613,  4478,  1320,  1320,
    1158,   498,   500,   215,   501,   503,   508,   510,  4523,   286,
     502,  1461,  1764,  2091,  2159,  2233,  2753,  2798,  2858,  1623,
     511,   517,   518,   521,  4930,  2179,  4960,   715,  4975,  4990,
    1292,  5005,  5020,  5035,  4945,  1292,  1292,   532,   909,   909,
     132,   909,   298,   533,  1515,  1515,  3349,   536,   909,   909,
     132,   909,   313,   534,  1557,  1557,  1557,  1557,   465,   536,
    3394,  3439,   909,   909,   132,   909,   327,   538,  1595,  1595,
    1595,  1595,  2423,   536,  4568,  4793,   528,   909,   909,   132,
     909,   355,   542,  1320,  1320,  2363,   536,  2441,  2483,   996,
     152,   535,   909,   132,   715,   715,  2903,  4793,   539,  2948,
     215,   909,   909,   132,   909,   380,   543,  1292,  1292,  5050,
     536,  5065,  5080,   547,   551,   553,   556,  3484,  3529,  3574,
    3619,   389,   574,   583,   584,   589,   473,   499,   524,   581,
     588,   669,   399,   590,   591,   599,   600,  2449,  2458,  2640,
    2694,  2749,  2854,   428,  4613,  4658,   603,   605,   607,   617,
    2507,  2536,  2561,  2817,   453,    88,   609,  2993,   618,   625,
     626,   630,  4703,  3038,   627,   636,   637,   640,   641,  5095,
    5110,  5125,  5140,   458,  3664,  3709,  3754,  3799,  3844,   673,
     804,   813,   863,   867,  2899,  2944,  2989,  3034,  3079,  4748,
    4855,  4870,  4885,  4900,  4915,  4836,   152,  4836,   631,   633,
     643,  3083,  3128,  5155,  5170,  5185,  5200,  5215,  3173,   648,
    3218,  3263,  3308,  3353,  4836,   623,  3398,   647,  4836,  3443
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,  -315,   679,  -315,  -315,    12,  -315,   612,   346,
     561,   560,   -81,  -315,  2307,  2010,   471,   774,  1077,   -83,
     175,  2385,  1380,  1683,  -299,   -73,  -233,  -314,    11,   -42,
      24,   -99,   381,   -72,   -67,   -57,   -47,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    43,    98,    58,    59,   124,
     125,   126,   127,   128,    33,    34,    35,    36,    37,    99,
      60,    39,    40,    41,    72,   101,    89,   102,   103,   104,
     105,   106,    61,   107,   108,   109,   110,   211
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    84,    -8,    -8,    -8,    -8,   335,    13,   381,   -10,
      16,    11,    10,     1,     2,     3,     4,    42,    11,    10,
     392,   404,    -2,   -11,    12,     1,     2,     3,     4,   191,
     130,    12,   136,    -8,   403,   357,    42,    18,   274,   137,
     -12,   -51,     5,   422,   -15,   -13,    63,   414,   -92,    19,
      42,    42,    42,    42,   270,    57,   234,    73,   154,   155,
     122,   314,   315,   161,   271,   275,     1,     2,     3,     4,
     276,   433,   -45,   -92,    14,   191,   -45,   -45,   -45,   -45,
     277,   234,   172,     5,   169,   -92,   -55,   -51,   -51,   111,
     278,   328,   329,    42,    57,   152,    50,    51,   119,   -41,
     -41,    17,   111,   -51,   -41,   162,   -41,   -41,   -41,   -41,
     -45,    44,   256,    42,    45,   136,   133,   191,   191,    46,
     -41,   -54,   455,    47,   168,   -41,   -41,   -53,   171,   -41,
     -45,   -45,   -45,   -45,    55,   -92,   256,   279,   256,   256,
     256,   294,   294,   294,   294,   256,    42,   111,   272,   269,
     -92,   -52,   212,   -18,   138,   -92,   -92,   -92,   -92,   -46,
     -18,   273,   -64,   -64,    20,    21,   111,   191,    66,    22,
     111,    23,   173,    24,    25,    26,    27,    28,   -44,   -46,
     -46,   -46,   -46,   -33,   191,    29,   235,   191,   -36,    74,
      30,    31,    38,   319,    32,   -39,   -14,   -50,   -44,   -44,
     -44,   -44,   191,   -33,   -33,   316,   317,    76,   -36,   -36,
     -36,   -36,    75,   191,   191,   -39,   -39,   -39,   -39,   -19,
     138,    77,   -48,    80,    81,   191,   -19,    20,    21,   234,
      78,    71,    22,    79,    23,   173,    24,    25,    26,    27,
      28,    42,   -48,   -48,   -48,   -48,   -17,    82,    29,   191,
      85,    83,   256,    30,    31,   -83,    86,    32,   256,   256,
     -16,    65,   -45,    42,   100,   213,   214,   416,   114,   358,
     112,   -45,   -45,   -45,   -45,   -45,   -45,   100,   -45,   113,
     -45,   -45,   -45,   -45,   -45,   -45,   115,   191,   100,   116,
     294,   117,   134,   135,   -57,   294,   294,   -51,   -63,   -63,
     375,   213,   214,   118,   191,   191,   240,   234,   -55,   -55,
     384,   120,   100,   -49,   -57,   -57,   -57,   -57,   131,   234,
     257,   100,   100,   146,   395,   -54,   -54,   147,   234,   234,
     234,   234,   377,   234,   148,   111,   213,   214,   149,   408,
     150,   100,   297,   256,   256,   100,   234,   386,   163,   256,
      42,   213,   214,   419,   191,   191,   274,   111,   274,   164,
      42,   397,   122,   427,   165,   213,   214,   294,   294,   167,
     234,   170,   270,   469,   270,   274,   -53,   -53,   298,   274,
     122,   299,   271,   275,   271,   275,   -52,   -52,   276,   410,
     276,   270,   477,   213,   214,   270,   -92,   -92,   277,   300,
     277,   271,   275,   301,   111,   271,   275,   276,   278,   -55,
     278,   276,   -54,   468,   429,   470,   336,   277,   213,   214,
     -53,   277,   111,   438,    81,   308,    62,   278,    64,   309,
     -92,   278,   476,   443,    81,   310,   479,   311,   351,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -55,   -92,   -92,
     -92,   -92,   -92,   -92,   -46,   279,    42,   279,   -46,   -46,
     -46,   -46,   448,    81,   -54,    56,   272,   269,   272,   269,
     -44,   -44,   -44,   -44,   279,   191,   -92,   -44,   279,   273,
     -53,   273,    71,   -40,   -52,   272,   269,   454,    81,   272,
     269,   -47,   467,    81,    71,   -52,   132,   322,   273,   -92,
     186,   323,   273,   -40,   -40,   -40,   -40,    54,    71,   324,
     100,   -47,   -47,   -47,   -47,   205,   205,   -58,   205,   325,
     337,    71,   338,    69,    70,   100,   339,   228,   340,   420,
     421,   349,   100,   350,   352,   424,   353,   -58,   -58,   -58,
     -58,   354,   -34,   355,   361,    71,   186,   359,   215,   216,
     362,   363,   228,   217,   364,   218,   219,   220,   221,   222,
     223,   224,   -34,   -34,   316,   317,   -49,   378,   387,   225,
     -65,   -65,   398,   405,    30,    31,   411,   430,    32,   100,
     417,   434,   -46,   251,   423,   435,   205,   436,   186,   186,
     437,   -46,   -46,   -46,   -46,   -46,   -46,   100,   -46,   -35,
     -46,   -46,   -46,   -46,   -46,   -46,   -37,   251,   439,   251,
     251,   251,   289,   289,   289,   289,   251,   440,   441,   -35,
     -35,   316,   317,   442,   444,   445,   -37,   -37,   -37,   -37,
     100,   100,   100,   446,   447,   174,   175,   450,   186,   451,
     176,   452,   177,   178,   179,   180,   181,   182,   183,   100,
     297,   453,   457,   100,   456,   186,   184,   -50,   306,   458,
     459,    30,    31,    -4,   460,    32,    -4,    -4,    -4,    -4,
     463,   464,   462,   186,   465,   466,   471,   318,   472,   373,
     374,   478,   376,    -4,   186,   186,    15,   -38,   473,   382,
     383,   -60,   385,   475,    87,   415,   186,   151,   153,     0,
     332,     0,     0,   393,   394,     0,   396,   -38,   -38,   -38,
     -38,   -60,   -60,   -60,   -60,     0,     0,     0,   406,   407,
     186,   409,     0,   345,     0,     0,     0,   174,   175,   251,
     251,     0,   176,   418,   177,   178,   179,   180,   181,   182,
     183,     0,   425,   426,   -92,   428,     0,     0,   184,   -92,
     -92,   -92,   -92,    30,    31,     0,   -92,    32,   186,     0,
       0,   369,     1,     2,     3,     4,   289,   289,     0,   205,
     205,     0,   205,     0,     0,   379,   380,     0,   228,   205,
     205,     0,   205,     0,     0,   205,   205,   390,   391,     0,
     228,     0,     0,   205,   205,     0,   205,     0,     0,   228,
     228,   401,   402,   187,   228,     0,     0,     0,   205,   205,
       0,   205,     0,     0,   412,   413,     0,   228,   206,   206,
     251,   206,   -61,   205,     0,   186,   186,     0,     0,     0,
     229,   -59,   205,   205,     0,   205,     0,     0,   431,   432,
       0,   228,   -61,   -61,   -61,   -61,     0,     0,     0,   187,
       0,   -59,   -59,   -59,   -59,   229,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   166,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -62,     0,     0,     0,   -56,   252,     0,   -84,   206,
       0,   187,   187,   -84,   -84,     0,     0,   -84,   -84,   -84,
     -84,   -62,   -62,   -62,   -62,   -56,   -56,   -56,   -56,     0,
     252,     0,   252,   252,   252,   290,   290,   290,   290,   252,
       0,   192,   193,     0,     0,     0,   194,     0,   195,   196,
     197,   198,   199,   200,   201,     0,   -45,   -45,   -45,   -45,
       0,   187,   202,   -45,     0,     0,   186,    30,    31,   -92,
     -92,    32,     0,   -32,   -92,   -92,   -92,   -92,   187,     0,
       0,   187,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   258,   259,     0,   187,     0,     0,     0,
     206,     0,     0,     0,   215,   216,     0,   187,   187,   217,
       0,   218,   219,   220,   221,   222,   223,   224,     0,   187,
       0,     0,     0,   229,     0,   225,     0,     0,   242,   243,
      30,    31,     0,   244,    32,   245,   246,   247,   248,     0,
       0,   123,     0,   187,     0,     0,   252,     0,     0,   249,
       0,     0,   252,   252,    30,    31,   -42,   -42,    32,     0,
       0,   -42,     0,   -42,   -42,   -42,   -42,    -5,     0,     0,
      -5,    -5,    -5,    -5,     0,     0,     0,   -42,     0,     0,
       0,   187,   -42,   -42,   290,     0,   -42,    -5,     0,   290,
     290,     0,   206,   206,     0,   206,     0,     0,   187,   187,
       0,   229,   206,   206,     0,   206,     0,     0,   206,   206,
     206,   206,     0,   229,     0,     0,   206,   206,     0,   206,
       0,     0,   229,   229,   229,   229,   188,   229,     0,     0,
       0,   206,   206,     0,   206,     0,     0,   252,   252,     0,
     229,   207,   207,   252,   207,     0,   206,     0,   187,   187,
       0,     0,     0,   230,     0,   206,   206,   145,   206,     0,
       0,   290,   290,     0,   229,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   188,   -25,     0,   -25,   -25,     0,   230,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,   253,
       0,   -80,   207,     0,   188,   188,   -80,   -80,     0,     0,
     -80,   -80,   -80,   -80,     0,     0,    -6,     0,     0,    -6,
      -6,    -6,    -6,   253,     0,   253,   253,   253,   291,   291,
     291,   291,   253,     0,   -43,   -43,    -6,     0,     0,   -43,
       0,   -43,   -43,   -43,   -43,    -7,     0,     0,    -7,    -7,
      -7,    -7,     0,     0,   188,   -43,     0,     0,     0,   187,
     -43,   -43,   307,   -44,   -43,    -7,     0,   -44,   -44,   -44,
     -44,   188,     0,     0,   188,     0,    20,    21,     0,     0,
       0,    22,     0,    23,   173,    24,    25,     0,     0,   188,
       0,     0,     0,   207,     0,     0,     0,    29,     0,     0,
     188,   188,    30,    31,     0,    -3,    32,     0,    -3,    -3,
      -3,    -3,   188,     0,   280,   281,   230,     0,     0,   282,
       0,   283,   284,   285,   286,    -3,     0,     0,   -71,     0,
       0,   -71,   -71,   -71,   -71,   287,   188,     0,     0,   253,
      30,    31,   242,   243,    32,   253,   253,   244,   -71,   245,
     246,   247,   248,   -81,     0,     0,   -81,   -81,   -81,   -81,
       0,    -9,     0,   249,    -9,    -9,    -9,    -9,    30,    31,
       0,     0,    32,   -81,   188,     0,     0,   291,     0,     0,
       0,    -9,   291,   291,     0,   207,   207,     0,   207,     0,
       0,   188,   188,     0,   230,   207,   207,     0,   207,     0,
       0,   207,   207,   207,   207,     0,   230,     0,     0,   207,
     207,     0,   207,     0,     0,   230,   230,   230,   230,   189,
     230,     0,     0,     0,   207,   207,     0,   207,     0,     0,
     253,   253,     0,   230,   209,   209,   253,   209,     0,   207,
       0,   188,   188,     0,     0,     0,   232,     0,   207,   207,
       0,   207,     0,     0,   291,   291,    56,   230,     0,     0,
       0,   -44,   -44,   -44,   -44,   189,     0,     0,   -44,   241,
       0,   232,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,   254,     0,   -73,   209,     0,   189,   189,   -73,
     -73,     0,     0,   -73,   -73,   -73,   -73,     0,     0,   -68,
       0,     0,   -68,   -68,   -68,   -68,   254,     0,   254,   254,
     254,   292,   292,   292,   292,   254,     0,   174,   175,   -68,
       0,     0,   176,     0,   177,   178,   179,   180,   -67,     0,
       0,   -67,   -67,   -67,   -67,     0,     0,   189,   184,     0,
       0,     0,   188,    30,    31,   -45,   -45,    32,   -67,   -45,
     -45,   -45,   -45,     0,   189,     0,     0,   189,     0,   192,
     193,     0,     0,     0,   194,     0,   195,   196,   197,   198,
       0,     0,   189,     0,     0,     0,   209,     0,     0,     0,
     202,     0,     0,   189,   189,    30,    31,   -46,   -46,    32,
       0,   -46,   -46,   -46,   -46,   189,     0,   215,   216,   232,
       0,     0,   217,   -92,   218,   219,   220,   221,   -92,   -92,
     -92,   -92,     0,     0,     0,   -92,   -92,     0,   225,   189,
       0,   -44,   254,    30,    31,     0,     0,    32,   254,   254,
     -44,   -44,   -44,   -44,   -44,   -44,   346,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,     0,    56,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,     0,     0,   189,   -44,   360,
     292,     0,     0,     0,     0,   292,   292,     0,   209,   209,
       0,   209,     0,     0,   189,   189,     0,   232,   209,   209,
       0,   209,     0,     0,   209,   209,   209,   209,     0,   232,
       0,     0,   209,   209,     0,   209,     0,     0,   232,   232,
     232,   232,   190,   232,     0,     0,     0,   209,   209,     0,
     209,     0,     0,   254,   254,     0,   232,   210,   210,   254,
     210,     0,   209,     0,   189,   189,     0,     0,     0,   233,
       0,   209,   209,     0,   209,     0,     0,   292,   292,     0,
     232,     0,   -26,   -26,   -26,   -26,   -26,   -26,   190,   -26,
       0,   -26,   -26,     0,   233,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,   255,     0,   -72,   210,     0,
     190,   190,   -72,   -72,     0,     0,   -72,   -72,   -72,   -72,
     -92,   -92,   -92,     0,     0,   -92,   -92,   -92,   -92,   255,
     -33,   255,   255,   255,   293,   293,   293,   293,   255,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,   -33,   343,   344,   -22,   -22,   -22,   -22,   141,   142,
     190,   -22,     0,   143,   144,   189,   -23,   -23,   -23,   -23,
     141,   142,   -31,   -23,     0,   143,   144,   190,     0,     0,
     190,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   258,   259,     0,   190,   333,   -44,   -44,   210,
       0,   -44,   -44,   -44,   -44,     0,   190,   190,   -46,   -46,
     -46,   -46,     0,     0,   -36,   -46,     0,     0,   190,     0,
       0,     0,   233,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   190,   -33,   -39,   255,     0,   -33,   -33,   304,
     305,   255,   255,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -24,   -24,
     -24,   -24,   141,   142,     0,   -24,     0,   143,   144,     0,
     190,     0,     0,   293,     0,     0,     0,     0,   293,   293,
       0,   210,   210,     0,   210,     0,     0,   190,   190,     0,
     233,   210,   210,     0,   210,     0,     0,   210,   210,   210,
     210,     0,   233,     0,     0,   210,   210,     0,   210,     0,
       0,   233,   233,   233,   233,     0,   233,     0,     0,     0,
     210,   210,     0,   210,     0,     0,   255,   255,     0,   233,
       0,     0,   255,     0,     0,   210,   -36,   190,   190,   185,
     -36,   -36,   -36,   -36,   210,   210,     0,   210,     0,     0,
     293,   293,     0,   233,   204,   204,     0,   204,   -48,     0,
      67,    68,     0,     0,     0,     0,   227,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -33,   -33,     0,   185,   -33,   -33,   330,   331,
       0,   227,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,   250,     0,   -79,   204,     0,   185,   185,   -79,
     -79,     0,     0,   -79,   -79,   -79,   -79,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,     0,   250,     0,   250,   250,
     250,   288,   288,   288,   288,   250,     0,     0,   190,     0,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   185,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -33,   -33,    52,    53,
       0,     0,   -74,   -33,   185,     0,     0,   -74,   -74,     0,
       0,   -74,   -74,   -74,   -74,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   185,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -39,   -39,   320,   321,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,   -75,   185,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   185,
     -36,   -36,   -36,   -36,     0,     0,   -75,   -36,   347,   348,
     -57,   -75,   -75,     0,     0,   -75,   -75,   -75,   -75,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -48,   -48,     0,   185,   -48,   -48,
     -48,   -48,     0,     0,     0,   371,   372,     0,   204,   204,
       0,   204,     0,   -39,   -39,   -39,   -39,   227,   204,   204,
     -39,   204,     0,     0,   388,   389,     0,     0,     0,   227,
       0,     0,   204,   204,     0,   204,    48,     0,   399,   400,
       0,     0,     0,   227,     0,     0,     0,   204,   204,     0,
     204,   203,   203,     0,   203,     0,   227,     0,     0,   250,
       0,     0,   204,   226,   185,   185,   -48,   -48,   -48,   -48,
       0,   204,   204,   -48,   204,     0,   -57,   -57,   -57,   -57,
     227,   -40,   236,   -57,     0,     0,     0,     0,   226,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,    49,   -29,   -29,   295,   296,   129,
       0,     0,   203,     0,   236,   236,     0,     0,     0,   208,
     208,     0,   208,   -57,   -57,     0,     0,   -57,   -57,   -57,
     -57,   231,     0,   129,     0,   129,   129,   129,   156,   157,
     158,   159,   160,     0,     0,     0,     0,   -40,   -40,   -34,
     237,   -40,   -40,   -40,   -40,     0,   231,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   236,   -34,     0,   -34,   -34,   -34,
     -34,   343,   344,   -47,   -47,   185,     0,   -47,   -47,   -47,
     -47,   302,   -58,   -58,     0,     0,   -58,   -58,   -58,   -58,
     208,   -35,   237,   237,     0,     0,     0,     0,     0,   312,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
     -35,   -35,   -35,   343,   344,   -47,   -40,   -40,   -40,   -40,
       0,     0,   326,   -40,   -47,   -47,   -47,   -47,   -47,   -47,
       0,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,     0,   237,   -39,   -58,     0,   341,   -39,   -39,   -39,
     -39,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   303,
     -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -48,   -37,
       0,     0,   -48,   -48,   -48,   -48,     0,   313,   -37,   -37,
     -37,   -37,   -37,   -37,   365,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   203,   203,     0,   203,     0,
     327,     0,     0,     0,   226,   203,   203,     0,   203,     0,
     -47,   -47,   -47,   -47,     0,     0,   226,   -47,     0,   203,
     203,     0,   203,     0,   342,   -58,   -58,   -58,   -58,     0,
     226,     0,   -58,     0,   203,   203,     0,   203,   -34,   -34,
      52,    53,     0,   226,     0,   -34,   129,     0,     0,   203,
       0,   236,   236,   -35,   -35,    52,    53,     0,   203,   203,
     -35,   203,   366,     0,   -34,   -34,     0,   226,   -34,   -34,
     330,   331,     0,   208,   208,     0,   208,     0,   -37,   -37,
     -37,   -37,   231,   208,   208,   -37,   208,     0,   -38,   -38,
     -38,   -38,     0,     0,   231,   -38,     0,   208,   208,     0,
     208,     0,   -60,   -60,   -60,   -60,     0,     0,   231,   -60,
       0,     0,   208,   208,     0,   208,     0,     0,   -35,   -35,
       0,   231,   -35,   -35,   330,   331,     0,   208,     0,   237,
     237,   -61,   -61,   -61,   -61,     0,   208,   208,   -61,   208,
       0,     0,     0,     0,   -76,   231,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,   236,   -37,   -37,     0,   -76,   -37,   -37,   -37,
     -37,   -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -59,   -59,   -59,   -59,     0,
       0,   -77,   -59,     0,     0,   -38,   -77,   -77,     0,     0,
     -77,   -77,   -77,   -77,   -38,   -38,   -38,   -38,   -38,   -38,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -78,
     237,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,   -38,   -38,
       0,   -78,   -38,   -38,   -38,   -38,   -78,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -60,   -60,     0,   -68,   -60,   -60,   -60,
     -60,   -68,   -68,     0,     0,   -68,   -68,   -68,   -68,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,   -61,   -61,
       0,   -82,   -61,   -61,   -61,   -61,   -82,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
       0,     0,     0,   -59,   -59,     0,   -91,   -59,   -59,   -59,
     -59,   -91,   -91,     0,     0,   -91,   -91,   -91,   -91,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -62,   -62,
       0,   -71,   -62,   -62,   -62,   -62,   -71,   -71,     0,     0,
     -71,   -71,   -71,   -71,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,   -56,   -56,     0,   -67,   -56,   -56,   -56,
     -56,   -67,   -67,     0,     0,   -67,   -67,   -67,   -67,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -62,   -62,   -62,   -62,     0,
       0,   -81,   -62,     0,     0,     0,   -81,   -81,     0,     0,
     -81,   -81,   -81,   -81,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   474,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -56,   -56,   -56,   -56,     0,     0,   -84,   -56,     0,     0,
       0,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,     0,   -20,   -20,   139,   140,
       0,   -87,     0,   -20,     0,     0,   -87,   -87,     0,     0,
     -87,   -87,   -87,   -87,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,   -21,   -21,   139,   140,     0,   -90,     0,   -21,     0,
       0,   -90,   -90,     0,     0,   -90,   -90,   -90,   -90,   -89,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,     0,     0,     0,   -57,     0,
       0,   -89,   -57,   -57,   -57,   -57,   -89,   -89,     0,     0,
     -89,   -89,   -89,   -89,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,     0,   -40,     0,     0,   -88,   -40,   -40,   -40,
     -40,   -88,   -88,     0,     0,   -88,   -88,   -88,   -88,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,     0,     0,     0,     0,   -34,     0,
       0,   -85,   -34,   -34,   304,   305,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,     0,     0,   -35,     0,     0,   -86,   -35,   -35,   304,
     305,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,   -66,
       0,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -47,     0,
       0,   -66,   -47,   -47,   -47,   -47,   -66,   -66,     0,     0,
     -66,   -66,    88,   -66,   -80,     0,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,   -58,     0,     0,   -80,   -58,   -58,   -58,
     -58,   -80,   -80,     0,     0,   -80,   -80,   -80,   -80,   -73,
       0,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,   -37,     0,
       0,   -73,   -37,   -37,   -37,   -37,   -73,   -73,     0,     0,
     -73,   -73,   -73,   -73,    90,     0,     1,     2,     3,     4,
      91,     0,    92,    93,    94,    20,    21,    95,    96,    97,
      22,     0,    23,   238,    24,    25,    26,    27,    28,     0,
       0,     0,     0,   -38,     0,     0,    29,   -38,   -38,   -38,
     -38,    30,    31,     0,     0,    32,   239,   121,   -50,   -72,
       0,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,   -60,     0,
       0,   -72,   -60,   -60,   -60,   -60,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -70,     0,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   -61,     0,     0,   -70,   -61,   -61,   -61,
     -61,   -70,   -70,     0,     0,   -70,   -70,   -70,   -70,   -79,
       0,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,   -59,     0,
       0,   -79,   -59,   -59,   -59,   -59,   -79,   -79,     0,     0,
     -79,   -79,   -79,   -79,   -74,     0,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,   -62,     0,     0,   -74,   -62,   -62,   -62,
     -62,   -74,   -74,     0,     0,   -74,   -74,   -74,   -74,   -75,
       0,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,   -56,     0,
       0,   -75,   -56,   -56,   -56,   -56,   -75,   -75,     0,     0,
     -75,   -75,   -75,   -75,   -76,     0,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,     0,     0,   -76,     0,     0,     0,
       0,   -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -77,
       0,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,     0,     0,     0,
       0,   -77,     0,     0,     0,     0,   -77,   -77,     0,     0,
     -77,   -77,   -77,   -77,   -78,     0,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,   -78,     0,     0,     0,
       0,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,   -82,
       0,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,     0,     0,     0,   -82,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -69,     0,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,     0,   -69,     0,     0,     0,
       0,   -69,   -69,     0,     0,   -69,   -69,   -69,   -69,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,     0,
       0,   -91,     0,     0,     0,     0,   -91,   -91,     0,     0,
     -91,   -91,   -91,   -91,   -87,     0,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,     0,     0,
       0,   -87,   -87,     0,     0,   -87,   -87,   -87,   -87,   -90,
       0,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,     0,     0,     0,     0,     0,
       0,   -90,     0,     0,     0,     0,   -90,   -90,     0,     0,
     -90,   -90,   -90,   -90,   -89,     0,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,   -89,     0,     0,     0,
       0,   -89,   -89,     0,     0,   -89,   -89,   -89,   -89,   -88,
       0,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,   -88,     0,     0,     0,     0,   -88,   -88,     0,     0,
     -88,   -88,   -88,   -88,   -85,     0,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,   -85,     0,     0,     0,
       0,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -86,
       0,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,     0,     0,     0,
       0,   -86,     0,     0,     0,     0,   -86,   -86,     0,     0,
     -86,   -86,   -86,   -86,   -66,     0,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,   -66,     0,     0,     0,
       0,   -66,   -66,     0,     0,   -66,   -66,   334,   -66,   -71,
       0,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,   -71,   -71,     0,     0,
     -71,   -71,   -71,   -71,   -66,     0,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,   -66,     0,     0,     0,
       0,   -66,   -66,     0,     0,   -66,   -66,   356,   -66,   -68,
       0,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,   -68,     0,     0,
     -68,   -68,   -68,   -68,    90,     0,     1,     2,     3,     4,
      91,     0,    92,    93,    94,    20,    21,    95,    96,    97,
      22,     0,    23,   238,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,    30,    31,     0,     0,    32,   239,   449,   -50,   -81,
       0,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,     0,
       0,   -81,     0,     0,     0,     0,   -81,   -81,     0,     0,
     -81,   -81,   -81,   -81,    90,     0,     1,     2,     3,     4,
      91,     0,    92,    93,    94,    20,    21,    95,    96,    97,
      22,     0,    23,   238,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,    30,    31,     0,     0,    32,   239,   461,   -50,   -67,
       0,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,     0,     0,     0,   -67,   -67,     0,     0,
     -67,   -67,   -67,   -67,    90,     0,     1,     2,     3,     4,
      91,     0,    92,    93,    94,    20,    21,    95,    96,    97,
      22,     0,    23,   238,    24,    25,    26,    27,    28,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,    30,    31,     0,     0,    32,   239,   260,   -50,     1,
       2,     3,     4,   261,     0,   262,   263,   264,    20,    21,
     265,   266,   267,    22,     0,    23,   238,    24,    25,    26,
      27,    28,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,   -60,    30,    31,     0,     0,    32,   268,
       0,   -50,   -60,   -60,   -60,   -60,   -60,   -60,   -61,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -61,   -61,   -61,
     -61,   -61,   -61,   -59,   -61,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -59,   -59,   -59,   -59,   -59,   -59,   -62,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -62,   -62,   -62,
     -62,   -62,   -62,   -56,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -44,   -44,   -44,   -44,   -44,   -44,   370,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,   -33,   367,   368,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,   -34,   -34,   -34,   -34,   367,   368,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,
     367,   368,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -61,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -62,   -62,   -62,
     -62,   -62,   -62,     0,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,     0,   -30,   -30,   295,   296,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,   -27,
     -27,   295,   296,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,     0,   -28,   -28,   295,   296
};

static const yytype_int16 yycheck[] =
{
       0,    74,     3,     4,     5,     6,   239,     7,   307,    20,
      10,     0,     0,     3,     4,     5,     6,    17,     7,     7,
     319,   335,     0,    20,     0,     3,     4,     5,     6,    29,
     113,     7,    27,    34,   333,   268,    36,    33,   137,    34,
      20,    18,    20,   357,    34,    20,    46,   346,    46,    45,
      50,    51,    52,    53,   137,    43,    56,    57,   139,   140,
     102,    38,    39,   146,   137,   137,     3,     4,     5,     6,
     137,   370,    34,    33,     0,    75,    38,    39,    40,    41,
     137,    81,    20,    20,   167,    45,    45,    34,    35,    89,
     137,    38,    39,    93,    82,   137,    38,    39,    98,    12,
      13,    46,   102,    45,    17,   147,    19,    20,    21,    22,
      18,    33,   112,   113,    33,    27,   116,   117,   118,    33,
      33,    45,    34,    33,   166,    38,    39,    45,   170,    42,
      38,    39,    40,    41,    45,    18,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   137,   137,
      33,    45,    20,    27,    28,    38,    39,    40,    41,    18,
      34,   137,    34,    35,    12,    13,   166,   167,    34,    17,
     170,    19,    20,    21,    22,    23,    24,    25,    18,    38,
      39,    40,    41,    18,   184,    33,    20,   187,    18,    34,
      38,    39,    17,    33,    42,    18,    34,    45,    38,    39,
      40,    41,   202,    38,    39,    40,    41,    34,    38,    39,
      40,    41,    18,   213,   214,    38,    39,    40,    41,    27,
      28,    34,    18,    34,    35,   225,    34,    12,    13,   229,
      34,    56,    17,    34,    19,    20,    21,    22,    23,    24,
      25,   241,    38,    39,    40,    41,    34,    35,    33,   249,
      75,    43,   252,    38,    39,    34,    81,    42,   258,   259,
      34,    34,    18,   263,    89,    38,    39,   350,    93,   269,
      33,    27,    28,    29,    30,    31,    32,   102,    34,    33,
      36,    37,    38,    39,    40,    41,    33,   287,   113,    33,
     290,    33,   117,   118,    18,   295,   296,    34,    34,    35,
     300,    38,    39,    33,   304,   305,    20,   307,    34,    35,
     310,    45,   137,    45,    38,    39,    40,    41,    45,   319,
      45,   146,   147,    45,   324,    34,    35,    34,   328,   329,
     330,   331,    34,   333,    34,   335,    38,    39,    34,   339,
      34,   166,   167,   343,   344,   170,   346,    34,    45,   349,
     350,    38,    39,   353,   354,   355,   455,   357,   457,    45,
     360,    34,   404,   363,    45,    38,    39,   367,   368,    45,
     370,    34,   455,   456,   457,   474,    34,    35,    33,   478,
     422,    33,   455,   455,   457,   457,    34,    35,   455,    34,
     457,   474,   475,    38,    39,   478,    34,    35,   455,    33,
     457,   474,   474,    33,   404,   478,   478,   474,   455,    34,
     457,   478,    34,   455,    34,   457,   241,   474,    38,    39,
      34,   478,   422,    34,    35,    33,    45,   474,    47,    33,
      18,   478,   474,    34,    35,    33,   478,    33,   263,    27,
      28,    29,    30,    31,    32,    33,    34,    18,    36,    37,
      38,    39,    40,    41,    34,   455,   456,   457,    38,    39,
      40,    41,    34,    35,    18,    33,   455,   455,   457,   457,
      38,    39,    40,    41,   474,   475,    34,    45,   478,   455,
      18,   457,   307,    18,    18,   474,   474,    34,    35,   478,
     478,    18,    34,    35,   319,    34,   115,    33,   474,    45,
      29,    33,   478,    38,    39,    40,    41,    36,   333,    33,
     335,    38,    39,    40,    41,    44,    45,    18,    47,    33,
      33,   346,    33,    52,    53,   350,    33,    56,    33,   354,
     355,    33,   357,    33,    33,   360,    33,    38,    39,    40,
      41,    33,    18,    33,    33,   370,    75,    45,    12,    13,
      33,    33,    81,    17,    33,    19,    20,    21,    22,    23,
      24,    25,    38,    39,    40,    41,    34,    34,    34,    33,
      34,    35,    34,    45,    38,    39,    34,    34,    42,   404,
      45,    34,    18,   112,    45,    34,   115,    34,   117,   118,
      34,    27,    28,    29,    30,    31,    32,   422,    34,    18,
      36,    37,    38,    39,    40,    41,    18,   136,    34,   138,
     139,   140,   141,   142,   143,   144,   145,    34,    34,    38,
      39,    40,    41,    34,    34,    34,    38,    39,    40,    41,
     455,   456,   457,    34,    34,    12,    13,    34,   167,    34,
      17,    34,    19,    20,    21,    22,    23,    24,    25,   474,
     475,    34,    34,   478,    45,   184,    33,    34,   187,    34,
      34,    38,    39,     0,    34,    42,     3,     4,     5,     6,
      34,    34,    45,   202,    34,    34,    45,   206,    45,   298,
     299,    34,   301,    20,   213,   214,     7,    18,    45,   308,
     309,    18,   311,    45,    82,   349,   225,   136,   138,    -1,
     229,    -1,    -1,   322,   323,    -1,   325,    38,    39,    40,
      41,    38,    39,    40,    41,    -1,    -1,    -1,   337,   338,
     249,   340,    -1,   252,    -1,    -1,    -1,    12,    13,   258,
     259,    -1,    17,   352,    19,    20,    21,    22,    23,    24,
      25,    -1,   361,   362,    33,   364,    -1,    -1,    33,    38,
      39,    40,    41,    38,    39,    -1,    45,    42,   287,    -1,
      -1,   290,     3,     4,     5,     6,   295,   296,    -1,   298,
     299,    -1,   301,    -1,    -1,   304,   305,    -1,   307,   308,
     309,    -1,   311,    -1,    -1,   314,   315,   316,   317,    -1,
     319,    -1,    -1,   322,   323,    -1,   325,    -1,    -1,   328,
     329,   330,   331,    29,   333,    -1,    -1,    -1,   337,   338,
      -1,   340,    -1,    -1,   343,   344,    -1,   346,    44,    45,
     349,    47,    18,   352,    -1,   354,   355,    -1,    -1,    -1,
      56,    18,   361,   362,    -1,   364,    -1,    -1,   367,   368,
      -1,   370,    38,    39,    40,    41,    -1,    -1,    -1,    75,
      -1,    38,    39,    40,    41,    81,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    18,    -1,    -1,    -1,    18,   112,    -1,    33,   115,
      -1,   117,   118,    38,    39,    -1,    -1,    42,    43,    44,
      45,    38,    39,    40,    41,    38,    39,    40,    41,    -1,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,    12,    13,    -1,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    -1,    38,    39,    40,    41,
      -1,   167,    33,    45,    -1,    -1,   475,    38,    39,    33,
      34,    42,    -1,    18,    38,    39,    40,    41,   184,    -1,
      -1,   187,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    -1,   202,    -1,    -1,    -1,
     206,    -1,    -1,    -1,    12,    13,    -1,   213,   214,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    -1,   225,
      -1,    -1,    -1,   229,    -1,    33,    -1,    -1,    12,    13,
      38,    39,    -1,    17,    42,    19,    20,    21,    22,    -1,
      -1,    25,    -1,   249,    -1,    -1,   252,    -1,    -1,    33,
      -1,    -1,   258,   259,    38,    39,    12,    13,    42,    -1,
      -1,    17,    -1,    19,    20,    21,    22,     0,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    33,    -1,    -1,
      -1,   287,    38,    39,   290,    -1,    42,    20,    -1,   295,
     296,    -1,   298,   299,    -1,   301,    -1,    -1,   304,   305,
      -1,   307,   308,   309,    -1,   311,    -1,    -1,   314,   315,
     316,   317,    -1,   319,    -1,    -1,   322,   323,    -1,   325,
      -1,    -1,   328,   329,   330,   331,    29,   333,    -1,    -1,
      -1,   337,   338,    -1,   340,    -1,    -1,   343,   344,    -1,
     346,    44,    45,   349,    47,    -1,   352,    -1,   354,   355,
      -1,    -1,    -1,    56,    -1,   361,   362,    18,   364,    -1,
      -1,   367,   368,    -1,   370,    -1,    27,    28,    29,    30,
      31,    32,    75,    34,    -1,    36,    37,    -1,    81,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    33,   115,    -1,   117,   118,    38,    39,    -1,    -1,
      42,    43,    44,    45,    -1,    -1,     0,    -1,    -1,     3,
       4,     5,     6,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,    -1,    12,    13,    20,    -1,    -1,    17,
      -1,    19,    20,    21,    22,     0,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,   167,    33,    -1,    -1,    -1,   475,
      38,    39,    33,    34,    42,    20,    -1,    38,    39,    40,
      41,   184,    -1,    -1,   187,    -1,    12,    13,    -1,    -1,
      -1,    17,    -1,    19,    20,    21,    22,    -1,    -1,   202,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    33,    -1,    -1,
     213,   214,    38,    39,    -1,     0,    42,    -1,     3,     4,
       5,     6,   225,    -1,    12,    13,   229,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    20,    -1,    -1,     0,    -1,
      -1,     3,     4,     5,     6,    33,   249,    -1,    -1,   252,
      38,    39,    12,    13,    42,   258,   259,    17,    20,    19,
      20,    21,    22,     0,    -1,    -1,     3,     4,     5,     6,
      -1,     0,    -1,    33,     3,     4,     5,     6,    38,    39,
      -1,    -1,    42,    20,   287,    -1,    -1,   290,    -1,    -1,
      -1,    20,   295,   296,    -1,   298,   299,    -1,   301,    -1,
      -1,   304,   305,    -1,   307,   308,   309,    -1,   311,    -1,
      -1,   314,   315,   316,   317,    -1,   319,    -1,    -1,   322,
     323,    -1,   325,    -1,    -1,   328,   329,   330,   331,    29,
     333,    -1,    -1,    -1,   337,   338,    -1,   340,    -1,    -1,
     343,   344,    -1,   346,    44,    45,   349,    47,    -1,   352,
      -1,   354,   355,    -1,    -1,    -1,    56,    -1,   361,   362,
      -1,   364,    -1,    -1,   367,   368,    33,   370,    -1,    -1,
      -1,    38,    39,    40,    41,    75,    -1,    -1,    45,    46,
      -1,    81,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    33,   115,    -1,   117,   118,    38,
      39,    -1,    -1,    42,    43,    44,    45,    -1,    -1,     0,
      -1,    -1,     3,     4,     5,     6,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,    -1,    12,    13,    20,
      -1,    -1,    17,    -1,    19,    20,    21,    22,     0,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,   167,    33,    -1,
      -1,    -1,   475,    38,    39,    34,    35,    42,    20,    38,
      39,    40,    41,    -1,   184,    -1,    -1,   187,    -1,    12,
      13,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    -1,   202,    -1,    -1,    -1,   206,    -1,    -1,    -1,
      33,    -1,    -1,   213,   214,    38,    39,    34,    35,    42,
      -1,    38,    39,    40,    41,   225,    -1,    12,    13,   229,
      -1,    -1,    17,    33,    19,    20,    21,    22,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    -1,    33,   249,
      -1,    18,   252,    38,    39,    -1,    -1,    42,   258,   259,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    -1,    -1,   287,    45,    46,
     290,    -1,    -1,    -1,    -1,   295,   296,    -1,   298,   299,
      -1,   301,    -1,    -1,   304,   305,    -1,   307,   308,   309,
      -1,   311,    -1,    -1,   314,   315,   316,   317,    -1,   319,
      -1,    -1,   322,   323,    -1,   325,    -1,    -1,   328,   329,
     330,   331,    29,   333,    -1,    -1,    -1,   337,   338,    -1,
     340,    -1,    -1,   343,   344,    -1,   346,    44,    45,   349,
      47,    -1,   352,    -1,   354,   355,    -1,    -1,    -1,    56,
      -1,   361,   362,    -1,   364,    -1,    -1,   367,   368,    -1,
     370,    -1,    27,    28,    29,    30,    31,    32,    75,    34,
      -1,    36,    37,    -1,    81,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    33,   115,    -1,
     117,   118,    38,    39,    -1,    -1,    42,    43,    44,    45,
      33,    34,    35,    -1,    -1,    38,    39,    40,    41,   136,
      18,   138,   139,   140,   141,   142,   143,   144,   145,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    27,    28,    29,    30,    31,    32,
     167,    34,    -1,    36,    37,   475,    27,    28,    29,    30,
      31,    32,    18,    34,    -1,    36,    37,   184,    -1,    -1,
     187,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    38,    39,    -1,   202,    33,    34,    35,   206,
      -1,    38,    39,    40,    41,    -1,   213,   214,    38,    39,
      40,    41,    -1,    -1,    18,    45,    -1,    -1,   225,    -1,
      -1,    -1,   229,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,   249,    34,    18,   252,    -1,    38,    39,    40,
      41,   258,   259,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    36,    37,    -1,
     287,    -1,    -1,   290,    -1,    -1,    -1,    -1,   295,   296,
      -1,   298,   299,    -1,   301,    -1,    -1,   304,   305,    -1,
     307,   308,   309,    -1,   311,    -1,    -1,   314,   315,   316,
     317,    -1,   319,    -1,    -1,   322,   323,    -1,   325,    -1,
      -1,   328,   329,   330,   331,    -1,   333,    -1,    -1,    -1,
     337,   338,    -1,   340,    -1,    -1,   343,   344,    -1,   346,
      -1,    -1,   349,    -1,    -1,   352,    34,   354,   355,    29,
      38,    39,    40,    41,   361,   362,    -1,   364,    -1,    -1,
     367,   368,    -1,   370,    44,    45,    -1,    47,    18,    -1,
      50,    51,    -1,    -1,    -1,    -1,    56,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    36,    37,    38,    39,
      40,    41,    34,    35,    -1,    75,    38,    39,    40,    41,
      -1,    81,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    33,   115,    -1,   117,   118,    38,
      39,    -1,    -1,    42,    43,    44,    45,    34,    35,    -1,
      -1,    38,    39,    40,    41,    -1,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,    -1,    -1,   475,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   167,    19,    20,
      21,    22,    23,    24,    25,    -1,    38,    39,    40,    41,
      -1,    -1,    33,    45,   184,    -1,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,    -1,    27,    28,    29,    30,
      31,    32,   202,    34,    -1,    36,    37,    38,    39,    40,
      41,    34,    35,   213,   214,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,     1,   225,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,   249,
      38,    39,    40,    41,    -1,    -1,    33,    45,   258,   259,
      18,    38,    39,    -1,    -1,    42,    43,    44,    45,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    34,    35,    -1,   287,    38,    39,
      40,    41,    -1,    -1,    -1,   295,   296,    -1,   298,   299,
      -1,   301,    -1,    38,    39,    40,    41,   307,   308,   309,
      45,   311,    -1,    -1,   314,   315,    -1,    -1,    -1,   319,
      -1,    -1,   322,   323,    -1,   325,    29,    -1,   328,   329,
      -1,    -1,    -1,   333,    -1,    -1,    -1,   337,   338,    -1,
     340,    44,    45,    -1,    47,    -1,   346,    -1,    -1,   349,
      -1,    -1,   352,    56,   354,   355,    38,    39,    40,    41,
      -1,   361,   362,    45,   364,    -1,    38,    39,    40,    41,
     370,    18,    75,    45,    -1,    -1,    -1,    -1,    81,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,    29,    36,    37,    38,    39,   112,
      -1,    -1,   115,    -1,   117,   118,    -1,    -1,    -1,    44,
      45,    -1,    47,    34,    35,    -1,    -1,    38,    39,    40,
      41,    56,    -1,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,    -1,    -1,    -1,    -1,    34,    35,    18,
      75,    38,    39,    40,    41,    -1,    81,    -1,    27,    28,
      29,    30,    31,    32,   167,    34,    -1,    36,    37,    38,
      39,    40,    41,    34,    35,   475,    -1,    38,    39,    40,
      41,   184,    34,    35,    -1,    -1,    38,    39,    40,    41,
     115,    18,   117,   118,    -1,    -1,    -1,    -1,    -1,   202,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    40,    41,    18,    38,    39,    40,    41,
      -1,    -1,   225,    45,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,   167,    34,    18,    -1,   249,    38,    39,    40,
      41,    -1,    -1,    27,    28,    29,    30,    31,    32,   184,
      34,    -1,    36,    37,    38,    39,    40,    41,    34,    18,
      -1,    -1,    38,    39,    40,    41,    -1,   202,    27,    28,
      29,    30,    31,    32,   287,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,   298,   299,    -1,   301,    -1,
     225,    -1,    -1,    -1,   307,   308,   309,    -1,   311,    -1,
      38,    39,    40,    41,    -1,    -1,   319,    45,    -1,   322,
     323,    -1,   325,    -1,   249,    38,    39,    40,    41,    -1,
     333,    -1,    45,    -1,   337,   338,    -1,   340,    38,    39,
      40,    41,    -1,   346,    -1,    45,   349,    -1,    -1,   352,
      -1,   354,   355,    38,    39,    40,    41,    -1,   361,   362,
      45,   364,   287,    -1,    34,    35,    -1,   370,    38,    39,
      40,    41,    -1,   298,   299,    -1,   301,    -1,    38,    39,
      40,    41,   307,   308,   309,    45,   311,    -1,    38,    39,
      40,    41,    -1,    -1,   319,    45,    -1,   322,   323,    -1,
     325,    -1,    38,    39,    40,    41,    -1,    -1,   333,    45,
      -1,    -1,   337,   338,    -1,   340,    -1,    -1,    34,    35,
      -1,   346,    38,    39,    40,    41,    -1,   352,    -1,   354,
     355,    38,    39,    40,    41,    -1,   361,   362,    45,   364,
      -1,    -1,    -1,    -1,     1,   370,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,   475,    34,    35,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    38,    39,    40,    41,    -1,
      -1,    33,    45,    -1,    -1,    18,    38,    39,    -1,    -1,
      42,    43,    44,    45,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    36,    37,    38,    39,    40,    41,     1,
     475,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    35,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    35,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    35,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    35,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    38,    39,    40,    41,    -1,
      -1,    33,    45,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      38,    39,    40,    41,    -1,    -1,    33,    45,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    27,    28,    29,    30,
      -1,    33,    -1,    34,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    27,    28,    29,    30,    -1,    33,    -1,    34,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
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
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
      42,    43,    44,    45,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    33,    38,    39,    40,
      41,    38,    39,    -1,    -1,    42,    43,    44,    45,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    33,    38,    39,    40,    41,    38,    39,    -1,    -1,
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
      -1,    38,    39,    -1,    -1,    42,    43,     1,    45,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    18,    38,    39,    -1,    -1,    42,    43,
      -1,    45,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    18,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    18,    34,    -1,    36,    37,    38,    39,
      40,    41,    27,    28,    29,    30,    31,    32,    -1,    34,
      -1,    36,    37,    38,    39,    40,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
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
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
      37,    38,    39,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    20,    48,    49,    50,    51,
      53,    75,    77,    84,     0,    50,    84,    46,    33,    45,
      12,    13,    17,    19,    21,    22,    23,    24,    25,    33,
      38,    39,    42,    61,    62,    63,    64,    65,    67,    68,
      69,    70,    84,    52,    33,    33,    33,    33,    61,    68,
      38,    39,    40,    41,    63,    45,    33,    53,    54,    55,
      67,    79,    79,    84,    79,    34,    34,    62,    62,    63,
      63,    67,    71,    84,    34,    18,    34,    34,    34,    34,
      34,    35,    35,    43,    72,    67,    67,    55,    44,    73,
       1,     7,     9,    10,    11,    14,    15,    16,    53,    66,
      67,    72,    74,    75,    76,    77,    78,    80,    81,    82,
      83,    84,    33,    33,    67,    33,    33,    33,    33,    84,
      45,    44,    76,    25,    56,    57,    58,    59,    60,    61,
      66,    45,    79,    84,    67,    67,    27,    34,    28,    29,
      30,    31,    32,    36,    37,    18,    45,    34,    34,    34,
      34,    57,    76,    58,    59,    59,    61,    61,    61,    61,
      61,    66,    76,    45,    45,    45,     8,    45,    76,    66,
      34,    76,    20,    20,    12,    13,    17,    19,    20,    21,
      22,    23,    24,    25,    33,    62,    63,    64,    65,    69,
      70,    84,    12,    13,    17,    19,    20,    21,    22,    23,
      24,    25,    33,    61,    62,    63,    64,    65,    68,    69,
      70,    84,    20,    38,    39,    12,    13,    17,    19,    20,
      21,    22,    23,    24,    25,    33,    61,    62,    63,    64,
      65,    68,    69,    70,    84,    20,    61,    68,    20,    43,
      20,    46,    12,    13,    17,    19,    20,    21,    22,    33,
      62,    63,    64,    65,    69,    70,    84,    45,    38,    39,
       1,     7,     9,    10,    11,    14,    15,    16,    43,    53,
      66,    72,    75,    77,    78,    80,    81,    82,    83,    84,
      12,    13,    17,    19,    20,    21,    22,    33,    62,    63,
      64,    65,    69,    70,    84,    38,    39,    67,    33,    33,
      33,    33,    61,    68,    40,    41,    63,    33,    33,    33,
      33,    33,    61,    68,    38,    39,    40,    41,    63,    33,
      62,    62,    33,    33,    33,    33,    61,    68,    38,    39,
      40,    41,    63,    33,    44,    73,    67,    33,    33,    33,
      33,    61,    68,    40,    41,    63,    33,    62,    62,    33,
      33,    67,    33,    33,    33,    33,    44,    73,    84,    45,
      46,    33,    33,    33,    33,    61,    68,    40,    41,    63,
      33,    62,    62,    79,    79,    84,    79,    34,    34,    63,
      63,    71,    79,    79,    84,    79,    34,    34,    62,    62,
      63,    63,    71,    79,    79,    84,    79,    34,    34,    62,
      62,    63,    63,    71,    74,    45,    79,    79,    84,    79,
      34,    34,    63,    63,    71,    56,    66,    45,    79,    84,
      67,    67,    74,    45,    67,    79,    79,    84,    79,    34,
      34,    63,    63,    71,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    44,
      34,    34,    34,    34,    34,    34,    45,    34,    34,    34,
      34,    44,    45,    34,    34,    34,    34,    34,    76,    66,
      76,    45,    45,    45,     8,    45,    76,    66,    34,    76
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
       1,     4,     2,     3,     5,     7,     9,     5,     5,     5,
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
                    // current_scope = initial_scope;
                    printf("translation_unit: %p\n", current_scope);
                  }
#line 2673 "./src/syntax/parser.c"
    break;

  case 3: /* external_declaration_list: external_declaration_list external_declaration  */
#line 61 "src/syntax/parser.y"
                                                                          {
                            (yyval.ast_node) = create_ast_node(EXTERNAL_DECLARATION_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2681 "./src/syntax/parser.c"
    break;

  case 4: /* external_declaration_list: external_declaration  */
#line 64 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2687 "./src/syntax/parser.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 67 "src/syntax/parser.y"
                                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2693 "./src/syntax/parser.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 68 "src/syntax/parser.y"
                                  { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2699 "./src/syntax/parser.c"
    break;

  case 7: /* external_declaration: assignment_statement  */
#line 69 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2705 "./src/syntax/parser.c"
    break;

  case 8: /* $@1: %empty  */
#line 72 "src/syntax/parser.y"
                                                   {
                      printf("function definition-1: %p\n", current_scope);
                      is_a_function = 1;
                      struct symbol_table_row *symbol_table = NULL;

                      struct scope *new_scope = (struct scope *) malloc(sizeof(struct scope));
                      new_scope->symbol_table = symbol_table;
                      new_scope->parent = current_scope;
                      LL_APPEND(initial_scope, new_scope);

                      current_scope = new_scope;
                      printf("function definition-2: %p\n", current_scope);
                    }
#line 2723 "./src/syntax/parser.c"
    break;

  case 9: /* function_definition: type_specifier identifier '(' $@1 parameters ')' compound_statement  */
#line 84 "src/syntax/parser.y"
                                                        {
                      printf("function definition-3: %p\n", current_scope);
                      (yyval.ast_node) = create_ast_node(FUNCTION_DEFINITION, (yyvsp[-6].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      printf("\ncurrent_scope: %p, current_scope->parent: %p, current_scope->symbol_table: %p, value: %s\n",
                        current_scope, current_scope->parent, current_scope->symbol_table, (yyvsp[-5].ast_node)->value);
                      insert_row_into_symbol_table(current_scope, (yyvsp[-6].token), (yyvsp[-5].ast_node)->value, "function");
                      is_a_function = 0;
                      printf("function definition-4: %p\n", current_scope);
                    }
#line 2737 "./src/syntax/parser.c"
    break;

  case 10: /* type_specifier: INT  */
#line 95 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2743 "./src/syntax/parser.c"
    break;

  case 11: /* type_specifier: FLOAT  */
#line 96 "src/syntax/parser.y"
                      { (yyval.token) = (yyvsp[0].token); }
#line 2749 "./src/syntax/parser.c"
    break;

  case 12: /* type_specifier: ELEM  */
#line 97 "src/syntax/parser.y"
                     { (yyval.token) = (yyvsp[0].token); }
#line 2755 "./src/syntax/parser.c"
    break;

  case 13: /* type_specifier: SET  */
#line 98 "src/syntax/parser.y"
                    { (yyval.token) = (yyvsp[0].token); }
#line 2761 "./src/syntax/parser.c"
    break;

  case 14: /* parameters: parameter_list  */
#line 101 "src/syntax/parser.y"
                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2767 "./src/syntax/parser.c"
    break;

  case 15: /* parameters: %empty  */
#line 102 "src/syntax/parser.y"
            { (yyval.ast_node) = NULL; }
#line 2773 "./src/syntax/parser.c"
    break;

  case 16: /* parameter_list: type_specifier identifier ',' parameter_list  */
#line 105 "src/syntax/parser.y"
                                                             {
                  (yyval.ast_node) = create_ast_node(PARAMETER_LIST, NULL, (yyvsp[0].ast_node), NULL, NULL, NULL);
                }
#line 2781 "./src/syntax/parser.c"
    break;

  case 17: /* parameter_list: type_specifier identifier  */
#line 108 "src/syntax/parser.y"
                                          {
                  printf("\ncurrent_scope: %p, current_scope->parent: %p, current_scope->symbol_table: %p, value: %s\n",
                  current_scope, current_scope->parent, current_scope->symbol_table, (yyvsp[0].ast_node)->value);
                  (yyval.ast_node) = create_ast_node(PARAMETER_DECLARATION, (yyvsp[0].ast_node)->value, NULL, NULL, NULL, NULL);
                  insert_row_into_symbol_table(current_scope, (yyvsp[-1].token), (yyvsp[0].ast_node)->value, "parameter");
                }
#line 2792 "./src/syntax/parser.c"
    break;

  case 18: /* logical_or_expression: logical_and_expression  */
#line 116 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2798 "./src/syntax/parser.c"
    break;

  case 19: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 117 "src/syntax/parser.y"
                                                                      {
                        (yyval.ast_node) = create_ast_node(LOGICAL_OR_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2806 "./src/syntax/parser.c"
    break;

  case 20: /* logical_and_expression: equality_expression  */
#line 122 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2812 "./src/syntax/parser.c"
    break;

  case 21: /* logical_and_expression: logical_and_expression AND equality_expression  */
#line 123 "src/syntax/parser.y"
                                                                       {
                          (yyval.ast_node) = create_ast_node(LOGICAL_AND_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                        }
#line 2820 "./src/syntax/parser.c"
    break;

  case 22: /* equality_expression: relational_expression  */
#line 128 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2826 "./src/syntax/parser.c"
    break;

  case 23: /* equality_expression: equality_expression EQUAL_TO relational_expression  */
#line 129 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2834 "./src/syntax/parser.c"
    break;

  case 24: /* equality_expression: equality_expression NOT_EQUAL_TO relational_expression  */
#line 132 "src/syntax/parser.y"
                                                                           {
                      (yyval.ast_node) = create_ast_node(EQUALITY_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2842 "./src/syntax/parser.c"
    break;

  case 25: /* relational_expression: belongs_to_expression  */
#line 137 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2848 "./src/syntax/parser.c"
    break;

  case 26: /* relational_expression: EMPTY_CONST  */
#line 138 "src/syntax/parser.y"
                                  {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL);
                      }
#line 2856 "./src/syntax/parser.c"
    break;

  case 27: /* relational_expression: relational_expression '<' additive_expression  */
#line 141 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, "<", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2864 "./src/syntax/parser.c"
    break;

  case 28: /* relational_expression: relational_expression '>' additive_expression  */
#line 144 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, ">", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2872 "./src/syntax/parser.c"
    break;

  case 29: /* relational_expression: relational_expression LT_OR_EQ_TO additive_expression  */
#line 147 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2880 "./src/syntax/parser.c"
    break;

  case 30: /* relational_expression: relational_expression BG_OR_EQ_TO additive_expression  */
#line 150 "src/syntax/parser.y"
                                                                            {
                        (yyval.ast_node) = create_ast_node(RELATIONAL_EXPRESSION, (char *) (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2888 "./src/syntax/parser.c"
    break;

  case 31: /* belongs_to_expression: belongs_to_expression IN additive_expression  */
#line 155 "src/syntax/parser.y"
                                                                    {
                        (yyval.ast_node) = create_ast_node(BELONGS_TO_EXPRESSION, (yyvsp[-1].token), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 2896 "./src/syntax/parser.c"
    break;

  case 32: /* belongs_to_expression: additive_expression  */
#line 158 "src/syntax/parser.y"
                                           { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2902 "./src/syntax/parser.c"
    break;

  case 33: /* additive_expression: multiplicative_expression  */
#line 161 "src/syntax/parser.y"
                                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2908 "./src/syntax/parser.c"
    break;

  case 34: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 162 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "+", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2916 "./src/syntax/parser.c"
    break;

  case 35: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 165 "src/syntax/parser.y"
                                                                      {
                      (yyval.ast_node) = create_ast_node(ADDITIVE_EXPRESSION, "-", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 2924 "./src/syntax/parser.c"
    break;

  case 36: /* multiplicative_expression: unary_expression  */
#line 170 "src/syntax/parser.y"
                                            { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2930 "./src/syntax/parser.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 171 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "*", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2938 "./src/syntax/parser.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 174 "src/syntax/parser.y"
                                                                         {
                            (yyval.ast_node) = create_ast_node(MULTIPLICATIVE_EXPRESSION, "/", (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                          }
#line 2946 "./src/syntax/parser.c"
    break;

  case 39: /* unary_expression: term  */
#line 179 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2952 "./src/syntax/parser.c"
    break;

  case 40: /* unary_expression: unary_operator unary_expression  */
#line 180 "src/syntax/parser.y"
                                                  {
                    (yyval.ast_node) = create_ast_node(UNARY_EXPRESSION, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                  }
#line 2960 "./src/syntax/parser.c"
    break;

  case 41: /* unary_operator: '+'  */
#line 185 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "+", NULL, NULL, NULL, NULL); }
#line 2966 "./src/syntax/parser.c"
    break;

  case 42: /* unary_operator: '-'  */
#line 186 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "-", NULL, NULL, NULL, NULL); }
#line 2972 "./src/syntax/parser.c"
    break;

  case 43: /* unary_operator: '!'  */
#line 187 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(UNARY_OPERATOR, "!", NULL, NULL, NULL, NULL); }
#line 2978 "./src/syntax/parser.c"
    break;

  case 44: /* term: identifier  */
#line 190 "src/syntax/parser.y"
                 { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 2984 "./src/syntax/parser.c"
    break;

  case 45: /* term: INTEGER_CONST  */
#line 191 "src/syntax/parser.y"
                    { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2990 "./src/syntax/parser.c"
    break;

  case 46: /* term: FLOAT_CONST  */
#line 192 "src/syntax/parser.y"
                  { (yyval.ast_node) = create_ast_node(TERM, (yyvsp[0].token), NULL, NULL, NULL, NULL); }
#line 2996 "./src/syntax/parser.c"
    break;

  case 47: /* term: '(' additive_expression ')'  */
#line 193 "src/syntax/parser.y"
                                  {
        (yyval.ast_node) = create_ast_node(TERM, NULL, (yyvsp[-1].ast_node), NULL, NULL, NULL);
      }
#line 3004 "./src/syntax/parser.c"
    break;

  case 48: /* term: function_call_expression  */
#line 196 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3010 "./src/syntax/parser.c"
    break;

  case 49: /* optional_expression: expression  */
#line 199 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3016 "./src/syntax/parser.c"
    break;

  case 50: /* optional_expression: %empty  */
#line 200 "src/syntax/parser.y"
                    { (yyval.ast_node) = NULL; }
#line 3022 "./src/syntax/parser.c"
    break;

  case 51: /* expression: additive_expression  */
#line 203 "src/syntax/parser.y"
                                { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3028 "./src/syntax/parser.c"
    break;

  case 52: /* expression: function_arg_constant_expression  */
#line 204 "src/syntax/parser.y"
                                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3034 "./src/syntax/parser.c"
    break;

  case 53: /* function_arg_constant_expression: EMPTY_CONST  */
#line 207 "src/syntax/parser.y"
                                              {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3044 "./src/syntax/parser.c"
    break;

  case 54: /* function_arg_constant_expression: STRING  */
#line 212 "src/syntax/parser.y"
                                         {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3054 "./src/syntax/parser.c"
    break;

  case 55: /* function_arg_constant_expression: CHARACTER_CONST  */
#line 217 "src/syntax/parser.y"
                                                  {
                                    (yyval.ast_node) = create_ast_node(
                                      FUNCTION_ARG_CONSTANT_EXPRESSION, (yyvsp[0].token), NULL, NULL, NULL, NULL
                                    );
                                  }
#line 3064 "./src/syntax/parser.c"
    break;

  case 56: /* function_call_expression: identifier '(' argument_list ')'  */
#line 224 "src/syntax/parser.y"
                                                           {
                            (yyval.ast_node) = create_ast_node(
                              FUNCTION_CALL_EXPRESSION, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL
                            );
                          }
#line 3074 "./src/syntax/parser.c"
    break;

  case 57: /* function_call_expression: set_function_call_expression  */
#line 229 "src/syntax/parser.y"
                                                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3080 "./src/syntax/parser.c"
    break;

  case 58: /* function_call_expression: '(' function_arg_constant_expression ')'  */
#line 230 "src/syntax/parser.y"
                                                                   { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3086 "./src/syntax/parser.c"
    break;

  case 59: /* set_function_call_expression: IS_SET '(' identifier ')'  */
#line 233 "src/syntax/parser.y"
                                                        {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3096 "./src/syntax/parser.c"
    break;

  case 60: /* set_function_call_expression: ADD '(' set_membership_expression ')'  */
#line 238 "src/syntax/parser.y"
                                                                    {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3106 "./src/syntax/parser.c"
    break;

  case 61: /* set_function_call_expression: REMOVE '(' set_membership_expression ')'  */
#line 243 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3116 "./src/syntax/parser.c"
    break;

  case 62: /* set_function_call_expression: EXISTS '(' set_membership_expression ')'  */
#line 248 "src/syntax/parser.y"
                                                                       {
                                (yyval.ast_node) = create_ast_node(
                                  SET_FUNCTION_CALL_EXPRESSION, (yyvsp[-3].token), (yyvsp[-1].ast_node), NULL, NULL, NULL
                                );
                              }
#line 3126 "./src/syntax/parser.c"
    break;

  case 63: /* argument_list: argument_list ',' expression  */
#line 255 "src/syntax/parser.y"
                                            {
                (yyval.ast_node) = create_ast_node(ARGUMENT_LIST, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
              }
#line 3134 "./src/syntax/parser.c"
    break;

  case 64: /* argument_list: expression  */
#line 258 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3140 "./src/syntax/parser.c"
    break;

  case 65: /* argument_list: %empty  */
#line 259 "src/syntax/parser.y"
              { (yyval.ast_node) = NULL; }
#line 3146 "./src/syntax/parser.c"
    break;

  case 66: /* $@2: %empty  */
#line 262 "src/syntax/parser.y"
                        {
                      printf("is a function: %d\n", is_a_function);
                      printf("compound statement-1: %p\n", current_scope);
                      if (!is_a_function) {
                        struct symbol_table_row *symbol_table = NULL;

                        struct scope *new_scope = (struct scope *) malloc(sizeof(struct scope));
                        new_scope->symbol_table = symbol_table;
                        new_scope->parent = current_scope;
                        LL_APPEND(initial_scope, new_scope);

                        current_scope = new_scope;
                      }
                    }
#line 3165 "./src/syntax/parser.c"
    break;

  case 67: /* compound_statement: '{' $@2 statement_list '}'  */
#line 275 "src/syntax/parser.y"
                                         {
                      (yyval.ast_node) = (yyvsp[-1].ast_node);
                      printf("compound statement-2: %p\n", current_scope);
                      current_scope = current_scope->parent;
                      printf("compound statement-3: %p\n", current_scope);
                    }
#line 3176 "./src/syntax/parser.c"
    break;

  case 68: /* compound_statement: '{' '}'  */
#line 281 "src/syntax/parser.y"
                            { create_ast_node(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL, NULL); }
#line 3182 "./src/syntax/parser.c"
    break;

  case 69: /* statement_list: statement_list statement  */
#line 284 "src/syntax/parser.y"
                                         {
                  (yyval.ast_node) = create_ast_node(STATEMENT_LIST, NULL, (yyvsp[-1].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                }
#line 3190 "./src/syntax/parser.c"
    break;

  case 70: /* statement_list: statement  */
#line 287 "src/syntax/parser.y"
                          { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3196 "./src/syntax/parser.c"
    break;

  case 71: /* declaration: type_specifier identifier ';'  */
#line 290 "src/syntax/parser.y"
                                           {
              printf("\ncurrent_scope: %p, current_scope->parent: %p, current_scope->symbol_table: %p, value: %s\n",
                    current_scope, current_scope->parent, current_scope->symbol_table, (yyvsp[-1].ast_node)->value);
              (yyval.ast_node) = create_ast_node(DECLARATION, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
              insert_row_into_symbol_table(current_scope, (yyvsp[-2].token), (yyvsp[-1].ast_node)->value, "variable");
            }
#line 3207 "./src/syntax/parser.c"
    break;

  case 72: /* statement: declaration  */
#line 298 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3213 "./src/syntax/parser.c"
    break;

  case 73: /* statement: compound_statement  */
#line 299 "src/syntax/parser.y"
                             { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3219 "./src/syntax/parser.c"
    break;

  case 74: /* statement: expression_statement  */
#line 300 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3225 "./src/syntax/parser.c"
    break;

  case 75: /* statement: selection_statement  */
#line 301 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3231 "./src/syntax/parser.c"
    break;

  case 76: /* statement: iteration_statement  */
#line 302 "src/syntax/parser.y"
                              { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3237 "./src/syntax/parser.c"
    break;

  case 77: /* statement: io_statement  */
#line 303 "src/syntax/parser.y"
                       { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3243 "./src/syntax/parser.c"
    break;

  case 78: /* statement: jump_statement  */
#line 304 "src/syntax/parser.y"
                         { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3249 "./src/syntax/parser.c"
    break;

  case 79: /* statement: assignment_statement  */
#line 305 "src/syntax/parser.y"
                               { (yyval.ast_node) = (yyvsp[0].ast_node); }
#line 3255 "./src/syntax/parser.c"
    break;

  case 80: /* statement: error  */
#line 306 "src/syntax/parser.y"
                { yyerrok; }
#line 3261 "./src/syntax/parser.c"
    break;

  case 81: /* assignment_statement: identifier '=' expression ';'  */
#line 309 "src/syntax/parser.y"
                                                    {
                      (yyval.ast_node) = create_ast_node(ASSIGNMENT_STATEMENT, NULL, (yyvsp[-3].ast_node), (yyvsp[-1].ast_node), NULL, NULL);
                    }
#line 3269 "./src/syntax/parser.c"
    break;

  case 82: /* expression_statement: optional_expression ';'  */
#line 314 "src/syntax/parser.y"
                                              { (yyval.ast_node) = (yyvsp[-1].ast_node); }
#line 3275 "./src/syntax/parser.c"
    break;

  case 83: /* set_membership_expression: expression IN expression  */
#line 317 "src/syntax/parser.y"
                                                    {
                        (yyval.ast_node) = create_ast_node(SET_MEMBERSHIP_EXPRESSION, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                      }
#line 3283 "./src/syntax/parser.c"
    break;

  case 84: /* selection_statement: IF '(' logical_or_expression ')' statement  */
#line 322 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3291 "./src/syntax/parser.c"
    break;

  case 85: /* selection_statement: IF '(' logical_or_expression ')' statement ELSE statement  */
#line 325 "src/syntax/parser.y"
                                                                              {
                      (yyval.ast_node) = create_ast_node(SELECTION_STATEMENT, NULL, (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL);
                    }
#line 3299 "./src/syntax/parser.c"
    break;

  case 86: /* iteration_statement: FOR '(' optional_expression ';' optional_expression ';' optional_expression ')' statement  */
#line 330 "src/syntax/parser.y"
                                                                                                               {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-6].ast_node), (yyvsp[-4].ast_node), (yyvsp[-2].ast_node), (yyvsp[0].ast_node));
                    }
#line 3307 "./src/syntax/parser.c"
    break;

  case 87: /* iteration_statement: FORALL '(' set_membership_expression ')' statement  */
#line 333 "src/syntax/parser.y"
                                                                       {
                      (yyval.ast_node) = create_ast_node(ITERATION_STATEMENT, NULL, (yyvsp[-2].ast_node), (yyvsp[0].ast_node), NULL, NULL);
                    }
#line 3315 "./src/syntax/parser.c"
    break;

  case 88: /* io_statement: WRITE '(' expression ')' ';'  */
#line 338 "src/syntax/parser.y"
                                           {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3323 "./src/syntax/parser.c"
    break;

  case 89: /* io_statement: WRITELN '(' expression ')' ';'  */
#line 341 "src/syntax/parser.y"
                                             {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3331 "./src/syntax/parser.c"
    break;

  case 90: /* io_statement: READ '(' identifier ')' ';'  */
#line 344 "src/syntax/parser.y"
                                          {
                (yyval.ast_node) = create_ast_node(IO_STATEMENT, (yyvsp[-4].token), (yyvsp[-2].ast_node), NULL, NULL, NULL);
              }
#line 3339 "./src/syntax/parser.c"
    break;

  case 91: /* jump_statement: RETURN expression ';'  */
#line 349 "src/syntax/parser.y"
                                      {
                  (yyval.ast_node) = create_ast_node(JUMP_STATEMENT, (yyvsp[-2].token), (yyvsp[-1].ast_node), NULL, NULL, NULL);
                }
#line 3347 "./src/syntax/parser.c"
    break;

  case 92: /* identifier: IDENTIFIER  */
#line 354 "src/syntax/parser.y"
                       {
              (yyval.ast_node) = create_ast_node(tIDENTIFIER, (yyvsp[0].token), NULL, NULL, NULL, NULL);
            }
#line 3355 "./src/syntax/parser.c"
    break;


#line 3359 "./src/syntax/parser.c"

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

#line 359 "src/syntax/parser.y"


void yyerror (char const *string) {
  fprintf (stderr, "%d:%d %s\n", line_counter, parser_column, string);
}
