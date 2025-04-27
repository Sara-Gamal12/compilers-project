
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
#line 1 "parser.y"

    //INCLUDES
    #include <stdio.h>
    #include "compiler.h"
    #include <stdbool.h>
    //----------------------------------------------
    //Function Prototypes
    extern void remove_errors_file();
    extern void log_errors(int,const char *);
    /* TODO: implement this function and see what it can do */
    // extern void check_unused_variables();
    //----------------------------------------------
    // we will define these functions here 
    Node *construct_operation_node(int oper, int nops, ...);
    Node *construct_identifier_node(char*, int = -1, int = -1);
    Node *construct_constant_node(int, int, ...);
    Node *construct_decleration_node(char*, int, int = -1);
    //----------------------------------------------

    void free_node(Node *p);
    // int execute_all(Node *p, int = -1, int = -1, int = 0, ...);

    //----------------------------------------------
    int yylex(void);
    void yyerror(const char *emsg);
    extern int line;
    Scope p_current_scope (0,NULL); // Global variable to keep track of the current scope
    //----------------------------------------------
    void print_ast(Node *node, int indent) ;


/* Line 189 of yacc.c  */
#line 105 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     FLOAT = 259,
     STRING = 260,
     BOOL = 261,
     VARIABLE = 262,
     IF = 263,
     SWITCH = 264,
     CASE = 265,
     DEFAULT = 266,
     FOR = 267,
     WHILE = 268,
     DO = 269,
     UNTIL = 270,
     BREAK = 271,
     CONTINUE = 272,
     CONST = 273,
     INT_TYPE = 274,
     FLOAT_TYPE = 275,
     BOOL_TYPE = 276,
     STRING_TYPE = 277,
     VOID_TYPE = 278,
     DECLARE_ONLY = 279,
     FUNCTION = 280,
     PRINT = 281,
     RETURN = 282,
     BLOCK = 283,
     IFX = 284,
     ELSE = 285,
     FUNC = 286,
     OR = 287,
     AND = 288,
     NOT_EQUAL = 289,
     EQUAL = 290,
     LESS_EQUAL = 291,
     GREATER_EQUAL = 292,
     NOT = 293,
     NEGATIVE = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 34 "parser.y"

  int intValue;                          /* integer  */
  float floatValue;                      /* double   */
  char* stringValue;                     /* string   */
  bool boolValue;                        /* boolean  */

  char *sIndex;                       /* symbol table index */
  char *varType;                      /* variable type      */
  Node *nodePtr;                      /*   node             */



/* Line 214 of yacc.c  */
#line 193 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "parser.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   522

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  177

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
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      51,    52,    43,    41,    53,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    48,
      36,    32,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    33,    34,    37,
      38,    39,    40,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    18,    21,
      24,    26,    28,    30,    33,    35,    37,    39,    41,    45,
      48,    51,    61,    65,    67,    68,    73,    76,    80,    82,
      83,    89,    95,   107,   115,   127,   131,   139,   148,   156,
     163,   164,   167,   169,   171,   175,   179,   180,   182,   185,
     190,   196,   198,   200,   202,   204,   206,   207,   209,   211,
     215,   221,   223,   226,   228,   230,   232,   234,   236,   239,
     242,   246,   250,   254,   258,   262,   266,   270,   274,   278,
     282,   286,   290,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    57,    58,    -1,    -1,    48,
      -1,    79,    48,    -1,    26,    79,    48,    -1,    72,    48,
      -1,    74,    48,    -1,    64,    -1,    65,    -1,    66,    -1,
      61,    48,    -1,    59,    -1,    62,    -1,    67,    -1,    69,
      -1,    49,    78,    50,    -1,    16,    48,    -1,    17,    48,
      -1,    25,    74,    51,    60,    52,    49,    58,    62,    50,
      -1,    74,    53,    60,    -1,    74,    -1,    -1,     7,    51,
      63,    52,    -1,    27,    58,    -1,    63,    53,    79,    -1,
      79,    -1,    -1,    13,    51,    79,    52,    58,    -1,    14,
      78,    15,    79,    48,    -1,    12,    51,    76,    48,    71,
      48,    73,    52,    49,    78,    50,    -1,     8,    51,    79,
      52,    49,    78,    50,    -1,     8,    51,    79,    52,    49,
      78,    50,    30,    49,    78,    50,    -1,    11,    54,    58,
      -1,     9,    51,     7,    52,    49,    70,    50,    -1,     9,
      51,     7,    52,    49,    70,    68,    50,    -1,    10,     3,
      54,    58,    16,    48,    70,    -1,    10,     3,    54,    58,
      16,    48,    -1,    -1,    26,    79,    -1,    74,    -1,    79,
      -1,     7,    32,    61,    -1,     7,    32,    77,    -1,    -1,
      72,    -1,    75,     7,    -1,    75,     7,    32,    77,    -1,
      18,    75,     7,    32,    77,    -1,    19,    -1,    20,    -1,
      21,    -1,    22,    -1,    23,    -1,    -1,    74,    -1,    79,
      -1,     7,    32,    77,    -1,    51,     7,    32,    77,    52,
      -1,    58,    -1,    78,    58,    -1,     3,    -1,     4,    -1,
       5,    -1,     7,    -1,     6,    -1,    42,    79,    -1,    46,
      79,    -1,    79,    41,    79,    -1,    79,    42,    79,    -1,
      79,    43,    79,    -1,    79,    44,    79,    -1,    79,    45,
      79,    -1,    79,    36,    79,    -1,    79,    35,    79,    -1,
      79,    40,    79,    -1,    79,    39,    79,    -1,    79,    37,
      79,    -1,    79,    38,    79,    -1,    79,    34,    79,    -1,
      79,    33,    79,    -1,    51,    79,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   113,   114,   118,   119,   120,   122,   123,
     125,   126,   127,   129,   130,   131,   133,   134,   135,   136,
     137,   141,   143,   144,   145,   148,   151,   154,   155,   156,
     160,   163,   166,   170,   171,   176,   179,   180,   183,   185,
     193,   194,   195,   196,   199,   200,   204,   205,   208,   209,
     210,   215,   216,   217,   218,   219,   223,   224,   227,   228,
     229,   232,   233,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "STRING", "BOOL",
  "VARIABLE", "IF", "SWITCH", "CASE", "DEFAULT", "FOR", "WHILE", "DO",
  "UNTIL", "BREAK", "CONTINUE", "CONST", "INT_TYPE", "FLOAT_TYPE",
  "BOOL_TYPE", "STRING_TYPE", "VOID_TYPE", "DECLARE_ONLY", "FUNCTION",
  "PRINT", "RETURN", "BLOCK", "IFX", "ELSE", "FUNC", "'='", "OR", "AND",
  "'>'", "'<'", "NOT_EQUAL", "EQUAL", "LESS_EQUAL", "GREATER_EQUAL", "'+'",
  "'-'", "'*'", "'/'", "'%'", "NOT", "NEGATIVE", "';'", "'{'", "'}'",
  "'('", "')'", "','", "':'", "$accept", "program", "functions",
  "statement", "function_declaration", "parameter_list", "function_call",
  "return_statement", "comma_expressions", "while_statement",
  "do_while_statement", "for_statement", "if_statement",
  "default_statement", "switch_statement", "cases", "for_mid_stmt",
  "assignment_statement", "for_assignment", "declaration_statement",
  "data_type", "for_declaration", "rhs_nested_expression",
  "statement_list", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    61,   287,   288,    62,    60,   289,   290,   291,
     292,    43,    45,    42,    47,    37,   293,   294,    59,   123,
     125,    40,    41,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    60,    60,    60,    61,    62,    63,    63,    63,
      64,    65,    66,    67,    67,    68,    69,    69,    70,    70,
      71,    71,    71,    71,    72,    72,    73,    73,    74,    74,
      74,    75,    75,    75,    75,    75,    76,    76,    77,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     3,     2,     2,
       1,     1,     1,     2,     1,     1,     1,     1,     3,     2,
       2,     9,     3,     1,     0,     4,     2,     3,     1,     0,
       5,     5,    11,     7,    11,     3,     7,     8,     7,     6,
       0,     2,     1,     1,     3,     3,     0,     1,     2,     4,
       5,     1,     1,     1,     1,     1,     0,     1,     1,     3,
       5,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    63,    64,    65,    67,    66,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     5,     0,     0,
       3,    14,     0,    15,    10,    11,    12,    16,    17,     0,
       0,     0,     0,     0,    29,     0,     0,    56,     0,    61,
       0,    19,    20,     0,     0,    66,     0,    26,    68,    69,
       0,     0,    13,     8,     9,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
      66,     0,    44,    45,    58,     0,    28,     0,     0,    57,
       0,     0,     0,    62,     0,    24,     7,    18,    83,     0,
      82,    81,    76,    75,    79,    80,    78,    77,    70,    71,
      72,    73,    74,     0,    66,    25,     0,     0,     0,    40,
       0,     0,     0,     0,    23,    66,    49,    59,     0,    27,
       0,     0,     0,     0,    42,    43,    30,    31,    50,     0,
      24,     0,     0,     0,     0,    41,    46,     0,    22,    60,
      33,     0,     0,    36,     0,     0,    47,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    35,     0,    21,
       0,     0,     0,    34,    39,    32,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    49,    31,   123,    32,    33,    85,    34,
      35,    36,    37,   154,    38,   144,   133,    39,   157,    40,
      41,    90,    83,    50,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -37
static const yytype_int16 yypact[] =
{
     -37,    19,   413,   -37,   -37,   -37,   -37,   -37,   -23,   -28,
     -26,   -25,   -15,   413,   -11,    -7,   141,   -37,   -37,   -37,
     -37,   -37,    12,     0,   413,     0,     0,   -37,   413,     0,
     -37,   -37,    -4,   -37,   -37,   -37,   -37,   -37,   -37,     1,
       4,    38,   310,     8,     0,     0,    46,    12,     0,   -37,
     168,   -37,   -37,    48,     5,   -37,   359,   -37,   -37,   -37,
     217,   163,   -37,   -37,   -37,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -37,
     -22,    79,   -37,   -37,   466,   -36,   466,   212,    22,   -37,
      32,   261,     0,   -37,    28,    12,   -37,   -37,   -37,    86,
     112,   477,   400,   400,   400,   400,   400,   400,    34,    34,
     -37,   -37,   -37,    86,    56,   -37,     0,    47,    49,   447,
     413,   442,    86,    45,    52,    68,   -37,   -37,    86,   466,
     413,    91,     0,    54,   -37,   466,   -37,   -37,   -37,    57,
      12,    55,   266,   106,    -3,   466,   105,   413,   -37,   -37,
      83,    61,    62,   -37,    69,    90,   -37,    72,    99,    80,
     413,   413,   -37,    82,    84,   413,   117,   -37,   413,   -37,
     315,    87,   364,   -37,    91,   -37,   -37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,   -37,    -2,   -37,    -1,    93,   -16,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -31,   -37,    20,   -37,   -20,
     128,   -37,   -18,   -27,    -5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      30,    60,    54,     4,     5,     6,     7,    55,   152,    43,
     113,     4,     5,     6,     7,    80,   115,   116,    56,     3,
      58,    59,    57,    45,    61,    46,    47,    89,    44,    44,
      16,    17,    18,    19,    20,    21,    48,    51,    84,    86,
      87,    52,    25,    91,    62,    65,    26,   153,    93,    63,
      25,    29,    64,    88,    26,    94,    95,    99,    93,    81,
     122,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   118,   124,    61,    76,    77,    78,
     119,   126,     4,     5,     6,     7,   114,   121,   128,     4,
       5,     6,     7,   125,    84,   127,   130,   139,   131,   134,
     113,   143,   146,   142,   138,   140,   147,   149,    84,   151,
     141,   129,   155,   159,   135,   160,   161,    84,   136,   162,
     124,    25,    43,    84,   163,    26,    24,   145,    25,   165,
      29,   168,    26,   171,   169,   174,    82,    81,   170,   148,
      93,   172,   164,   176,    53,   158,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,   166,   167,
      17,    18,    19,    20,    21,     0,   156,     0,    93,     0,
      93,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,    12,    13,    92,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    22,    23,    24,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,     0,
      25,     0,     0,     0,    26,    98,    27,    28,     0,    29,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
      12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,    24,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    25,
       0,     0,     0,    26,   117,    27,    28,    97,    29,     4,
       5,     6,     7,     8,     9,    10,     0,     0,    11,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    22,    23,    24,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,    25,     0,
       0,     0,    26,   120,    27,    28,   150,    29,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    11,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      22,    23,    24,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     0,    25,    79,     0,
       0,    26,     0,    27,    28,   173,    29,     4,     5,     6,
       7,     8,     9,    10,     0,     0,    11,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    22,
      23,    24,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,     0,    25,    96,     0,     0,
      26,     0,    27,    28,   175,    29,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    11,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,    23,
      24,    74,    75,    76,    77,    78,     0,     0,     0,     0,
       4,     5,     6,     7,    55,    25,     0,     0,     0,    26,
       0,    27,    28,     0,    29,    16,    17,    18,    19,    20,
      21,     0,     0,   132,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    25,
     137,     0,     0,    26,     0,     0,     0,     0,    29,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78
};

static const yytype_int16 yycheck[] =
{
       2,    28,    22,     3,     4,     5,     6,     7,    11,    32,
      32,     3,     4,     5,     6,     7,    52,    53,    23,     0,
      25,    26,    24,    51,    29,    51,    51,    47,    51,    51,
      18,    19,    20,    21,    22,    23,    51,    48,    43,    44,
      45,    48,    42,    48,    48,     7,    46,    50,    50,    48,
      42,    51,    48,     7,    46,     7,    51,    32,    60,    51,
      32,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    52,    95,    81,    43,    44,    45,
      48,    99,     3,     4,     5,     6,     7,    92,    32,     3,
       4,     5,     6,     7,    99,   113,    49,    52,    49,   119,
      32,    10,    48,   130,   122,    53,    49,    52,   113,     3,
     128,   116,     7,    30,   119,    54,    54,   122,   120,    50,
     140,    42,    32,   128,    52,    46,    27,   132,    42,    49,
      51,    49,    46,    16,    50,    48,    43,    51,   165,   140,
     142,   168,   158,   174,    16,   147,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,   160,   161,
      19,    20,    21,    22,    23,    -1,   146,    -1,   170,    -1,
     172,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      42,    -1,    -1,    -1,    46,    52,    48,    49,    -1,    51,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    42,
      -1,    -1,    -1,    46,    52,    48,    49,    50,    51,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,    27,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    42,    -1,
      -1,    -1,    46,    52,    48,    49,    50,    51,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    42,    48,    -1,
      -1,    46,    -1,    48,    49,    50,    51,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    42,    48,    -1,    -1,
      46,    -1,    48,    49,    50,    51,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    42,    -1,    -1,    -1,    46,
      -1,    48,    49,    -1,    51,    18,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    42,
      48,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    57,     0,     3,     4,     5,     6,     7,     8,
       9,    12,    13,    14,    16,    17,    18,    19,    20,    21,
      22,    23,    25,    26,    27,    42,    46,    48,    49,    51,
      58,    59,    61,    62,    64,    65,    66,    67,    69,    72,
      74,    75,    79,    32,    51,    51,    51,    51,    51,    58,
      78,    48,    48,    75,    74,     7,    79,    58,    79,    79,
      78,    79,    48,    48,    48,     7,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    48,
       7,    51,    61,    77,    79,    63,    79,    79,     7,    74,
      76,    79,    15,    58,     7,    51,    48,    50,    52,    32,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    32,     7,    52,    53,    52,    52,    48,
      52,    79,    32,    60,    74,     7,    77,    77,    32,    79,
      49,    49,    26,    71,    74,    79,    58,    48,    77,    52,
      53,    77,    78,    10,    70,    79,    48,    49,    60,    52,
      50,     3,    11,    50,    68,     7,    72,    73,    58,    30,
      54,    54,    50,    52,    62,    49,    58,    58,    49,    50,
      78,    16,    78,    50,    48,    50,    70
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
#line 110 "parser.y"
    { /*last thing to finish check_unused_variables(); */;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    { begin_compile((yyvsp[(2) - (2)].nodePtr),Scope (0, NULL));/*execute_all($2); free_node($2);*/ ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {(yyval.nodePtr) = NULL;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';', 2, NULL, NULL); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (2)].nodePtr)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(PRINT, 1, (yyvsp[(2) - (3)].nodePtr)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (2)].nodePtr));; ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (2)].nodePtr));; ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (1)].nodePtr));; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (1)].nodePtr)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (1)].nodePtr)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (2)].nodePtr)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (1)].nodePtr));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (1)].nodePtr)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (1)].nodePtr)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';',1,(yyvsp[(1) - (1)].nodePtr)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(BLOCK, 1, (yyvsp[(2) - (3)].nodePtr)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(BREAK, 1, NULL); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(CONTINUE, 1, NULL); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {(yyval.nodePtr)=construct_operation_node(FUNCTION,4,(yyvsp[(2) - (9)].nodePtr),(yyvsp[(4) - (9)].nodePtr),(yyvsp[(7) - (9)].nodePtr),(yyvsp[(8) - (9)].nodePtr));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {(yyval.nodePtr)=construct_operation_node(COMMA,2,(yyvsp[(1) - (3)].nodePtr),(yyvsp[(3) - (3)].nodePtr));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {(yyval.nodePtr)=NULL;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {(yyval.nodePtr)=construct_operation_node(CALL,2,construct_identifier_node((yyvsp[(1) - (4)].sIndex)),(yyvsp[(3) - (4)].nodePtr));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(RETURN, 1, (yyvsp[(2) - (2)].nodePtr)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(COMMA, 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    { (yyval.nodePtr) = NULL; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(WHILE, 2, (yyvsp[(3) - (5)].nodePtr), (yyvsp[(5) - (5)].nodePtr)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(DO, 2, (yyvsp[(2) - (5)].nodePtr), (yyvsp[(4) - (5)].nodePtr)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(FOR, 4, (yyvsp[(3) - (11)].nodePtr), (yyvsp[(5) - (11)].nodePtr), (yyvsp[(7) - (11)].nodePtr), (yyvsp[(10) - (11)].nodePtr)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(IF, 2, (yyvsp[(3) - (7)].nodePtr), (yyvsp[(6) - (7)].nodePtr)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(IF, 3, (yyvsp[(3) - (11)].nodePtr), (yyvsp[(6) - (11)].nodePtr), (yyvsp[(10) - (11)].nodePtr)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(DEFAULT, 1, (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {(yyval.nodePtr)=construct_operation_node(SWITCH,2,construct_identifier_node((yyvsp[(3) - (7)].sIndex)),(yyvsp[(6) - (7)].nodePtr));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {(yyval.nodePtr)=construct_operation_node(SWITCH,3,construct_identifier_node((yyvsp[(3) - (8)].sIndex)),(yyvsp[(6) - (8)].nodePtr),(yyvsp[(7) - (8)].nodePtr));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {(yyval.nodePtr)=construct_operation_node(CASE,4,construct_constant_node(INTEGER,INT_TYPE,(yyvsp[(2) - (7)].intValue)),(yyvsp[(4) - (7)].nodePtr),construct_operation_node(BREAK,0),(yyvsp[(7) - (7)].nodePtr));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {(yyval.nodePtr)=construct_operation_node(CASE,3,construct_constant_node(INTEGER,INT_TYPE,(yyvsp[(2) - (6)].intValue)),(yyvsp[(4) - (6)].nodePtr),construct_operation_node(BREAK,0));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';', 2, NULL, NULL); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(PRINT, 1, (yyvsp[(2) - (2)].nodePtr)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    { printf("fdhf\n");(yyval.nodePtr) = construct_operation_node('=', 2, construct_identifier_node((yyvsp[(1) - (3)].sIndex)), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('=', 2, construct_identifier_node((yyvsp[(1) - (3)].sIndex)), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';', 2, NULL, NULL); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {     (yyval.nodePtr) = construct_decleration_node((yyvsp[(2) - (2)].sIndex), (yyvsp[(1) - (2)].intValue)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('=', 2, construct_decleration_node((yyvsp[(2) - (4)].sIndex), (yyvsp[(1) - (4)].intValue)), (yyvsp[(4) - (4)].nodePtr)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('=', 2, construct_decleration_node((yyvsp[(3) - (5)].sIndex), (yyvsp[(2) - (5)].intValue),CONST), (yyvsp[(5) - (5)].nodePtr)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    { (yyval.intValue) = INT_TYPE; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    { (yyval.intValue) = FLOAT_TYPE; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    { (yyval.intValue) = BOOL_TYPE; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { (yyval.intValue) = STRING_TYPE; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { (yyval.intValue) = VOID_TYPE; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';', 2, NULL, NULL); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('=', 2, construct_identifier_node((yyvsp[(1) - (3)].sIndex)), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('=', 2, construct_identifier_node((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nodePtr)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(';', 2, (yyvsp[(1) - (2)].nodePtr), (yyvsp[(2) - (2)].nodePtr)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    { (yyval.nodePtr) = construct_constant_node(INTEGER, INT_TYPE, (yyvsp[(1) - (1)].intValue)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    { (yyval.nodePtr) = construct_constant_node(FLOAT, FLOAT_TYPE, (yyvsp[(1) - (1)].floatValue)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    { (yyval.nodePtr) = construct_constant_node(STRING, STRING_TYPE, (yyvsp[(1) - (1)].stringValue)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    { (yyval.nodePtr) = construct_identifier_node((yyvsp[(1) - (1)].sIndex)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    { (yyval.nodePtr) = construct_constant_node (BOOL, BOOL_TYPE, (yyvsp[(1) - (1)].boolValue)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(NEGATIVE, 1, (yyvsp[(2) - (2)].nodePtr)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(NOT, 1, (yyvsp[(2) - (2)].nodePtr)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('+', 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('-', 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('*', 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('/', 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('%', 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('<', 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    { (yyval.nodePtr) = construct_operation_node('>', 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(GREATER_EQUAL, 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(LESS_EQUAL, 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(NOT_EQUAL, 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(EQUAL, 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(AND, 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { (yyval.nodePtr) = construct_operation_node(OR, 2, (yyvsp[(1) - (3)].nodePtr), (yyvsp[(3) - (3)].nodePtr)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { (yyval.nodePtr) = (yyvsp[(2) - (3)].nodePtr); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2198 "parser.tab.c"
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
#line 260 "parser.y"

/* type is the token in bison i defined before  */
/* TODO: remove the type as long it is not used here  */
Node *construct_constant_node(int type, int dataType, ...) {
  va_list ap;
  Node *p;
  size_t nodeSize;

  /* allocate Node */
  nodeSize = SIZEOFNODE + sizeof(ConstantNode);
  if ((p = (Node*)malloc(nodeSize)) == NULL)
    yyerror("out of memory");

  /* copy information */
  p->type = CONSTANT;
    p->line= line; // Set the line number for error reporting

  p->con.dataType = dataType;
  va_start(ap, dataType);
  p->con.value = va_arg(ap, ValueType);
  va_end(ap);
  return p;
}

Node *construct_identifier_node(char* i, int dataType, int qualifier) {
  Node *p;
  size_t nodeSize;
  /* allocate Node */
  nodeSize = SIZEOFNODE + sizeof(IdentifierNode);
  if ((p = (Node*)malloc(nodeSize)) == NULL)
    yyerror("out of memory");

  /* copy information */
  p->type = IDENTIFIER;
  p->line= line; // Set the line number for error reporting
  p->id.name = strdup(i);
  p->id.dataType = dataType;
  p->id.qualifier = qualifier;
  return p;
}

Node *construct_operation_node(int oper, int nops, ...) {
  va_list ap;
  Node *p;
  size_t nodeSize;
  int i;
  
  /* allocate Node */
  /*  (nops - 1) as it is aready there is one location in memory */
  nodeSize = SIZEOFNODE + sizeof(OperationNode) + (nops - 1) * sizeof(Node*);
  if ((p = (Node*)malloc(nodeSize)) == NULL)
  {
    yyerror("out of memory");
  }

  /* copy information */
  p->type = OPERATION;
  p->line= line; // Set the line number for error reporting
  p->opr.symbol = oper;
  p->opr.nops = nops;
  va_start(ap, nops);
  for (i = 0; i < nops; i++)
    p->opr.op[i] = va_arg(ap, Node*);
  va_end(ap);
  return p;
}

void free_node(Node *p) {
  int i;
  if (!p) return;
  if (p->type == OPERATION) {
    for (i = 0; i < p->opr.nops; i++)
        free_node(p->opr.op[i]);
  }
  free (p);
}
extern FILE *yyin;  // Declare yyin so you can set it

int main(void) {
 yyin = fopen("input.txt", "r");  // Open the input file
    if (!yyin) {
        perror("Failed to open input.txt");
        return 1;
    }

    yyparse();  // Start parsing
print_symbol_table();
    fclose(yyin);  // Clean up
    return 0;
}


void yyerror(const char *msg) {
  log_errors(line,msg);
  printf("Error: %s\n", msg);
  printf("Line: %d\n", line);
  /* log_symbol_table(); */
  exit(1);
}


void print_ast(Node *node, int indent) {
    if (node == NULL) return;

    // Print indentation
    for (int i = 0; i < indent; i++) printf("  ");

    // Print node type
    switch (node->type) {
        case CONSTANT:
            printf("Constant: ");
            switch (node->con.dataType) {
                case INT_TYPE: printf("%d (int)\n", node->con.value.intVal); break;
                case FLOAT_TYPE: printf("%f (float)\n", node->con.value.floatVal); break;
                case BOOL_TYPE: printf("%s (bool)\n", node->con.value.boolVal ? "true" : "false"); break;
                case STRING_TYPE: printf("\"%s\" (string)\n", node->con.value.strVal); break;
                default: printf("Unknown constant type\n");
            }
            break;

        case IDENTIFIER:
            printf("Identifier: %s\t", node->id.name);
            printf("Data Type: ");
            switch (node->id.dataType) {
                case INT_TYPE: printf("int\t"); break;
                case FLOAT_TYPE: printf("float\t"); break;
                case BOOL_TYPE: printf("bool\t"); break;
                case STRING_TYPE: printf("string\t"); break;
                case VOID_TYPE: printf("void\t"); break;
                default: printf("Unknown data type\t");
            }
            printf("Qualifier: ");
            switch (node->id.qualifier) {
                case CONST: printf("const\n"); break;
                case INT_TYPE: printf("int\n"); break;
                case FLOAT_TYPE: printf("float\n"); break;
                case BOOL_TYPE: printf("bool\n"); break;
                case STRING_TYPE: printf("string\n"); break;
                default: printf("Unknown qualifier\n");
            }
            break;
        case DECLARATION:
            printf("Declaration: %s\t", node->dec.symbol);
            printf("Data Type: ");
            switch (node->dec.dataType) {
                case INT_TYPE: printf("int\t"); break;
                case FLOAT_TYPE: printf("float\t"); break;
                case BOOL_TYPE: printf("bool\t"); break;
                case STRING_TYPE: printf("string\t"); break;
                case VOID_TYPE: printf("void\t"); break;
                default: printf("Unknown data type\t");
            }
            printf("Qualifier: ");
            switch (node->dec.qualifier) {
                case CONST: printf("const\n"); break;
                case INT_TYPE: printf("int\n"); break;
                case FLOAT_TYPE: printf("float\n"); break;
                case BOOL_TYPE: printf("bool\n"); break;
                case STRING_TYPE: printf("string\n"); break;
                default: printf("Unknown qualifier\n");
            }
            break;
        case OPERATION:
            printf("Operator: ");
            switch (node->opr.symbol) {
                case '+': printf("+\n"); break;
                case '-': printf("-\n"); break;
                case '*': printf("*\n"); break;
                case '/': printf("/\n"); break;
                case '%': printf("%%\n"); break;
                case '=': printf("=\n"); break;
                case PRINT: printf("PRINT\n"); break;
                case IF: printf("IF\n"); break;
                case WHILE: printf("WHILE\n"); break;
                case DO: printf("DO-WHILE\n"); break;
                case FOR: printf("FOR\n"); break;
                case SWITCH: printf("SWITCH\n"); break;
                case CASE: printf("CASE\n"); break;
                case DEFAULT: printf("DEFAULT\n"); break;
                case BLOCK: printf("BLOCK\n"); break;
                case RETURN: printf("RETURN\n"); break;
                case CALL: printf("FUNCTION CALL\n"); break;
                case FUNCTION: printf("FUNCTION DECL\n"); break;
                case COMMA: printf("COMMA\n"); break;
                case NEGATIVE: printf("NEGATIVE\n"); break;
                case NOT: printf("NOT\n"); break;
                case AND: printf("AND\n"); break;
                case OR: printf("OR\n"); break;
                case EQUAL: printf("EQUAL\n"); break;
                case NOT_EQUAL: printf("NOT_EQUAL\n"); break;
                case GREATER_EQUAL: printf("GREATER_EQUAL\n"); break;
                case LESS_EQUAL: printf("LESS_EQUAL\n"); break;
                case '<': printf("<\n"); break;
                case '>': printf(">\n"); break;
                case BREAK: printf("BREAK\n"); break;
                case CONTINUE: printf("CONTINUE\n"); break;
                case ';': printf("SEQUENCE (;)\n"); break;
                default: printf("Unknown operation: %d\n", node->opr.symbol);
            }

            for (int i = 0; i < node->opr.nops; ++i) {
                print_ast(node->opr.op[i], indent + 1);
            }
            break;
    }
}


    Node *construct_decleration_node(char* name, int type, int qualifier) {
        Node *p;
        size_t nodeSize;
        /* allocate Node */
        nodeSize = SIZEOFNODE + sizeof(DeclerationNode);
        if ((p = (Node*)malloc(nodeSize)) == NULL)
            yyerror("out of memory");

        /* copy information */
        p->type = DECLARATION;
          p->line= line; // Set the line number for error reporting

        p->dec.symbol = strdup(name);
        p->dec.dataType = type;
        p->dec.qualifier = qualifier;
        return p;
    }
    
