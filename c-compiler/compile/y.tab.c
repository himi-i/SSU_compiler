/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"

#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "syntax.h"

extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;


#line 85 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF_PREC = 3,                    /* IF_PREC  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 5,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_FLOAT_CONSTANT = 6,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 7,           /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 8,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 9,             /* STRING_LITERAL  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_PLUSPLUS = 12,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 13,                /* MINUSMINUS  */
  YYSYMBOL_BAR = 14,                       /* BAR  */
  YYSYMBOL_AMP = 15,                       /* AMP  */
  YYSYMBOL_BARBAR = 16,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 17,                    /* AMPAMP  */
  YYSYMBOL_ARROW = 18,                     /* ARROW  */
  YYSYMBOL_SEMICOLON = 19,                 /* SEMICOLON  */
  YYSYMBOL_LSS = 20,                       /* LSS  */
  YYSYMBOL_GTR = 21,                       /* GTR  */
  YYSYMBOL_LEQ = 22,                       /* LEQ  */
  YYSYMBOL_GEQ = 23,                       /* GEQ  */
  YYSYMBOL_EQL = 24,                       /* EQL  */
  YYSYMBOL_NEQ = 25,                       /* NEQ  */
  YYSYMBOL_DOTDOTDOT = 26,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 27,                        /* LP  */
  YYSYMBOL_RP = 28,                        /* RP  */
  YYSYMBOL_LB = 29,                        /* LB  */
  YYSYMBOL_RB = 30,                        /* RB  */
  YYSYMBOL_LR = 31,                        /* LR  */
  YYSYMBOL_RR = 32,                        /* RR  */
  YYSYMBOL_PERIOD = 33,                    /* PERIOD  */
  YYSYMBOL_COMMA = 34,                     /* COMMA  */
  YYSYMBOL_EXCL = 35,                      /* EXCL  */
  YYSYMBOL_STAR = 36,                      /* STAR  */
  YYSYMBOL_SLASH = 37,                     /* SLASH  */
  YYSYMBOL_PERCENT = 38,                   /* PERCENT  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_COLON = 40,                     /* COLON  */
  YYSYMBOL_QUESTION = 41,                  /* QUESTION  */
  YYSYMBOL_AUTO_SYM = 42,                  /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 43,                /* STATIC_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 44,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 45,                /* STRUCT_SYM  */
  YYSYMBOL_ENUM_SYM = 46,                  /* ENUM_SYM  */
  YYSYMBOL_SIZEOF_SYM = 47,                /* SIZEOF_SYM  */
  YYSYMBOL_UNION_SYM = 48,                 /* UNION_SYM  */
  YYSYMBOL_IF_SYM = 49,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 50,                  /* ELSE_SYM  */
  YYSYMBOL_WHILE_SYM = 51,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 52,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 53,                   /* FOR_SYM  */
  YYSYMBOL_CONTINUE_SYM = 54,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 55,                 /* BREAK_SYM  */
  YYSYMBOL_RETURN_SYM = 56,                /* RETURN_SYM  */
  YYSYMBOL_SWITCH_SYM = 57,                /* SWITCH_SYM  */
  YYSYMBOL_CASE_SYM = 58,                  /* CASE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 59,               /* DEFAULT_SYM  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_translation_unit = 62,          /* translation_unit  */
  YYSYMBOL_external_declaration = 63,      /* external_declaration  */
  YYSYMBOL_function_definition = 64,       /* function_definition  */
  YYSYMBOL_65_1 = 65,                      /* @1  */
  YYSYMBOL_66_2 = 66,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 67,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 68,          /* declaration_list  */
  YYSYMBOL_declaration = 69,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 70,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 71,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 72,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 73,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 74,           /* init_declarator  */
  YYSYMBOL_initializer = 75,               /* initializer  */
  YYSYMBOL_initializer_list = 76,          /* initializer_list  */
  YYSYMBOL_type_specifier = 77,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 78,     /* struct_type_specifier  */
  YYSYMBOL_79_3 = 79,                      /* @3  */
  YYSYMBOL_80_4 = 80,                      /* @4  */
  YYSYMBOL_81_5 = 81,                      /* @5  */
  YYSYMBOL_82_6 = 82,                      /* @6  */
  YYSYMBOL_struct_or_union = 83,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 84,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 85,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 86,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 87,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 88,       /* enum_type_specifier  */
  YYSYMBOL_89_7 = 89,                      /* @7  */
  YYSYMBOL_90_8 = 90,                      /* @8  */
  YYSYMBOL_enumerator_list = 91,           /* enumerator_list  */
  YYSYMBOL_enumerator = 92,                /* enumerator  */
  YYSYMBOL_93_9 = 93,                      /* @9  */
  YYSYMBOL_declarator = 94,                /* declarator  */
  YYSYMBOL_pointer = 95,                   /* pointer  */
  YYSYMBOL_direct_declarator = 96,         /* direct_declarator  */
  YYSYMBOL_97_10 = 97,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 98,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 99,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 100,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 101,    /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 102,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 103,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 104, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 105,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 106,           /* statement_list  */
  YYSYMBOL_statement = 107,                /* statement  */
  YYSYMBOL_labeled_statement = 108,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 109,       /* compound_statement  */
  YYSYMBOL_110_11 = 110,                   /* @11  */
  YYSYMBOL_expression_statement = 111,     /* expression_statement  */
  YYSYMBOL_selection_statement = 112,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 113,      /* iteration_statement  */
  YYSYMBOL_for_expression = 114,           /* for_expression  */
  YYSYMBOL_expression_opt = 115,           /* expression_opt  */
  YYSYMBOL_jump_statement = 116,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 117,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 118,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 119,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 120,      /* constant_expression  */
  YYSYMBOL_expression = 121,               /* expression  */
  YYSYMBOL_comma_expression = 122,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 123,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 124,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 125,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 126,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 127,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 128,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 129,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 130,      /* equality_expression  */
  YYSYMBOL_relational_expression = 131,    /* relational_expression  */
  YYSYMBOL_shift_expression = 132,         /* shift_expression  */
  YYSYMBOL_additive_expression = 133,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 134, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 135,          /* cast_expression  */
  YYSYMBOL_unary_expression = 136,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 137,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 138,       /* primary_expression  */
  YYSYMBOL_type_name = 139                 /* type_name  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   451

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  297

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   314


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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    24,    24,    27,    28,    31,    32,    35,    35,    37,
      37,    41,    42,    45,    46,    49,    52,    53,    54,    55,
      58,    59,    60,    63,    64,    67,    68,    71,    72,    75,
      76,    79,    80,    83,    84,    85,    88,    89,    88,    91,
      91,    91,    93,    96,    97,   100,   101,   104,   107,   108,
     111,   114,   114,   116,   116,   118,   121,   122,   125,   126,
     126,   130,   131,   134,   135,   138,   139,   140,   142,   142,
     147,   148,   151,   152,   155,   156,   159,   160,   163,   164,
     167,   168,   169,   172,   173,   174,   175,   176,   179,   180,
     183,   184,   187,   188,   189,   190,   191,   192,   195,   196,
     199,   199,   204,   205,   208,   209,   210,   213,   214,   215,
     218,   221,   222,   225,   226,   227,   230,   231,   234,   235,
     238,   239,   242,   245,   248,   251,   252,   255,   256,   259,
     260,   263,   264,   267,   270,   273,   276,   277,   278,   281,
     282,   283,   284,   285,   288,   291,   292,   293,   296,   297,
     298,   299,   302,   303,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   318,   319,   320,   321,   322,   323,
     324,   327,   328,   329,   330,   331,   332,   335
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF_PREC",
  "IDENTIFIER", "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON",
  "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "COLON", "QUESTION", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM",
  "STRUCT_SYM", "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM",
  "ELSE_SYM", "WHILE_SYM", "DO_SYM", "FOR_SYM", "CONTINUE_SYM",
  "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM",
  "$accept", "program", "translation_unit", "external_declaration",
  "function_definition", "@1", "@2", "declaration_list_opt",
  "declaration_list", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "type_specifier", "struct_type_specifier", "@3",
  "@4", "@5", "@6", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_type_specifier", "@7", "@8", "enumerator_list", "enumerator", "@9",
  "declarator", "pointer", "direct_declarator", "@10",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "statement_list_opt", "statement_list", "statement", "labeled_statement",
  "compound_statement", "@11", "expression_statement",
  "selection_statement", "iteration_statement", "for_expression",
  "expression_opt", "jump_statement", "arg_expression_list_opt",
  "arg_expression_list", "constant_expression_opt", "constant_expression",
  "expression", "comma_expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "postfix_expression", "primary_expression",
  "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     303,  -216,  -216,   154,   -12,  -216,  -216,  -216,  -216,    26,
    -216,    44,   303,  -216,  -216,  -216,   154,   100,   100,  -216,
      72,  -216,  -216,    70,    63,    42,  -216,    53,    62,  -216,
    -216,    81,   132,  -216,    41,  -216,  -216,    73,   118,   143,
      63,  -216,   358,  -216,   171,   175,  -216,   154,   325,   143,
     176,  -216,  -216,  -216,   100,  -216,  -216,  -216,  -216,  -216,
     358,   358,   371,   371,   358,   279,   358,   358,   404,   178,
    -216,  -216,  -216,  -216,  -216,     2,   199,  -216,  -216,  -216,
     115,   114,  -216,   173,   126,  -216,   182,   408,  -216,   175,
     184,    69,  -216,  -216,   185,   325,  -216,  -216,  -216,  -216,
     127,   100,    46,   197,  -216,   192,  -216,  -216,  -216,  -216,
     358,  -216,  -216,  -216,    10,   200,   201,  -216,  -216,   279,
    -216,  -216,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,  -216,  -216,   226,
     358,   358,   228,    76,   202,  -216,   175,  -216,   148,   127,
     154,     6,  -216,   246,   100,  -216,   154,   149,   358,  -216,
      13,  -216,  -216,   186,  -216,    43,   191,   190,  -216,  -216,
     358,   214,   199,   203,  -216,   114,   114,  -216,  -216,  -216,
    -216,   126,   126,  -216,  -216,  -216,  -216,  -216,   217,   212,
    -216,   218,  -216,  -216,   358,  -216,  -216,   325,    66,     1,
    -216,  -216,  -216,  -216,  -216,   220,   222,   246,   233,   243,
     244,   358,   237,   358,   227,   234,   246,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,   249,  -216,   241,   242,   245,   186,
     100,   358,  -216,  -216,  -216,  -216,   358,  -216,   358,  -216,
    -216,  -216,  -216,  -216,   154,   358,   358,   221,   358,  -216,
    -216,   252,  -216,   358,   236,   246,  -216,  -216,  -216,  -216,
    -216,  -216,   250,   266,  -216,  -216,  -216,   251,   281,   247,
     282,   261,  -216,   283,   246,  -216,  -216,  -216,   246,   246,
     358,   246,   358,   246,  -216,   262,  -216,   285,  -216,   297,
    -216,   246,   298,   358,  -216,  -216,  -216
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   171,   173,   172,   174,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   129,   131,   133,   134,
     135,   136,   139,   144,   145,   148,   152,   154,   164,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   161,   152,   160,
       0,   155,   156,   157,    78,     0,     0,   159,   158,     0,
     162,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,     0,
     116,     0,     0,     0,     0,    54,     0,    31,     0,     0,
       0,     0,    45,    88,    12,    13,    23,    70,   120,    76,
      81,    77,    79,    80,    69,     0,    70,    81,   177,   176,
       0,     0,   130,     0,   132,   137,   138,   140,   141,   142,
     143,   146,   147,   149,   150,   151,   126,   168,     0,   117,
     118,     0,   167,    52,     0,    57,    30,     0,     0,     0,
      48,    50,    41,    46,   102,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,    89,    90,    92,    93,
      94,    95,    96,    97,     0,    14,     0,     0,     0,    82,
      70,   120,    73,    75,   153,   163,     0,   166,     0,   165,
      60,    32,    38,    47,     0,     0,     0,     0,   111,   114,
     115,     0,   112,     0,     0,     0,   101,    91,   103,    86,
      83,    84,     0,     0,   128,   119,    49,     0,     0,     0,
       0,     0,   113,     0,     0,    99,    87,    85,     0,     0,
       0,     0,   111,     0,    98,   104,   107,     0,   109,     0,
     106,     0,     0,   111,   105,   108,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,   306,  -216,  -216,  -216,  -216,  -216,   -89,
      14,  -216,  -216,  -216,   272,   -88,  -216,   -85,  -216,  -216,
    -216,  -216,  -216,  -216,   179,  -138,  -216,    97,  -216,  -216,
    -216,   231,   196,  -216,     0,     4,   -19,  -216,   -53,  -216,
    -216,   188,   229,  -121,  -126,  -216,  -216,   -69,  -216,   -20,
    -216,  -216,  -216,  -216,  -216,  -215,  -216,  -216,  -216,  -148,
     -46,   -42,  -216,  -131,   108,  -216,   232,   235,  -216,  -216,
    -216,    34,    71,  -216,    56,   -39,    -5,  -216,  -216,   238
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   153,   154,    15,
     102,    17,    31,    32,    33,    96,   148,    18,    19,    50,
     149,    38,   100,    20,   151,   152,   199,   200,    21,    44,
      28,    91,    92,   144,    22,    23,    24,    54,   226,   104,
     105,   106,   161,   162,   163,   215,   216,   217,   218,   219,
     101,   220,   221,   222,   270,   251,   223,   188,   189,    69,
      70,   224,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   103,    97,    25,    40,   186,    71,   147,    26,   190,
     228,     2,   155,   203,    16,   150,    34,     1,   122,    53,
     243,   107,   109,   115,     4,   113,    16,   117,   118,    98,
      27,    35,    36,   271,   229,   244,   227,   166,   202,   158,
     157,   229,   158,   123,    29,   227,     4,    94,     2,    97,
       1,     8,     9,    71,    10,   108,   108,   111,   112,   108,
     203,   108,   108,   120,   150,   225,   150,   289,   115,   232,
      43,     2,    -7,   157,     1,   158,    37,   115,   296,   114,
      48,   173,     4,   263,   -51,     5,     6,     7,     8,     9,
      41,    10,    42,    45,   183,   184,   185,     3,   242,   191,
      46,   145,   159,   146,   -36,     2,   160,   265,   193,   241,
     146,     8,     9,   150,    10,   156,    71,   108,   167,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   234,     2,   114,   127,   128,   129,   130,   247,   125,
     126,    40,     5,     6,     7,     8,     9,   257,    10,    51,
     201,    97,   240,     1,     2,    71,    94,    25,     1,   175,
     176,   160,   133,   134,   135,   108,    47,   254,   156,   252,
     167,    71,     8,     9,    52,    10,   157,   262,   158,    90,
     196,     3,   197,   131,   132,     4,   275,   181,   182,    71,
       4,     5,     6,     7,     8,     9,     2,    10,   177,   178,
     179,   180,    89,   267,   268,   284,   252,    99,   121,   285,
     286,   273,   288,   230,   290,   231,   124,   166,   166,   158,
     158,   136,   294,   -59,    48,   164,   165,     4,   169,   170,
     187,   108,   192,     5,     6,     7,     8,     9,   287,    10,
     252,   194,   235,   236,   201,   237,   238,   245,   239,   246,
      55,   252,    56,    57,    58,    59,    60,    61,    62,    63,
     248,    64,   249,   250,   253,   204,   256,   255,   258,   259,
     260,   272,   269,    65,   280,   261,   274,    52,   276,   278,
     282,    66,    67,    55,     2,    56,    57,    58,    59,    60,
      61,    62,    63,    68,    64,   205,   277,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    65,     1,     2,   279,
     281,   283,   291,   292,    66,    67,   293,   295,    30,    93,
     143,     5,     6,     7,     8,     9,    68,    10,   198,    55,
       3,    56,    57,    58,    59,    60,    61,    62,    63,     4,
      64,   266,   195,   168,   264,     5,     6,     7,     8,     9,
       0,    10,    65,   233,   172,     0,    95,   171,     0,   174,
      66,    67,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    68,    64,     0,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    64,     0,     0,     0,
       0,     0,     0,    66,    67,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,    68,    66,    67,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    68,    64,
     137,   138,     0,     0,     0,     0,   139,     0,     0,     0,
       0,   119,     0,     0,     0,   140,     0,   141,     0,    66,
      67,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,    48,     3,    23,   136,    48,    95,     4,   140,
     158,     5,   101,   151,     0,   100,    16,     4,    16,    39,
      19,    60,    61,    65,    36,    64,    12,    66,    67,    49,
       4,    17,    18,   248,   160,    34,   157,    27,    32,    29,
      27,   167,    29,    41,     0,   166,    36,    47,     5,    95,
       4,    45,    46,    95,    48,    60,    61,    62,    63,    64,
     198,    66,    67,    68,   149,   154,   151,   282,   110,    26,
      28,     5,    31,    27,     4,    29,     4,   119,   293,    65,
      39,   123,    36,   231,    31,    42,    43,    44,    45,    46,
      27,    48,    29,    31,   133,   134,   135,    27,    32,   141,
      19,    32,   102,    34,    31,     5,   102,   238,    32,   197,
      34,    45,    46,   198,    48,   101,   158,   122,   114,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   170,     5,   119,    20,    21,    22,    23,   207,    24,
      25,   160,    42,    43,    44,    45,    46,   216,    48,    31,
     150,   197,   194,     4,     5,   197,   156,   157,     4,   125,
     126,   157,    36,    37,    38,   170,    34,   213,   154,   211,
     166,   213,    45,    46,    31,    48,    27,   230,    29,     4,
      32,    27,    34,    10,    11,    36,   255,   131,   132,   231,
      36,    42,    43,    44,    45,    46,     5,    48,   127,   128,
     129,   130,    31,   245,   246,   274,   248,    31,    30,   278,
     279,   253,   281,    27,   283,    29,    17,    27,    27,    29,
      29,    39,   291,    39,    39,    28,    34,    36,    28,    28,
       4,   236,     4,    42,    43,    44,    45,    46,   280,    48,
     282,    39,    28,    40,   244,    28,    34,    27,    30,    27,
       4,   293,     6,     7,     8,     9,    10,    11,    12,    13,
      27,    15,    19,    19,    27,    19,    32,    40,    19,    28,
      28,    19,    51,    27,    27,    30,    40,    31,    28,    28,
      19,    35,    36,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    47,    15,    49,    30,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    27,     4,     5,    28,
      28,    28,    50,    28,    35,    36,    19,    19,    12,    47,
      89,    42,    43,    44,    45,    46,    47,    48,   149,     4,
      27,     6,     7,     8,     9,    10,    11,    12,    13,    36,
      15,   244,   146,   114,   236,    42,    43,    44,    45,    46,
      -1,    48,    27,   165,   122,    -1,    31,   119,    -1,   124,
      35,    36,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    47,    15,    -1,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    27,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    35,    36,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    47,    15,
      12,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    27,    -1,    29,    -1,    35,
      36,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,    27,    36,    42,    43,    44,    45,    46,
      48,    61,    62,    63,    64,    69,    70,    71,    77,    78,
      83,    88,    94,    95,    96,    94,    95,     4,    90,     0,
      63,    72,    73,    74,    94,    70,    70,     4,    81,    66,
      96,    27,    29,    28,    89,    31,    19,    34,    39,    65,
      79,    31,    31,   109,    97,     4,     6,     7,     8,     9,
      10,    11,    12,    13,    15,    27,    35,    36,    47,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    31,
       4,    91,    92,    74,    94,    31,    75,   120,   109,    31,
      82,   110,    70,    98,    99,   100,   101,   135,   136,   135,
      27,   136,   136,   135,    70,   121,   139,   135,   135,    27,
     136,    30,    16,    41,    17,    24,    25,    20,    21,    22,
      23,    10,    11,    36,    37,    38,    39,    12,    13,    18,
      27,    29,    33,    91,    93,    32,    34,    75,    76,    80,
      77,    84,    85,    67,    68,    69,    70,    27,    29,    94,
      95,   102,   103,   104,    28,    34,    27,    95,   102,    28,
      28,   139,   126,   121,   127,   131,   131,   132,   132,   132,
     132,   134,   134,   135,   135,   135,   123,     4,   117,   118,
     123,   121,     4,    32,    39,    92,    32,    34,    84,    86,
      87,    94,    32,    85,    19,    49,    51,    52,    53,    54,
      55,    56,    57,    58,    59,   105,   106,   107,   108,   109,
     111,   112,   113,   116,   121,    69,    98,   103,   119,   104,
      27,    29,    26,   101,   135,    28,    40,    28,    34,    30,
     121,    75,    32,    19,    34,    27,    27,   107,    27,    19,
      19,   115,   121,    27,   120,    40,    32,   107,    19,    28,
      28,    30,    98,   119,   124,   123,    87,   121,   121,    51,
     114,   115,    19,   121,    40,   107,    28,    30,    28,    28,
      27,    28,    19,    28,   107,   107,   107,   121,   107,   115,
     107,    50,    28,    19,   107,    19,   115
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    65,    64,    66,
      64,    67,    67,    68,    68,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    77,    79,    80,    78,    81,
      82,    78,    78,    83,    83,    84,    84,    85,    86,    86,
      87,    89,    88,    90,    88,    88,    91,    91,    92,    93,
      92,    94,    94,    95,    95,    96,    96,    96,    97,    96,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     110,   109,   111,   111,   112,   112,   112,   113,   113,   113,
     114,   115,   115,   116,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   121,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   128,   129,   130,   130,   130,   131,
     131,   131,   131,   131,   132,   133,   133,   133,   134,   134,
     134,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   138,   138,   138,   139
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     5,     1,
       3,     1,     3,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     1,     4,     4,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* program: translation_unit  */
#line 24 "parse.y"
                           {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL); checkForwardReference();}
#line 1637 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 27 "parse.y"
                               {yyval=yyvsp[0];}
#line 1643 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 28 "parse.y"
                                                {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1649 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 31 "parse.y"
                              {yyval=yyvsp[0];}
#line 1655 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 32 "parse.y"
                      {yyval=yyvsp[0];}
#line 1661 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 35 "parse.y"
                                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1667 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 36 "parse.y"
                                   {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1673 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 37 "parse.y"
                     {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],makeSpecifier(int_type,0));}
#line 1679 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 38 "parse.y"
                                   {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);}
#line 1685 "y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 41 "parse.y"
                {yyval=NIL;}
#line 1691 "y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 42 "parse.y"
                           {yyval=yyvsp[0];}
#line 1697 "y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 45 "parse.y"
                      {yyval=yyvsp[0];}
#line 1703 "y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 46 "parse.y"
                                       {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1709 "y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 49 "parse.y"
                                                                    {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1715 "y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 52 "parse.y"
                         {yyval=makeSpecifier(yyvsp[0],0);}
#line 1721 "y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 53 "parse.y"
                                  {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1727 "y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 54 "parse.y"
                                                {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1733 "y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 55 "parse.y"
                                                         {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1739 "y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 58 "parse.y"
                   {yyval=S_AUTO;}
#line 1745 "y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 59 "parse.y"
                     {yyval=S_STATIC;}
#line 1751 "y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 60 "parse.y"
                      {yyval=S_TYPEDEF;}
#line 1757 "y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 63 "parse.y"
                {yyval=makeDummyIdentifier();}
#line 1763 "y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 64 "parse.y"
                               {yyval=yyvsp[0];}
#line 1769 "y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 67 "parse.y"
                          {yyval=yyvsp[0];}
#line 1775 "y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 68 "parse.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1781 "y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 71 "parse.y"
                     {yyval=yyvsp[0];}
#line 1787 "y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 72 "parse.y"
                                        {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1793 "y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 75 "parse.y"
                              {yyval=makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1799 "y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 76 "parse.y"
                                 {yyval=yyvsp[-1];}
#line 1805 "y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 79 "parse.y"
                      {yyval=makeNode(N_INIT_LIST,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1811 "y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 80 "parse.y"
                                             {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1817 "y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 83 "parse.y"
                                {yyval = yyvsp[0];}
#line 1823 "y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 84 "parse.y"
                              {yyval = yyvsp[0];}
#line 1829 "y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 85 "parse.y"
                          {yyval = yyvsp[0];}
#line 1835 "y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 88 "parse.y"
                                     {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1841 "y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 89 "parse.y"
                   { yyval=current_id;current_level++;}
#line 1847 "y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 90 "parse.y"
                {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);current_level--; current_id=yyvsp[-2];}
#line 1853 "y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 91 "parse.y"
                          {yyval=makeType(yyvsp[0]);}
#line 1859 "y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 91 "parse.y"
                                                {yyval=current_id;current_level++;}
#line 1865 "y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 92 "parse.y"
                                           {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]); current_level--;current_id=yyvsp[-2];}
#line 1871 "y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 93 "parse.y"
                                     {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1877 "y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 96 "parse.y"
                     {yyval=T_STRUCT;}
#line 1883 "y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 97 "parse.y"
                    {yyval=T_UNION;}
#line 1889 "y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 100 "parse.y"
                             {yyval=yyvsp[0];}
#line 1895 "y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 101 "parse.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1901 "y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 104 "parse.y"
                                                          {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1907 "y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 107 "parse.y"
                            {yyval=yyvsp[0];}
#line 1913 "y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 108 "parse.y"
                                                         {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1919 "y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 111 "parse.y"
                     {yyval=yyvsp[0];}
#line 1925 "y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 114 "parse.y"
                              {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1931 "y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 115 "parse.y"
                                      {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1937 "y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 116 "parse.y"
                   {yyval=makeType(T_ENUM);}
#line 1943 "y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 117 "parse.y"
                                      {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1949 "y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 118 "parse.y"
                              {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1955 "y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 121 "parse.y"
                     {yyval=yyvsp[0];}
#line 1961 "y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 122 "parse.y"
                                           {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1967 "y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 125 "parse.y"
                     {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1973 "y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 126 "parse.y"
                     {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 1979 "y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 127 "parse.y"
                                  {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 1985 "y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 130 "parse.y"
                                    {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 1991 "y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 131 "parse.y"
                            {yyval=yyvsp[0];}
#line 1997 "y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 134 "parse.y"
               {yyval=makeType(T_POINTER);}
#line 2003 "y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 135 "parse.y"
                       {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2009 "y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 138 "parse.y"
                     {yyval=makeIdentifier(yyvsp[0]);}
#line 2015 "y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 139 "parse.y"
                           {yyval=yyvsp[-1];}
#line 2021 "y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 141 "parse.y"
                   {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2027 "y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 142 "parse.y"
                               {yyval=current_id;current_level++;}
#line 2033 "y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 144 "parse.y"
                   {checkForwardReference();current_id=yyvsp[-2];current_level--; yyval=setDeclaratorElementType(yyvsp[-4],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 2039 "y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 147 "parse.y"
          {yyval=NIL;}
#line 2045 "y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 148 "parse.y"
                              {yyval=yyvsp[0];}
#line 2051 "y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 151 "parse.y"
                         {yyval=yyvsp[0];}
#line 2057 "y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 152 "parse.y"
                                         {yyval=linkDeclaratorList(yyvsp[-2],setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2063 "y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 155 "parse.y"
                                {yyval=yyvsp[0];}
#line 2069 "y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 156 "parse.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2075 "y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 159 "parse.y"
                                            {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2081 "y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 160 "parse.y"
                                                         {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),yyvsp[0]),yyvsp[-1]);}
#line 2087 "y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 163 "parse.y"
          {yyval=NIL;}
#line 2093 "y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 164 "parse.y"
                              {yyval=yyvsp[0];}
#line 2099 "y.tab.c"
    break;

  case 80: /* abstract_declarator: direct_abstract_declarator  */
#line 167 "parse.y"
                                     {yyval=yyvsp[0];}
#line 2105 "y.tab.c"
    break;

  case 81: /* abstract_declarator: pointer  */
#line 168 "parse.y"
                  {yyval=makeType(T_POINTER);}
#line 2111 "y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 169 "parse.y"
                                             {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2117 "y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 172 "parse.y"
                                    {yyval=yyvsp[-1];}
#line 2123 "y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 173 "parse.y"
                                        {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 2129 "y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 174 "parse.y"
                                                                   {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2135 "y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 175 "parse.y"
                                        {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 2141 "y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 176 "parse.y"
                                                                   {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2147 "y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 179 "parse.y"
          {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2153 "y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 180 "parse.y"
                         {yyval=yyvsp[0];}
#line 2159 "y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 183 "parse.y"
                    {yyval=makeNode(N_STMT_LIST,yyvsp[0],NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2165 "y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 184 "parse.y"
                                   {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2171 "y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 187 "parse.y"
                            {yyval=yyvsp[0];}
#line 2177 "y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 188 "parse.y"
                             {yyval=yyvsp[0];}
#line 2183 "y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 189 "parse.y"
                               {yyval=yyvsp[0];}
#line 2189 "y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 190 "parse.y"
                              {yyval=yyvsp[0];}
#line 2195 "y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 191 "parse.y"
                              {yyval=yyvsp[0];}
#line 2201 "y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 192 "parse.y"
                         {yyval=yyvsp[0];}
#line 2207 "y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 195 "parse.y"
                                                       {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2],NIL,yyvsp[0]);}
#line 2213 "y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 196 "parse.y"
                                      {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2219 "y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 199 "parse.y"
             {yyval=current_id;current_level++;}
#line 2225 "y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 201 "parse.y"
                {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2231 "y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 204 "parse.y"
                    {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2237 "y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 205 "parse.y"
                               {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2243 "y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 208 "parse.y"
                                                          {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2249 "y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 209 "parse.y"
                                                               {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2255 "y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 210 "parse.y"
                                                {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2261 "y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 213 "parse.y"
                                               {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2267 "y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 214 "parse.y"
                                                                {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2273 "y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 215 "parse.y"
                                                 {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2279 "y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 218 "parse.y"
                                                                           {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2285 "y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 221 "parse.y"
                      {yyval=NIL;}
#line 2291 "y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 222 "parse.y"
                     {yyval=yyvsp[0];}
#line 2297 "y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 225 "parse.y"
                                              {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2303 "y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 226 "parse.y"
                                 {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2309 "y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 227 "parse.y"
                              {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2315 "y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 230 "parse.y"
          {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2321 "y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 231 "parse.y"
                              {yyval=yyvsp[0];}
#line 2327 "y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 234 "parse.y"
                                {yyval=makeNode(N_ARG_LIST,yyvsp[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2333 "y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 235 "parse.y"
                                                          {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2339 "y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 238 "parse.y"
          {yyval=NIL;}
#line 2345 "y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 239 "parse.y"
                              {yyval=yyvsp[0];}
#line 2351 "y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 242 "parse.y"
                     {yyval=yyvsp[0];}
#line 2357 "y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 245 "parse.y"
                           {yyval=yyvsp[0];}
#line 2363 "y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 248 "parse.y"
                                {yyval=yyvsp[0];}
#line 2369 "y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 251 "parse.y"
                                 {yyval=yyvsp[0];}
#line 2375 "y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 252 "parse.y"
                                                        {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2381 "y.tab.c"
    break;

  case 127: /* conditional_expression: logical_or_expression  */
#line 255 "parse.y"
                                {yyval=yyvsp[0];}
#line 2387 "y.tab.c"
    break;

  case 128: /* conditional_expression: logical_or_expression QUESTION expression COLON conditional_expression  */
#line 256 "parse.y"
                                                                                 {yyval=makeNode(N_EXP_CONDITIONAL, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2393 "y.tab.c"
    break;

  case 129: /* logical_or_expression: logical_and_expression  */
#line 259 "parse.y"
                                 {yyval=yyvsp[0];}
#line 2399 "y.tab.c"
    break;

  case 130: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 260 "parse.y"
                                                              {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2405 "y.tab.c"
    break;

  case 131: /* logical_and_expression: bitwise_or_expression  */
#line 263 "parse.y"
                                {yyval=yyvsp[0];}
#line 2411 "y.tab.c"
    break;

  case 132: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 264 "parse.y"
                                                              {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2417 "y.tab.c"
    break;

  case 133: /* bitwise_or_expression: bitwise_xor_expression  */
#line 267 "parse.y"
                                 {yyval=yyvsp[0];}
#line 2423 "y.tab.c"
    break;

  case 134: /* bitwise_xor_expression: bitwise_and_expression  */
#line 270 "parse.y"
                                 {yyval=yyvsp[0];}
#line 2429 "y.tab.c"
    break;

  case 135: /* bitwise_and_expression: equality_expression  */
#line 273 "parse.y"
                              {yyval=yyvsp[0];}
#line 2435 "y.tab.c"
    break;

  case 136: /* equality_expression: relational_expression  */
#line 276 "parse.y"
                                {yyval=yyvsp[0];}
#line 2441 "y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression EQL relational_expression  */
#line 277 "parse.y"
                                                        {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2447 "y.tab.c"
    break;

  case 138: /* equality_expression: equality_expression NEQ relational_expression  */
#line 278 "parse.y"
                                                        {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2453 "y.tab.c"
    break;

  case 139: /* relational_expression: shift_expression  */
#line 281 "parse.y"
                           {yyval=yyvsp[0];}
#line 2459 "y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression LSS shift_expression  */
#line 282 "parse.y"
                                                     {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2465 "y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression GTR shift_expression  */
#line 283 "parse.y"
                                                     {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2471 "y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression LEQ shift_expression  */
#line 284 "parse.y"
                                                     {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2477 "y.tab.c"
    break;

  case 143: /* relational_expression: relational_expression GEQ shift_expression  */
#line 285 "parse.y"
                                                     {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2483 "y.tab.c"
    break;

  case 144: /* shift_expression: additive_expression  */
#line 288 "parse.y"
                              {yyval=yyvsp[0];}
#line 2489 "y.tab.c"
    break;

  case 145: /* additive_expression: multiplicative_expression  */
#line 291 "parse.y"
                                    {yyval=yyvsp[0];}
#line 2495 "y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 292 "parse.y"
                                                             {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2501 "y.tab.c"
    break;

  case 147: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 293 "parse.y"
                                                              {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2507 "y.tab.c"
    break;

  case 148: /* multiplicative_expression: cast_expression  */
#line 296 "parse.y"
                          {yyval=yyvsp[0];}
#line 2513 "y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 297 "parse.y"
                                                         {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2519 "y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 298 "parse.y"
                                                          {yyval= makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2525 "y.tab.c"
    break;

  case 151: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 299 "parse.y"
                                                            {yyval= makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2531 "y.tab.c"
    break;

  case 152: /* cast_expression: unary_expression  */
#line 302 "parse.y"
                           {yyval=yyvsp[0];}
#line 2537 "y.tab.c"
    break;

  case 153: /* cast_expression: LP type_name RP cast_expression  */
#line 303 "parse.y"
                                          {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2543 "y.tab.c"
    break;

  case 154: /* unary_expression: postfix_expression  */
#line 306 "parse.y"
                             {yyval=yyvsp[0];}
#line 2549 "y.tab.c"
    break;

  case 155: /* unary_expression: PLUSPLUS unary_expression  */
#line 307 "parse.y"
                                    {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2555 "y.tab.c"
    break;

  case 156: /* unary_expression: MINUSMINUS unary_expression  */
#line 308 "parse.y"
                                      {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2561 "y.tab.c"
    break;

  case 157: /* unary_expression: AMP cast_expression  */
#line 309 "parse.y"
                              {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2567 "y.tab.c"
    break;

  case 158: /* unary_expression: STAR cast_expression  */
#line 310 "parse.y"
                               {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2573 "y.tab.c"
    break;

  case 159: /* unary_expression: EXCL cast_expression  */
#line 311 "parse.y"
                               {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2579 "y.tab.c"
    break;

  case 160: /* unary_expression: MINUS cast_expression  */
#line 312 "parse.y"
                                {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2585 "y.tab.c"
    break;

  case 161: /* unary_expression: PLUS cast_expression  */
#line 313 "parse.y"
                               {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2591 "y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 314 "parse.y"
                                      {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2597 "y.tab.c"
    break;

  case 163: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 315 "parse.y"
                                     {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2603 "y.tab.c"
    break;

  case 164: /* postfix_expression: primary_expression  */
#line 318 "parse.y"
                             {yyval=yyvsp[0];}
#line 2609 "y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LB expression RB  */
#line 319 "parse.y"
                                              {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2615 "y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 320 "parse.y"
                                                           {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2621 "y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 321 "parse.y"
                                               {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2627 "y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 322 "parse.y"
                                              {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2633 "y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 323 "parse.y"
                                      {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2639 "y.tab.c"
    break;

  case 170: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 324 "parse.y"
                                        {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2645 "y.tab.c"
    break;

  case 171: /* primary_expression: IDENTIFIER  */
#line 327 "parse.y"
                     {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 2651 "y.tab.c"
    break;

  case 172: /* primary_expression: INTEGER_CONSTANT  */
#line 328 "parse.y"
                           {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 2657 "y.tab.c"
    break;

  case 173: /* primary_expression: FLOAT_CONSTANT  */
#line 329 "parse.y"
                         {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 2663 "y.tab.c"
    break;

  case 174: /* primary_expression: CHARACTER_CONSTANT  */
#line 330 "parse.y"
                             {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 2669 "y.tab.c"
    break;

  case 175: /* primary_expression: STRING_LITERAL  */
#line 331 "parse.y"
                         {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 2675 "y.tab.c"
    break;

  case 176: /* primary_expression: LP expression RP  */
#line 332 "parse.y"
                           {yyval=yyvsp[-1];}
#line 2681 "y.tab.c"
    break;

  case 177: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 335 "parse.y"
                                                         {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2687 "y.tab.c"
    break;


#line 2691 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 338 "parse.y"


extern char *yytext;
yyerror(char *s) {
	syntax_err++;
	printf("  line %d: %s near %s \n", line_no, s, yytext);
	exit(1);
}
