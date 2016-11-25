/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parsetime.y" /* yacc.c:339  */

#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "parsetime.h"
#include "panic.h"

#define YYDEBUG 1

struct tm exectm;
static int isgmt;
static int yearspec;
static int time_only;

extern int yyerror(char *s);
extern int yylex();

int add_date(int number, int period);

#line 87 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOTTEDDATE = 258,
    HYPHENDATE = 259,
    HOURMIN = 260,
    INT1DIGIT = 261,
    INT2DIGIT = 262,
    INT4DIGIT = 263,
    INT5_8DIGIT = 264,
    INT = 265,
    NOW = 266,
    AM = 267,
    PM = 268,
    NOON = 269,
    MIDNIGHT = 270,
    TEATIME = 271,
    SUN = 272,
    MON = 273,
    TUE = 274,
    WED = 275,
    THU = 276,
    FRI = 277,
    SAT = 278,
    TODAY = 279,
    TOMORROW = 280,
    NEXT = 281,
    MINUTE = 282,
    HOUR = 283,
    DAY = 284,
    WEEK = 285,
    MONTH = 286,
    YEAR = 287,
    JAN = 288,
    FEB = 289,
    MAR = 290,
    APR = 291,
    MAY = 292,
    JUN = 293,
    JUL = 294,
    AUG = 295,
    SEP = 296,
    OCT = 297,
    NOV = 298,
    DEC = 299,
    UTC = 300
  };
#endif
/* Tokens.  */
#define DOTTEDDATE 258
#define HYPHENDATE 259
#define HOURMIN 260
#define INT1DIGIT 261
#define INT2DIGIT 262
#define INT4DIGIT 263
#define INT5_8DIGIT 264
#define INT 265
#define NOW 266
#define AM 267
#define PM 268
#define NOON 269
#define MIDNIGHT 270
#define TEATIME 271
#define SUN 272
#define MON 273
#define TUE 274
#define WED 275
#define THU 276
#define FRI 277
#define SAT 278
#define TODAY 279
#define TOMORROW 280
#define NEXT 281
#define MINUTE 282
#define HOUR 283
#define DAY 284
#define WEEK 285
#define MONTH 286
#define YEAR 287
#define JAN 288
#define FEB 289
#define MAR 290
#define APR 291
#define MAY 292
#define JUN 293
#define JUL 294
#define AUG 295
#define SEP 296
#define OCT 297
#define NOV 298
#define DEC 299
#define UTC 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "parsetime.y" /* yacc.c:355  */

	char *	  	charval;
	int		intval;

#line 222 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  94

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
       2,     2,     2,    48,    46,    49,     2,    47,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    57,    60,    61,    65,    66,    72,    73,
      76,    93,    94,    95,    96,   101,   106,   113,   116,   129,
     148,   158,   170,   176,   177,   178,   179,   183,   184,   188,
     231,   275,   276,   277,   278,   327,   331,   337,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     354,   370,   383,   406,   407,   408,   409,   410,   411,   412,
     415,   416,   419,   425,   431,   441,   442,   443,   444,   445,
     446,   449,   450,   453,   454,   457,   458,   459,   460,   461
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOTTEDDATE", "HYPHENDATE", "HOURMIN",
  "INT1DIGIT", "INT2DIGIT", "INT4DIGIT", "INT5_8DIGIT", "INT", "NOW", "AM",
  "PM", "NOON", "MIDNIGHT", "TEATIME", "SUN", "MON", "TUE", "WED", "THU",
  "FRI", "SAT", "TODAY", "TOMORROW", "NEXT", "MINUTE", "HOUR", "DAY",
  "WEEK", "MONTH", "YEAR", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL",
  "AUG", "SEP", "OCT", "NOV", "DEC", "UTC", "','", "'/'", "'+'", "'-'",
  "$accept", "timespec", "spec_base", "time", "time_base",
  "hr24clock_hr_min", "time_hour", "time_hour_min", "am_pm",
  "timezone_name", "date", "concatenated_date", "month_name",
  "month_number", "day_number", "year_number", "day_of_week", "inc_or_dec",
  "increment", "decrement", "inc_dec_number", "inc_dec_period",
  "int1_2digit", "int2_or_4digit", "integer", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,    44,    47,    43,    45
};
# endif

#define YYPACT_NINF -73

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-73)))

#define YYTABLE_NINF -51

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -3,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,    79,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,    10,     2,    39,   -21,   -73,    55,
      55,   -73,   -73,    63,     0,    80,   -73,    40,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   119,   119,   -73,
     -73,   -73,   -73,     8,   -73,   -73,   -73,   -73,   -73,   -73,
      20,   -73,    63,    97,   -73,   -73,   -73,   -73,   -73,    61,
     -73,    61,   -73,   -73,    97,   -73,   -73,    24,   -73,   -73,
     -73,   -73,    97,   -73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    30,    29,    19,    71,    72,    17,    37,     7,    14,
      15,    16,    53,    54,    55,    56,    57,    58,    59,    27,
      28,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,     2,     5,     8,    10,     0,
      12,     4,    34,     0,     0,     0,    26,    51,    65,    66,
      67,    68,    69,    70,    36,    35,     1,     0,     0,     3,
      60,    61,     6,    51,    22,     9,    20,    21,    11,    13,
      23,    51,     0,    31,    76,    77,    78,    79,    75,     0,
      64,     0,    73,    74,     0,    24,    52,     0,    32,    62,
      63,    25,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -14,   -73,
      -7,   -73,    -1,   -73,   -18,    11,    65,   -73,   -73,   -73,
      36,   -72,    49,   -73,   -73
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    34,    35,    36,    37,    38,    39,    40,    68,    65,
      41,    42,    43,    44,    45,    85,    46,    59,    60,    61,
      79,    55,    71,    86,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       1,     2,     3,     4,     5,     6,     7,    89,     8,    90,
      56,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    64,    70,    69,    82,    83,    62,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     1,     2,    73,     4,     5,    72,     7,    47,
      57,    58,   -18,   -18,    87,   -50,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    84,    66,    67,     4,
       5,    92,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    88,    63,    54,   -50,    48,    49,
      50,    51,    52,    53,    81,    91,    12,    13,    14,    15,
      16,    17,    18,    93,    82,    83,    48,    49,    50,    51,
      52,    53,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    74,    75,    76,    77,    78
};

static const yytype_int8 yycheck[] =
{
       3,     4,     5,     6,     7,     8,     9,    79,    11,    81,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    45,    43,    40,     7,     8,    36,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,     3,     4,    45,     6,     7,    47,     9,     0,
      48,    49,    12,    13,    72,    47,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    46,    12,    13,     6,
       7,    47,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    73,    36,    21,    47,    27,    28,
      29,    30,    31,    32,    58,    84,    17,    18,    19,    20,
      21,    22,    23,    92,     7,     8,    27,    28,    29,    30,
      31,    32,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     6,     7,     8,     9,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    11,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    51,    52,    53,    54,    55,    56,
      57,    60,    61,    62,    63,    64,    66,    72,    27,    28,
      29,    30,    31,    32,    66,    71,     0,    48,    49,    67,
      68,    69,    60,    72,    45,    59,    12,    13,    58,    58,
      64,    72,    47,    62,     6,     7,     8,     9,    10,    70,
      74,    70,     7,     8,    46,    65,    73,    64,    65,    71,
      71,    65,    47,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    55,    56,    57,
      58,    58,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      63,    64,    65,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    69,    70,    71,    71,    71,    71,    71,
      71,    72,    72,    73,    73,    74,    74,    74,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     4,     1,     1,     1,     1,
       1,     2,     3,     5,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
        case 5:
#line 62 "parsetime.y" /* yacc.c:1646  */
    {
		    time_only = 1;
		}
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "parsetime.y" /* yacc.c:1646  */
    {
		    yearspec = 1;
		}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "parsetime.y" /* yacc.c:1646  */
    {
			exectm.tm_min = -1;
			exectm.tm_hour = -1;
			sscanf((yyvsp[0].charval), "%2d %2d", &exectm.tm_hour,
			    &exectm.tm_min);
			free((yyvsp[0].charval));

			if (exectm.tm_min > 60 || exectm.tm_min < 0) {
			    yyerror("Problem in minutes specification");
			    YYERROR;
			}
			if (exectm.tm_hour > 24 || exectm.tm_hour < 0) {
			    yyerror("Problem in hours specification");
			    YYERROR;
		        }
		    }
#line 1428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "parsetime.y" /* yacc.c:1646  */
    {
			exectm.tm_hour = 12;
			exectm.tm_min = 0;
		    }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 102 "parsetime.y" /* yacc.c:1646  */
    {
			exectm.tm_hour = 0;
			exectm.tm_min = 0;
		    }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "parsetime.y" /* yacc.c:1646  */
    {
			exectm.tm_hour = 16;
			exectm.tm_min = 0;
		    }
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 117 "parsetime.y" /* yacc.c:1646  */
    {
			sscanf((yyvsp[0].charval), "%d", &exectm.tm_hour);
			exectm.tm_min = 0;
			free((yyvsp[0].charval));

			if (exectm.tm_hour > 24 || exectm.tm_hour < 0) {
			    yyerror("Problem in hours specification");
			    YYERROR;
		        }
		    }
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "parsetime.y" /* yacc.c:1646  */
    {
			exectm.tm_min = -1;
			exectm.tm_hour = -1;
			sscanf((yyvsp[0].charval), "%d %*c %d", &exectm.tm_hour,
			    &exectm.tm_min);
			free((yyvsp[0].charval));

			if (exectm.tm_min > 60 || exectm.tm_min < 0) {
			    yyerror("Problem in minutes specification");
			    YYERROR;
			}
			if (exectm.tm_hour > 24 || exectm.tm_hour < 0) {
			    yyerror("Problem in hours specification");
			    YYERROR;
		        }
		    }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 149 "parsetime.y" /* yacc.c:1646  */
    {
			if (exectm.tm_hour > 12) {
			    yyerror("Hour too large for AM");
			    YYERROR;
			}
			else if (exectm.tm_hour == 12) {
			    exectm.tm_hour = 0;
			}
		    }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 159 "parsetime.y" /* yacc.c:1646  */
    {
			if (exectm.tm_hour > 12) {
			    yyerror("Hour too large for PM");
			    YYERROR;
			}
			else if (exectm.tm_hour < 12) {
			    exectm.tm_hour +=12;
			}
		    }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 171 "parsetime.y" /* yacc.c:1646  */
    {
			isgmt = 1;
		    }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "parsetime.y" /* yacc.c:1646  */
    {
		       add_date ((6 + (yyvsp[0].intval) - exectm.tm_wday) %7 + 1, DAY);
		   }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 185 "parsetime.y" /* yacc.c:1646  */
    {
			add_date(1, DAY);
		   }
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 189 "parsetime.y" /* yacc.c:1646  */
    {
			int ynum = -1;
			int mnum = -1;
			int dnum = -1;

			yearspec = 1;
			if (sscanf((yyvsp[0].charval), "%d %*c %d %*c %d", &ynum, &mnum, &dnum) != 3) {
			    yyerror("Error in hyphenated date");
			    YYERROR;
			}

			if (mnum < 1 || mnum > 12) {
			    yyerror("Error in month number");
			    YYERROR;
			}
			exectm.tm_mon = mnum -1;

			if (ynum < 70) {
			    ynum += 100;
			}
			else if (ynum > 1900) {
			    ynum -= 1900;
			}
			exectm.tm_year = ynum ;

			if (   dnum < 1
			    || ((mnum ==  1 || mnum ==  3 || mnum ==  5 ||
			         mnum ==  7 || mnum ==  8 || mnum == 10 ||
				 mnum == 12) && dnum > 31)
			    || ((mnum ==  4 || mnum ==  6 || mnum ==  9 ||
			         mnum == 11) && dnum > 30)
			    || (mnum ==  2 && dnum > 29 &&  __isleap(ynum+1900))
			    || (mnum ==  2 && dnum > 28 && !__isleap(ynum+1900))
			   )
			{
			    yyerror("Error in day of month");
			    YYERROR; 
			}
			exectm.tm_mday = dnum;

			free((yyvsp[0].charval));
		   }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 232 "parsetime.y" /* yacc.c:1646  */
    {
			int ynum = -1;
			int mnum = -1;
			int dnum = -1;

			yearspec = 1;

			if (sscanf((yyvsp[0].charval), "%d %*c %d %*c %d", &dnum, &mnum, &ynum) != 3) {
			    yyerror("Error in dotted date");
			    YYERROR;
			}

			if (mnum < 1 || mnum > 12) {
			    yyerror("Error in month number");
			    YYERROR;
			}
			exectm.tm_mon = mnum -1;

			if (ynum < 70) {
			    ynum += 100;
			}
			else if (ynum > 1900) {
			    ynum -= 1900;
			}
			exectm.tm_year = ynum ;

			if (   dnum < 1
			    || ((mnum ==  1 || mnum ==  3 || mnum ==  5 ||
			         mnum ==  7 || mnum ==  8 || mnum == 10 ||
				 mnum == 12) && dnum > 31)
			    || ((mnum ==  4 || mnum ==  6 || mnum ==  9 ||
			         mnum == 11) && dnum > 30)
			    || (mnum ==  2 && dnum > 29 &&  __isleap(ynum+1900))
			    || (mnum ==  2 && dnum > 28 && !__isleap(ynum+1900))
			   )
			{
			    yyerror("Error in day of month");
			    YYERROR; 
			}
			exectm.tm_mday = dnum;

			free((yyvsp[0].charval));
		   }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 279 "parsetime.y" /* yacc.c:1646  */
    {
			/* Ok, this is a kluge.  I hate design errors...  -Joey */
			char shallot[5];
			char *onion;

			yearspec = 1;
			onion=(yyvsp[0].charval);
			memset (shallot, 0, sizeof (shallot));
			if (strlen((yyvsp[0].charval)) == 5 || strlen((yyvsp[0].charval)) == 7) {
			    strncpy (shallot,onion,1);
			    onion++;
			} else {
			    strncpy (shallot,onion,2);
			    onion+=2;
			}
			sscanf(shallot, "%d", &exectm.tm_mon);

			if (exectm.tm_mon < 1 || exectm.tm_mon > 12) {
			    yyerror("Error in month number");
			    YYERROR;
			}
			exectm.tm_mon--;

			memset (shallot, 0, sizeof (shallot));
			strncpy (shallot,onion,2);
		    	sscanf(shallot, "%d", &exectm.tm_mday);
			if (exectm.tm_mday < 0 || exectm.tm_mday > 31)
			{
			    yyerror("Error in day of month");
			    YYERROR;
			}

			onion+=2;
			memset (shallot, 0, sizeof (shallot));
			strncpy (shallot,onion,4);
			if ( sscanf(shallot, "%d", &exectm.tm_year) != 1) {
			    yyerror("Error in year");
			    YYERROR;
			}
			if (exectm.tm_year < 70) {
			    exectm.tm_year += 100;
			}
			else if (exectm.tm_year > 1900) {
			    exectm.tm_year -= 1900;
			}

			free ((yyvsp[0].charval));
		    }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 328 "parsetime.y" /* yacc.c:1646  */
    {
			add_date(1, (yyvsp[0].intval));
		    }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 332 "parsetime.y" /* yacc.c:1646  */
    {
			add_date ((6 + (yyvsp[0].intval) - exectm.tm_wday) %7 +1, DAY);
		    }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 340 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 0; }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 341 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 1; }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 342 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 2; }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 343 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 3; }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 344 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 4; }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 345 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 5; }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 346 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 6; }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 347 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 7; }
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 348 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 8; }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 349 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon = 9; }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 350 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon =10; }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 351 "parsetime.y" /* yacc.c:1646  */
    { exectm.tm_mon =11; }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 355 "parsetime.y" /* yacc.c:1646  */
    {
			{
			    int mnum = -1;
			    sscanf((yyvsp[0].charval), "%d", &mnum);

			    if (mnum < 1 || mnum > 12) {
				yyerror("Error in month number");
				YYERROR;
			    }
			    exectm.tm_mon = mnum -1;
			    free((yyvsp[0].charval));
			}
		    }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 371 "parsetime.y" /* yacc.c:1646  */
    {
			exectm.tm_mday = -1;
			sscanf((yyvsp[0].charval), "%d", &exectm.tm_mday);
			if (exectm.tm_mday < 1 || exectm.tm_mday > 31)
			{
			    yyerror("Error in day of month");
			    YYERROR; 
			}
			free((yyvsp[0].charval));
		     }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 384 "parsetime.y" /* yacc.c:1646  */
    { 
			yearspec = 1;
			{
			    int ynum;

			    if ( sscanf((yyvsp[0].charval), "%d", &ynum) != 1) {
				yyerror("Error in year");
				YYERROR;
			    }
			    if (ynum < 70) {
				ynum += 100;
			    }
			    else if (ynum > 1900) {
				ynum -= 1900;
			    }

			    exectm.tm_year = ynum ;
			    free((yyvsp[0].charval));
			}
		    }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 406 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 407 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 408 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 409 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = 3; }
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 410 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = 4; }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 411 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = 5; }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 412 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = 6; }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 420 "parsetime.y" /* yacc.c:1646  */
    {
		        add_date((yyvsp[-1].intval), (yyvsp[0].intval));
		    }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 426 "parsetime.y" /* yacc.c:1646  */
    {
			add_date(-(yyvsp[-1].intval), (yyvsp[0].intval));
		    }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 432 "parsetime.y" /* yacc.c:1646  */
    {
			if (sscanf((yyvsp[0].charval), "%d", &(yyval.intval)) != 1) {
			    yyerror("Unknown increment");
			    YYERROR;
		        }
		        free((yyvsp[0].charval));
		    }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 441 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = MINUTE ; }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 442 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = HOUR   ; }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 443 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = DAY    ; time_only = 0; }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 444 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = WEEK   ; time_only = 0; }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 445 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = MONTH  ; time_only = 0; }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 446 "parsetime.y" /* yacc.c:1646  */
    { (yyval.intval) = YEAR   ; time_only = 0; }
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1947 "y.tab.c" /* yacc.c:1646  */
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
#line 464 "parsetime.y" /* yacc.c:1906  */



time_t parsetime(time_t, int, char **);

time_t
parsetime(time_t currtime, int argc, char **argv)
{
    time_t exectime;
    struct tm currtm;

    my_argv = argv;
    exectm = *localtime(&currtime);
    currtime -= exectm.tm_sec;
    exectm.tm_sec = 0;
    exectm.tm_isdst = -1;
    memcpy(&currtm,&exectm,sizeof(currtm));
    time_only = 0;
    yearspec = 0;

    if (yyparse() == 0) {
	if (time_only)
	{
	    if (exectm.tm_mday == currtm.tm_mday &&
		(exectm.tm_hour < currtm.tm_hour ||
		(exectm.tm_hour == currtm.tm_hour &&
		    exectm.tm_min <= currtm.tm_min)))
		exectm.tm_mday++;
	} 
	else if (!yearspec) {
	    if (exectm.tm_year == currtm.tm_year &&
		(exectm.tm_mon < currtm.tm_mon ||
	        (exectm.tm_mon == currtm.tm_mon &&
		     exectm.tm_mday < currtm.tm_mday)))
		exectm.tm_year++;
	}

	exectime = mktime(&exectm);
	if (exectime == (time_t)-1)
	    return 0;
	if (isgmt) {
	    exectime -= timezone;
	    if (currtm.tm_isdst && !exectm.tm_isdst)
		exectime -= 3600;
	}
	if (exectime < currtime)
		panic("refusing to create job destined in the past");
        return exectime;
    }
    else {
	return 0;    
    }
}

#ifdef TEST_PARSER
 
int
main(int argc, char **argv)
{
    int retval = 1;
    time_t res;
    time_t currtime;

    if (argc < 3) {
	fprintf(stderr, "usage: parsetest [now] [timespec] ...\n");
	exit(EXIT_FAILURE);
    }

    currtime = atoll(argv[1]);
    res = parsetime(currtime, argc-2, argv + 2);
    if (res > 0) {
	printf("%s",ctime(&res));
	retval = 0;
    }
    else {
	printf("Ooops...\n");
	retval = 1;
    }
    return retval;
}

void
panic(char *a)
{
    fputs(a, stderr);
    exit(EXIT_FAILURE);
}
#endif

int yyerror(char *s)
{
    if (last_token == NULL)
	last_token = "(empty)";
    fprintf(stderr,"%s. Last token seen: %s\n",s, last_token);
    return 0;
}

void
add_seconds(struct tm *tm, long numsec)
{
    struct tm basetm = *tm;
    time_t timeval;

    timeval = mktime(tm);
    if (timeval == (time_t)-1)
        timeval = (time_t)0;
    timeval += numsec;
    *tm = *localtime(&timeval);

    /*
     * Adjust +-1 hour when moving in or out of DST
     */

    if (daylight > 0)	/* Only check if DST is used here */
    {
	/* Set tm_isdst on &basetm and tm */
	(void) mktime(&basetm);
	(void) mktime(tm);

	if      (basetm.tm_isdst > 0 && tm->tm_isdst < 1)
	{   /* DST to no DST */
	    timeval += 3600l;
	    *tm = *localtime(&timeval);
	}
	else if (basetm.tm_isdst < 1 && tm->tm_isdst > 0)
	{   /* no DST to DST */
	    timeval -= 3600l;
	    *tm = *localtime(&timeval);
	}
    }
}

int
add_date(int number, int period)
{
    switch(period) {
    case MINUTE:
	add_seconds(&exectm , 60l*number);
	break;

    case HOUR:
	add_seconds(&exectm, 3600l * number);
	break;

    case DAY:
	add_seconds(&exectm, 24*3600l * number);
	break;

    case WEEK:
	add_seconds(&exectm, 7*24*3600l*number);
	break;

    case MONTH:
	{
	    int newmonth = exectm.tm_mon + number;
	    number = 0;
	    while (newmonth < 0) {
		newmonth += 12;
		number --;
	    }
	    exectm.tm_mon = newmonth % 12;
	    number += newmonth / 12 ;

	    /* Recalculate tm_isdst so we don't get a +-1 hour creep */
	    exectm.tm_isdst = -1;
	    (void) mktime(&exectm);
	}
	if (number == 0) {
	    break;
	}
	/* fall through */

    case YEAR:
	exectm.tm_year += number;
	/* Recalculate tm_isdst so we don't get a +-1 hour creep */
	exectm.tm_isdst = -1;
	(void) mktime(&exectm);
	break;

    default:
	yyerror("Internal parser error");
	fprintf(stderr,"Unexpected case %d\n", period);
	abort();
    }

    return 0;
}
