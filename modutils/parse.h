/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

