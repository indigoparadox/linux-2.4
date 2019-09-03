/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ASM_KEYW = 258,
     ATTRIBUTE_KEYW = 259,
     AUTO_KEYW = 260,
     BOOL_KEYW = 261,
     CHAR_KEYW = 262,
     CONST_KEYW = 263,
     DOUBLE_KEYW = 264,
     ENUM_KEYW = 265,
     EXTERN_KEYW = 266,
     FLOAT_KEYW = 267,
     INLINE_KEYW = 268,
     INT_KEYW = 269,
     LONG_KEYW = 270,
     REGISTER_KEYW = 271,
     RESTRICT_KEYW = 272,
     SHORT_KEYW = 273,
     SIGNED_KEYW = 274,
     STATIC_KEYW = 275,
     STRUCT_KEYW = 276,
     TYPEDEF_KEYW = 277,
     UNION_KEYW = 278,
     UNSIGNED_KEYW = 279,
     VOID_KEYW = 280,
     VOLATILE_KEYW = 281,
     EXPORT_SYMBOL_KEYW = 282,
     ASM_PHRASE = 283,
     ATTRIBUTE_PHRASE = 284,
     BRACE_PHRASE = 285,
     BRACKET_PHRASE = 286,
     EXPRESSION_PHRASE = 287,
     CHAR = 288,
     DOTS = 289,
     IDENT = 290,
     INT = 291,
     REAL = 292,
     STRING = 293,
     TYPE = 294,
     OTHER = 295,
     FILENAME = 296
   };
#endif
/* Tokens.  */
#define ASM_KEYW 258
#define ATTRIBUTE_KEYW 259
#define AUTO_KEYW 260
#define BOOL_KEYW 261
#define CHAR_KEYW 262
#define CONST_KEYW 263
#define DOUBLE_KEYW 264
#define ENUM_KEYW 265
#define EXTERN_KEYW 266
#define FLOAT_KEYW 267
#define INLINE_KEYW 268
#define INT_KEYW 269
#define LONG_KEYW 270
#define REGISTER_KEYW 271
#define RESTRICT_KEYW 272
#define SHORT_KEYW 273
#define SIGNED_KEYW 274
#define STATIC_KEYW 275
#define STRUCT_KEYW 276
#define TYPEDEF_KEYW 277
#define UNION_KEYW 278
#define UNSIGNED_KEYW 279
#define VOID_KEYW 280
#define VOLATILE_KEYW 281
#define EXPORT_SYMBOL_KEYW 282
#define ASM_PHRASE 283
#define ATTRIBUTE_PHRASE 284
#define BRACE_PHRASE 285
#define BRACKET_PHRASE 286
#define EXPRESSION_PHRASE 287
#define CHAR 288
#define DOTS 289
#define IDENT 290
#define INT 291
#define REAL 292
#define STRING 293
#define TYPE 294
#define OTHER 295
#define FILENAME 296




/* Copy the first part of user declarations.  */
#line 24 "parse.y"


#include <assert.h>
#include "genksyms.h"

static int is_typedef;
static int is_extern;
static char *current_name;
static struct string_list *decl_spec;

static void yyerror(const char *);

static inline void
remove_node(struct string_list **p)
{
  struct string_list *node = *p;
  *p = node->next;
  free_node(node);
}

static inline void
remove_list(struct string_list **pb, struct string_list **pe)
{
  struct string_list *b = *pb, *e = *pe;
  *pb = e;
  free_list(b, e);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 218 "parse.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  168

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,    45,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    42,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    43,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    13,    17,    19,
      21,    23,    25,    28,    31,    35,    36,    38,    40,    44,
      49,    50,    52,    54,    57,    59,    61,    63,    65,    67,
      69,    71,    73,    75,    78,    81,    84,    88,    92,    96,
      99,   102,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   130,   131,   133,   135,   138,   140,
     142,   144,   146,   149,   151,   153,   158,   163,   166,   170,
     174,   177,   179,   181,   183,   188,   193,   196,   200,   204,
     207,   209,   213,   214,   216,   218,   222,   225,   228,   230,
     231,   233,   235,   240,   245,   248,   252,   256,   260,   261,
     263,   266,   270,   274,   275,   277,   279,   282,   286,   289,
     290,   292,   294,   298,   301,   304,   306,   309,   310,   312,
     315,   316,   318
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    52,    53,    -1,    -1,    54,
      55,    -1,    -1,    22,    56,    57,    -1,    57,    -1,    81,
      -1,    93,    -1,    95,    -1,     1,    42,    -1,     1,    43,
      -1,    61,    58,    42,    -1,    -1,    59,    -1,    60,    -1,
      59,    44,    60,    -1,    71,    94,    92,    82,    -1,    -1,
      62,    -1,    63,    -1,    62,    63,    -1,    64,    -1,    65,
      -1,     5,    -1,    16,    -1,    20,    -1,    11,    -1,    13,
      -1,    66,    -1,    70,    -1,    21,    35,    -1,    23,    35,
      -1,    10,    35,    -1,    21,    35,    84,    -1,    23,    35,
      84,    -1,    10,    35,    30,    -1,    10,    30,    -1,    21,
      84,    -1,    23,    84,    -1,     7,    -1,    18,    -1,    14,
      -1,    15,    -1,    19,    -1,    24,    -1,    12,    -1,     9,
      -1,    25,    -1,     6,    -1,    39,    -1,    45,    68,    -1,
      -1,    69,    -1,    70,    -1,    69,    70,    -1,     8,    -1,
      26,    -1,    29,    -1,    17,    -1,    67,    71,    -1,    72,
      -1,    35,    -1,    72,    46,    75,    47,    -1,    72,    46,
       1,    47,    -1,    72,    31,    -1,    46,    71,    47,    -1,
      46,     1,    47,    -1,    67,    73,    -1,    74,    -1,    35,
      -1,    39,    -1,    74,    46,    75,    47,    -1,    74,    46,
       1,    47,    -1,    74,    31,    -1,    46,    73,    47,    -1,
      46,     1,    47,    -1,    76,    34,    -1,    76,    -1,    77,
      44,    34,    -1,    -1,    77,    -1,    78,    -1,    77,    44,
      78,    -1,    62,    79,    -1,    67,    79,    -1,    80,    -1,
      -1,    35,    -1,    39,    -1,    80,    46,    75,    47,    -1,
      80,    46,     1,    47,    -1,    80,    31,    -1,    46,    79,
      47,    -1,    46,     1,    47,    -1,    61,    71,    30,    -1,
      -1,    83,    -1,    48,    32,    -1,    49,    85,    43,    -1,
      49,     1,    43,    -1,    -1,    86,    -1,    87,    -1,    86,
      87,    -1,    61,    88,    42,    -1,     1,    42,    -1,    -1,
      89,    -1,    90,    -1,    89,    44,    90,    -1,    73,    92,
      -1,    35,    91,    -1,    91,    -1,    50,    32,    -1,    -1,
      29,    -1,    28,    42,    -1,    -1,    28,    -1,    27,    46,
      35,    47,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   105,   105,   111,   111,   113,   114,
     115,   116,   117,   118,   122,   136,   137,   141,   149,   162,
     168,   169,   173,   174,   178,   185,   189,   190,   191,   192,
     193,   197,   198,   202,   204,   206,   210,   217,   224,   233,
     234,   235,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   253,   258,   259,   263,   264,   268,   268,
     268,   269,   277,   278,   282,   291,   293,   295,   297,   299,
     306,   307,   311,   312,   313,   315,   317,   319,   321,   326,
     327,   328,   332,   333,   337,   338,   343,   348,   350,   354,
     355,   364,   369,   371,   373,   375,   377,   382,   391,   392,
     397,   402,   403,   407,   408,   412,   413,   417,   419,   424,
     425,   429,   430,   434,   435,   436,   440,   444,   445,   449,
     453,   454,   458
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASM_KEYW", "ATTRIBUTE_KEYW",
  "AUTO_KEYW", "BOOL_KEYW", "CHAR_KEYW", "CONST_KEYW", "DOUBLE_KEYW",
  "ENUM_KEYW", "EXTERN_KEYW", "FLOAT_KEYW", "INLINE_KEYW", "INT_KEYW",
  "LONG_KEYW", "REGISTER_KEYW", "RESTRICT_KEYW", "SHORT_KEYW",
  "SIGNED_KEYW", "STATIC_KEYW", "STRUCT_KEYW", "TYPEDEF_KEYW",
  "UNION_KEYW", "UNSIGNED_KEYW", "VOID_KEYW", "VOLATILE_KEYW",
  "EXPORT_SYMBOL_KEYW", "ASM_PHRASE", "ATTRIBUTE_PHRASE", "BRACE_PHRASE",
  "BRACKET_PHRASE", "EXPRESSION_PHRASE", "CHAR", "DOTS", "IDENT", "INT",
  "REAL", "STRING", "TYPE", "OTHER", "FILENAME", "';'", "'}'", "','",
  "'*'", "'('", "')'", "'='", "'{'", "':'", "$accept", "declaration_seq",
  "declaration", "@1", "declaration1", "@2", "simple_declaration",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "decl_specifier_seq_opt", "decl_specifier_seq", "decl_specifier",
  "storage_class_specifier", "type_specifier", "simple_type_specifier",
  "ptr_operator", "cvar_qualifier_seq_opt", "cvar_qualifier_seq",
  "cvar_qualifier", "declarator", "direct_declarator", "nested_declarator",
  "direct_nested_declarator", "parameter_declaration_clause",
  "parameter_declaration_list_opt", "parameter_declaration_list",
  "parameter_declaration", "m_abstract_declarator",
  "direct_m_abstract_declarator", "function_definition", "initializer_opt",
  "initializer", "class_body", "member_specification_opt",
  "member_specification", "member_declaration",
  "member_declarator_list_opt", "member_declarator_list",
  "member_declarator", "member_bitfield_declarator", "attribute_opt",
  "asm_definition", "asm_phrase_opt", "export_definition", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    59,   125,    44,    42,    40,    41,    61,   123,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    54,    53,    56,    55,    55,    55,
      55,    55,    55,    55,    57,    58,    58,    59,    59,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    68,    68,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    76,    76,    77,    77,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    82,    82,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    91,    92,    92,    93,
      94,    94,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     0,     3,     1,     1,
       1,     1,     2,     2,     3,     0,     1,     1,     3,     4,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     1,     2,     1,     1,
       1,     1,     2,     1,     1,     4,     4,     2,     3,     3,
       2,     1,     1,     1,     4,     4,     2,     3,     3,     2,
       1,     3,     0,     1,     1,     3,     2,     2,     1,     0,
       1,     1,     4,     4,     2,     3,     3,     3,     0,     1,
       2,     3,     3,     0,     1,     1,     2,     3,     2,     0,
       1,     1,     3,     2,     2,     1,     2,     0,     1,     2,
       0,     1,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     4,     2,     0,     1,     3,     0,    26,    51,    42,
      58,    49,     0,    29,    48,    30,    44,    45,    27,    61,
      43,    46,    28,     0,     6,     0,    47,    50,    59,     0,
       0,    60,    52,     5,     8,    15,    21,    22,    24,    25,
      31,    32,     9,    10,    11,    12,    13,    39,    35,    33,
       0,    40,    20,    34,    41,     0,   119,    64,    54,     0,
       0,    16,    17,     0,   120,    63,    23,    38,    36,     0,
     109,     0,     0,   105,     7,    15,    37,     0,    53,    55,
      56,     0,     0,    14,     0,    62,   121,    97,   117,    67,
       0,   108,   102,    72,    73,     0,     0,     0,   117,    71,
       0,   110,   111,   115,   101,     0,   106,   120,     0,    57,
      69,    68,    18,   118,    98,     0,    89,     0,    80,    83,
      84,   114,     0,    72,     0,   116,    70,   113,    76,     0,
     107,     0,   122,     0,    19,    99,    66,    90,    52,     0,
      89,    86,    88,    65,    79,     0,    78,    77,     0,     0,
     112,   100,     0,    91,     0,    87,    94,     0,    81,    85,
      75,    74,    96,    95,     0,     0,    93,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    33,    52,    34,    60,    61,    62,
      70,    36,    37,    38,    39,    40,    63,    78,    79,    41,
     107,    65,    98,    99,   117,   118,   119,   120,   141,   142,
      42,   134,   135,    51,    71,    72,    73,   100,   101,   102,
     103,   114,    43,    88,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -122
static const yytype_int16 yypact[] =
{
    -122,    16,  -122,   297,  -122,  -122,     1,  -122,  -122,  -122,
    -122,  -122,   -17,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,     4,  -122,    11,  -122,  -122,  -122,   -23,
       9,  -122,  -122,  -122,  -122,    63,   416,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,    29,    12,
      76,  -122,   416,    12,  -122,     5,  -122,  -122,    -2,    10,
      24,    35,  -122,    63,   -16,   -21,  -122,  -122,  -122,    33,
      28,    25,   122,  -122,  -122,    63,  -122,    57,  -122,    -2,
    -122,    65,    73,  -122,    63,  -122,  -122,  -122,    43,  -122,
     168,  -122,  -122,    94,  -122,    19,   117,    68,    43,   -14,
     108,   109,  -122,  -122,  -122,   110,  -122,   126,   113,  -122,
    -122,  -122,  -122,  -122,   111,   115,   339,   116,   124,   112,
    -122,  -122,   119,  -122,   123,  -122,  -122,  -122,  -122,   211,
    -122,    28,  -122,   128,  -122,  -122,  -122,  -122,  -122,     3,
      71,  -122,    -9,  -122,  -122,   381,  -122,  -122,   143,   148,
    -122,  -122,   149,  -122,   151,  -122,  -122,   254,  -122,  -122,
    -122,  -122,  -122,  -122,   152,   153,  -122,  -122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,   170,  -122,  -122,  -122,   154,  -122,  -122,   120,
       0,   -88,   -36,  -122,  -122,  -122,   -69,  -122,  -122,   -49,
     -30,  -122,   -76,  -122,  -121,  -122,  -122,    56,   -15,  -122,
    -122,  -122,  -122,   -18,  -122,  -122,   131,  -122,  -122,    74,
     118,   135,  -122,  -122,  -122
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -105
static const yytype_int16 yytable[] =
{
      66,    97,   116,    35,   152,    64,    10,    54,   149,    80,
      89,    81,    86,    47,    87,    19,     4,   128,    48,   124,
     122,   126,   156,    55,    28,    90,    97,    31,    97,    82,
     109,    68,   129,    85,   -89,    76,   165,   157,   137,    49,
      77,   116,   153,    45,    46,    57,    53,   140,    58,   139,
     -89,    56,    75,    50,   123,    58,    59,   116,    94,    67,
      50,    50,    97,    93,    58,    95,    83,    94,   104,   116,
     140,   140,   113,    58,    95,    91,    92,    69,    96,    84,
      66,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    57,    25,
      26,    27,    28,   123,   108,    31,   137,    94,    58,    59,
     153,   -20,   110,    58,    95,    32,    58,   139,   -20,  -103,
     111,   -20,   -20,   105,   154,   155,   -20,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    96,    25,    26,    27,    28,   125,
     130,    31,    91,   131,    86,   132,   145,   -20,   144,   133,
     151,    32,   136,   143,   -20,  -104,   146,   -20,   -20,   115,
     147,     5,   -20,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     160,    25,    26,    27,    28,   161,   162,    31,   163,   166,
     167,   159,   -82,   106,   112,   150,    74,    32,     0,     0,
       0,   121,   148,     0,     0,   -82,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   127,    25,    26,    27,    28,     0,     0,
      31,     0,     0,     0,     0,   -82,     0,     0,     0,     0,
      32,     0,     0,     0,     0,   164,     0,     0,   -82,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    25,    26,    27,
      28,     0,     0,    31,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     6,     0,
       0,   -82,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,     0,     0,
       0,     0,   -20,     0,     0,     0,    32,     0,     0,   -20,
       0,     0,   -20,   -20,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    25,    26,    27,    28,     0,     0,    31,     0,
       0,     0,     0,     0,   137,     0,     0,     0,   138,     0,
       0,     0,     0,     0,    58,   139,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    25,    26,    27,    28,     0,     0,
      31,     0,     0,     0,     0,   158,     0,     0,     0,     0,
      32,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    25,
      26,    27,    28,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32
};

static const yytype_int16 yycheck[] =
{
      36,    70,    90,     3,     1,    35,     8,    25,   129,    58,
      31,     1,    28,    30,    30,    17,     0,    31,    35,    95,
       1,    97,    31,    46,    26,    46,    95,    29,    97,    59,
      79,    49,    46,    63,    31,    53,   157,    46,    35,    35,
      35,   129,    39,    42,    43,    35,    35,   116,    45,    46,
      47,    42,    52,    49,    35,    45,    46,   145,    39,    30,
      49,    49,   131,    35,    45,    46,    42,    39,    43,   157,
     139,   140,    29,    45,    46,    42,    43,     1,    50,    44,
     116,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    35,    23,
      24,    25,    26,    35,    47,    29,    35,    39,    45,    46,
      39,    35,    47,    45,    46,    39,    45,    46,    42,    43,
      47,    45,    46,     1,   139,   140,    50,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    50,    23,    24,    25,    26,    32,
      42,    29,    42,    44,    28,    42,    44,    35,    34,    48,
      32,    39,    47,    47,    42,    43,    47,    45,    46,     1,
      47,     1,    50,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      47,    23,    24,    25,    26,    47,    47,    29,    47,    47,
      47,   145,    34,    72,    84,   131,    52,    39,    -1,    -1,
      -1,    93,     1,    -1,    -1,    47,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    98,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,     1,    -1,    -1,    47,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    47,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,
      -1,    -1,    45,    46,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    25,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,    54,     0,    53,     1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    39,    55,    57,    61,    62,    63,    64,    65,
      66,    70,    81,    93,    95,    42,    43,    30,    35,    35,
      49,    84,    56,    35,    84,    46,    42,    35,    45,    46,
      58,    59,    60,    67,    71,    72,    63,    30,    84,     1,
      61,    85,    86,    87,    57,    61,    84,    35,    68,    69,
      70,     1,    71,    42,    44,    71,    28,    30,    94,    31,
      46,    42,    43,    35,    39,    46,    50,    67,    73,    74,
      88,    89,    90,    91,    43,     1,    87,    71,    47,    70,
      47,    47,    60,    29,    92,     1,    62,    75,    76,    77,
      78,    91,     1,    35,    73,    32,    73,    92,    31,    46,
      42,    44,    42,    48,    82,    83,    47,    35,    39,    46,
      67,    79,    80,    47,    34,    44,    47,    47,     1,    75,
      90,    32,     1,    39,    79,    79,    31,    46,    34,    78,
      47,    47,    47,    47,     1,    75,    47,    47
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 4:
#line 105 "parse.y"
    { is_typedef = 0; is_extern = 0; current_name = NULL; decl_spec = NULL; ;}
    break;

  case 5:
#line 107 "parse.y"
    { free_list(*(yyvsp[(2) - (2)]), NULL); *(yyvsp[(2) - (2)]) = NULL; ;}
    break;

  case 6:
#line 111 "parse.y"
    { is_typedef = 1; ;}
    break;

  case 7:
#line 112 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 12:
#line 117 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 13:
#line 118 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 14:
#line 123 "parse.y"
    { if (current_name) {
		    struct string_list *decl = (*(yyvsp[(3) - (3)]))->next;
		    (*(yyvsp[(3) - (3)]))->next = NULL;
		    add_symbol(current_name,
			       is_typedef ? SYM_TYPEDEF : SYM_NORMAL,
			       decl, is_extern);
		    current_name = NULL;
		  }
		  (yyval) = (yyvsp[(3) - (3)]);
		;}
    break;

  case 15:
#line 136 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 17:
#line 142 "parse.y"
    { struct string_list *decl = *(yyvsp[(1) - (1)]);
		  *(yyvsp[(1) - (1)]) = NULL;
		  add_symbol(current_name,
			     is_typedef ? SYM_TYPEDEF : SYM_NORMAL, decl, is_extern);
		  current_name = NULL;
		  (yyval) = (yyvsp[(1) - (1)]);
		;}
    break;

  case 18:
#line 150 "parse.y"
    { struct string_list *decl = *(yyvsp[(3) - (3)]);
		  *(yyvsp[(3) - (3)]) = NULL;
		  free_list(*(yyvsp[(2) - (3)]), NULL);
		  *(yyvsp[(2) - (3)]) = decl_spec;
		  add_symbol(current_name,
			     is_typedef ? SYM_TYPEDEF : SYM_NORMAL, decl, is_extern);
		  current_name = NULL;
		  (yyval) = (yyvsp[(3) - (3)]);
		;}
    break;

  case 19:
#line 163 "parse.y"
    { (yyval) = (yyvsp[(4) - (4)]) ? (yyvsp[(4) - (4)]) : (yyvsp[(3) - (4)]) ? (yyvsp[(3) - (4)]) : (yyvsp[(2) - (4)]) ? (yyvsp[(2) - (4)]) : (yyvsp[(1) - (4)]); ;}
    break;

  case 20:
#line 168 "parse.y"
    { decl_spec = NULL; ;}
    break;

  case 22:
#line 173 "parse.y"
    { decl_spec = *(yyvsp[(1) - (1)]); ;}
    break;

  case 23:
#line 174 "parse.y"
    { decl_spec = *(yyvsp[(2) - (2)]); ;}
    break;

  case 24:
#line 179 "parse.y"
    { /* Version 2 checksumming ignores storage class, as that
		     is really irrelevant to the linkage.  */
		  if (checksum_version > 1)
		    remove_node((yyvsp[(1) - (1)]));
		  (yyval) = (yyvsp[(1) - (1)]);
		;}
    break;

  case 29:
#line 192 "parse.y"
    { is_extern = 1; (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 30:
#line 193 "parse.y"
    { is_extern = 0; (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 33:
#line 203 "parse.y"
    { remove_node((yyvsp[(1) - (2)])); (*(yyvsp[(2) - (2)]))->tag = SYM_STRUCT; (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 34:
#line 205 "parse.y"
    { remove_node((yyvsp[(1) - (2)])); (*(yyvsp[(2) - (2)]))->tag = SYM_UNION; (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 35:
#line 207 "parse.y"
    { remove_node((yyvsp[(1) - (2)])); (*(yyvsp[(2) - (2)]))->tag = SYM_ENUM; (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 36:
#line 211 "parse.y"
    { struct string_list *s = *(yyvsp[(3) - (3)]), *i = *(yyvsp[(2) - (3)]), *r;
		  r = copy_node(i); r->tag = SYM_STRUCT;
		  r->next = (*(yyvsp[(1) - (3)]))->next; *(yyvsp[(3) - (3)]) = r; (*(yyvsp[(1) - (3)]))->next = NULL;
		  add_symbol(i->string, SYM_STRUCT, s, is_extern);
		  (yyval) = (yyvsp[(3) - (3)]);
		;}
    break;

  case 37:
#line 218 "parse.y"
    { struct string_list *s = *(yyvsp[(3) - (3)]), *i = *(yyvsp[(2) - (3)]), *r;
		  r = copy_node(i); r->tag = SYM_UNION;
		  r->next = (*(yyvsp[(1) - (3)]))->next; *(yyvsp[(3) - (3)]) = r; (*(yyvsp[(1) - (3)]))->next = NULL;
		  add_symbol(i->string, SYM_UNION, s, is_extern);
		  (yyval) = (yyvsp[(3) - (3)]);
		;}
    break;

  case 38:
#line 225 "parse.y"
    { struct string_list *s = *(yyvsp[(3) - (3)]), *i = *(yyvsp[(2) - (3)]), *r;
		  r = copy_node(i); r->tag = SYM_ENUM;
		  r->next = (*(yyvsp[(1) - (3)]))->next; *(yyvsp[(3) - (3)]) = r; (*(yyvsp[(1) - (3)]))->next = NULL;
		  add_symbol(i->string, SYM_ENUM, s, is_extern);
		  (yyval) = (yyvsp[(3) - (3)]);
		;}
    break;

  case 39:
#line 233 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 40:
#line 234 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 41:
#line 235 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 52:
#line 249 "parse.y"
    { (*(yyvsp[(1) - (1)]))->tag = SYM_TYPEDEF; (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 53:
#line 254 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]) ? (yyvsp[(2) - (2)]) : (yyvsp[(1) - (2)]); ;}
    break;

  case 54:
#line 258 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 57:
#line 264 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 61:
#line 270 "parse.y"
    { /* restrict has no effect in prototypes so ignore it */
		  remove_node((yyvsp[(1) - (1)]));
		  (yyval) = (yyvsp[(1) - (1)]);
		;}
    break;

  case 62:
#line 277 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 64:
#line 283 "parse.y"
    { if (current_name != NULL) {
		    error_with_pos("unexpected second declaration name");
		    YYERROR;
		  } else {
		    current_name = (*(yyvsp[(1) - (1)]))->string;
		    (yyval) = (yyvsp[(1) - (1)]);
		  }
		;}
    break;

  case 65:
#line 292 "parse.y"
    { (yyval) = (yyvsp[(4) - (4)]); ;}
    break;

  case 66:
#line 294 "parse.y"
    { (yyval) = (yyvsp[(4) - (4)]); ;}
    break;

  case 67:
#line 296 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 68:
#line 298 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 69:
#line 300 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 70:
#line 306 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 74:
#line 314 "parse.y"
    { (yyval) = (yyvsp[(4) - (4)]); ;}
    break;

  case 75:
#line 316 "parse.y"
    { (yyval) = (yyvsp[(4) - (4)]); ;}
    break;

  case 76:
#line 318 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 77:
#line 320 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 78:
#line 322 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 79:
#line 326 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 81:
#line 328 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 82:
#line 332 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 85:
#line 339 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 86:
#line 344 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]) ? (yyvsp[(2) - (2)]) : (yyvsp[(1) - (2)]); ;}
    break;

  case 87:
#line 349 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]) ? (yyvsp[(2) - (2)]) : (yyvsp[(1) - (2)]); ;}
    break;

  case 89:
#line 354 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 90:
#line 356 "parse.y"
    { /* For version 2 checksums, we don't want to remember
		     private parameter names.  */
		  if (checksum_version > 1)
		    remove_node((yyvsp[(1) - (1)]));
		  (yyval) = (yyvsp[(1) - (1)]);
		;}
    break;

  case 91:
#line 365 "parse.y"
    { if (checksum_version > 1)
		    remove_node((yyvsp[(1) - (1)]));
		  (yyval) = (yyvsp[(1) - (1)]);
		;}
    break;

  case 92:
#line 370 "parse.y"
    { (yyval) = (yyvsp[(4) - (4)]); ;}
    break;

  case 93:
#line 372 "parse.y"
    { (yyval) = (yyvsp[(4) - (4)]); ;}
    break;

  case 94:
#line 374 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 95:
#line 376 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 96:
#line 378 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 97:
#line 383 "parse.y"
    { struct string_list *decl = *(yyvsp[(2) - (3)]);
		  *(yyvsp[(2) - (3)]) = NULL;
		  add_symbol(current_name, SYM_NORMAL, decl, is_extern);
		  (yyval) = (yyvsp[(3) - (3)]);
		;}
    break;

  case 98:
#line 391 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 100:
#line 398 "parse.y"
    { remove_list((yyvsp[(2) - (2)]), &(*(yyvsp[(1) - (2)]))->next); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 101:
#line 402 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 102:
#line 403 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 103:
#line 407 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 106:
#line 413 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 107:
#line 418 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 108:
#line 420 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 109:
#line 424 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 112:
#line 430 "parse.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 113:
#line 434 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]) ? (yyvsp[(2) - (2)]) : (yyvsp[(1) - (2)]); ;}
    break;

  case 114:
#line 435 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 116:
#line 440 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 117:
#line 444 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 119:
#line 449 "parse.y"
    { (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 120:
#line 453 "parse.y"
    { (yyval) = NULL; ;}
    break;

  case 122:
#line 459 "parse.y"
    { export_symbol((*(yyvsp[(3) - (5)]))->string); (yyval) = (yyvsp[(5) - (5)]); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2100 "parse.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 463 "parse.y"


static void
yyerror(const char *e)
{
  error_with_pos("%s", e);
}
