
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "ctvb.y"

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int cfileexists(const char * filename){
    /* try to open file to read */
    FILE *file;
    if (file = fopen(filename, "r")){
        fclose(file);
        return 1;
    }
    return 0;
}

void yyerror(char *);
int yylex(void);
int sym[26];
int i=0;
FILE *vbFPtr;
extern int column;
extern int line;

   


/* Line 189 of yacc.c  */
#line 99 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 35 "ctvb.y"

    typedef struct node {
        char * arg1;
        char * arg2;
        char * arg3;
    }Args;
	
	void freeArgs(Args a);



/* Line 209 of yacc.c  */
#line 135 "y.tab.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     INC_OP = 262,
     DEC_OP = 263,
     LE_OP = 264,
     GE_OP = 265,
     EQ_OP = 266,
     NE_OP = 267,
     AND_OP = 268,
     OR_OP = 269,
     MUL_ASSIGN = 270,
     DIV_ASSIGN = 271,
     MOD_ASSIGN = 272,
     ADD_ASSIGN = 273,
     SUB_ASSIGN = 274,
     LEFT_ASSIGN = 275,
     RIGHT_ASSIGN = 276,
     AND_ASSIGN = 277,
     XOR_ASSIGN = 278,
     OR_ASSIGN = 279,
     CHAR = 280,
     SHORT = 281,
     INT = 282,
     LONG = 283,
     SIGNED = 284,
     UNSIGNED = 285,
     FLOAT = 286,
     DOUBLE = 287,
     CONST = 288,
     VOID = 289,
     IF = 290,
     ELSE = 291,
     WHILE = 292,
     FOR = 293,
     RETURN = 294
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define INC_OP 262
#define DEC_OP 263
#define LE_OP 264
#define GE_OP 265
#define EQ_OP 266
#define NE_OP 267
#define AND_OP 268
#define OR_OP 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define LEFT_ASSIGN 275
#define RIGHT_ASSIGN 276
#define AND_ASSIGN 277
#define XOR_ASSIGN 278
#define OR_ASSIGN 279
#define CHAR 280
#define SHORT 281
#define INT 282
#define LONG 283
#define SIGNED 284
#define UNSIGNED 285
#define FLOAT 286
#define DOUBLE 287
#define CONST 288
#define VOID 289
#define IF 290
#define ELSE 291
#define WHILE 292
#define FOR 293
#define RETURN 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 29 "ctvb.y"
 char* charval;

/* Line 214 of yacc.c  */
#line 45 "ctvb.y"

    Args args;



/* Line 214 of yacc.c  */
#line 240 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 252 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,     2,     2,    53,    46,     2,
       3,     4,    47,    48,    45,    49,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    60,
      54,     5,    55,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    57,    62,    50,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    32,    35,    37,    41,    43,    46,    49,    52,    55,
      57,    59,    61,    63,    65,    67,    69,    71,    75,    79,
      83,    85,    89,    93,    95,    97,   101,   105,   109,   113,
     115,   119,   123,   125,   129,   131,   135,   137,   141,   143,
     147,   149,   153,   155,   161,   163,   167,   169,   171,   173,
     175,   177,   179,   181,   183,   185,   187,   189,   191,   195,
     198,   202,   204,   207,   209,   212,   214,   218,   220,   224,
     226,   228,   230,   232,   234,   236,   238,   240,   242,   244,
     246,   248,   252,   256,   261,   265,   267,   271,   273,   277,
     282,   284,   288,   290,   292,   294,   296,   298,   301,   305,
     309,   314,   316,   319,   321,   324,   326,   329,   335,   343,
     349,   356,   364,   367,   371,   373,   376,   378,   380,   385,
     389,   393
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     103,     0,    -1,     6,    -1,     7,    -1,     8,    -1,     3,
      83,     4,    -1,    64,    -1,    65,    43,    83,    44,    -1,
      65,     3,     4,    -1,    65,     3,    66,     4,    -1,    65,
      10,    -1,    65,    11,    -1,    81,    -1,    66,    45,    81,
      -1,    65,    -1,    10,    67,    -1,    11,    67,    -1,    68,
      69,    -1,     9,    67,    -1,    46,    -1,    47,    -1,    48,
      -1,    49,    -1,    50,    -1,    51,    -1,    67,    -1,    69,
      -1,    70,    47,    69,    -1,    70,    52,    69,    -1,    70,
      53,    69,    -1,    70,    -1,    71,    48,    70,    -1,    71,
      49,    70,    -1,    71,    -1,    72,    -1,    73,    54,    72,
      -1,    73,    55,    72,    -1,    73,    12,    72,    -1,    73,
      13,    72,    -1,    73,    -1,    74,    14,    73,    -1,    74,
      15,    73,    -1,    74,    -1,    75,    46,    74,    -1,    75,
      -1,    76,    56,    75,    -1,    76,    -1,    77,    57,    76,
      -1,    77,    -1,    78,    16,    77,    -1,    78,    -1,    79,
      17,    78,    -1,    79,    -1,    79,    58,    83,    59,    80,
      -1,    80,    -1,    67,    82,    81,    -1,     5,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    81,
      -1,    83,    45,    81,    -1,    85,    60,    -1,    85,    86,
      60,    -1,    88,    -1,    88,    85,    -1,    89,    -1,    89,
      85,    -1,    87,    -1,    86,    45,    87,    -1,    90,    -1,
      90,     5,    93,    -1,    37,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    34,    -1,    35,    -1,    32,    -1,
      33,    -1,    36,    -1,    91,    -1,     6,    -1,     3,    90,
       4,    -1,    91,    43,    44,    -1,    91,     3,    92,     4,
      -1,    91,     3,     4,    -1,     6,    -1,    92,    45,     6,
      -1,    81,    -1,    61,    94,    62,    -1,    61,    94,    45,
      62,    -1,    93,    -1,    94,    45,    93,    -1,    96,    -1,
      99,    -1,   100,    -1,   101,    -1,   102,    -1,    61,    62,
      -1,    61,    98,    62,    -1,    61,    97,    62,    -1,    61,
      97,    98,    62,    -1,    84,    -1,    97,    84,    -1,    95,
      -1,    98,    95,    -1,    60,    -1,    83,    60,    -1,    38,
       3,    83,     4,    95,    -1,    38,     3,    83,     4,    95,
      39,    95,    -1,    40,     3,    83,     4,    95,    -1,    41,
       3,    99,    99,     4,    95,    -1,    41,     3,    99,    99,
      83,     4,    95,    -1,    42,    60,    -1,    42,    83,    60,
      -1,   104,    -1,   103,   104,    -1,   105,    -1,    84,    -1,
      85,    90,    97,    96,    -1,    85,    90,    96,    -1,    90,
      97,    96,    -1,    90,    96,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    65,    66,    67,    71,    72,    73,    74,
      75,    76,    80,    81,    85,    86,    87,    88,    89,    93,
      94,    95,    96,    97,    98,   102,   106,   107,   108,   109,
     113,   114,   115,   119,   123,   124,   125,   126,   127,   131,
     132,   133,   137,   138,   142,   143,   147,   148,   152,   153,
     157,   158,   162,   163,   167,   168,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   186,   187,   191,
     192,   202,   205,   208,   211,   217,   221,   257,   261,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   293,   297,
     301,   302,   303,   304,   305,   309,   310,   314,   315,   316,
     320,   321,   325,   326,   327,   328,   329,   333,   334,   335,
     336,   340,   341,   345,   346,   350,   351,   355,   356,   360,
     361,   362,   366,   367,   371,   372,   376,   377,   381,   382,
     383,   384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'('", "')'", "'='", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "SIZEOF", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOID", "IF", "ELSE",
  "WHILE", "FOR", "RETURN", "'['", "']'", "','", "'&'", "'*'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "':'", "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "type_specifier", "type_qualifier", "declarator",
  "direct_declarator", "identifier_list", "initializer",
  "initializer_list", "statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    40,    41,    61,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,    91,    93,    44,    38,    42,    43,    45,
     126,    33,    47,    37,    60,    62,    94,   124,    63,    58,
      59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    73,    73,    73,    73,    73,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    85,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    90,
      91,    91,    91,    91,    91,    92,    92,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       2,     2,     1,     3,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     4,     3,     1,     3,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     2,     3,     3,
       4,     1,     2,     1,     2,     1,     2,     5,     7,     5,
       6,     7,     2,     3,     1,     2,     1,     1,     4,     3,
       3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    90,    80,    81,    82,    83,    86,    87,    84,
      85,    88,    79,   127,     0,    71,    73,     0,    89,     0,
     124,   126,     0,    69,     0,    75,    77,    72,    74,     0,
     111,     0,   131,     0,     0,     0,     1,   125,    91,     0,
      70,     0,   129,     0,     0,     2,     3,     4,     0,     0,
       0,     0,     0,     0,     0,    19,    20,    21,    22,    23,
      24,   115,   107,     6,    14,    25,     0,    26,    30,    33,
      34,    39,    42,    44,    46,    48,    50,    52,    54,    67,
       0,   113,   102,     0,     0,   103,   104,   105,   106,    77,
     112,   130,    94,    95,     0,    92,    76,     0,    97,    78,
     128,     0,    18,    15,    16,     0,     0,     0,   122,     0,
       0,    10,    11,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,    25,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,   109,     0,   108,
     114,    93,     0,   100,     0,     5,     0,     0,     0,   123,
       8,     0,    12,     0,    55,    27,    28,    29,    31,    32,
      37,    38,    35,    36,    40,    41,    43,    45,    47,    49,
      51,     0,    68,   110,    96,     0,    98,     0,     0,     0,
       9,     0,     7,     0,    99,   101,   117,   119,     0,     0,
      13,    53,     0,   120,     0,   118,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,    64,   161,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   125,
      80,    30,    31,    24,    25,    15,    16,    17,    18,    94,
      99,   154,    81,    82,    33,    84,    85,    86,    87,    88,
      19,    20,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -105
static const yytype_int16 yypact[] =
{
     176,   115,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,    -2,   529,   529,   478,    38,   518,
    -105,  -105,    18,  -105,    63,  -105,     0,  -105,  -105,   127,
    -105,    -2,  -105,   478,     9,    41,  -105,  -105,  -105,   115,
    -105,   357,  -105,   478,   494,  -105,  -105,  -105,   494,   494,
     494,    46,    52,   104,   406,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,    37,   551,   494,  -105,    30,    27,
    -105,     5,    99,    73,    84,    86,   133,    -6,  -105,  -105,
      67,  -105,  -105,   187,   247,  -105,  -105,  -105,  -105,   161,
    -105,  -105,  -105,  -105,    12,  -105,  -105,   357,  -105,  -105,
    -105,    17,  -105,  -105,  -105,   494,   494,   421,  -105,    72,
     436,  -105,  -105,   494,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,   494,  -105,  -105,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,  -105,  -105,   264,  -105,
    -105,  -105,   164,  -105,    66,  -105,    19,    22,   421,  -105,
    -105,    23,  -105,   101,  -105,  -105,  -105,  -105,    30,    30,
    -105,  -105,  -105,  -105,     5,     5,    99,    73,    84,    86,
     133,     6,  -105,  -105,  -105,   324,  -105,   341,   341,   485,
    -105,   494,  -105,   494,  -105,  -105,   132,  -105,   341,    34,
    -105,  -105,   341,  -105,   341,  -105,  -105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,   -42,  -105,   -56,    16,  -105,   -90,
      15,    33,    40,    42,    39,    43,  -105,    -9,   -41,  -105,
     -35,    20,   110,  -105,   146,  -105,  -105,    11,  -105,  -105,
     -83,  -105,   -82,    98,   113,   108,  -104,  -105,  -105,  -105,
    -105,   173,  -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      98,     1,   150,   158,     2,    41,   102,   103,   104,   101,
     127,   143,    22,    92,   153,    93,   151,   133,   134,   109,
      13,   155,    38,   187,   126,    26,   188,   190,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   204,    13,
     110,    34,    89,   170,   171,   172,   173,   111,   112,   105,
      89,   145,   144,    90,   189,   106,    98,   152,    23,   135,
     136,    29,   145,    90,   145,   193,   150,   145,   191,   162,
     156,   157,   165,   166,   167,   131,   132,   128,   163,   145,
     113,    35,   129,   130,   164,    95,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   195,    90,   182,   196,   197,   107,    39,   181,
      14,   185,   145,   137,   138,    32,   203,   145,     1,   139,
     205,     2,   206,    40,    42,    27,    28,   146,   186,    14,
      44,    91,   159,    45,    46,    47,    48,    49,    50,    43,
     140,   100,    83,   141,    98,   192,   145,   168,   169,   142,
     200,   126,   174,   175,   199,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    51,    41,    52,    53,    54,
     184,   202,   176,    55,    56,    57,    58,    59,    60,     1,
     177,   179,     2,   178,   201,    96,   180,    61,    29,    62,
      44,   148,    37,    45,    46,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    51,     0,    52,    53,    54,
       0,     0,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    29,   147,
      44,     0,     0,    45,    46,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    52,    53,    54,
       0,     0,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,    51,     0,    52,    53,    54,    61,    29,   149,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    29,   183,    44,     0,     0,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      55,    56,    57,    58,    59,    60,     0,     0,     0,    51,
       0,    52,    53,    54,     0,    97,   194,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    29,    55,    56,    57,    58,    59,    60,    44,
       0,     0,    45,    46,    47,    48,    49,    50,    97,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,    44,
     160,     0,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,   108,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    55,    56,    57,    58,    59,    60,    44,   198,
       0,    45,    46,    47,    48,    49,    50,    44,     0,     0,
      45,    46,    47,    48,    49,    50,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    36,     0,
       0,     1,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,    60,     0,     0,    29,
      55,    56,    57,    58,    59,    60,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   114,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     0,     0,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124
};

static const yytype_int16 yycheck[] =
{
      41,     3,    84,   107,     6,     5,    48,    49,    50,    44,
      66,    17,     1,     4,    97,     6,     4,    12,    13,    54,
       0,     4,     4,     4,    66,    14,     4,     4,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     4,    19,
       3,     3,    31,   133,   134,   135,   136,    10,    11,     3,
      39,    45,    58,    33,   158,     3,    97,    45,    60,    54,
      55,    61,    45,    43,    45,    59,   148,    45,    45,   110,
     105,   106,   128,   129,   130,    48,    49,    47,   113,    45,
      43,    43,    52,    53,   125,    44,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   185,    83,   145,   187,   188,     3,    45,   144,
       0,    45,    45,    14,    15,    17,   198,    45,     3,    46,
     202,     6,   204,    60,    26,    15,    16,    60,    62,    19,
       3,    33,    60,     6,     7,     8,     9,    10,    11,    26,
      56,    43,    29,    57,   185,    44,    45,   131,   132,    16,
     191,   193,   137,   138,   189,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     5,    40,    41,    42,
       6,    39,   139,    46,    47,    48,    49,    50,    51,     3,
     140,   142,     6,   141,   193,    39,   143,    60,    61,    62,
       3,    83,    19,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
       3,    -1,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    40,    41,    42,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    38,    -1,    40,    41,    42,    60,    61,    62,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,     8,     9,    10,    11,    -1,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    38,
      -1,    40,    41,    42,    -1,    61,    62,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    46,    47,    48,    49,    50,    51,     3,
      -1,    -1,     6,     7,     8,     9,    10,    11,    61,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    46,    47,    48,    49,    50,    51,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,     3,    -1,    -1,
       6,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,     0,    -1,
      -1,     3,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    -1,    -1,    61,
      46,    47,    48,    49,    50,    51,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     5,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    84,    85,    88,    89,    90,    91,   103,
     104,   105,    90,    60,    86,    87,    90,    85,    85,    61,
      84,    85,    96,    97,     3,    43,     0,   104,     4,    45,
      60,     5,    96,    97,     3,     6,     7,     8,     9,    10,
      11,    38,    40,    41,    42,    46,    47,    48,    49,    50,
      51,    60,    62,    64,    65,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      83,    95,    96,    97,    98,    99,   100,   101,   102,    90,
      84,    96,     4,     6,    92,    44,    87,    61,    81,    93,
      96,    83,    67,    67,    67,     3,     3,     3,    60,    83,
       3,    10,    11,    43,     5,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    82,    67,    69,    47,    52,
      53,    48,    49,    12,    13,    54,    55,    14,    15,    46,
      56,    57,    16,    17,    58,    45,    60,    62,    98,    62,
      95,     4,    45,    93,    94,     4,    83,    83,    99,    60,
       4,    66,    81,    83,    81,    69,    69,    69,    70,    70,
      72,    72,    72,    72,    73,    73,    74,    75,    76,    77,
      78,    83,    81,    62,     6,    45,    62,     4,     4,    99,
       4,    45,    44,    59,    62,    93,    95,    95,     4,    83,
      81,    80,    39,    95,     4,    95,    95
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 64 "ctvb.y"
    { printf("--> %s primary_expression/IDENTIFIER (Col:%d,Ln:%d) %d\n",(yyvsp[(1) - (1)].charval),column+1,line+1,i++); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 65 "ctvb.y"
    { printf("--> %s primary_expression/CONSTANT (Col:%d,Ln:%d) %d\n",(yyvsp[(1) - (1)].charval),column+1,line+1,i++); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 66 "ctvb.y"
    { printf("primary_expression/STRING_LITERAL (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "ctvb.y"
    { printf("primary_expression/'(' expression ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 71 "ctvb.y"
    { printf("postfix_expression/primary_expression (Col:%d,Ln:%d) %d\n",i++,column+1,line+1); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 72 "ctvb.y"
    { printf("postfix_expression/postfix_expression '[' expression ']' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 73 "ctvb.y"
    { printf("postfix_expression/postfix_expression '(' ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 74 "ctvb.y"
    { printf("postfix_expression/postfix_expression '(' argument_expression_list ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 75 "ctvb.y"
    { printf("--> %s postfix_expression/postfix_expression INC_OP (Col:%d,Ln:%d) %d\n",(yyvsp[(2) - (2)].charval),column+1,line+1,i++); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 76 "ctvb.y"
    { printf("postfix_expression/postfix_expression DEC_OP (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 80 "ctvb.y"
    { printf("argument_expression_list/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 81 "ctvb.y"
    { printf("argument_expression_list/argument_expression_list ',' assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "ctvb.y"
    { printf("unary_expression/postfix_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 86 "ctvb.y"
    { printf("unary_expression/INC_OP unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 87 "ctvb.y"
    { printf("unary_expression/DEC_OP unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 88 "ctvb.y"
    { printf("unary_expression/unary_operator cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 89 "ctvb.y"
    { printf("unary_expression/SIZEOF unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 93 "ctvb.y"
    { printf("unary_operator/'&' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 94 "ctvb.y"
    { printf("unary_operator/'*' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 95 "ctvb.y"
    { printf("unary_operator/'+' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 96 "ctvb.y"
    { printf("unary_operator/'-' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 97 "ctvb.y"
    { printf("unary_operator/'~' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 98 "ctvb.y"
    { printf("unary_operator/'!' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 102 "ctvb.y"
    { printf("cast_expression/unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 106 "ctvb.y"
    { printf("multiplicative_expression/cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 107 "ctvb.y"
    { printf("multiplicative_expression/multiplicative_expression '*' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 108 "ctvb.y"
    { printf("multiplicative_expression/multiplicative_expression '/' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 109 "ctvb.y"
    { printf("multiplicative_expression/multiplicative_expression '%' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 113 "ctvb.y"
    { printf("additive_expression/multiplicative_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 114 "ctvb.y"
    { printf("additive_expression/additive_expression '+' multiplicative_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 115 "ctvb.y"
    { printf("additive_expression/additive_expression '-' multiplicative_expression (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 119 "ctvb.y"
    { printf("shift_expression/additive_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 123 "ctvb.y"
    { printf("relational_expression/shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 124 "ctvb.y"
    { printf("relational_expression/relational_expression '<' shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 125 "ctvb.y"
    { printf("relational_expression/relational_expression '>' shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 126 "ctvb.y"
    { printf("relational_expression/relational_expression LE_OP shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 127 "ctvb.y"
    { printf("relational_expression/relational_expression GE_OP shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 131 "ctvb.y"
    { printf("equality_expression/relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 132 "ctvb.y"
    { printf("equality_expression/equality_expression EQ_OP relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 133 "ctvb.y"
    { printf("equality_expression/equality_expression NE_OP relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 137 "ctvb.y"
    { printf("and_expression/equality_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 138 "ctvb.y"
    { printf("and_expression/and_expression '&' equality_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 142 "ctvb.y"
    { printf("exclusive_or_expression/and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 143 "ctvb.y"
    { printf("exclusive_or_expression/exclusive_or_expression '^' and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 147 "ctvb.y"
    { printf("inclusive_or_expression/exclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 148 "ctvb.y"
    { printf("inclusive_or_expression/inclusive_or_expression '|' exclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 152 "ctvb.y"
    { printf("logical_and_expression/inclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 153 "ctvb.y"
    { printf("logical_and_expression/logical_and_expression AND_OP inclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 157 "ctvb.y"
    { printf("logical_or_expression/logical_and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 158 "ctvb.y"
    { printf("logical_or_expression/logical_or_expression OR_OP logical_and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 162 "ctvb.y"
    { printf("conditional_expression/logical_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 163 "ctvb.y"
    { printf("conditional_expression/logical_or_expression '?' expression ':' conditional_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 167 "ctvb.y"
    { printf("assignment_expression/conditional_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 168 "ctvb.y"
    { printf("assignment_expression/unary_expression assignment_operator assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 172 "ctvb.y"
    { printf("assignment_operator/'=' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 173 "ctvb.y"
    { printf("assignment_operator/MUL_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 174 "ctvb.y"
    { printf("assignment_operator/DIV_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 175 "ctvb.y"
    { printf("assignment_operator/MOD_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 176 "ctvb.y"
    { printf("assignment_operator/ADD_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 177 "ctvb.y"
    { printf("assignment_operator/SUB_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 178 "ctvb.y"
    { printf("assignment_operator/LEFT_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 179 "ctvb.y"
    { printf("assignment_operator/RIGHT_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 180 "ctvb.y"
    { printf("assignment_operator/AND_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 181 "ctvb.y"
    { printf("assignment_operator/XOR_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 182 "ctvb.y"
    { printf("assignment_operator/OR_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 186 "ctvb.y"
    { printf("expression/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 187 "ctvb.y"
    { printf("expression/expression ',' assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 191 "ctvb.y"
    { printf("declaration/declaration_specifiers ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 192 "ctvb.y"
    {
																							printf("declaration/declaration_specifiers init_declarator_list ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							if((yyvsp[(2) - (3)].args).arg2 != NULL)
																								fprintf(vbFPtr, "Dim %s as %s\n%s\n",(yyvsp[(2) - (3)].args).arg1,(yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].args).arg2);
																							else
																								fprintf(vbFPtr, "Dim %s as %s\n",(yyvsp[(2) - (3)].args).arg1,(yyvsp[(1) - (3)].charval));
																						}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 202 "ctvb.y"
    {
																							printf("declaration_specifiers/type_specifier (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																						}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 205 "ctvb.y"
    {
																							printf("declaration_specifiers/type_specifier declaration_specifiers (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++);
																						}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 208 "ctvb.y"
    {
																							printf("declaration_specifiers/type_qualifier (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 211 "ctvb.y"
    { 
																							printf("declaration_specifiers/type_qualifier declaration_specifiers (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																						}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 217 "ctvb.y"
    { 
																							printf("init_declarator_list/init_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							printf("-------->>%s %s\n",(yyvsp[(1) - (1)].args).arg1,(yyvsp[(1) - (1)].args).arg2);
																						}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 221 "ctvb.y"
    { 
																							printf("init_declarator_list/init_declarator_list ',' init_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							char *vars, *assignments;
																							int varsSize=0,assignmentsSize=0;
																							varsSize+=(strlen((yyvsp[(1) - (3)].args).arg1)+1) + (strlen((yyvsp[(3) - (3)].args).arg1)+1);
																							if((yyvsp[(1) - (3)].args).arg2 != NULL)
																								assignmentsSize += strlen((yyvsp[(1) - (3)].args).arg2)+1;
																							if((yyvsp[(3) - (3)].args).arg2 != NULL)
																								assignmentsSize += strlen((yyvsp[(3) - (3)].args).arg2)+1;
																							vars=(char *)malloc((varsSize+10)*sizeof(char));
																							assignments=(char *)malloc((assignmentsSize+10)*sizeof(char));
																							
																							strcpy(vars,"");
																							strcpy(assignments,"");
																							
																							strcat(vars, (yyvsp[(1) - (3)].args).arg1);
																							strcat(vars, ", ");
																							strcat(vars, (yyvsp[(3) - (3)].args).arg1);
																							if((yyvsp[(1) - (3)].args).arg2 != NULL)
																								strcat(assignments, (yyvsp[(1) - (3)].args).arg2);

																							if ((yyvsp[(3) - (3)].args).arg2 != NULL)
																							{
																								printf("!!!!!!!!!!!!!!!!!!!!!!\n"); 
																								strcat(assignments, "\n");
																								strcat(assignments, (yyvsp[(3) - (3)].args).arg2);
																							}

																							freeArgs((yyvsp[(1) - (3)].args));
																							freeArgs((yyvsp[(3) - (3)].args));
																							Args a = {vars,assignments,NULL};
																							(yyval.args) = a;
																						}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 257 "ctvb.y"
    { 
																							printf("init_declarator/declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							Args a = {(yyvsp[(1) - (1)].charval),NULL,NULL};
																							(yyval.args) = a; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 261 "ctvb.y"
    {
																							printf("init_declarator/declarator '=' initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							/*Allocating space for the assignment String*/
																							char *assignment;
																							assignment=(char *)malloc(((strlen((yyvsp[(1) - (3)].charval))+1)+(strlen((yyvsp[(2) - (3)].charval))+1)+(strlen((yyvsp[(3) - (3)].charval))+1))*sizeof(char));
																							strcpy(assignment, (yyvsp[(1) - (3)].charval));
																							strcat(assignment, (yyvsp[(2) - (3)].charval));
																							strcat(assignment, (yyvsp[(3) - (3)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(2) - (3)].charval));
																							free((yyvsp[(3) - (3)].charval));
																							
																							/*Passing the allocated String to $$*/
																							Args a = {(yyvsp[(1) - (3)].charval),assignment,NULL};
																							(yyval.args) = a;
																						}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 281 "ctvb.y"
    { printf("type_specifier/VOID (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 282 "ctvb.y"
    { printf("type_specifier/CHAR (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 283 "ctvb.y"
    { printf("type_specifier/SHORT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 284 "ctvb.y"
    { printf("type_specifier/INT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 285 "ctvb.y"
    { printf("type_specifier/LONG (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 286 "ctvb.y"
    { printf("type_specifier/FLOAT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 287 "ctvb.y"
    { printf("type_specifier/DOUBLE (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 288 "ctvb.y"
    { printf("type_specifier/SIGNED (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 289 "ctvb.y"
    { printf("type_specifier/UNSIGNED (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 293 "ctvb.y"
    { printf("type_qualifier/CONST (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 297 "ctvb.y"
    { printf("declarator/direct_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 301 "ctvb.y"
    { printf("direct_declarator/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 302 "ctvb.y"
    { printf("direct_declarator/'(' declarator ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 303 "ctvb.y"
    { printf("direct_declarator/direct_declarator '[' ']' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 304 "ctvb.y"
    { printf("direct_declarator/direct_declarator '(' identifier_list ')' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 305 "ctvb.y"
    { printf("--> %s direct_declarator/direct_declarator '(' ')' (Col:%d,Ln:%d) %d\n",(yyvsp[(2) - (3)].charval),column+1,line+1,i++); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 309 "ctvb.y"
    { printf("identifier_list/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 310 "ctvb.y"
    { printf("identifier_list/identifier_list ',' IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 314 "ctvb.y"
    { printf("initializer/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 315 "ctvb.y"
    { printf("initializer/'{' initializer_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 316 "ctvb.y"
    { printf("initializer/'{' initializer_list ',' '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 320 "ctvb.y"
    { printf("initializer_list/initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 321 "ctvb.y"
    { printf("initializer_list/initializer_list ',' initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 325 "ctvb.y"
    { printf("statement/compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 326 "ctvb.y"
    { printf("statement/expression_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 327 "ctvb.y"
    { printf("statement/selection_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 328 "ctvb.y"
    { printf("statement/iteration_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 329 "ctvb.y"
    { printf("statement/jump_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 333 "ctvb.y"
    { printf("compound_statement/'{' '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 334 "ctvb.y"
    { printf("compound_statement/'{' statement_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 335 "ctvb.y"
    { printf("compound_statement/'{' declaration_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 336 "ctvb.y"
    { printf("compound_statement/'{' declaration_list statement_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 340 "ctvb.y"
    { printf("declaration_list/declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 341 "ctvb.y"
    { printf("declaration_list/declaration_list declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 345 "ctvb.y"
    { printf("statement_list/statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 346 "ctvb.y"
    { printf("statement_list/statement_list statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 350 "ctvb.y"
    { printf("expression_statement/';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 351 "ctvb.y"
    { printf("expression_statement/expression ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 355 "ctvb.y"
    { printf("selection_statement/IF '(' expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 356 "ctvb.y"
    { printf("selection_statement/IF '(' expression ')' statement ELSE statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 360 "ctvb.y"
    { printf("iteration_statement/WHILE '(' expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 361 "ctvb.y"
    { printf("iteration_statement/FOR '(' expression_statement expression_statement ')' statement (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 362 "ctvb.y"
    { printf("iteration_statement/FOR '(' expression_statement expression_statement expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 366 "ctvb.y"
    { printf("jump_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 371 "ctvb.y"
    { printf("translation_unit/external_declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 372 "ctvb.y"
    { printf("translation_unit/translation_unit external_declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 376 "ctvb.y"
    { printf("external_declaration/function_definition (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 377 "ctvb.y"
    { printf("external_declaration/declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 381 "ctvb.y"
    { printf("function_definition/eclaration_specifiers declarator declaration_list compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 382 "ctvb.y"
    { printf("function_definition/declaration_specifiers declarator compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 383 "ctvb.y"
    { printf("function_definition/declarator declaration_list compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 384 "ctvb.y"
    { printf("function_definition/declarator compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;



/* Line 1455 of yacc.c  */
#line 2704 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 387 "ctvb.y"

void yyerror(char *s)
{  
	//fprintf(stderr, "the error at column %d and line %d : %s and i = %d\n",column+1,line+1,s,i);
	fprintf(stderr, "Syntax error : %s at column %d and line %d\n", s, column+1, line+1);
	FILE *fPtr;
	char result[100];
	fPtr = fopen("Syntax_error.txt", "w");
	sprintf(result, "Syntax error : %s at column %d and line %d\n", s, column+1, line+1); 
    if(fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create error file.\n");
        exit(EXIT_FAILURE);
    }
    fputs(result, fPtr);
    fclose(fPtr);
}
void freeArgs(Args a)
{
	free(a.arg1);
	free(a.arg2);
	free(a.arg3);
}
int main(void) 
{
	remove("Lexical_error.txt");
	remove("Syntax_error.txt");
		
	if(cfileexists("VB_code.txt"))
	{
		remove("VB_code.txt");
	}
	char result[100];
	vbFPtr = fopen("VB_code.txt", "a");
	if(vbFPtr == NULL)
	{
		/* File not created hence exit */
		printf("Unable to create VB file.\n");
		exit(EXIT_FAILURE);
	}
	yyparse();
}
