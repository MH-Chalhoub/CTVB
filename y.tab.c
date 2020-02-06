
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
char* transform_expression(char *first, char *second, char *third)
{

	/*Allocating space for the expression String*/
	char *expression;
	expression=(char *)malloc(((strlen(first)+1)+(strlen(second)+1)+(strlen(third)+1))*sizeof(char));
	strcpy(expression, first);
	strcat(expression, second);
	strcat(expression, third);
	
	/*Unallocate the space used for the second and the third term*/
	free(first);
	free(second);
	free(third);
	
	/*Passing the allocated String to $$*/
	return expression;
}

char *InsertTab(char *s)
{
	//this function is used to insert a tab to the begining of evry new line
	int nbLine=0,i;
	char *addTab,*newLineChar="\n";
	for (i=0;i<strlen(s)+1;i++)
	{
		if(s[i]=='\n')
			nbLine++;
	}
	
	addTab=(char *)malloc(((strlen(s)+1)+nbLine+10)*sizeof(char));
	strcpy(addTab, "");
	for (i=0;i<strlen(s)+1;i++)
	{
		char *c = (char *)malloc(2*sizeof(char));
		sprintf(c, "%c\0",s[i]);
		
		if(i==0)
			strcat(addTab, "\t");
		if(s[i]=='\n')
		{
			strcat(addTab, c);
			strcat(addTab, "\t");
		}
		else
			strcat(addTab, c);
	}
	return addTab;
}

char* split(char *str,char *delim,int pos)
{
    char* token1 = strtok(str, delim); 
    char* token2 = strtok(NULL, delim); 
	if(pos==1)
		return token1;
	else
		return token2;
}
void yyerror(char *);
int yylex(void);
int sym[26];
int i=0;
FILE *vbFPtr;
extern int column;
extern int line;

   


/* Line 189 of yacc.c  */
#line 157 "y.tab.c"

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
#line 96 "ctvb.y"

    typedef struct node {
        char * arg1;
        char * arg2;
        char * arg3;
    }Args;
	
	void freeArgs(Args a);



/* Line 209 of yacc.c  */
#line 193 "y.tab.c"

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
     RETURN = 294,
     PRINTF = 295,
     SCANF = 296
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
#define PRINTF 295
#define SCANF 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 87 "ctvb.y"
 char* charval;

/* Line 214 of yacc.c  */
#line 106 "ctvb.y"

    Args args;



/* Line 214 of yacc.c  */
#line 302 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 314 "y.tab.c"

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
#define YYLAST   556

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,     2,     2,    14,    19,     2,
       3,     4,    11,    10,    23,    13,     2,    12,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,    22,
       8,     5,     9,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     6,    18,     7,    63,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62
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
     279,   283,   285,   287,   289,   291,   293,   296,   300,   304,
     309,   314,   316,   319,   321,   324,   326,   329,   335,   343,
     349,   356,   364,   367,   371,   373,   376,   378,   380,   385,
     389,   393
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     105,     0,    -1,    24,    -1,    25,    -1,    26,    -1,     3,
      85,     4,    -1,    66,    -1,    67,    20,    85,    21,    -1,
      67,     3,     4,    -1,    67,     3,    68,     4,    -1,    67,
      28,    -1,    67,    29,    -1,    83,    -1,    68,    23,    83,
      -1,    67,    -1,    28,    69,    -1,    29,    69,    -1,    70,
      71,    -1,    27,    69,    -1,    19,    -1,    11,    -1,    10,
      -1,    13,    -1,    63,    -1,    64,    -1,    69,    -1,    71,
      -1,    72,    11,    71,    -1,    72,    12,    71,    -1,    72,
      14,    71,    -1,    72,    -1,    73,    10,    72,    -1,    73,
      13,    72,    -1,    73,    -1,    74,    -1,    75,     8,    74,
      -1,    75,     9,    74,    -1,    75,    30,    74,    -1,    75,
      31,    74,    -1,    75,    -1,    76,    32,    75,    -1,    76,
      33,    75,    -1,    76,    -1,    77,    19,    76,    -1,    77,
      -1,    78,    17,    77,    -1,    78,    -1,    79,    18,    78,
      -1,    79,    -1,    80,    34,    79,    -1,    80,    -1,    81,
      35,    80,    -1,    81,    -1,    81,    15,    85,    16,    82,
      -1,    82,    -1,    69,    84,    83,    -1,     5,    -1,    36,
      -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,    83,
      -1,    85,    23,    83,    -1,    87,    22,    -1,    87,    88,
      22,    -1,    90,    -1,    90,    87,    -1,    91,    -1,    91,
      87,    -1,    89,    -1,    88,    23,    89,    -1,    92,    -1,
      92,     5,    95,    -1,    55,    -1,    46,    -1,    47,    -1,
      48,    -1,    49,    -1,    52,    -1,    53,    -1,    50,    -1,
      51,    -1,    54,    -1,    93,    -1,    24,    -1,     3,    92,
       4,    -1,    93,    20,    21,    -1,    93,     3,    94,     4,
      -1,    93,     3,     4,    -1,    24,    -1,    94,    23,    24,
      -1,    83,    -1,     6,    96,     7,    -1,    95,    -1,    96,
      23,    95,    -1,    98,    -1,   101,    -1,   102,    -1,   103,
      -1,   104,    -1,     6,     7,    -1,     6,   100,     7,    -1,
       6,    99,     7,    -1,     6,    99,   100,     7,    -1,     6,
     100,    99,     7,    -1,    86,    -1,    99,    86,    -1,    97,
      -1,   100,    97,    -1,    22,    -1,    85,    22,    -1,    56,
       3,    85,     4,    97,    -1,    56,     3,    85,     4,    97,
      57,    97,    -1,    58,     3,    85,     4,    97,    -1,    59,
       3,   101,   101,     4,    97,    -1,    59,     3,   101,   101,
      85,     4,    97,    -1,    60,    22,    -1,    60,    85,    22,
      -1,   106,    -1,   105,   106,    -1,   107,    -1,    86,    -1,
      87,    92,    99,    98,    -1,    87,    92,    98,    -1,    92,
      99,    98,    -1,    92,    98,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   126,   127,   128,   135,   136,   153,   169,
     186,   201,   219,   220,   224,   225,   240,   255,   258,   264,
     265,   266,   267,   268,   269,   273,   277,   280,   284,   288,
     295,   298,   302,   309,   313,   316,   320,   324,   328,   335,
     336,   340,   347,   350,   357,   360,   367,   370,   377,   380,
     387,   390,   397,   400,   421,   424,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   457,   458,   476,
     477,   498,   501,   504,   507,   513,   516,   551,   555,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   587,   591,
     595,   596,   597,   598,   599,   603,   604,   608,   609,   613,
     614,   618,   619,   620,   621,   622,   626,   640,   651,   662,
     680,   701,   702,   720,   721,   739,   744,   751,   769,   791,
     808,   834,   865,   866,   870,   874,   881,   882,   892,   895,
     908,   909
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'('", "')'", "'='", "'{'", "'}'", "'<'",
  "'>'", "'+'", "'*'", "'/'", "'-'", "'%'", "'?'", "':'", "'^'", "'|'",
  "'&'", "'['", "']'", "';'", "','", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "INC_OP", "DEC_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOID", "IF", "ELSE",
  "WHILE", "FOR", "RETURN", "PRINTF", "SCANF", "'~'", "'!'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "type_qualifier", "declarator", "direct_declarator", "identifier_list",
  "initializer", "initializer_list", "statement", "compound_statement",
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
       0,   256,   257,    40,    41,    61,   123,   125,    60,    62,
      43,    42,    47,    45,    37,    63,    58,    94,   124,    38,
      91,    93,    59,    44,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    71,    72,    72,    72,    72,
      73,    73,    73,    74,    75,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    92,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     107,   107
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
       1,     3,     3,     4,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     2,     3,     3,     4,
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
     111,     0,   131,     0,     0,     0,     1,   125,    91,    70,
       0,     0,   129,     0,     0,   106,    21,    20,    22,    19,
     115,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,    23,    24,     6,    14,    25,     0,    26,    30,    33,
      34,    39,    42,    44,    46,    48,    50,    52,    54,    67,
       0,   113,   101,     0,     0,   102,   103,   104,   105,    77,
     112,   130,    94,    95,     0,    92,    76,     0,    97,    78,
     128,     0,    18,    15,    16,     0,     0,     0,   122,     0,
       0,     0,    10,    11,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,    25,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,   108,     0,   107,
     114,     0,    93,     0,    99,     0,     5,     0,     0,     0,
     123,     8,     0,    12,     0,    55,    27,    28,    29,    31,
      32,    35,    36,    37,    38,    40,    41,    43,    45,    47,
      49,     0,    51,    68,   109,   110,    96,    98,     0,     0,
       0,     0,     9,     0,     7,     0,   100,   117,   119,     0,
       0,    13,    53,     0,   120,     0,   118,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,    64,   162,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   125,
      80,    30,    31,    24,    25,    15,    16,    17,    18,    94,
      99,   155,    81,    82,    33,    84,    85,    86,    87,    88,
      19,    20,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
     465,     7,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,    19,   197,   197,   452,    78,   140,
    -102,  -102,     5,  -102,   103,  -102,   491,  -102,  -102,   152,
    -102,    19,  -102,   452,    12,   -16,  -102,  -102,  -102,  -102,
       7,   371,  -102,   452,   466,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,   466,   466,   466,    21,    35,    39,
      64,  -102,  -102,  -102,   141,    10,   466,  -102,   215,    86,
    -102,    71,   150,    -6,    59,   114,    70,     4,  -102,  -102,
     174,  -102,  -102,   211,   270,  -102,  -102,  -102,  -102,   133,
    -102,  -102,  -102,  -102,    74,  -102,  -102,   371,  -102,  -102,
    -102,   131,  -102,  -102,  -102,   466,   466,   391,  -102,   231,
     418,   466,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,   466,  -102,  -102,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,  -102,   466,  -102,   329,  -102,
    -102,   501,  -102,   112,  -102,    80,  -102,   162,   205,   391,
    -102,  -102,   209,  -102,   108,  -102,  -102,  -102,  -102,   215,
     215,  -102,  -102,  -102,  -102,    71,    71,   150,    -6,    59,
     114,    50,    70,  -102,  -102,  -102,  -102,  -102,   371,     1,
       1,   446,  -102,   466,  -102,   466,  -102,    85,  -102,     1,
     219,  -102,  -102,     1,  -102,     1,  -102,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,  -102,   -22,  -102,   -58,    88,  -102,   151,
     118,    17,    28,    31,    33,    40,  -102,    30,   -41,  -102,
     -43,     2,   130,  -102,   191,  -102,  -102,   120,  -102,  -102,
     -94,  -102,   -66,   124,    11,   158,  -101,  -102,  -102,  -102,
    -102,   249,  -102
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      98,   101,    13,   154,    44,    95,   159,    29,   127,    38,
       1,    46,    47,   139,    48,   114,    92,   109,   150,   143,
      49,    13,     1,    50,   105,    51,    52,    53,    54,    55,
      56,     2,   102,   103,   104,    90,    93,    43,   106,   144,
      83,    23,   107,     2,   126,    90,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    98,    57,   191,    58,
      59,    60,   157,   158,    61,    62,   195,    44,   164,   163,
     166,   167,   168,   146,    46,    47,   140,    48,   152,   133,
     134,    34,   150,    49,   165,    90,   108,   187,    51,    52,
      53,    54,    55,    56,   196,   151,   131,   153,    35,   132,
     181,   135,   136,   188,   142,   183,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,    22,   126,   197,   198,    39,    40,    61,    62,   194,
      14,   146,   141,   204,    26,   156,   186,   206,    41,   207,
      36,    32,   203,     1,   110,    27,    28,    98,   200,    14,
      42,    89,   201,    90,   146,    44,   177,    91,    29,    45,
      89,   111,    46,    47,     2,    48,   189,   100,   178,   112,
     113,    49,   179,   126,    50,   180,    51,    52,    53,    54,
      55,    56,   137,   138,   182,   146,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   145,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    57,   190,
      58,    59,    60,   192,    44,    61,    62,    29,   147,   169,
     170,    46,    47,   205,    48,   202,   128,   129,   146,   130,
      49,    96,   193,    50,     0,    51,    52,    53,    54,    55,
      56,   148,   146,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   160,   146,   175,   176,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    57,    37,    58,
      59,    60,     0,    44,    61,    62,    29,   149,     0,     0,
      46,    47,     0,    48,   171,   172,   173,   174,     0,    49,
       0,     0,    50,     0,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    57,     0,    58,    59,
      60,     0,    44,    61,    62,    29,   184,     0,     0,    46,
      47,     0,    48,     0,     0,     0,     0,     0,    49,     0,
       0,    50,     0,    51,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    97,     0,     0,
       0,    46,    47,     0,    48,    57,     0,    58,    59,    60,
      49,     0,    61,    62,    44,    51,    52,    53,    54,    55,
      56,    46,    47,     0,    48,     0,     0,     0,     0,     0,
      49,     0,     0,    50,     0,    51,    52,    53,    54,    55,
      56,    44,   161,     0,     0,     0,     0,     0,    46,    47,
       0,    48,     0,     0,    61,    62,     0,    49,     0,     0,
       0,     0,    51,    52,    53,    54,    55,    56,     0,    44,
     199,     0,     0,     0,    61,    62,    46,    47,    29,    48,
       0,     0,     0,     0,     0,    49,     0,     0,     1,    44,
      51,    52,    53,    54,    55,    56,    46,    47,     0,    48,
       0,    61,    62,     0,     0,    49,     0,     0,     0,     2,
      51,    52,    53,    54,    55,    56,    41,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   185,    61,
      62,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      62,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12
};

static const yytype_int16 yycheck[] =
{
      41,    44,     0,    97,     3,    21,   107,     6,    66,     4,
       3,    10,    11,    19,    13,     5,     4,    60,    84,    15,
      19,    19,     3,    22,     3,    24,    25,    26,    27,    28,
      29,    24,    54,    55,    56,    33,    24,    26,     3,    35,
      29,    22,     3,    24,    66,    43,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    97,    56,   159,    58,
      59,    60,   105,   106,    63,    64,    16,     3,   111,   110,
     128,   129,   130,    23,    10,    11,    17,    13,     4,     8,
       9,     3,   148,    19,   125,    83,    22,     7,    24,    25,
      26,    27,    28,    29,   188,    84,    10,    23,    20,    13,
     143,    30,    31,    23,    34,   146,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     1,   144,   189,   190,    22,    23,    63,    64,    21,
       0,    23,    18,   199,    14,     4,    24,   203,     5,   205,
       0,    17,    57,     3,     3,    15,    16,   188,   191,    19,
      26,    31,   193,   151,    23,     3,   139,    33,     6,     7,
      40,    20,    10,    11,    24,    13,     4,    43,   140,    28,
      29,    19,   141,   195,    22,   142,    24,    25,    26,    27,
      28,    29,    32,    33,   144,    23,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    22,    23,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     4,
      58,    59,    60,     4,     3,    63,    64,     6,     7,   131,
     132,    10,    11,     4,    13,   195,    11,    12,    23,    14,
      19,    40,    23,    22,    -1,    24,    25,    26,    27,    28,
      29,    83,    23,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    22,    23,   137,   138,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    19,    58,
      59,    60,    -1,     3,    63,    64,     6,     7,    -1,    -1,
      10,    11,    -1,    13,   133,   134,   135,   136,    -1,    19,
      -1,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,     3,    63,    64,     6,     7,    -1,    -1,    10,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,    -1,    -1,
      -1,    10,    11,    -1,    13,    56,    -1,    58,    59,    60,
      19,    -1,    63,    64,     3,    24,    25,    26,    27,    28,
      29,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    24,    25,    26,    27,    28,
      29,     3,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,    13,    -1,    -1,    63,    64,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    -1,     3,
       4,    -1,    -1,    -1,    63,    64,    10,    11,     6,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,     3,     3,
      24,    25,    26,    27,    28,    29,    10,    11,    -1,    13,
      -1,    63,    64,    -1,    -1,    19,    -1,    -1,    -1,    24,
      24,    25,    26,    27,    28,    29,     5,     6,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     7,    63,
      64,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    86,    87,    90,    91,    92,    93,   105,
     106,   107,    92,    22,    88,    89,    92,    87,    87,     6,
      86,    87,    98,    99,     3,    20,     0,   106,     4,    22,
      23,     5,    98,    99,     3,     7,    10,    11,    13,    19,
      22,    24,    25,    26,    27,    28,    29,    56,    58,    59,
      60,    63,    64,    66,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      85,    97,    98,    99,   100,   101,   102,   103,   104,    92,
      86,    98,     4,    24,    94,    21,    89,     6,    83,    95,
      98,    85,    69,    69,    69,     3,     3,     3,    22,    85,
       3,    20,    28,    29,     5,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    84,    69,    71,    11,    12,
      14,    10,    13,     8,     9,    30,    31,    32,    33,    19,
      17,    18,    34,    15,    35,    22,    23,     7,   100,     7,
      97,    99,     4,    23,    95,    96,     4,    85,    85,   101,
      22,     4,    68,    83,    85,    83,    71,    71,    71,    72,
      72,    74,    74,    74,    74,    75,    75,    76,    77,    78,
      79,    85,    80,    83,     7,     7,    24,     7,    23,     4,
       4,   101,     4,    23,    21,    16,    95,    97,    97,     4,
      85,    83,    82,    57,    97,     4,    97,    97
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
#line 125 "ctvb.y"
    { printf("primary_expression/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 126 "ctvb.y"
    { printf("primary_expression/CONSTANT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 127 "ctvb.y"
    { printf("primary_expression/STRING_LITERAL (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 128 "ctvb.y"
    { 
																							printf("primary_expression/'(' expression ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=(yyvsp[(2) - (3)].charval);
																						}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 135 "ctvb.y"
    { printf("postfix_expression/primary_expression (Col:%d,Ln:%d) %d\n",i++,column+1,line+1); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 136 "ctvb.y"
    {
																							printf("postfix_expression/postfix_expression '[' expression ']' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *postfix_expression;
																							postfix_expression=(char *)malloc(((strlen((yyvsp[(1) - (4)].charval))+1)+(strlen((yyvsp[(2) - (4)].charval))+1)+(strlen((yyvsp[(3) - (4)].charval))+1)+(strlen((yyvsp[(4) - (4)].charval))+1)+10)*sizeof(char));
																							sprintf(postfix_expression, "%s(%s)",(yyvsp[(1) - (4)].charval),(yyvsp[(3) - (4)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (4)].charval));
																							free((yyvsp[(2) - (4)].charval));
																							free((yyvsp[(3) - (4)].charval));
																							free((yyvsp[(4) - (4)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=postfix_expression;
																						}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 153 "ctvb.y"
    {
																							printf("postfix_expression/postfix_expression '(' ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *postfix_expression;
																							postfix_expression=(char *)malloc(((strlen((yyvsp[(1) - (3)].charval))+1)+(strlen((yyvsp[(2) - (3)].charval))+1)+10)*sizeof(char));
																							sprintf(postfix_expression, "%s()",(yyvsp[(1) - (3)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (3)].charval));
																							free((yyvsp[(2) - (3)].charval));
																							free((yyvsp[(3) - (3)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=postfix_expression;
																						}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 169 "ctvb.y"
    {
																							printf("postfix_expression/postfix_expression '(' argument_expression_list ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *postfix_expression;
																							postfix_expression=(char *)malloc(((strlen((yyvsp[(1) - (4)].charval))+1)+(strlen((yyvsp[(2) - (4)].charval))+1)+(strlen((yyvsp[(3) - (4)].charval))+1)+(strlen((yyvsp[(4) - (4)].charval))+1)+10)*sizeof(char));
																							sprintf(postfix_expression, "%s(%s)",(yyvsp[(1) - (4)].charval),(yyvsp[(3) - (4)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (4)].charval));
																							free((yyvsp[(2) - (4)].charval));
																							free((yyvsp[(3) - (4)].charval));
																							free((yyvsp[(4) - (4)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=postfix_expression;
																						}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 186 "ctvb.y"
    {
																							printf("postfix_expression/postfix_expression INC_OP (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *postfix_expression;
																							postfix_expression=(char *)malloc(((strlen((yyvsp[(1) - (2)].charval))+1)+(strlen((yyvsp[(2) - (2)].charval))+1)+10)*sizeof(char));
																							sprintf(postfix_expression, "%s = %s + 1",(yyvsp[(1) - (2)].charval),(yyvsp[(1) - (2)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (2)].charval));
																							free((yyvsp[(2) - (2)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=postfix_expression;
																						}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 201 "ctvb.y"
    {
																							printf("postfix_expression/postfix_expression DEC_OP (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *postfix_expression;
																							postfix_expression=(char *)malloc(((strlen((yyvsp[(1) - (2)].charval))+1)+(strlen((yyvsp[(2) - (2)].charval))+1)+10)*sizeof(char));
																							sprintf(postfix_expression, "%s = %s - 1",(yyvsp[(1) - (2)].charval),(yyvsp[(1) - (2)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (2)].charval));
																							free((yyvsp[(2) - (2)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=postfix_expression;
																						}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 219 "ctvb.y"
    { printf("argument_expression_list/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 220 "ctvb.y"
    { printf("argument_expression_list/argument_expression_list ',' assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 224 "ctvb.y"
    { printf("unary_expression/postfix_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 225 "ctvb.y"
    { 
																							printf("unary_expression/INC_OP unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *unary_expression;
																							unary_expression=(char *)malloc(((strlen((yyvsp[(1) - (2)].charval))+1)+(strlen((yyvsp[(2) - (2)].charval))+1)+10)*sizeof(char));
																							sprintf(unary_expression, "%s = %s + 1",(yyvsp[(2) - (2)].charval),(yyvsp[(2) - (2)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (2)].charval));
																							free((yyvsp[(2) - (2)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=unary_expression;
																						}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 240 "ctvb.y"
    { 
																							printf("unary_expression/DEC_OP unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *unary_expression;
																							unary_expression=(char *)malloc(((strlen((yyvsp[(1) - (2)].charval))+1)+(strlen((yyvsp[(2) - (2)].charval))+1)+10)*sizeof(char));
																							sprintf(unary_expression, "%s = %s - 1",(yyvsp[(2) - (2)].charval),(yyvsp[(2) - (2)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (2)].charval));
																							free((yyvsp[(2) - (2)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=unary_expression;
																						}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 255 "ctvb.y"
    { 
																							printf("unary_expression/unary_operator cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 258 "ctvb.y"
    { 
																							printf("unary_expression/SIZEOF unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 264 "ctvb.y"
    { printf("unary_operator/'&' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 265 "ctvb.y"
    { printf("unary_operator/'*' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 266 "ctvb.y"
    { printf("unary_operator/'+' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 267 "ctvb.y"
    { printf("unary_operator/'-' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 268 "ctvb.y"
    { printf("unary_operator/'~' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 269 "ctvb.y"
    { printf("unary_operator/'!' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 273 "ctvb.y"
    { printf("cast_expression/unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 277 "ctvb.y"
    { 
																							printf("multiplicative_expression/cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 280 "ctvb.y"
    { 
																							printf("multiplicative_expression/multiplicative_expression '*' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 284 "ctvb.y"
    { 
																							printf("multiplicative_expression/multiplicative_expression '/' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 288 "ctvb.y"
    { 
																							printf("multiplicative_expression/multiplicative_expression '%' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 295 "ctvb.y"
    {
																							printf("additive_expression/multiplicative_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 298 "ctvb.y"
    { 
																							printf("additive_expression/additive_expression '+' multiplicative_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 302 "ctvb.y"
    { 
																							printf("additive_expression/additive_expression '-' multiplicative_expression (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 309 "ctvb.y"
    { printf("shift_expression/additive_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 313 "ctvb.y"
    { 
																							printf("relational_expression/shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 316 "ctvb.y"
    { 
																							printf("relational_expression/relational_expression '<' shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 320 "ctvb.y"
    { 
																							printf("relational_expression/relational_expression '>' shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 324 "ctvb.y"
    { 
																							printf("relational_expression/relational_expression LE_OP shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 328 "ctvb.y"
    { 
																							printf("relational_expression/relational_expression GE_OP shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 335 "ctvb.y"
    { printf("equality_expression/relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 336 "ctvb.y"
    {
																							printf("equality_expression/equality_expression EQ_OP relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 340 "ctvb.y"
    { 
																							printf("equality_expression/equality_expression NE_OP relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 347 "ctvb.y"
    { 
																							printf("and_expression/equality_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 350 "ctvb.y"
    { 
																							printf("and_expression/and_expression '&' equality_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 357 "ctvb.y"
    { 
																							printf("exclusive_or_expression/and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 360 "ctvb.y"
    { 
																							printf("exclusive_or_expression/exclusive_or_expression '^' and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 367 "ctvb.y"
    { 
																							printf("inclusive_or_expression/exclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 370 "ctvb.y"
    { 
																							printf("inclusive_or_expression/inclusive_or_expression '|' exclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 377 "ctvb.y"
    { 
																							printf("logical_and_expression/inclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																						}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 380 "ctvb.y"
    { 
																							printf("logical_and_expression/logical_and_expression AND_OP inclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 387 "ctvb.y"
    { 
																							printf("logical_or_expression/logical_and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 390 "ctvb.y"
    { 
																							printf("logical_or_expression/logical_or_expression OR_OP logical_and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							(yyval.charval)=transform_expression((yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																						}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 397 "ctvb.y"
    { 
																							printf("conditional_expression/logical_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 400 "ctvb.y"
    { 
																							printf("conditional_expression/logical_or_expression '?' expression ':' conditional_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																																													
																							/*Allocating space for the expression String*/
																							char *conditional_expression;
																							conditional_expression=(char *)malloc(((strlen((yyvsp[(1) - (5)].charval))+1)+(strlen((yyvsp[(2) - (5)].charval))+1)+(strlen((yyvsp[(3) - (5)].charval))+1)+(strlen((yyvsp[(4) - (5)].charval))+1)+(strlen((yyvsp[(5) - (5)].charval))+1)+30)*sizeof(char));
																							sprintf(conditional_expression, "If (%s) Then\n\nReturn %s\nElse\nReturn %s\nEnd If",(yyvsp[(1) - (5)].charval),(yyvsp[(3) - (5)].charval),(yyvsp[(5) - (5)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (5)].charval));
																							free((yyvsp[(2) - (5)].charval));
																							free((yyvsp[(3) - (5)].charval));
																							free((yyvsp[(4) - (5)].charval));
																							free((yyvsp[(5) - (5)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=conditional_expression;
																						}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 421 "ctvb.y"
    { 
																							printf("assignment_expression/conditional_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 424 "ctvb.y"
    { 
																							printf("assignment_expression/unary_expression assignment_operator assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 	
																							
																							/*Allocating space for the expression String*/
																							char *assignment_expression;
																							assignment_expression=(char *)malloc(((strlen((yyvsp[(1) - (3)].charval))+1)+(strlen((yyvsp[(2) - (3)].charval))+1)+(strlen((yyvsp[(3) - (3)].charval))+1))*sizeof(char));
																							sprintf(assignment_expression, "%s%s%s",(yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].charval),(yyvsp[(3) - (3)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (3)].charval));
																							free((yyvsp[(2) - (3)].charval));
																							free((yyvsp[(3) - (3)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval)=assignment_expression;
																						}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 443 "ctvb.y"
    { printf("assignment_operator/'=' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 444 "ctvb.y"
    { printf("assignment_operator/MUL_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 445 "ctvb.y"
    { printf("assignment_operator/DIV_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 446 "ctvb.y"
    { printf("assignment_operator/MOD_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 447 "ctvb.y"
    { printf("assignment_operator/ADD_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 448 "ctvb.y"
    { printf("assignment_operator/SUB_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 449 "ctvb.y"
    { printf("assignment_operator/LEFT_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 450 "ctvb.y"
    { printf("assignment_operator/RIGHT_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 451 "ctvb.y"
    { printf("assignment_operator/AND_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 452 "ctvb.y"
    { printf("assignment_operator/XOR_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 453 "ctvb.y"
    { printf("assignment_operator/OR_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 457 "ctvb.y"
    { printf("expression/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 458 "ctvb.y"
    {
																							printf("expression/expression ',' assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);

																							char *expression;
																							expression=(char *)malloc(((strlen((yyvsp[(1) - (3)].charval))+1)+(strlen((yyvsp[(3) - (3)].charval))+1)+3)*sizeof(char));
																							strcpy(expression, (yyvsp[(1) - (3)].charval));
																							strcat(expression, ", ");
																							strcat(expression, (yyvsp[(3) - (3)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(2) - (3)].charval));
																							free((yyvsp[(3) - (3)].charval));
																							
																							(yyval.charval)=expression;
																						}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 476 "ctvb.y"
    { printf("declaration/declaration_specifiers ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 477 "ctvb.y"
    {
																							printf("declaration/declaration_specifiers init_declarator_list ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							char *declaration;
																							if((yyvsp[(2) - (3)].args).arg2 != NULL)
																							{
																								//fprintf(vbFPtr, "Dim %s as %s\n%s\n",$2.arg1,$1,$2.arg2);
																								declaration=(char *)malloc(((strlen((yyvsp[(1) - (3)].charval))+1)+(strlen((yyvsp[(2) - (3)].args).arg1)+1)+(strlen((yyvsp[(2) - (3)].args).arg2)+1)+10)*sizeof(char));
																								sprintf(declaration, "Dim %s as %s\n%s\n",(yyvsp[(2) - (3)].args).arg1,(yyvsp[(1) - (3)].charval),(yyvsp[(2) - (3)].args).arg2);
																								(yyval.charval)=declaration;
																							}
																							else
																							{
																								//fprintf(vbFPtr, "Dim %s as %s\n",$2.arg1,$1);
																								declaration=(char *)malloc(((strlen((yyvsp[(1) - (3)].charval))+1)+(strlen((yyvsp[(2) - (3)].args).arg1)+1)+10)*sizeof(char));
																								sprintf(declaration, "Dim %s as %s\n",(yyvsp[(2) - (3)].args).arg1,(yyvsp[(1) - (3)].charval));
																								(yyval.charval)=declaration;
																							}
																						}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 498 "ctvb.y"
    {
																							printf("declaration_specifiers/type_specifier (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																						}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 501 "ctvb.y"
    {
																							printf("declaration_specifiers/type_specifier declaration_specifiers (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++);
																						}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 504 "ctvb.y"
    {
																							printf("declaration_specifiers/type_qualifier (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																						}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 507 "ctvb.y"
    { 
																							printf("declaration_specifiers/type_qualifier declaration_specifiers (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																						}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 513 "ctvb.y"
    { 
																							printf("init_declarator_list/init_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																						}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 516 "ctvb.y"
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
#line 551 "ctvb.y"
    { 
																							printf("init_declarator/declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							Args a = {(yyvsp[(1) - (1)].charval),NULL,NULL};
																							(yyval.args) = a; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 555 "ctvb.y"
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
#line 575 "ctvb.y"
    { printf("type_specifier/VOID (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 576 "ctvb.y"
    { printf("type_specifier/CHAR (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 577 "ctvb.y"
    { printf("type_specifier/SHORT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 578 "ctvb.y"
    { printf("type_specifier/INT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 579 "ctvb.y"
    { printf("type_specifier/LONG (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 580 "ctvb.y"
    { printf("type_specifier/FLOAT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 581 "ctvb.y"
    { printf("type_specifier/DOUBLE (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 582 "ctvb.y"
    { printf("type_specifier/SIGNED (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 583 "ctvb.y"
    { printf("type_specifier/UNSIGNED (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 587 "ctvb.y"
    { printf("type_qualifier/CONST (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 591 "ctvb.y"
    { printf("declarator/direct_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 595 "ctvb.y"
    { printf("direct_declarator/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 596 "ctvb.y"
    { printf("direct_declarator/'(' declarator ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 597 "ctvb.y"
    { printf("direct_declarator/direct_declarator '[' ']' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 598 "ctvb.y"
    { printf("direct_declarator/direct_declarator '(' identifier_list ')' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 599 "ctvb.y"
    { printf("direct_declarator/direct_declarator '(' ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 603 "ctvb.y"
    { printf("identifier_list/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 604 "ctvb.y"
    { printf("identifier_list/identifier_list ',' IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 608 "ctvb.y"
    { printf("initializer/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 609 "ctvb.y"
    { printf("initializer/'{' initializer_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 613 "ctvb.y"
    { printf("initializer_list/initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 614 "ctvb.y"
    { printf("initializer_list/initializer_list ',' initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 618 "ctvb.y"
    { printf("statement/compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 619 "ctvb.y"
    { printf("statement/expression_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 620 "ctvb.y"
    { printf("statement/selection_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 621 "ctvb.y"
    { printf("statement/iteration_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 622 "ctvb.y"
    { printf("statement/jump_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 626 "ctvb.y"
    { 
																							printf("compound_statement/'{' '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							/*Allocating space for the expression String*/
																							char *empty_statment;
																							empty_statment=(char *)malloc(sizeof(char));
																							strcpy(empty_statment, "");
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (2)].charval));
																							free((yyvsp[(2) - (2)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval) = empty_statment;
																						}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 640 "ctvb.y"
    {
																							printf("compound_statement/'{' statement_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							
																							/*Unallocate the space used for inused term*/
																							free((yyvsp[(1) - (3)].charval));
																							free((yyvsp[(3) - (3)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval) = InsertTab((yyvsp[(2) - (3)].charval));
																							free((yyvsp[(2) - (3)].charval));
																						}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 651 "ctvb.y"
    { 
																							printf("compound_statement/'{' declaration_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (3)].charval));
																							free((yyvsp[(3) - (3)].charval));
																							
																							/*Passing the allocated String to $$*/
																							(yyval.charval) = InsertTab((yyvsp[(2) - (3)].charval));
																							free((yyvsp[(2) - (3)].charval));
																						}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 662 "ctvb.y"
    { 
																							printf("compound_statement/'{' declaration_list statement_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							
																							/*Allocating space for the expression String*/
																							char *declaration_statement_list;
																							declaration_statement_list=(char *)malloc(((strlen((yyvsp[(2) - (4)].charval))+1)+(strlen((yyvsp[(3) - (4)].charval))+1))*sizeof(char));
																							strcpy(declaration_statement_list, (yyvsp[(2) - (4)].charval));
																							strcat(declaration_statement_list, (yyvsp[(3) - (4)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (4)].charval));
																							free((yyvsp[(2) - (4)].charval));
																							free((yyvsp[(3) - (4)].charval));
																							free((yyvsp[(4) - (4)].charval));
																							
																							(yyval.charval)=InsertTab(declaration_statement_list);
																							free(declaration_statement_list);
																						}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 680 "ctvb.y"
    {
																							printf("compound_statement/'{' statement_list declaration_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							
																							/*Allocating space for the expression String*/
																							char *statement_declaration_list;
																							statement_declaration_list=(char *)malloc(((strlen((yyvsp[(2) - (4)].charval))+1)+(strlen((yyvsp[(3) - (4)].charval))+1))*sizeof(char));
																							strcpy(statement_declaration_list, (yyvsp[(2) - (4)].charval));
																							strcat(statement_declaration_list, (yyvsp[(3) - (4)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (4)].charval));
																							free((yyvsp[(2) - (4)].charval));
																							free((yyvsp[(3) - (4)].charval));
																							free((yyvsp[(4) - (4)].charval));
																							
																							(yyval.charval)=InsertTab(statement_declaration_list);
																							free(statement_declaration_list);
																						}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 701 "ctvb.y"
    { printf("declaration_list/declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 702 "ctvb.y"
    {
																							printf("declaration_list/declaration_list declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																							/*Allocating space for the expression String*/
																							char *declaration_list;
																							declaration_list=(char *)malloc(((strlen((yyvsp[(1) - (2)].charval))+1)+(strlen((yyvsp[(2) - (2)].charval))+1))*sizeof(char));
																							strcpy(declaration_list, (yyvsp[(1) - (2)].charval));
																							strcat(declaration_list, "\n");
																							strcat(declaration_list, (yyvsp[(2) - (2)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (2)].charval));
																							free((yyvsp[(2) - (2)].charval));
																							
																							(yyval.charval)=declaration_list;
																						}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 720 "ctvb.y"
    { printf("statement_list/statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 721 "ctvb.y"
    { 
																							printf("statement_list/statement_list statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							/*Allocating space for the expression String*/
																							char *statement_list;
																							statement_list=(char *)malloc(((strlen((yyvsp[(1) - (2)].charval))+1)+(strlen((yyvsp[(2) - (2)].charval))+1))*sizeof(char));
																							strcpy(statement_list, (yyvsp[(1) - (2)].charval));
																							strcat(statement_list, "\n");
																							strcat(statement_list, (yyvsp[(2) - (2)].charval));
																							
																							/*Unallocate the space used for the second and the third term*/
																							free((yyvsp[(1) - (2)].charval));
																							free((yyvsp[(2) - (2)].charval));
																							
																							(yyval.charval)=statement_list;
																						}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 739 "ctvb.y"
    {
																							printf("expression_statement/';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							free((yyvsp[(1) - (1)].charval));
																							(yyval.charval)="";
																						}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 744 "ctvb.y"
    {
																							printf("expression_statement/expression ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							free((yyvsp[(2) - (2)].charval));
																						}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 751 "ctvb.y"
    { 
																							printf("selection_statement/IF '(' expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							
																							/*Allocating space for the expression String*/
																							char *selection_statement;
																							//fprintf(vbFPtr, "If (%s) Then\n\n%s\nEnd If",$3,$5);
																							selection_statement=(char *)malloc(((strlen((yyvsp[(3) - (5)].charval))+1)+(strlen(InsertTab((yyvsp[(5) - (5)].charval)))+1)+20)*sizeof(char));
																							sprintf(selection_statement, "If (%s) Then\n%s\nEnd If",(yyvsp[(3) - (5)].charval),InsertTab((yyvsp[(5) - (5)].charval)));
																							
																							(yyval.charval)=selection_statement;
																							
																							/*Unallocate the space used for the terms*/
																							free((yyvsp[(1) - (5)].charval));
																							free((yyvsp[(2) - (5)].charval));
																							free((yyvsp[(3) - (5)].charval));
																							free((yyvsp[(4) - (5)].charval));
																							free((yyvsp[(5) - (5)].charval));
																						}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 769 "ctvb.y"
    {
																							printf("selection_statement/IF '(' expression ')' statement ELSE statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							
																							/*Allocating space for the expression String*/
																							char *selection_statement;
																							//fprintf(vbFPtr, "If (%s) Then\n%s\nElse\n%s\nEnd If",$3,$5,$7);
																							selection_statement=(char *)malloc(((strlen((yyvsp[(3) - (7)].charval))+1)+(strlen(InsertTab((yyvsp[(5) - (7)].charval)))+1)+(strlen(InsertTab((yyvsp[(7) - (7)].charval)))+1)+30)*sizeof(char));
																							sprintf(selection_statement, "If (%s) Then\n\n%s\nElse\n%s\nEnd If",(yyvsp[(3) - (7)].charval),InsertTab((yyvsp[(5) - (7)].charval)),InsertTab((yyvsp[(7) - (7)].charval)));
																							
																							(yyval.charval)=selection_statement;
																							/*Unallocate the space used for the terms*/
																							free((yyvsp[(1) - (7)].charval));
																							free((yyvsp[(2) - (7)].charval));
																							free((yyvsp[(3) - (7)].charval));
																							free((yyvsp[(4) - (7)].charval));
																							free((yyvsp[(5) - (7)].charval));
																							free((yyvsp[(6) - (7)].charval));
																							free((yyvsp[(7) - (7)].charval));
																							}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 791 "ctvb.y"
    { 
																							printf("iteration_statement/WHILE '(' expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							
																							/*Allocating space for the expression String*/
																							char *iteration_statement;
																							//fprintf(vbFPtr, "While (%s) Then\n\n%s\nEnd While",$3,$5);
																							iteration_statement=(char *)malloc(((strlen((yyvsp[(3) - (5)].charval))+1)+(strlen((yyvsp[(5) - (5)].charval))+1)+30)*sizeof(char));
																							sprintf(iteration_statement, "While (%s) Then\n\n%s\nEnd While",(yyvsp[(3) - (5)].charval),(yyvsp[(5) - (5)].charval));
																							(yyval.charval)=iteration_statement;
																							
																							/*Unallocate the space used for the terms*/
																							free((yyvsp[(1) - (5)].charval));
																							free((yyvsp[(2) - (5)].charval));
																							free((yyvsp[(3) - (5)].charval));
																							free((yyvsp[(4) - (5)].charval));
																							free((yyvsp[(5) - (5)].charval));
																						}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 808 "ctvb.y"
    { 
																							printf("iteration_statement/FOR '(' expression_statement expression_statement ')' statement (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); 
																							
																							/*Allocating space for the expression String*/
																							char *iteration_statement;
																							iteration_statement=(char *)malloc(((strlen((yyvsp[(3) - (6)].charval))+1)+(strlen((yyvsp[(4) - (6)].charval))+1)+(strlen((yyvsp[(6) - (6)].charval))+1)+30)*sizeof(char));
																							
																							char *expression_statement1;
																							expression_statement1=(char *)malloc((strlen((yyvsp[(3) - (6)].charval))+1)*sizeof(char));
																							strcpy(expression_statement1,(yyvsp[(3) - (6)].charval));
																							
																							char *expression_statement2;
																							expression_statement2=(char *)malloc((strlen((yyvsp[(4) - (6)].charval))+1)*sizeof(char));
																							strcpy(expression_statement2,(yyvsp[(4) - (6)].charval));
																							
																							sprintf(iteration_statement, "For %s To %s\n\n%s\nNext %s",(yyvsp[(3) - (6)].charval),split(expression_statement2,"<",2),(yyvsp[(6) - (6)].charval),split(expression_statement1,"=",1));
																							(yyval.charval)=iteration_statement;
																							
																							/*Unallocate the space used for the terms*/
																							free((yyvsp[(1) - (6)].charval));
																							free((yyvsp[(2) - (6)].charval));
																							free((yyvsp[(3) - (6)].charval));
																							free((yyvsp[(4) - (6)].charval));
																							free((yyvsp[(5) - (6)].charval));
																							free((yyvsp[(6) - (6)].charval));
																						}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 834 "ctvb.y"
    { 
																							printf("iteration_statement/FOR '(' expression_statement expression_statement expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							
																							/*Allocating space for the expression String*/
																							char *iteration_statement;
																							iteration_statement=(char *)malloc(((strlen((yyvsp[(3) - (7)].charval))+1)+(strlen((yyvsp[(4) - (7)].charval))+1)+(strlen((yyvsp[(6) - (7)].charval))+1)+(strlen((yyvsp[(7) - (7)].charval))+1)+30)*sizeof(char));
																							
																							//I did make a copy of $3 and $4 because the split function change the string where str is located (pointer)
																							char *expression_statement1;
																							expression_statement1=(char *)malloc((strlen((yyvsp[(3) - (7)].charval))+1)*sizeof(char));
																							strcpy(expression_statement1,(yyvsp[(3) - (7)].charval));
																							
																							char *expression_statement2;
																							expression_statement2=(char *)malloc((strlen((yyvsp[(4) - (7)].charval))+1)*sizeof(char));
																							strcpy(expression_statement2,(yyvsp[(4) - (7)].charval));
																							
																							sprintf(iteration_statement, "For %s To %s Step 1\n\n%s\nNext %s",(yyvsp[(3) - (7)].charval),split(expression_statement2,"<",2),(yyvsp[(7) - (7)].charval),split(expression_statement1,"=",1));
																							(yyval.charval)=iteration_statement;
																							
																							/*Unallocate the space used for the terms*/
																							free((yyvsp[(1) - (7)].charval));
																							free((yyvsp[(2) - (7)].charval));
																							free((yyvsp[(3) - (7)].charval));
																							free((yyvsp[(4) - (7)].charval));
																							free((yyvsp[(5) - (7)].charval));
																							free((yyvsp[(6) - (7)].charval));
																							free((yyvsp[(7) - (7)].charval));
																						}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 865 "ctvb.y"
    { printf("jump_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 870 "ctvb.y"
    { 
																							printf("translation_unit/external_declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							fprintf(vbFPtr, "%s\n",(yyvsp[(1) - (1)].charval));
																						}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 874 "ctvb.y"
    { 
																							printf("translation_unit/translation_unit external_declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							fprintf(vbFPtr, "%s",(yyvsp[(2) - (2)].charval));
																						}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 881 "ctvb.y"
    { printf("external_declaration/function_definition (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 882 "ctvb.y"
    { 
																							printf("external_declaration/declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); /*Allocating space for the expression String*/
																							char *external_declaration;
																							external_declaration=(char *)malloc(((strlen((yyvsp[(1) - (1)].charval))+1)+20)*sizeof(char));
																							sprintf(external_declaration, "Public Shared%s",&((yyvsp[(1) - (1)].charval))[3]);
																							(yyval.charval)=external_declaration;
																						}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 892 "ctvb.y"
    { 
																							printf("function_definition/eclaration_specifiers declarator declaration_list compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++);
																						}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 895 "ctvb.y"
    { 
																							printf("function_definition/declaration_specifiers declarator compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); 
																							//fprintf(vbFPtr, "Module mainModule\n\tSub Main()\n%s\n\tEnd Sub\nEnd Module",InsertTab($3));
																							
																							/*Allocating space for the expression String*/
																							char *function_definition;
																							function_definition=(char *)malloc(((strlen((yyvsp[(3) - (3)].charval))+1)+60)*sizeof(char));
																							sprintf(function_definition, "Module mainModule\n\tSub Main()\n%s\n\tEnd Sub\nEnd Module",InsertTab((yyvsp[(3) - (3)].charval)));
																							(yyval.charval)=function_definition;
																							
																							/*Unallocate the space used for the terms*/
																							free((yyvsp[(1) - (3)].charval));
																						}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 908 "ctvb.y"
    { printf("function_definition/declarator declaration_list compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 909 "ctvb.y"
    { printf("function_definition/declarator compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
    break;



/* Line 1455 of yacc.c  */
#line 3226 "y.tab.c"
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
#line 912 "ctvb.y"

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
