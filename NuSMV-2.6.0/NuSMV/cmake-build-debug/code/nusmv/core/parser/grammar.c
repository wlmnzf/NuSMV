/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         nusmv_yyparse
#define yylex           nusmv_yylex
#define yyerror         nusmv_yyerror
#define yydebug         nusmv_yydebug
#define yynerrs         nusmv_yynerrs

#define yylval          nusmv_yylval
#define yychar          nusmv_yychar

/* Copy the first part of user declarations.  */
#line 43 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:339  */


#if HAVE_CONFIG_H
# include "nusmv-config.h"
#endif

#include <setjmp.h>

#if NUSMV_HAVE_MALLOC_H
# if NUSMV_HAVE_SYS_TYPES_H
#  include <sys/types.h>
# endif
# include <malloc.h>
#elif defined(NUSMV_HAVE_SYS_MALLOC_H) && NUSMV_HAVE_SYS_MALLOC_H
# if NUSMV_HAVE_SYS_TYPES_H
#  include <sys/types.h>
# endif
# include <sys/malloc.h>
#elif NUSMV_HAVE_STDLIB_H
# include <stdlib.h>
#endif

#include <limits.h>

#include "nusmv/core/parser/parserInt.h"
#include "nusmv/core/parser/psl/pslInt.h"
#include "nusmv/core/utils/utils.h"
#include "nusmv/core/utils/ustring.h"
#include "nusmv/core/node/node.h"
#include "nusmv/core/opt/opt.h"
#include "nusmv/core/prop/propPkg.h"
#include "nusmv/core/utils/ErrorMgr.h"

#include "nusmv/core/parser/symbols.h"
#include "nusmv/core/cinit/NuSMVEnv.h"
#define YYMAXDEPTH INT_MAX

#define GET_OPTS                                                \
  OPTS_HANDLER(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_OPTS_HANDLER))

  /* OPTIMIZATION[REAMa] Test performances. If poor, use ad-hoc variable */
#define NODEMGR                                                         \
  NODE_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_NODE_MGR))

#define SYNTAX_ERROR_HANDLING(dest, src) \
  {                                      \
    if (OptsHandler_get_bool_option_value(GET_OPTS, \
                                          OPT_PARSER_IS_LAX)) {         \
      dest = src;                                                       \
    }                                                                   \
    else {                                                              \
      YYABORT;                                                          \
    }                                                                   \
 }


node_ptr parsed_tree; /* the returned value of parsing */

/* TODO[AMa] Dirty hack. This var must be updated before all calls of the
   parser */
NuSMVEnv_ptr __nusmv_parser_env__;

enum PARSE_MODE parse_mode_flag; /* the flag what should be parsed */

extern int nusmv_yylineno;
int nusmv_yywrap(void);
void nusmv_yyerror(char *s);
void nusmv_yyerror_lined(const char *s, int line);
static node_ptr node2maincontext(node_ptr node);

/* this enum is used to distinguish
   different kinds of expressions: SIMPLE, NEXT, CTL and LTL.
   Since syntactically only one global kind of expressions exists,
   we have to invoke a special function which checks that an expression
   complies to the additional syntactic constrains.
   So, if a ctl-expression is expected then occurrences of NEXT
   operator will cause the termination of parsing.

   NB: An alternative to invoking a checking function would be to write quite
   intricate syntactic rules to distinguish all the cases.

   NB: This checking function could also be a part of the type checker,
   but it is more straightforward to write a separate function.
*/
  enum EXP_KIND {EXP_SIMPLE, EXP_NEXT, EXP_LTL, EXP_CTL};

  static boolean isCorrectExp(node_ptr exp, enum EXP_KIND expectedKind);

  static node_ptr build_case_colon_node(node_ptr l,
                                        node_ptr r,
                                        int linum);

  static int nusmv_parse_psl(void);

#line 169 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.h".  */
#ifndef YY_NUSMV_YY_HOME_WILLIAM_CLIONPROJECTS_NUSMV_NUSMV_2_6_0_NUSMV_CMAKE_BUILD_DEBUG_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED
# define YY_NUSMV_YY_HOME_WILLIAM_CLIONPROJECTS_NUSMV_NUSMV_2_6_0_NUSMV_CMAKE_BUILD_DEBUG_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int nusmv_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_CONSTRAINT = 258,
    TOK_ITYPE = 259,
    TOK_MODULE = 260,
    TOK_PROCESS = 261,
    TOK_CONTEXT = 262,
    TOK_EU = 263,
    TOK_AU = 264,
    TOK_EBU = 265,
    TOK_ABU = 266,
    TOK_MINU = 267,
    TOK_MAXU = 268,
    TOK_VAR = 269,
    TOK_FROZENVAR = 270,
    TOK_IVAR = 271,
    TOK_FUN = 272,
    TOK_DEFINE = 273,
    TOK_ARRAY_DEFINE = 274,
    TOK_INIT = 275,
    TOK_TRANS = 276,
    TOK_INVAR = 277,
    TOK_SPEC = 278,
    TOK_CTLSPEC = 279,
    TOK_LTLSPEC = 280,
    TOK_COMPUTE = 281,
    TOK_NAME = 282,
    TOK_PSLSPEC = 283,
    TOK_CONSTANTS = 284,
    TOK_INVARSPEC = 285,
    TOK_FAIRNESS = 286,
    TOK_COMPASSION = 287,
    TOK_JUSTICE = 288,
    TOK_ISA = 289,
    TOK_ASSIGN = 290,
    TOK_OF = 291,
    TOK_CONS = 292,
    TOK_SEMI = 293,
    TOK_LP = 294,
    TOK_RP = 295,
    TOK_RB = 296,
    TOK_LCB = 297,
    TOK_RCB = 298,
    TOK_EQDEF = 299,
    TOK_TWODOTS = 300,
    TOK_SELF = 301,
    TOK_CASE = 302,
    TOK_ESAC = 303,
    TOK_COLON = 304,
    TOK_INCONTEXT = 305,
    TOK_SIMPWFF = 306,
    TOK_NEXTWFF = 307,
    TOK_LTLWFF = 308,
    TOK_LTLPSL = 309,
    TOK_CTLWFF = 310,
    TOK_COMPWFF = 311,
    TOK_COMPID = 312,
    TOK_ARRAY = 313,
    TOK_BOOLEAN = 314,
    TOK_WORD = 315,
    TOK_BOOL = 316,
    TOK_WORD1 = 317,
    TOK_CONST_ARRAY = 318,
    TOK_WAREAD = 319,
    TOK_WAWRITE = 320,
    TOK_SIGNED = 321,
    TOK_UNSIGNED = 322,
    TOK_EXTEND = 323,
    TOK_UWCONST = 324,
    TOK_SWCONST = 325,
    TOK_WRESIZE = 326,
    TOK_WSIZEOF = 327,
    TOK_WTOINT = 328,
    TOK_COUNT = 329,
    TOK_TYPEOF = 330,
    TOK_ATOM = 331,
    TOK_FALSEEXP = 332,
    TOK_TRUEEXP = 333,
    TOK_NUMBER = 334,
    TOK_NUMBER_FRAC = 335,
    TOK_NUMBER_REAL = 336,
    TOK_NUMBER_EXP = 337,
    TOK_NUMBER_WORD = 338,
    TOK_ABS = 339,
    TOK_MIN = 340,
    TOK_MAX = 341,
    TOK_COMMA = 342,
    TOK_IMPLIES = 343,
    TOK_IFF = 344,
    TOK_OR = 345,
    TOK_XOR = 346,
    TOK_XNOR = 347,
    TOK_AND = 348,
    TOK_NOT = 349,
    TOK_QUESTIONMARK = 350,
    TOK_EX = 351,
    TOK_AX = 352,
    TOK_EF = 353,
    TOK_AF = 354,
    TOK_EG = 355,
    TOK_AG = 356,
    TOK_EE = 357,
    TOK_AA = 358,
    TOK_SINCE = 359,
    TOK_UNTIL = 360,
    TOK_TRIGGERED = 361,
    TOK_RELEASES = 362,
    TOK_EBF = 363,
    TOK_EBG = 364,
    TOK_ABF = 365,
    TOK_ABG = 366,
    TOK_BUNTIL = 367,
    TOK_MMIN = 368,
    TOK_MMAX = 369,
    TOK_OP_NEXT = 370,
    TOK_OP_GLOBAL = 371,
    TOK_OP_FUTURE = 372,
    TOK_OP_PREC = 373,
    TOK_OP_NOTPRECNOT = 374,
    TOK_OP_HISTORICAL = 375,
    TOK_OP_ONCE = 376,
    TOK_EQUAL = 377,
    TOK_NOTEQUAL = 378,
    TOK_LT = 379,
    TOK_GT = 380,
    TOK_LE = 381,
    TOK_GE = 382,
    TOK_UNION = 383,
    TOK_SETIN = 384,
    TOK_LSHIFT = 385,
    TOK_RSHIFT = 386,
    TOK_LROTATE = 387,
    TOK_RROTATE = 388,
    TOK_MOD = 389,
    TOK_PLUS = 390,
    TOK_MINUS = 391,
    TOK_TIMES = 392,
    TOK_DIVIDE = 393,
    TOK_NEXT = 394,
    TOK_SMALLINIT = 395,
    TOK_CONCATENATION = 396,
    TOK_LB = 397,
    TOK_DOT = 398,
    TOK_BIT = 399
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 138 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:355  */

  node_ptr node;
  int lineno;

#line 359 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE nusmv_yylval;

int nusmv_yyparse (void);

#endif /* !YY_NUSMV_YY_HOME_WILLIAM_CLIONPROJECTS_NUSMV_NUSMV_2_6_0_NUSMV_CMAKE_BUILD_DEBUG_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 376 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2656

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  336
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  723

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   399

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   252,   252,   253,   256,   257,   258,   262,   264,   266,
     268,   271,   275,   279,   280,   281,   283,   285,   287,   289,
     290,   291,   296,   301,   310,   311,   318,   337,   338,   339,
     340,   341,   350,   359,   365,   370,   371,   376,   379,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   392,   395,
     398,   400,   405,   406,   410,   421,   425,   431,   432,   437,
     438,   443,   444,   445,   446,   450,   451,   452,   453,   458,
     459,   460,   465,   466,   467,   470,   471,   472,   475,   476,
     477,   483,   484,   485,   488,   489,   493,   494,   497,   498,
     502,   503,   504,   505,   506,   507,   508,   511,   512,   516,
     517,   518,   519,   520,   521,   522,   524,   526,   528,   530,
     531,   532,   533,   536,   542,   543,   546,   547,   548,   549,
     552,   553,   557,   558,   561,   565,   566,   571,   572,   573,
     574,   575,   577,   578,   580,   581,   583,   584,   587,   594,
     595,   597,   599,   606,   616,   617,   621,   622,   623,   624,
     628,   629,   633,   634,   638,   639,   643,   650,   653,   656,
     659,   663,   665,   674,   675,   677,   679,   681,   682,   684,
     686,   688,   694,   695,   696,   700,   701,   704,   705,   706,
     707,   710,   711,   714,   715,   716,   718,   730,   731,   743,
     744,   747,   750,   751,   752,   755,   756,   761,   762,   763,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     794,   795,   798,   799,   802,   803,   805,   809,   815,   816,
     817,   819,   820,   821,   823,   824,   825,   827,   828,   829,
     832,   834,   836,   838,   841,   845,   846,   850,   853,   854,
     855,   858,   860,   873,   877,   878,   879,   883,   884,   888,
     889,   893,   894,   898,   900,   901,   902,   904,   906,   911,
     919,   921,   923,   927,   930,   933,   939,   940,   942,   943,
     946,   947,   949,   950,   951,   952,   955,   956,   959,   960,
     963,   964,   966,   967,   971,   981,   986,   987,   988,   995,
     999,   999,  1007,  1008,  1009,  1010,  1011,  1020,  1021,  1022,
    1023,  1024,  1031,  1032,  1033,  1036,  1038,  1040,  1042,  1044,
    1048,  1049,  1050,  1051,  1052,  1053,  1057,  1058,  1059,  1062,
    1063,  1069,  1069,  1079,  1079,  1086,  1086
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_CONSTRAINT", "TOK_ITYPE",
  "TOK_MODULE", "TOK_PROCESS", "TOK_CONTEXT", "TOK_EU", "TOK_AU",
  "TOK_EBU", "TOK_ABU", "TOK_MINU", "TOK_MAXU", "TOK_VAR", "TOK_FROZENVAR",
  "TOK_IVAR", "TOK_FUN", "TOK_DEFINE", "TOK_ARRAY_DEFINE", "TOK_INIT",
  "TOK_TRANS", "TOK_INVAR", "TOK_SPEC", "TOK_CTLSPEC", "TOK_LTLSPEC",
  "TOK_COMPUTE", "TOK_NAME", "TOK_PSLSPEC", "TOK_CONSTANTS",
  "TOK_INVARSPEC", "TOK_FAIRNESS", "TOK_COMPASSION", "TOK_JUSTICE",
  "TOK_ISA", "TOK_ASSIGN", "TOK_OF", "TOK_CONS", "TOK_SEMI", "TOK_LP",
  "TOK_RP", "TOK_RB", "TOK_LCB", "TOK_RCB", "TOK_EQDEF", "TOK_TWODOTS",
  "TOK_SELF", "TOK_CASE", "TOK_ESAC", "TOK_COLON", "TOK_INCONTEXT",
  "TOK_SIMPWFF", "TOK_NEXTWFF", "TOK_LTLWFF", "TOK_LTLPSL", "TOK_CTLWFF",
  "TOK_COMPWFF", "TOK_COMPID", "TOK_ARRAY", "TOK_BOOLEAN", "TOK_WORD",
  "TOK_BOOL", "TOK_WORD1", "TOK_CONST_ARRAY", "TOK_WAREAD", "TOK_WAWRITE",
  "TOK_SIGNED", "TOK_UNSIGNED", "TOK_EXTEND", "TOK_UWCONST", "TOK_SWCONST",
  "TOK_WRESIZE", "TOK_WSIZEOF", "TOK_WTOINT", "TOK_COUNT", "TOK_TYPEOF",
  "TOK_ATOM", "TOK_FALSEEXP", "TOK_TRUEEXP", "TOK_NUMBER",
  "TOK_NUMBER_FRAC", "TOK_NUMBER_REAL", "TOK_NUMBER_EXP",
  "TOK_NUMBER_WORD", "TOK_ABS", "TOK_MIN", "TOK_MAX", "TOK_COMMA",
  "TOK_IMPLIES", "TOK_IFF", "TOK_OR", "TOK_XOR", "TOK_XNOR", "TOK_AND",
  "TOK_NOT", "TOK_QUESTIONMARK", "TOK_EX", "TOK_AX", "TOK_EF", "TOK_AF",
  "TOK_EG", "TOK_AG", "TOK_EE", "TOK_AA", "TOK_SINCE", "TOK_UNTIL",
  "TOK_TRIGGERED", "TOK_RELEASES", "TOK_EBF", "TOK_EBG", "TOK_ABF",
  "TOK_ABG", "TOK_BUNTIL", "TOK_MMIN", "TOK_MMAX", "TOK_OP_NEXT",
  "TOK_OP_GLOBAL", "TOK_OP_FUTURE", "TOK_OP_PREC", "TOK_OP_NOTPRECNOT",
  "TOK_OP_HISTORICAL", "TOK_OP_ONCE", "TOK_EQUAL", "TOK_NOTEQUAL",
  "TOK_LT", "TOK_GT", "TOK_LE", "TOK_GE", "TOK_UNION", "TOK_SETIN",
  "TOK_LSHIFT", "TOK_RSHIFT", "TOK_LROTATE", "TOK_RROTATE", "TOK_MOD",
  "TOK_PLUS", "TOK_MINUS", "TOK_TIMES", "TOK_DIVIDE", "TOK_NEXT",
  "TOK_SMALLINIT", "TOK_CONCATENATION", "TOK_LB", "TOK_DOT", "TOK_BIT",
  "$accept", "number", "integer", "number_word", "number_frac",
  "number_real", "number_exp", "subrange", "subrangetype", "constant",
  "primary_expr", "nfunc_expr", "primary_expr_type", "count_param_list",
  "case_element_list_expr", "case_element_expr", "concatination_expr_type",
  "concatination_expr", "multiplicative_expr_type", "multiplicative_expr",
  "additive_expr_type", "additive_expr", "shift_expr_type", "shift_expr",
  "set_expr", "set_list_expr", "union_expr", "in_expr", "relational_expr",
  "ctl_expr", "pure_ctl_expr", "ctl_and_expr", "ctl_or_expr",
  "ctl_iff_expr", "ctl_implies_expr", "ctl_basic_expr", "ltl_unary_expr",
  "pure_ltl_unary_expr", "ltl_binary_expr", "and_expr", "or_expr",
  "ite_expr", "iff_expr", "implies_expr", "basic_expr",
  "simple_expression", "next_expression", "ctl_expression",
  "ltl_expression", "compute_expression", "itype", "type",
  "type_value_list", "type_value", "complex_atom", "module_type",
  "next_list_expression", "module_list", "module", "module_sign",
  "atom_list", "declarations", "declaration", "var", "frozen_var",
  "input_var", "fun_def", "var_decl_list", "fvar_decl_list",
  "ivar_decl_list", "fun_decl_list", "var_decl", "fvar_decl", "ivar_decl",
  "fun_decl", "nfun_type", "nfun_ftype", "define_decls", "define_list",
  "define", "array_define", "array_define_list", "array_expression",
  "array_expression_list", "array_contents", "assign", "assign_list",
  "one_assign", "init", "invar", "trans", "fairness", "justice",
  "compassion", "_invarspec", "invarspec", "_ctlspec", "ctlspec",
  "_ltlspec", "ltlspec", "_compute", "compute", "pslspec", "constants",
  "constants_expression", "isa", "optsemi", "decl_var_id", "var_id",
  "command", "command_case", "context", "_simpwff", "begin", "$@1", "$@2",
  "$@3", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399
};
# endif

#define YYPACT_NINF -514

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-514)))

#define YYTABLE_NINF -334

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2555,    93,    79,  2563,  1671,  -514,    43,    79,  -514,    44,
    1671,  1998,  1671,  1671,  1671,  1671,  1671,  1671,  1671,   -39,
      25,  -514,  -514,  1671,  1671,  -514,  1671,    65,    85,   101,
     114,   144,   155,   158,   205,   219,   221,   236,   248,   250,
     262,  -514,  -514,  -514,    50,  -514,  -514,  -514,  -514,   266,
     282,   293,  1754,  1837,  1837,  1837,  1837,  1837,  1837,   -32,
     -10,   -30,   -30,   -30,   -30,  1671,  1091,  1174,  1671,  1671,
    1257,  1340,    55,  2238,   310,  -514,   206,  -514,  -514,  -514,
    -514,  -514,  -514,   319,  -514,   223,   231,   148,    -6,   166,
    -514,   252,   259,   187,  -514,  -514,  -514,  -514,   224,   304,
     188,  -514,   289,  -514,  -514,  -514,   376,  -514,  -514,  -514,
    -514,   378,   -13,  1509,  -514,   275,    19,    31,  -514,  2317,
     341,  2317,  -514,   223,   280,   165,   258,   105,   386,   387,
    -514,   388,   389,    35,  -514,    39,  -514,   183,  -514,  -514,
     184,  -514,   286,   287,   199,  -514,  -514,  -514,    -1,   390,
      38,  -514,   383,  1671,   384,  1671,  1671,   357,  1671,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,
    1671,  1671,   223,  -514,  -514,  1916,  -514,  -514,  -514,  -514,
    -514,  -514,  1837,  1837,  -514,   355,   356,  1837,  1837,  1837,
    1837,  -514,   359,  -514,   365,  -514,  -514,  -514,   366,  -514,
     367,  -514,   397,   403,   223,  1671,   -30,  1671,  1671,   102,
    2317,  2317,  2317,  2317,  2317,  2317,  2317,  2317,  2159,  2159,
    2159,  2159,  2159,  2159,  2159,  2159,  1671,  1671,  1671,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,    36,  2621,  -514,
    -514,  -514,  -514,  -514,    40,  -514,   308,  1998,   317,   427,
    1671,   323,   324,  -514,  2317,  2317,  2317,  2317,  2317,  2317,
    2317,  2317,  2317,  -514,  -514,  -514,  -514,  -514,   392,  -514,
     392,  -514,   392,  -514,   392,  -514,  1671,  1671,   392,  -514,
    -514,  1671,   167,  -514,  -514,  1671,  -514,  -514,  1671,   424,
     431,   433,   391,   393,   435,   436,   395,   409,   418,   419,
     437,   439,   467,   421,   470,   425,   426,  -514,   422,   234,
     307,  -514,   133,   135,  -514,  -514,  -514,  -514,  -514,  -514,
     429,   432,   438,   440,   471,  -514,  -514,    16,   473,   474,
     477,  -514,  -514,   319,   231,   231,   231,   148,   148,    -6,
      -6,  -514,   252,   259,   259,   259,   259,   259,   259,  -514,
    -514,  -514,  -514,   224,   304,   304,   304,   475,  -514,  -514,
    -514,  -514,    27,  -514,   444,   444,   444,   444,  -514,  -514,
    1671,  1671,  1671,   753,   838,   923,   118,  -514,   450,  1008,
    1671,   490,  1671,   454,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,   -13,   455,  -514,
    1671,  1998,   491,  1671,  1671,   223,   280,   280,   280,   119,
     119,   269,   258,   258,  -514,     4,     4,     4,     4,   446,
     447,     4,   494,  -514,  -514,  -514,   498,  -514,  -514,    25,
    1671,  1671,  -514,  -514,  1671,  2317,  2317,  1671,  -514,  -514,
    -514,  1671,  -514,  1671,  1671,  1837,  1837,  1837,  1837,  1837,
    1837,  1837,   -30,  1837,   -30,   458,   459,   460,   461,  -514,
    -514,  1671,  1671,  -514,  1671,  -514,   465,  -514,   469,  -514,
      64,   588,  -514,    82,  2404,  -514,    84,  2443,  -514,    86,
    2481,  2517,   504,   504,   504,    25,  -514,    25,  -514,    25,
    -514,    25,  -514,   308,    22,    25,  -514,   504,  1671,   504,
    -514,   322,  -514,  -514,   502,  -514,  -514,   507,   508,  1671,
     478,  -514,  -514,  -514,  -514,  1671,  1671,  -514,  -514,  -514,
      17,   510,   464,   513,     6,     8,   515,  -514,   516,   518,
    -514,   422,   422,   422,  -514,   234,   520,  1837,   521,  1837,
     523,   524,   525,   527,  -514,   529,  -514,  -514,  -514,  -514,
     674,   -18,   212,  -514,  -514,  1998,  -514,  -514,  1998,  -514,
    -514,  1998,  -514,  -514,     1,  -514,    34,  -514,  -514,  -514,
      46,    53,    56,    71,  -514,   450,    73,  -514,   472,  -514,
    -514,   532,   534,  -514,    77,   538,  -514,  -514,   535,  -514,
     536,   542,   497,  -514,  1671,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,   544,  -514,   545,  1671,  1671,  1671,  1671,  -514,
     142,  1509,   363,  -514,   549,  -514,   550,   511,  -514,  -514,
     554,   556,  -514,   557,   -26,  1423,   456,  1671,  1671,  1671,
     -39,   308,  1671,  1671,    25,    25,  1671,  1998,  -514,  -514,
    -514,  1671,   559,  -514,  -514,  -514,  -514,  -514,  -514,  2317,
     558,  -514,   560,  1588,  -514,  -514,   574,  -514,  -514,  -514,
    1998,  1998,  1423,   563,   586,   587,  -514,  -514,  -514,  -514,
    -514,   589,    28,    32,   592,  -514,   596,  -514,   590,  2080,
    -514,    29,  -514,  -514,  -514,   540,   553,   591,   600,  -514,
    -514,  -514,   504,   598,   599,  -514,  -514,   142,  -514,  -514,
    1671,   456,  -514,  -514,  -514,  1671,  1671,  -514,  -514,   606,
     607,  -514,  -514
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     335,     0,     0,     0,     0,     1,     0,   332,   189,   314,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   334,   312,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    13,    14,     2,     8,     9,    10,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,    20,    21,    23,
      22,    82,    27,    59,    25,    24,    65,    72,    78,    81,
      86,    88,    90,    97,   125,    98,   139,   126,   144,   146,
     150,   152,   154,   156,   160,   336,   192,   197,   190,   313,
     157,     0,     0,     0,   163,     0,     0,     0,     2,     0,
       0,     0,   167,    57,    61,    69,    75,     0,     0,     0,
     158,     0,     0,   300,   320,   300,   321,   300,   323,   159,
     300,   322,     0,     0,   300,   324,   308,   307,     0,     0,
       0,    84,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,   113,   138,     0,    99,   100,   101,   102,
     103,   104,     0,     0,     4,     0,     0,     0,     0,     0,
       0,   127,     0,   130,     0,   134,   128,   129,     0,   132,
       0,   136,     3,     2,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
     181,   179,   180,   178,     0,   175,   177,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   319,   315,   317,   316,   301,     0,   329,
       0,   276,     0,   286,     0,   280,     0,     0,     0,   290,
     325,     0,     0,    35,    83,     0,    47,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,   114,   116,   120,
     122,   124,     0,     0,     5,     6,   109,   111,   110,   112,
       0,     0,     0,     0,     0,    11,   187,     0,   157,     0,
       0,    31,    32,    60,    68,    66,    67,    73,    74,    79,
      80,    87,    89,    91,    92,    93,    94,    95,    96,   141,
     140,   143,   142,   145,   147,   148,   149,     0,   155,   153,
     193,   195,     0,   199,   220,   222,   224,   226,   248,   254,
       0,     0,     0,     0,     0,     0,     0,   294,   296,     0,
       0,     0,     0,     0,   264,   198,   201,   202,   203,   204,
     209,   210,   205,   206,   207,   208,   211,   212,   213,   214,
     215,   216,   218,   217,   219,   200,   168,     0,     0,   171,
       0,     0,     0,     0,     0,    58,    64,    62,    63,    70,
      71,    12,    76,    77,   326,   300,   300,   300,   300,     0,
       0,   300,     0,   309,   310,    85,     0,    40,    41,     0,
       0,     0,    43,    44,     0,     0,     0,     0,    17,    18,
      51,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      26,     0,     0,    33,     0,   194,     0,   302,     0,   228,
       0,     0,   231,     0,     0,   234,     0,     0,   237,     0,
       0,     0,   300,   300,   300,     0,   282,     0,   283,     0,
     288,     0,   292,   297,     0,     0,   278,   300,     0,   300,
     299,     0,   176,   182,     0,   170,   164,     0,     0,     0,
       0,   330,   277,   287,   281,     0,     0,   291,   311,    56,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
     115,   117,   118,   119,   123,   121,     0,     0,     0,     0,
       0,     0,     0,     0,   188,     0,   151,   196,   230,   229,
       0,     0,     0,   233,   232,     0,   236,   235,     0,   239,
     238,     0,   250,   249,     0,   256,     0,   270,   272,   271,
       0,     0,     0,     0,   295,     0,     0,   273,     0,   274,
     266,     0,     0,   265,     0,     0,   166,   165,     0,   327,
       0,     0,     0,    48,     0,    45,    15,    16,    46,    37,
      38,   106,     0,   105,     0,     0,     0,     0,     0,    34,
       0,     0,    29,   172,     0,   173,     0,     0,   303,   304,
       0,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,   328,   161,
     162,     0,     0,   108,   107,   131,   135,   133,   137,     0,
     183,   174,     0,     0,   240,   305,     0,   241,   242,   243,
       0,     0,     0,     0,     0,     0,   284,   285,   289,   293,
     279,     0,     0,     0,     0,   169,     0,    49,     0,     0,
     184,     0,   306,   244,   246,   262,   259,     0,     0,   251,
     252,   255,   300,     0,     0,   267,    50,     0,   186,   185,
       0,     0,   258,   257,   275,     0,     0,   261,   260,     0,
       0,   269,   268
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -514,  -514,  -107,  -514,  -514,  -514,  -514,   -23,  -112,  -514,
     441,  -514,     7,   195,   495,  -514,    78,   151,   145,   191,
     146,   193,   396,   -34,   442,  -514,   430,    95,  -514,    -3,
     -27,   -74,   190,  -514,   194,  -157,   -36,   605,   428,   154,
    -514,  -219,  -514,   434,    -4,     9,     2,  -249,   657,  -514,
      -8,  -514,  -514,   260,  -362,  -513,    10,  -514,   663,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    -514,   197,   198,   192,   185,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -222,   -40,   -29,  -514,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -371,  -514,  -330,  -514,  -369,  -514,
    -366,  -514,  -514,  -514,  -514,  -514,  -133,  -279,  -403,  -514,
    -514,   -22,  -514,  -514,  -514,  -514,  -514
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    75,    76,    77,    78,    79,    80,    81,   122,    82,
      83,    84,    85,   302,   152,   153,   124,    86,   125,    87,
     126,    88,   127,    89,    90,   150,    91,    92,    93,    94,
      95,   308,   309,   310,   311,   312,    96,    97,    98,    99,
     100,   101,   102,   103,   110,   111,   135,   140,   137,   144,
     515,   624,   244,   245,   246,   708,   327,     7,     8,   107,
     362,   238,   385,   386,   387,   388,   389,   478,   481,   484,
     487,   479,   482,   485,   488,   633,   634,   390,   490,   573,
     391,   491,   696,   697,   698,   392,   511,   593,   393,   394,
     395,   396,   397,   398,   136,   399,   141,   400,   138,   401,
     145,   402,   403,   404,   504,   405,   269,   480,   148,    21,
      22,   425,   134,     1,     2,     3,     4
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,   249,   271,   128,   273,   243,   500,   275,   506,   130,
     502,   279,   130,   104,   139,   131,   503,   359,   123,   149,
     151,   129,   154,   132,   133,   173,   313,   429,   430,   191,
     193,   195,   196,   197,   199,   201,   530,   280,   187,   188,
     189,   190,   267,   496,   498,   635,   606,   625,   607,   184,
     176,   177,   178,   179,   180,   181,   470,   602,   160,   172,
     584,   626,   670,   240,   241,   242,   184,   475,   703,   709,
     161,   146,   704,   267,   142,   143,   360,   267,   636,   251,
     204,   284,   109,   406,     6,   268,   483,   486,   489,   270,
     637,   252,   580,     5,   581,    -4,   582,   638,   583,   325,
     639,   147,   586,   471,   155,   185,   186,   661,   594,   585,
     182,   671,   361,   560,   476,   640,   471,   642,   627,   106,
     123,   646,   185,   186,   156,   285,   172,   407,   204,   214,
     215,   565,   183,   568,   202,   571,   216,   217,   216,   217,
     157,   281,   282,   561,   562,   501,   519,   520,   173,   154,
     260,   289,   290,   158,   292,   293,   294,   295,   296,   281,
     282,   299,   130,   130,   303,   304,   305,   306,   300,   301,
     281,   282,   297,   298,   281,   282,   561,   562,   331,   307,
     307,   332,   172,   159,   316,   317,   318,   319,   281,   282,
     349,   350,   351,   352,   160,   281,   282,   161,   281,   282,
     659,   324,   483,   130,   328,   486,   561,   562,   489,   326,
     330,   574,   576,   281,   282,   281,   282,   329,   660,   281,
     282,   267,   267,   641,   561,   562,   561,   562,   561,   562,
     357,   142,   143,   272,   274,   261,   262,   267,   461,   409,
     463,   682,   683,   433,   162,   462,   434,   464,   426,   278,
     427,   206,   428,   255,   123,   556,   431,   257,   163,   412,
     164,   415,   123,   123,   123,   123,   123,   123,   123,   123,
     678,   680,   139,   139,   679,   165,   600,   601,   231,   232,
     233,   435,   211,   234,   436,   212,   213,   166,   628,   167,
     432,   629,   521,   522,   523,   524,   216,   217,   527,   255,
     243,   168,   256,   257,   546,   169,   548,   676,   677,   220,
     221,   222,   223,   224,   225,   343,   344,   345,   346,   347,
     348,   170,  -263,   590,   456,   457,   458,  -263,   226,   227,
     228,   229,   171,   416,   417,   418,  -263,  -263,  -263,  -263,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,   205,
    -263,  -263,  -263,  -263,  -263,  -263,  -263,  -263,   207,   577,
     578,   579,   334,   335,   336,   208,   209,   130,   146,   139,
     139,   104,   210,   493,   587,   130,   589,   235,   236,   492,
     218,   494,   541,   542,   543,   354,   355,   356,   219,   507,
     612,   509,   614,   258,   259,   459,   460,   230,   147,   261,
     262,  -183,   663,   419,   420,   337,   338,   422,   423,   339,
     340,   534,   535,   674,   675,   237,   239,   250,   123,   514,
     253,   254,   517,   518,   263,   264,   265,   266,   276,   277,
     283,   286,   291,   288,   314,   315,   531,   532,   320,   547,
     533,   549,    -5,   536,   321,   322,   323,   303,    -6,   538,
     539,   408,   540,   307,   307,   307,   307,   307,   307,   410,
     307,   591,   592,   411,   437,   413,   414,   130,   424,  -221,
     558,   438,   439,   554,  -221,   442,   443,   448,   440,   449,
     441,   555,   444,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   445,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,   446,   447,   450,   451,   662,
     452,   469,   453,   454,  -158,   455,   465,   588,   473,   466,
     477,   139,   139,   472,   474,   467,   240,   468,   598,   508,
     510,   513,   516,   525,   526,   528,   529,   550,   551,   552,
     553,   557,   267,   595,   307,   477,   307,   688,   596,   597,
     603,   604,   623,   605,   599,   608,   609,   630,   610,   643,
     631,   611,   613,   632,   615,   616,   617,   123,   618,   714,
     619,   644,   123,   645,   647,   123,   648,   649,   123,   655,
     656,   657,   658,   650,   651,   653,   654,   664,  -223,   563,
     666,   665,   667,  -223,   668,   669,   689,   663,   672,   687,
     652,   699,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   692,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,   700,   701,   707,   710,   123,   702,
     705,   130,   712,   139,   139,   104,   706,   673,   130,   685,
     711,   713,   715,   716,   721,   722,   537,   686,   287,   342,
     545,   333,   681,   544,   123,   684,   421,   174,   353,   130,
     341,   105,   693,   694,   477,   326,   123,   512,   130,   358,
     108,   718,   570,   691,   695,   559,   567,   123,   123,   564,
     620,   717,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,   130,   695,    23,     0,     0,   112,   719,     0,     0,
      25,    26,     0,     0,     0,   720,     0,     0,     0,     0,
       0,     0,   621,   114,   115,    27,    28,    29,    30,    31,
     116,   117,    34,    35,    36,    37,    38,    39,    40,     0,
     622,    42,    43,   118,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,    24,     0,     0,     0,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   120,
     121,     0,     0,    74,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,   497,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    23,     0,     0,
      24,     0,     0,     0,    25,    26,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
     499,     0,     0,    65,    66,    67,    68,    69,    70,    71,
       0,     0,    23,     0,     0,    24,     0,     0,     0,    25,
      26,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,   505,     0,     0,    65,    66,
      67,    68,    69,    70,    71,     0,     0,    23,     0,     0,
      24,     0,     0,     0,    25,    26,     0,     0,    72,    73,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    23,     0,     0,    24,     0,     0,     0,
      25,    26,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,   192,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    23,     0,     0,    24,
       0,     0,     0,    25,    26,     0,     0,     0,     0,    72,
      73,     0,     0,    74,     0,     0,   194,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    23,
       0,     0,    24,     0,     0,     0,    25,    26,     0,     0,
       0,     0,    72,    73,     0,     0,    74,     0,     0,   198,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,    52,     0,    53,    54,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    23,     0,     0,    24,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    72,    73,     0,     0,    74,
       0,     0,   200,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
      54,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,   247,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    25,    26,     0,    72,    73,
       0,     0,    74,     0,     0,   672,     0,     0,     0,   248,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,   118,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   690,     0,
      24,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   121,     0,     0,    74,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    53,    54,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      23,     0,     0,    24,     0,     0,     0,    25,    26,     0,
       0,     0,     0,    72,    73,     0,     0,    74,     0,     0,
       0,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    23,     0,     0,     0,     0,     0,     0,
      25,    26,     0,     0,     0,     0,    72,    73,     0,     0,
      74,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,   118,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,    52,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    23,     0,     0,    24,
       0,     0,     0,    25,    26,     0,     0,     0,     0,   120,
     121,     0,     0,    74,     0,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,   175,     0,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,     0,     0,    74,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,   118,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
     175,     0,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
     112,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,   120,   121,     0,     0,    74,   113,   114,   115,    27,
      28,    29,    30,    31,   116,   117,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,   118,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,   112,     0,     0,     0,    25,    26,     0,     0,
       0,     0,     0,   120,   121,     0,     0,    74,   621,   114,
     115,    27,    28,    29,    30,    31,   116,   117,    34,    35,
      36,    37,    38,    39,    40,     0,   622,    42,    43,   118,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,    24,     0,     0,     0,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   121,     0,     0,    74,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    73,     0,     0,    74,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,   203,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   120,   121,     0,     0,    74,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,   118,    45,    46,    47,
      48,    49,    50,    51,  -225,   566,     0,     0,     0,  -225,
       0,   119,     0,     0,     0,     0,     0,     0,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,     0,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
       0,     0,     0,  -227,   569,     0,     0,     0,  -227,     0,
       0,     0,   120,   121,     0,     0,    74,  -227,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,
       0,  -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,     0,
     477,  -247,   572,     0,     0,     0,  -247,     0,     0,     0,
       0,     0,     0,     0,     0,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,     0,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -253,   575,   477,
       0,     0,  -253,     0,     0,     0,     0,     0,     0,     0,
       0,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,  -253,     0,  -253,  -253,  -253,  -253,  -253,
    -253,  -253,  -253,     0,     0,     0,  -333,   477,  -333,  -333,
    -331,     0,     0,     0,     9,     0,    10,    11,     0,     0,
       0,     0,     0,     0,     0,  -333,  -333,     0,     0,     0,
       0,     0,     0,    12,    13,     0,  -333,     0,     0,     0,
       0,     0,     0,   477,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -333,  -333,  -333,     0,
    -333,  -333,  -333,     0,    15,    16,    17,     0,    18,    19,
      20,  -191,   363,     0,     0,     0,  -191,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,     0,   377,
     378,   379,   380,   381,   382,   383,   384
};

static const yytype_int16 yycheck[] =
{
       4,   113,   135,    11,   137,   112,   375,   140,   379,    13,
     376,   144,    16,    17,    18,    13,   378,   236,    11,    23,
      24,    12,    26,    14,    15,    52,   183,   276,   277,    65,
      66,    67,    68,    69,    70,    71,   439,    38,    61,    62,
      63,    64,    38,   373,   374,    44,    40,   560,    40,    79,
      53,    54,    55,    56,    57,    58,    40,    40,    39,    52,
      38,    79,    88,    76,    77,    78,    79,    40,    40,    40,
      39,    46,    40,    38,   113,   114,    40,    38,    44,    60,
      73,    43,    38,    43,     5,    50,   365,   366,   367,    50,
      44,    60,   495,     0,   497,    45,   499,    44,   501,   206,
      44,    76,   505,    87,    39,   135,   136,   620,   511,    87,
     142,   137,    76,    49,    87,    44,    87,    44,   136,    76,
     113,    44,   135,   136,    39,    87,   119,    87,   121,   135,
     136,    49,   142,    49,    79,    49,   130,   131,   130,   131,
      39,   142,   143,   142,   143,    27,   142,   143,   175,   153,
      45,   155,   156,    39,   158,   159,   160,   161,   162,   142,
     143,   165,   166,   167,   168,   169,   170,   171,   166,   167,
     142,   143,   163,   164,   142,   143,   142,   143,    76,   182,
     183,    79,   175,    39,   187,   188,   189,   190,   142,   143,
     226,   227,   228,   229,    39,   142,   143,    39,   142,   143,
      58,   205,   481,   207,   208,   484,   142,   143,   487,   207,
     208,   490,   491,   142,   143,   142,   143,   208,    76,   142,
     143,    38,    38,   585,   142,   143,   142,   143,   142,   143,
     234,   113,   114,    50,    50,   130,   131,    38,   105,   247,
     105,   644,   645,    76,    39,   112,    79,   112,   270,    50,
     272,    45,   274,   134,   247,   474,   278,   138,    39,   250,
      39,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     639,   642,   276,   277,   640,    39,   525,   526,    90,    91,
      92,   285,   134,    95,   288,   137,   138,    39,    76,    39,
     281,    79,   425,   426,   427,   428,   130,   131,   431,   134,
     407,    39,   137,   138,   461,    39,   463,   637,   638,   122,
     123,   124,   125,   126,   127,   220,   221,   222,   223,   224,
     225,    39,     0,     1,    90,    91,    92,     5,   104,   105,
     106,   107,    39,   255,   256,   257,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    39,
      28,    29,    30,    31,    32,    33,    34,    35,    39,   492,
     493,   494,   211,   212,   213,   142,   143,   371,    46,   373,
     374,   375,   141,   371,   507,   379,   509,    88,    89,   370,
     128,   372,   456,   457,   458,   231,   232,   233,   129,   380,
     547,   382,   549,   135,   136,    88,    89,    93,    76,   130,
     131,    38,    39,   258,   259,   214,   215,   261,   262,   216,
     217,   445,   446,   635,   636,    39,    38,   142,   411,   410,
      79,   141,   413,   414,    38,    38,    38,    38,   142,   142,
      40,    48,    75,    49,    79,    79,   440,   441,    79,   462,
     444,   464,    45,   447,    79,    79,    79,   451,    45,   453,
     454,   143,   455,   456,   457,   458,   459,   460,   461,   142,
     463,   139,   140,    36,    40,   142,   142,   471,    76,     0,
       1,    40,    39,   471,     5,    40,    40,    40,    87,    40,
      87,   472,    87,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    87,    28,    29,    30,
      31,    32,    33,    34,    35,    87,    87,    40,    87,   621,
      40,    40,    87,    87,    41,    93,    87,   508,    41,    87,
      76,   525,   526,    49,    49,    87,    76,    87,   519,    39,
      76,    76,    41,    87,    87,    41,    38,    79,    79,    79,
      79,    76,    38,    41,   547,    76,   549,   659,    41,    41,
      40,    87,   560,    40,    76,    40,    40,   565,    40,    87,
     568,    41,    41,   571,    41,    41,    41,   560,    41,   702,
      41,    39,   565,    39,    36,   568,    41,    41,   571,   615,
     616,   617,   618,    41,    87,    41,    41,    38,     0,     1,
      79,    41,    38,     5,    38,    38,    36,    39,   142,    40,
     604,    38,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    41,    28,    29,    30,    31,
      32,    33,    34,    35,    38,    38,    36,    87,   621,    40,
      38,   635,    41,   637,   638,   639,    40,   635,   642,   647,
      87,    41,    44,    44,    38,    38,   451,   651,   153,   219,
     460,   210,   643,   459,   647,   646,   260,    52,   230,   663,
     218,     4,   670,   671,    76,   663,   659,   407,   672,   235,
       7,   711,   487,   663,   672,   478,   484,   670,   671,   481,
       6,   710,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   689,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   710,    -1,    -1,    -1,
      -1,   715,   710,    39,    -1,    -1,    42,   715,    -1,    -1,
      46,    47,    -1,    -1,    -1,   716,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,    -1,   139,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,   111,    27,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,   135,   136,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      27,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,   111,    27,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,   135,   136,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,
     139,    -1,    -1,   142,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,   135,
     136,    -1,    -1,   139,    -1,    -1,   142,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,   142,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,   109,
     110,   111,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,    39,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,
      -1,    -1,   142,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,   135,   136,
      -1,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,   135,
     136,    -1,    -1,   139,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,    -1,   139,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,   108,   109,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,    -1,   139,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,    -1,   139,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,    -1,   139,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     0,     1,    -1,    -1,    -1,     5,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,     0,     1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,   135,   136,    -1,    -1,   139,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      76,     0,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,     0,     1,    76,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,     1,    76,     3,     4,
       5,    -1,    -1,    -1,     1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    -1,    51,    52,    53,    -1,    55,    56,
      57,     0,     1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   258,   259,   260,   261,     0,     5,   202,   203,     1,
       3,     4,    20,    21,    31,    51,    52,    53,    55,    56,
      57,   254,   255,    39,    42,    46,    47,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    94,    96,    97,    98,    99,   100,   101,   102,
     103,   108,   109,   110,   111,   115,   116,   117,   118,   119,
     120,   121,   135,   136,   139,   146,   147,   148,   149,   150,
     151,   152,   154,   155,   156,   157,   162,   164,   166,   168,
     169,   171,   172,   173,   174,   175,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   193,    76,   204,   203,    38,
     189,   190,    42,    58,    59,    60,    66,    67,    79,    94,
     135,   136,   153,   157,   161,   163,   165,   167,   195,   190,
     189,   191,   190,   190,   257,   191,   239,   193,   243,   189,
     192,   241,   113,   114,   194,   245,    46,    76,   253,   189,
     170,   189,   159,   160,   189,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,   157,   175,   182,    94,   174,   174,   174,   174,
     174,   174,   142,   142,    79,   135,   136,   152,   152,   152,
     152,   181,   142,   181,   142,   181,   181,   181,   142,   181,
     142,   181,    79,    79,   157,    39,    45,    39,   142,   143,
     141,   134,   137,   138,   135,   136,   130,   131,   128,   129,
     122,   123,   124,   125,   126,   127,   104,   105,   106,   107,
      93,    90,    91,    92,    95,    88,    89,    39,   206,    38,
      76,    77,    78,   147,   197,   198,   199,    36,    60,   153,
     142,    60,    60,    79,   141,   134,   137,   138,   135,   136,
      45,   130,   131,    38,    38,    38,    38,    38,    50,   251,
      50,   251,    50,   251,    50,   251,   142,   142,    50,   251,
      38,   142,   143,    40,    43,    87,    48,   159,    49,   189,
     189,    75,   189,   189,   189,   189,   189,   190,   190,   189,
     191,   191,   158,   189,   189,   189,   189,   174,   176,   177,
     178,   179,   180,   180,    79,    79,   174,   174,   174,   174,
      79,    79,    79,    79,   189,   147,   191,   201,   189,   190,
     191,    76,    79,   155,   162,   162,   162,   164,   164,   166,
     166,   169,   171,   172,   172,   172,   172,   172,   172,   181,
     181,   181,   181,   183,   184,   184,   184,   189,   188,   186,
      40,    76,   205,     1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    28,    29,    30,
      31,    32,    33,    34,    35,   207,   208,   209,   210,   211,
     222,   225,   230,   233,   234,   235,   236,   237,   238,   240,
     242,   244,   246,   247,   248,   250,    43,    87,   143,   195,
     142,    36,   190,   142,   142,   157,   161,   161,   161,   163,
     163,   167,   165,   165,    76,   256,   256,   256,   256,   192,
     192,   256,   190,    76,    79,   189,   189,    40,    40,    39,
      87,    87,    40,    40,    87,    87,    87,    87,    40,    40,
      40,    87,    40,    87,    87,    93,    90,    91,    92,    88,
      89,   105,   112,   105,   112,    87,    87,    87,    87,    40,
      40,    87,    49,    41,    49,    40,    87,    76,   212,   216,
     252,   213,   217,   252,   214,   218,   252,   215,   219,   252,
     223,   226,   190,   191,   190,    27,   241,    27,   241,    27,
     243,    27,   245,   199,   249,    27,   239,   190,    39,   190,
      76,   231,   198,    76,   190,   195,    41,   190,   190,   142,
     143,   251,   251,   251,   251,    87,    87,   251,    41,    38,
     253,   189,   189,   189,   168,   168,   189,   158,   189,   189,
     174,   176,   176,   176,   179,   177,   180,   152,   180,   152,
      79,    79,    79,    79,   191,   190,   186,    76,     1,   216,
      49,   142,   143,     1,   217,    49,     1,   218,    49,     1,
     219,    49,     1,   224,   252,     1,   252,   251,   251,   251,
     253,   253,   253,   253,    38,    87,   253,   251,   190,   251,
       1,   139,   140,   232,   253,    41,    41,    41,   190,    76,
     192,   192,    40,    40,    87,    40,    40,    40,    40,    40,
      40,    41,   180,    41,   180,    41,    41,    41,    41,    41,
       6,    58,    76,   195,   196,   200,    79,   136,    76,    79,
     195,   195,   195,   220,   221,    44,    44,    44,    44,    44,
      44,   199,    44,    87,    39,    39,    44,    36,    41,    41,
      41,    87,   189,    41,    41,   181,   181,   181,   181,    58,
      76,   200,   153,    39,    38,    41,    79,    38,    38,    38,
      88,   137,   142,   191,   227,   227,   241,   241,   243,   245,
     239,   190,   253,   253,   190,   195,   189,    40,   153,    36,
      40,   201,    41,   195,   195,   191,   227,   228,   229,    38,
      38,    38,    40,    40,    40,    38,    40,    36,   200,    40,
      87,    87,    41,    41,   251,    44,    44,   229,   228,   191,
     190,    38,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   145,   146,   146,   147,   147,   147,   148,   149,   150,
     151,   152,   153,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   155,   155,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   158,   159,   159,   160,   161,   161,   162,
     162,   163,   163,   163,   163,   164,   164,   164,   164,   165,
     165,   165,   166,   166,   166,   167,   167,   167,   168,   168,
     168,   169,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   174,   174,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   177,   177,   177,   177,
     178,   178,   179,   179,   180,   181,   181,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   185,   185,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   190,   191,   192,
     193,   194,   194,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   196,   196,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   200,   200,   200,   201,   201,   202,
     202,   203,   204,   204,   204,   205,   205,   206,   206,   206,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   213,   213,   213,   214,   214,   214,   215,   215,   215,
     216,   217,   218,   219,   220,   221,   221,   222,   223,   223,
     223,   224,   224,   225,   226,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   231,   231,   231,   232,   232,   232,
     233,   234,   235,   236,   237,   238,   239,   239,   240,   240,
     241,   241,   242,   242,   242,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   248,   249,   249,   249,   250,
     251,   251,   252,   252,   252,   252,   252,   253,   253,   253,
     253,   253,   254,   254,   254,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   256,   256,   256,   257,
     257,   259,   258,   260,   258,   261,   258
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     1,     1,
       1,     3,     3,     1,     1,     6,     6,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     2,     1,
       1,     3,     3,     4,     6,     3,     4,     6,     6,     2,
       4,     4,     4,     4,     4,     6,     6,     3,     6,     8,
       9,     4,     1,     3,     1,     2,     4,     1,     3,     1,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       2,     2,     2,     2,     2,     6,     6,     7,     7,     3,
       3,     3,     3,     2,     1,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     1,     1,     1,     2,     2,     2,
       2,     7,     2,     7,     2,     7,     2,     7,     2,     1,
       3,     3,     3,     3,     1,     3,     1,     3,     3,     3,
       1,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     6,     6,     1,     4,     5,     5,     1,     3,     7,
       4,     3,     1,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     3,     4,     4,     1,     3,     1,
       2,     3,     1,     3,     4,     1,     3,     0,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       4,     4,     4,     4,     3,     1,     3,     2,     0,     2,
       2,     4,     4,     2,     0,     5,     2,     3,     3,     1,
       3,     3,     1,     2,     0,     2,     2,     4,     7,     7,
       3,     3,     3,     3,     3,     7,     2,     4,     2,     5,
       2,     4,     2,     2,     5,     5,     2,     4,     2,     5,
       2,     4,     2,     5,     1,     3,     0,     1,     3,     2,
       0,     1,     1,     3,     3,     4,     5,     1,     1,     3,
       3,     4,     1,     2,     1,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     3,     1,     3,     4,     2,
       4,     0,     2,     0,     2,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 3:
#line 253 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2390 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 5:
#line 257 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2396 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 6:
#line 259 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {node_int_setcar((yyvsp[0].node), -(node_get_int((yyvsp[0].node)))); (yyval.node) = (yyvsp[0].node);}
#line 2402 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 11:
#line 272 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, TWODOTS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 2408 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 12:
#line 276 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, TWODOTS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 2414 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 15:
#line 282 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, UWCONST, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2420 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 284 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SWCONST, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2426 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 286 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, WSIZEOF, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2432 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 18:
#line 288 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, CAST_TOINT, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2438 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 292 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                 nusmv_yyerror("fractional constants are not supported.");
                 YYABORT;
               }
#line 2447 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 297 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                 nusmv_yyerror("exponential constants are not supported.");
                 YYABORT;
               }
#line 2456 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 302 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                 nusmv_yyerror("real constants are not supported.");
                 YYABORT;
               }
#line 2465 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 311 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                 nusmv_yyerror("functions are not supported.");
                 YYABORT;
               }
#line 2474 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 318 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                    int ntype = node_get_type((yyvsp[-3].node));
                    if (ATOM != ntype && DOT != ntype && SELF != ntype) {
                      nusmv_yyerror_lined("incorrect DOT expression", (yyvsp[-2].lineno));
                      YYABORT;
                    }
                (yyval.node) = new_lined_node(NODEMGR, NFUNCTION, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));
               }
#line 2487 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 338 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, UMINUS, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2493 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 340 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, SELF,Nil,Nil);}
#line 2499 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 342 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                    int ntype = node_get_type((yyvsp[-2].node));
                    if (ATOM != ntype && DOT != ntype && ARRAY != ntype && SELF != ntype) {
                      nusmv_yyerror_lined("incorrect DOT expression", (yyvsp[-1].lineno));
                      YYABORT;
                    }
                    (yyval.node) = new_lined_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)) ;
                  }
#line 2512 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 351 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                   int ntype = node_get_type((yyvsp[-2].node));
                   if (ATOM != ntype && DOT != ntype && ARRAY != ntype && SELF != ntype) {
                     nusmv_yyerror_lined("incorrect DOT expression", (yyvsp[-1].lineno));
                     YYABORT;
                   }
                   (yyval.node) = new_lined_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)) ;
                  }
#line 2525 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 360 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                   /* array may have any expression on the left.
                      The type check will detect any problems */
                   (yyval.node) = new_lined_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));
                  }
#line 2535 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 366 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                    (yyval.node) = new_lined_node(NODEMGR, BIT_SELECTION, (yyvsp[-5].node),
                                        new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno)), (yyvsp[-4].lineno));
                  }
#line 2544 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 370 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2550 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 371 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { /* abs(a) := (a >= 0) ? a : - a */
                                                      node_ptr zero = new_lined_node(NODEMGR, NUMBER, NODE_FROM_INT((int)(0)), Nil, (yyvsp[-3].lineno));
                                                      node_ptr cond = new_lined_node(NODEMGR, GE, (yyvsp[-1].node), zero, (yyvsp[-3].lineno));
                                                      node_ptr minus_a = new_lined_node(NODEMGR, UMINUS, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno));
                                                      (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, cond, (yyvsp[-1].node), (yyvsp[-3].lineno)), minus_a, (yyvsp[-3].lineno)); ; }
#line 2560 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 37:
#line 376 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { /* MIN(a,b) := a < b ? a : b */
                                                                           node_ptr cond = new_lined_node(NODEMGR, LT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno));
                                                                           (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, cond, (yyvsp[-3].node), (yyvsp[-5].lineno)), (yyvsp[-1].node), (yyvsp[-5].lineno)); ; }
#line 2568 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 38:
#line 379 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { /* MAX(a,b) := a < b ? b : a */
                                                                           node_ptr cond = new_lined_node(NODEMGR, LT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno));
                                                                           (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, cond, (yyvsp[-1].node), (yyvsp[-5].lineno)), (yyvsp[-3].node), (yyvsp[-5].lineno)); ;}
#line 2576 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 39:
#line 382 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2582 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 383 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, CAST_BOOL, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2588 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 384 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, CAST_WORD1, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2594 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 385 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, NEXT, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2600 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 386 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, CAST_SIGNED, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2606 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 387 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, CAST_UNSIGNED, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno)); }
#line 2612 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 388 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EXTEND, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2618 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 389 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, WRESIZE, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2624 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 390 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2630 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 394 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, WAREAD, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2636 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 397 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, WAWRITE, (yyvsp[-5].node), new_node(NODEMGR, WAWRITE, (yyvsp[-3].node), (yyvsp[-1].node)), (yyvsp[-6].lineno)); }
#line 2642 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 399 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, CONST_ARRAY, new_node(NODEMGR, TYPEOF, (yyvsp[-4].node), Nil), (yyvsp[-1].node), (yyvsp[-8].lineno)); }
#line 2648 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 401 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, COUNT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 2654 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 405 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil); }
#line 2660 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 406 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = cons(NODEMGR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2666 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 411 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
               const ErrorMgr_ptr errmgr =
                 ERROR_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_ERROR_MANAGER));
               node_ptr fail =
                 ErrorMgr_failure_make(errmgr,
                                       "case conditions are not exhaustive",
                                       FAILURE_CASE_NOT_EXHAUSTIVE,
                                       nusmv_yylineno);
               (yyval.node) = new_node(NODEMGR, CASE, (yyvsp[0].node), fail);
             }
#line 2681 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 421 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_node(NODEMGR, CASE, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 2687 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 426 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = build_case_colon_node((yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2693 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 432 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, CONCATENATION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2699 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 438 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, CONCATENATION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2705 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 62:
#line 444 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, TIMES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2711 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 445 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, DIVIDE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2717 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 446 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, MOD, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2723 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 451 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, TIMES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2729 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 452 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, DIVIDE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2735 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 453 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, MOD, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2741 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 70:
#line 459 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, PLUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2747 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 460 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, MINUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2753 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 466 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, PLUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2759 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 467 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, MINUS, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2765 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 471 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, LSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2771 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 472 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, RSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2777 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 79:
#line 476 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, LSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2783 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 80:
#line 477 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, RSHIFT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2789 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 485 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2795 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 489 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, UNION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 2801 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 87:
#line 494 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, UNION, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2807 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 498 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, SETIN, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2813 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 503 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EQUAL, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2819 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 504 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, NOTEQUAL, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2825 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 505 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, LT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2831 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 506 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, GT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2837 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 95:
#line 507 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, LE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2843 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 96:
#line 508 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, GE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2849 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 99:
#line 516 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EX, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2855 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 100:
#line 517 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, AX, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2861 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 101:
#line 518 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EF, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2867 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 102:
#line 519 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, AF, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2873 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 103:
#line 520 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EG, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2879 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 521 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, AG, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2885 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 523 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, AU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2891 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 525 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 2897 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 527 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, ABU, new_lined_node(NODEMGR, AU, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-6].lineno)), (yyvsp[-2].node), (yyvsp[-6].lineno)); }
#line 2903 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 108:
#line 529 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EBU, new_lined_node(NODEMGR, EU, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-6].lineno)), (yyvsp[-2].node), (yyvsp[-6].lineno)); }
#line 2909 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 109:
#line 530 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EBF, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2915 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 531 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, ABF, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2921 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 532 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EBG, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2927 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 112:
#line 533 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, ABG, (yyvsp[0].node), (yyvsp[-1].node), (yyvsp[-2].lineno)); }
#line 2933 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 536 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 2939 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 543 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, AND, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2945 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 547 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, OR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2951 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 118:
#line 548 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, XOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2957 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 119:
#line 549 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, XNOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2963 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 553 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, IFF, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2969 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 123:
#line 558 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, IMPLIES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 2975 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 127:
#line 571 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_NEXT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2981 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 128:
#line 572 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_PREC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2987 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 129:
#line 573 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_NOTPRECNOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2993 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 130:
#line 574 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_GLOBAL, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 2999 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 131:
#line 576 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_GLOBAL, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 3005 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 132:
#line 577 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_HISTORICAL, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3011 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 133:
#line 579 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_HISTORICAL, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 3017 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 134:
#line 580 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_FUTURE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3023 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 135:
#line 582 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_FUTURE, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 3029 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 136:
#line 583 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_ONCE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3035 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 137:
#line 585 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, OP_ONCE, (yyvsp[0].node), new_lined_node(NODEMGR, TWODOTS, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-6].lineno)), (yyvsp[-6].lineno));}
#line 3041 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 138:
#line 587 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, (yyvsp[-1].lineno)); }
#line 3047 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 140:
#line 596 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, UNTIL, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 3053 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 141:
#line 598 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SINCE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 3059 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 142:
#line 600 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, NOT,
                           new_lined_node(NODEMGR, UNTIL,
                             new_lined_node(NODEMGR, NOT, (yyvsp[-2].node), Nil, node_get_lineno((yyvsp[-2].node))),
                             new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, node_get_lineno((yyvsp[0].node))),
                             (yyvsp[-1].lineno)), Nil, (yyvsp[-1].lineno));
                  }
#line 3070 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 143:
#line 607 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, NOT,
                          new_lined_node(NODEMGR, SINCE,
                              new_lined_node(NODEMGR, NOT, (yyvsp[-2].node), Nil, node_get_lineno((yyvsp[-2].node))),
                              new_lined_node(NODEMGR, NOT, (yyvsp[0].node), Nil, node_get_lineno((yyvsp[0].node))),
                              (yyvsp[-1].lineno)), Nil, (yyvsp[-1].lineno));
                  }
#line 3081 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 145:
#line 617 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, AND, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3087 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 147:
#line 622 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, OR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3093 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 148:
#line 623 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, XOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3099 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 149:
#line 624 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, XNOR,(yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3105 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 151:
#line 629 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, IFTHENELSE, new_lined_node(NODEMGR, COLON, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-3].lineno)), (yyvsp[0].node), (yyvsp[-3].lineno)); }
#line 3111 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 153:
#line 634 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, IFF, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3117 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 155:
#line 639 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, IMPLIES, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno)); }
#line 3123 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 157:
#line 650 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {if (!isCorrectExp((yyval.node), EXP_SIMPLE)) YYABORT;}
#line 3129 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 158:
#line 653 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {if (!isCorrectExp((yyval.node), EXP_NEXT)) YYABORT;}
#line 3135 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 159:
#line 656 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {if (!isCorrectExp((yyval.node), EXP_CTL)) YYABORT;}
#line 3141 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 160:
#line 659 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {if (!isCorrectExp((yyval.node), EXP_LTL)) YYABORT;}
#line 3147 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 161:
#line 664 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, MINU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 3153 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 162:
#line 666 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, MAXU, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-5].lineno)); }
#line 3159 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 163:
#line 674 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, BOOLEAN, Nil, Nil);}
#line 3165 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 164:
#line 676 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, UNSIGNED_WORD, (yyvsp[-1].node), Nil, (yyvsp[-3].lineno));}
#line 3171 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 165:
#line 678 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, UNSIGNED_WORD, (yyvsp[-1].node), Nil, (yyvsp[-4].lineno));}
#line 3177 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 166:
#line 680 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SIGNED_WORD, (yyvsp[-1].node), Nil, (yyvsp[-4].lineno));}
#line 3183 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 168:
#line 683 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SCALAR, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3189 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 169:
#line 685 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, WORDARRAY_TYPE, (yyvsp[-3].node), (yyvsp[0].node), (yyvsp[-6].lineno));}
#line 3195 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 170:
#line 687 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, ARRAY_TYPE, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].lineno));}
#line 3201 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 171:
#line 689 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {nusmv_yyerror("unbounded arrays are not supported.");
                   YYABORT;
                  }
#line 3209 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 174:
#line 697 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, PROCESS, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3215 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 175:
#line 700 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), Nil); free_node(NODEMGR, (yyvsp[0].node));}
#line 3221 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 176:
#line 701 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), (yyvsp[-2].node)); free_node(NODEMGR, (yyvsp[0].node));}
#line 3227 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 182:
#line 711 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].lineno));}
#line 3233 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 183:
#line 714 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[0].node), Nil);}
#line 3239 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 184:
#line 715 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[-2].node), Nil);}
#line 3245 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 185:
#line 717 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, MODTYPE, (yyvsp[-3].node), (yyvsp[-1].node), node_get_lineno((yyvsp[-3].node)));}
#line 3251 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 186:
#line 719 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                    /* $$ = new_lined_node(NODEMGR, ARRAY, $2, $4, $1); */
                    /* array of modules is not supported any more.
                       NOTE: In future if there are some syntact conflicts
                       this case can be removed */
                    nusmv_yyerror_lined("array of modules is no supported", (yyvsp[-3].lineno));
                    YYABORT;
                  }
#line 3264 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 187:
#line 730 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node),Nil);}
#line 3270 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 188:
#line 731 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-2].node));}
#line 3276 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 189:
#line 743 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3282 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 190:
#line 744 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3288 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 191:
#line 748 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, MODULE, (yyvsp[-1].node), (yyvsp[0].node), (yyvsp[-2].lineno));}
#line 3294 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 192:
#line 750 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[0].node), Nil);}
#line 3300 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 193:
#line 751 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[-2].node), Nil);}
#line 3306 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 194:
#line 753 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, MODTYPE, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 3312 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 195:
#line 755 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), Nil); free_node(NODEMGR, (yyvsp[0].node));}
#line 3318 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 196:
#line 756 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, find_atom(NODEMGR, (yyvsp[0].node)), (yyvsp[-2].node)); free_node(NODEMGR, (yyvsp[0].node));}
#line 3324 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 197:
#line 761 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = Nil;}
#line 3330 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 198:
#line 762 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3336 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 199:
#line 763 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3342 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 220:
#line 794 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, VAR, Nil, Nil, (yyvsp[0].lineno));}
#line 3348 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 221:
#line 795 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, VAR, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3354 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 222:
#line 798 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, FROZENVAR, Nil, Nil, (yyvsp[0].lineno));}
#line 3360 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 223:
#line 799 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, FROZENVAR, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3366 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 224:
#line 802 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, IVAR, Nil, Nil, (yyvsp[0].lineno));}
#line 3372 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 225:
#line 803 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, IVAR, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3378 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 226:
#line 805 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                 nusmv_yyerror("functions definitions are not supported.");
                 YYABORT;
               }
#line 3387 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 227:
#line 809 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                 nusmv_yyerror("functions definitions are not supported.");
                 YYABORT;
               }
#line 3396 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 228:
#line 815 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3402 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 229:
#line 816 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3408 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 230:
#line 817 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3414 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 231:
#line 819 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3420 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 232:
#line 820 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3426 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 233:
#line 821 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3432 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 234:
#line 823 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3438 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 235:
#line 824 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3444 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 236:
#line 825 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3450 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 237:
#line 827 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3456 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 238:
#line 828 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3462 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 239:
#line 829 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3468 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 240:
#line 832 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3474 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 241:
#line 834 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3480 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 242:
#line 836 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3486 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 243:
#line 838 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COLON, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3492 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 244:
#line 841 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, NFUNCTION_TYPE, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3498 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 245:
#line 845 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil); }
#line 3504 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 246:
#line 846 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-2].node)); }
#line 3510 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 247:
#line 851 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, DEFINE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3516 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 248:
#line 853 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = Nil;}
#line 3522 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 249:
#line 854 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-1].node));}
#line 3528 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 250:
#line 855 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3534 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 251:
#line 859 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3540 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 252:
#line 861 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));
                                 /* Note that array-define is declared
                                    as normal define.
                                    Then compile_instantiate in compileFlatten.c
                                    distinguish them by detecting
                                    ARRAY_DEF on right hand side.
                                   */
                                 }
#line 3553 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 253:
#line 873 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, DEFINE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3559 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 254:
#line 877 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = Nil;}
#line 3565 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 255:
#line 878 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno)), (yyvsp[-4].node));}
#line 3571 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 256:
#line 879 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3577 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 257:
#line 883 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) =  new_lined_node(NODEMGR, ARRAY_DEF, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3583 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 258:
#line 884 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) =  new_lined_node(NODEMGR, ARRAY_DEF, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3589 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 259:
#line 888 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3595 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 260:
#line 889 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3601 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 261:
#line 893 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3607 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 262:
#line 894 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node),Nil);}
#line 3613 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 263:
#line 898 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, ASSIGN, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3619 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 264:
#line 900 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = Nil;}
#line 3625 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 265:
#line 901 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, AND, (yyvsp[-1].node), (yyvsp[0].node));}
#line 3631 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 266:
#line 902 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { SYNTAX_ERROR_HANDLING((yyval.node), (yyvsp[-1].node)); }
#line 3637 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 267:
#line 905 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, EQDEF, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[-2].lineno));}
#line 3643 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 268:
#line 907 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EQDEF,
                                        new_lined_node(NODEMGR, SMALLINIT, (yyvsp[-4].node), Nil, (yyvsp[-6].lineno)),
                                        (yyvsp[-1].node), (yyvsp[-2].lineno));
                  }
#line 3652 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 269:
#line 912 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new_lined_node(NODEMGR, EQDEF,
                                        new_lined_node(NODEMGR, NEXT, (yyvsp[-4].node), Nil, (yyvsp[-6].lineno)),
                                        (yyvsp[-1].node), (yyvsp[-2].lineno));
                  }
#line 3661 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 270:
#line 919 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, INIT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3667 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 271:
#line 921 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, INVAR, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3673 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 272:
#line 923 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, TRANS, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3679 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 273:
#line 927 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, JUSTICE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3685 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 274:
#line 930 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, JUSTICE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3691 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 275:
#line 935 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COMPASSION, cons(NODEMGR, (yyvsp[-4].node),(yyvsp[-2].node)), Nil, (yyvsp[-6].lineno));}
#line 3697 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 276:
#line 939 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3703 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 277:
#line 940 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3709 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 278:
#line 942 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, INVARSPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3715 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 279:
#line 943 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, INVARSPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3721 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 280:
#line 946 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3727 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 281:
#line 947 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3733 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 282:
#line 949 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3739 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 283:
#line 950 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3745 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 284:
#line 951 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3751 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 285:
#line 952 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3757 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 286:
#line 955 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3763 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 287:
#line 956 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3769 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 288:
#line 959 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, LTLSPEC, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3775 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 289:
#line 960 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, LTLSPEC, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3781 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 290:
#line 963 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3787 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 291:
#line 964 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 3793 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 292:
#line 966 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COMPUTE, (yyvsp[0].node), Nil, (yyvsp[-1].lineno));}
#line 3799 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 293:
#line 967 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COMPUTE, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].lineno));}
#line 3805 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 294:
#line 972 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
  if (nusmv_parse_psl() != 0) {
    YYABORT;
  }
  (yyval.node) = new_lined_node(NODEMGR, PSLSPEC, psl_parsed_tree, psl_property_name, (yyvsp[0].lineno));
  psl_property_name = Nil;
}
#line 3817 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 295:
#line 982 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, CONSTANTS, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3823 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 296:
#line 986 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = Nil;}
#line 3829 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 297:
#line 987 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = cons(NODEMGR, (yyvsp[0].node), Nil);}
#line 3835 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 298:
#line 988 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = cons(NODEMGR, (yyvsp[0].node), (yyvsp[-2].node));}
#line 3841 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 299:
#line 995 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, ISA, (yyvsp[0].node), Nil);}
#line 3847 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 301:
#line 999 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {}
#line 3853 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1008 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3859 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1009 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3865 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1010 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 3871 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1012 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { node_ptr tmp = new_lined_node(NODEMGR, NUMBER,
                                                      PTR_FROM_INT(node_ptr, -node_get_int((yyvsp[-1].node))),
                                                      Nil,
                                                      (yyvsp[-2].lineno));
                        (yyval.node) = new_node(NODEMGR, ARRAY, (yyvsp[-4].node), tmp);
                      }
#line 3882 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1021 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, SELF,Nil,Nil);}
#line 3888 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1022 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3894 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1023 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 3900 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1024 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 3906 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1031 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 3912 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1032 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {return(1);}
#line 3918 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1033 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {return(1);}
#line 3924 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1037 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, INIT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3930 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1039 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, JUSTICE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3936 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1041 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, TRANS, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3942 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1043 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, CONSTRAINT, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3948 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1045 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, ITYPE, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3954 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1048 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, SIMPWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3960 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1049 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, NEXTWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3966 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1050 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, CTLWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3972 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1051 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, LTLWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3978 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1052 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COMPWFF, node2maincontext((yyvsp[0].node)), Nil, (yyvsp[-1].lineno));}
#line 3984 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1053 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_lined_node(NODEMGR, COMPID, (yyvsp[-1].node), Nil, (yyvsp[-2].lineno));}
#line 3990 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1057 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = find_atom(NODEMGR, (yyvsp[0].node)); free_node(NODEMGR, (yyvsp[0].node)); }
#line 3996 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1058 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = find_node(NODEMGR, DOT, (yyvsp[-2].node), (yyvsp[0].node));}
#line 4002 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1059 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = find_node(NODEMGR, ARRAY, (yyvsp[-3].node), (yyvsp[-1].node));}
#line 4008 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1062 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4014 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1063 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {(yyval.node) = new_node(NODEMGR, CONTEXT, (yyvsp[-1].node), (yyvsp[-3].node));}
#line 4020 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1069 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
  if (PARSE_MODULES != parse_mode_flag) {
    nusmv_yyerror("unexpected MODULE definition encountered during parsing");
    YYABORT;
  }
}
#line 4031 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1076 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                  parsed_tree = (yyvsp[0].node);
                }
#line 4039 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1079 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                  if (PARSE_COMMAND != parse_mode_flag) {
                    nusmv_yyerror("unexpected command encountered during parsing");
                    YYABORT;
                  }
                }
#line 4050 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1085 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {parsed_tree = (yyvsp[0].node);}
#line 4056 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1086 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {
                  if (PARSE_LTL_EXPR != parse_mode_flag){
                    nusmv_yyerror("unexpected expression encountered during parsing");
                    YYABORT;
                  }
                }
#line 4067 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1092 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1646  */
    {parsed_tree = (yyvsp[0].node);}
#line 4073 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
    break;


#line 4077 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1095 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/grammar.y" /* yacc.c:1906  */

  /* BEGINS: grammar.y.3.50 */
/***************************************************************  -*-C-*-  ***/

/* Additional source code */

/* outputs the current token with the provided string and then may terminate */
void nusmv_yyerror(char *s)
{
  /* In the input.l file we explicity tell flex that we want a pointer
     (see man flex -> %pointer). So we don't need to check if nusmv_yytext
     is declared as pointer or as array  */
  extern char* nusmv_yytext;
  extern int nusmv_yylineno;
  const OptsHandler_ptr opmgr = GET_OPTS;
  const ErrorMgr_ptr errmgr =
    ERROR_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_ERROR_MANAGER));
  const StreamMgr_ptr streams =
    STREAM_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_STREAM_MANAGER));

  parser_add_syntax_error(__nusmv_parser_env__, get_input_file(opmgr), nusmv_yylineno, nusmv_yytext, s);
  if (!OptsHandler_get_bool_option_value(opmgr, OPT_PARSER_IS_LAX)) {
    ErrorMgr_start_parsing_err(errmgr);
    StreamMgr_print_error(streams,  "at token \"%s\": %s\n", nusmv_yytext, s);
    if (opt_batch(opmgr)) { ErrorMgr_finish_parsing_err(errmgr); }
  }
}

/* the same as yyerror, except at first it sets the line number and does
 not output the current token
*/
void nusmv_yyerror_lined(const char *s, int line)
{
  extern char* nusmv_yytext;
  extern int nusmv_yylineno;
  const OptsHandler_ptr opmgr = GET_OPTS;
  const ErrorMgr_ptr errmgr =
    ERROR_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_ERROR_MANAGER));
  const StreamMgr_ptr streams =
    STREAM_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_STREAM_MANAGER));

  /*set the line number */
  nusmv_yylineno = line;

  parser_add_syntax_error(__nusmv_parser_env__, get_input_file(opmgr), line, nusmv_yytext, s);
  if (!OptsHandler_get_bool_option_value(opmgr, OPT_PARSER_IS_LAX)) {
    ErrorMgr_start_parsing_err(errmgr);
    StreamMgr_print_error(streams,  ": %s\n", s);
    if (opt_batch(opmgr)) { ErrorMgr_finish_parsing_err(errmgr); }
  }
}

int nusmv_yywrap()
{
  return(1);
}


/* Given a node (possibly a relative or absolute context)
   constructs a node that is contextualized absolutely
   (i.e. relatively to main module). This is used to construct
   context of properties that have to be instatiated in main
   module */
static node_ptr node2maincontext(node_ptr node)
{
  node_ptr ctx;

  if (node_get_type(node) == CONTEXT) {
    /* already a context */
    ctx = CompileFlatten_concat_contexts(__nusmv_parser_env__, Nil, car(node));
    return find_node(NODEMGR, CONTEXT, ctx, cdr(node));
  }

  /* an atom, array or dot */
  return find_node(NODEMGR, CONTEXT, Nil, node);
}

/* This functions build the COLON node for case expressions.  If
   backward compatibility is enabled, and the condition expression is
   found to be the constant "1", then a warning is printed and the
   condition is replaced with TRUE. */
static node_ptr build_case_colon_node(node_ptr l,
                                      node_ptr r,
                                      int linum)
{
  const OptsHandler_ptr opts = GET_OPTS;
  const StreamMgr_ptr streams =
    STREAM_MGR(NuSMVEnv_get_value(__nusmv_parser_env__, ENV_STREAM_MANAGER));

  node_ptr res;

  static int user_warned = 0;

  if (opt_backward_comp(opts) &&
      (NUMBER == node_get_type(l)) && (1 == NODE_TO_INT(car(l)))) {

    /* Print this warning only once. */
    if (!user_warned) {
      StreamMgr_print_error(streams,
              "\nWARNING *** Option backward_compatibility (-old) is deprecate ***\n");
      StreamMgr_print_error(streams,
              "WARNING *** and will no longer be supported in future NuSMV versions. ***\n\n");
      user_warned = 1;
    }

    StreamMgr_print_error(streams,  "WARNING (");

    if (get_input_file(opts)) {
      StreamMgr_print_error(streams,  "file %s", get_input_file(opts));
    }
    else StreamMgr_print_error(streams,  "file stdin");

    StreamMgr_print_error(streams,
            ", line %d) : Deprecated use of \"1\" for case condition\n", linum);

    res = new_lined_node(NODEMGR, COLON, new_node(NODEMGR, TRUEEXP, Nil, Nil), r, linum);
  }
  else {
    res = new_lined_node(NODEMGR, COLON, l, r, linum);
  }

  return res;
}

/* this functions checks that the expression is formed syntactically correct.
   Takes the expression to be checked, the expected kind of the
   expression. Returns true if the expression is formed correctly, and
   false otherwise.
   See enum EXP_KIND for more info about syntactic well-formedness.
*/
static boolean isCorrectExp(node_ptr exp, enum EXP_KIND expectedKind)
{
  switch(node_get_type(exp))
    {
      /* atomic expression (or thier operands have been checked earlier) */
    case FAILURE:
    case FALSEEXP:
    case TRUEEXP:
    case NUMBER:
    case NUMBER_UNSIGNED_WORD:
    case NUMBER_SIGNED_WORD:
    case NUMBER_FRAC:
    case NUMBER_REAL:
    case NUMBER_EXP:
    case UWCONST:
    case SWCONST:
    case TWODOTS:
    case DOT:
    case ATOM:
    case SELF:
    case ARRAY:
    case COUNT:
      return true;

      /* unary operators incompatible with LTL and CTL operator */
    case CAST_BOOL:
    case CAST_WORD1:
    case CAST_SIGNED:
    case CAST_UNSIGNED:
    case WSIZEOF:
    case CAST_TOINT:
    case TYPEOF:
      if (EXP_CTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_SIMPLE);
      }
      else if (EXP_LTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_NEXT);
      }

      FALLTHROUGH

      /* unary operators compatible with LTL and CTL operator */
    case NOT:
    case UMINUS:
      return isCorrectExp(car(exp), expectedKind);

      /* binary opertors incompatible with LTL and CTL operator */
    case BIT_SELECTION:
    case CASE: case COLON:
    case CONCATENATION:
    case TIMES: case DIVIDE: case PLUS :case MINUS: case MOD:
    case LSHIFT: case RSHIFT: case LROTATE: case RROTATE:
    case WAREAD: case WAWRITE: /* AC ADDED THESE */
    case UNION: case SETIN:
    case EQUAL: case NOTEQUAL: case LT: case GT: case LE: case GE:
    case IFTHENELSE:
    case EXTEND:
    case WRESIZE:
    case CONST_ARRAY: /* AI ADDED */
      if (EXP_CTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_SIMPLE)
          && isCorrectExp(cdr(exp), EXP_SIMPLE);
      }
      else if (EXP_LTL == expectedKind) {
        return isCorrectExp(car(exp), EXP_NEXT)
          && isCorrectExp(cdr(exp), EXP_NEXT);
      }

      FALLTHROUGH

      /* binary opertors compatible LTL and CTL operator */
    case AND: case OR: case XOR: case XNOR: case IFF: case IMPLIES:
      return isCorrectExp(car(exp), expectedKind)
        && isCorrectExp(cdr(exp), expectedKind);

      /* next expression (LTL is allowed to contain next) */
    case NEXT:
      if (EXP_NEXT != expectedKind &&
          EXP_LTL != expectedKind) {
        nusmv_yyerror_lined("unexpected 'next' operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_SIMPLE); /* NEXT cannot contain NEXT */

      /* CTL unary expressions */
    case EX: case AX: case EF: case AF: case EG: case AG:
    case ABU: case EBU:
    case EBF: case ABF: case EBG: case ABG:
      if (EXP_CTL != expectedKind) {
        nusmv_yyerror_lined("unexpected CTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_CTL); /* continue to check CTL */

      /* CTL binary expressions */
    case AU: case EU:
      if (EXP_CTL != expectedKind) {
        nusmv_yyerror_lined("unexpected CTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_CTL)
        && isCorrectExp(cdr(exp), EXP_CTL); /* continue to check CTL */


      /* LTL unary expressions */
    case OP_NEXT: case OP_PREC: case OP_NOTPRECNOT: case OP_GLOBAL:
    case OP_HISTORICAL: case OP_FUTURE: case OP_ONCE:
      if (EXP_LTL != expectedKind) {
        nusmv_yyerror_lined("unexpected LTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_LTL); /* continue to check LTL */


      /* LTL binary expressions */
    case UNTIL: case SINCE:
      if (EXP_LTL != expectedKind) {
        nusmv_yyerror_lined("unexpected LTL operator", node_get_lineno(exp));
        return false;
      }
      return isCorrectExp(car(exp), EXP_LTL)
        && isCorrectExp(cdr(exp), EXP_LTL); /* continue to check LTL */

    default: nusmv_assert(false); /* unknown expression */
    }
  return false; /* should never be invoked */
}


static int nusmv_parse_psl()
{
  int res;
  res = psl_yyparse();
  return res;
}
  /* ENDS: grammar.y.3.50 */
