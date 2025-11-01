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

#ifndef YY_YY_INTERFACE_Y_TAB_H_INCLUDED
# define YY_YY_INTERFACE_Y_TAB_H_INCLUDED
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
    INSERT = 258,                  /* INSERT  */
    INTO = 259,                    /* INTO  */
    VALUES = 260,                  /* VALUES  */
    SELECT = 261,                  /* SELECT  */
    FROM = 262,                    /* FROM  */
    CREATE = 263,                  /* CREATE  */
    TABLE = 264,                   /* TABLE  */
    INTEGER = 265,                 /* INTEGER  */
    VARCHAR = 266,                 /* VARCHAR  */
    DOUBLE = 267,                  /* DOUBLE  */
    CHAR = 268,                    /* CHAR  */
    PRIMARY = 269,                 /* PRIMARY  */
    KEY = 270,                     /* KEY  */
    REFERENCES = 271,              /* REFERENCES  */
    DATABASE = 272,                /* DATABASE  */
    DROP = 273,                    /* DROP  */
    OBJECT = 274,                  /* OBJECT  */
    NUMBER = 275,                  /* NUMBER  */
    VALUE = 276,                   /* VALUE  */
    QUIT = 277,                    /* QUIT  */
    LIST_TABLES = 278,             /* LIST_TABLES  */
    LIST_TABLE = 279,              /* LIST_TABLE  */
    CONNECT = 280,                 /* CONNECT  */
    HELP = 281,                    /* HELP  */
    LIST_DBASES = 282,             /* LIST_DBASES  */
    CLEAR = 283,                   /* CLEAR  */
    CONTR = 284,                   /* CONTR  */
    WHERE = 285,                   /* WHERE  */
    OPERADOR = 286,                /* OPERADOR  */
    RELACIONAL = 287,              /* RELACIONAL  */
    LOGICO = 288,                  /* LOGICO  */
    ASTERISCO = 289,               /* ASTERISCO  */
    SINAL = 290,                   /* SINAL  */
    FECHA_P = 291,                 /* FECHA_P  */
    ABRE_P = 292,                  /* ABRE_P  */
    STRING = 293,                  /* STRING  */
    INDEX = 294,                   /* INDEX  */
    ON = 295,                      /* ON  */
    IMPLEMENT = 296,               /* IMPLEMENT  */
    HISTORY = 297,                 /* HISTORY  */
    DELETE = 298,                  /* DELETE  */
    DELETE_HISTORY = 299           /* DELETE_HISTORY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INSERT 258
#define INTO 259
#define VALUES 260
#define SELECT 261
#define FROM 262
#define CREATE 263
#define TABLE 264
#define INTEGER 265
#define VARCHAR 266
#define DOUBLE 267
#define CHAR 268
#define PRIMARY 269
#define KEY 270
#define REFERENCES 271
#define DATABASE 272
#define DROP 273
#define OBJECT 274
#define NUMBER 275
#define VALUE 276
#define QUIT 277
#define LIST_TABLES 278
#define LIST_TABLE 279
#define CONNECT 280
#define HELP 281
#define LIST_DBASES 282
#define CLEAR 283
#define CONTR 284
#define WHERE 285
#define OPERADOR 286
#define RELACIONAL 287
#define LOGICO 288
#define ASTERISCO 289
#define SINAL 290
#define FECHA_P 291
#define ABRE_P 292
#define STRING 293
#define INDEX 294
#define ON 295
#define IMPLEMENT 296
#define HISTORY 297
#define DELETE 298
#define DELETE_HISTORY 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "interface/yacc.y"

    int intval;
    double floatval;
    int subtok;
    char *strval;

#line 162 "interface/y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_INTERFACE_Y_TAB_H_INCLUDED  */
