/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF_PREC = 258,                 /* IF_PREC  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 260,         /* TYPE_IDENTIFIER  */
    FLOAT_CONSTANT = 261,          /* FLOAT_CONSTANT  */
    INTEGER_CONSTANT = 262,        /* INTEGER_CONSTANT  */
    CHARACTER_CONSTANT = 263,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 264,          /* STRING_LITERAL  */
    PLUS = 265,                    /* PLUS  */
    MINUS = 266,                   /* MINUS  */
    PLUSPLUS = 267,                /* PLUSPLUS  */
    MINUSMINUS = 268,              /* MINUSMINUS  */
    BAR = 269,                     /* BAR  */
    AMP = 270,                     /* AMP  */
    BARBAR = 271,                  /* BARBAR  */
    AMPAMP = 272,                  /* AMPAMP  */
    ARROW = 273,                   /* ARROW  */
    SEMICOLON = 274,               /* SEMICOLON  */
    LSS = 275,                     /* LSS  */
    GTR = 276,                     /* GTR  */
    LEQ = 277,                     /* LEQ  */
    GEQ = 278,                     /* GEQ  */
    EQL = 279,                     /* EQL  */
    NEQ = 280,                     /* NEQ  */
    DOTDOTDOT = 281,               /* DOTDOTDOT  */
    LP = 282,                      /* LP  */
    RP = 283,                      /* RP  */
    LB = 284,                      /* LB  */
    RB = 285,                      /* RB  */
    LR = 286,                      /* LR  */
    RR = 287,                      /* RR  */
    PERIOD = 288,                  /* PERIOD  */
    COMMA = 289,                   /* COMMA  */
    EXCL = 290,                    /* EXCL  */
    STAR = 291,                    /* STAR  */
    SLASH = 292,                   /* SLASH  */
    PERCENT = 293,                 /* PERCENT  */
    ASSIGN = 294,                  /* ASSIGN  */
    COLON = 295,                   /* COLON  */
    QUESTION = 296,                /* QUESTION  */
    AUTO_SYM = 297,                /* AUTO_SYM  */
    STATIC_SYM = 298,              /* STATIC_SYM  */
    TYPEDEF_SYM = 299,             /* TYPEDEF_SYM  */
    STRUCT_SYM = 300,              /* STRUCT_SYM  */
    ENUM_SYM = 301,                /* ENUM_SYM  */
    SIZEOF_SYM = 302,              /* SIZEOF_SYM  */
    UNION_SYM = 303,               /* UNION_SYM  */
    IF_SYM = 304,                  /* IF_SYM  */
    ELSE_SYM = 305,                /* ELSE_SYM  */
    WHILE_SYM = 306,               /* WHILE_SYM  */
    DO_SYM = 307,                  /* DO_SYM  */
    FOR_SYM = 308,                 /* FOR_SYM  */
    CONTINUE_SYM = 309,            /* CONTINUE_SYM  */
    BREAK_SYM = 310,               /* BREAK_SYM  */
    RETURN_SYM = 311,              /* RETURN_SYM  */
    SWITCH_SYM = 312,              /* SWITCH_SYM  */
    CASE_SYM = 313,                /* CASE_SYM  */
    DEFAULT_SYM = 314              /* DEFAULT_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF_PREC 258
#define IDENTIFIER 259
#define TYPE_IDENTIFIER 260
#define FLOAT_CONSTANT 261
#define INTEGER_CONSTANT 262
#define CHARACTER_CONSTANT 263
#define STRING_LITERAL 264
#define PLUS 265
#define MINUS 266
#define PLUSPLUS 267
#define MINUSMINUS 268
#define BAR 269
#define AMP 270
#define BARBAR 271
#define AMPAMP 272
#define ARROW 273
#define SEMICOLON 274
#define LSS 275
#define GTR 276
#define LEQ 277
#define GEQ 278
#define EQL 279
#define NEQ 280
#define DOTDOTDOT 281
#define LP 282
#define RP 283
#define LB 284
#define RB 285
#define LR 286
#define RR 287
#define PERIOD 288
#define COMMA 289
#define EXCL 290
#define STAR 291
#define SLASH 292
#define PERCENT 293
#define ASSIGN 294
#define COLON 295
#define QUESTION 296
#define AUTO_SYM 297
#define STATIC_SYM 298
#define TYPEDEF_SYM 299
#define STRUCT_SYM 300
#define ENUM_SYM 301
#define SIZEOF_SYM 302
#define UNION_SYM 303
#define IF_SYM 304
#define ELSE_SYM 305
#define WHILE_SYM 306
#define DO_SYM 307
#define FOR_SYM 308
#define CONTINUE_SYM 309
#define BREAK_SYM 310
#define RETURN_SYM 311
#define SWITCH_SYM 312
#define CASE_SYM 313
#define DEFAULT_SYM 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
