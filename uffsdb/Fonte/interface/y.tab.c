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
#line 1 "interface/yacc.y"

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#ifndef FMACROS
   #include "../macros.h"
#endif
#ifndef FTYPES
   #include "../types.h"
#endif
#ifndef FMISC
   #include "../misc.h"
#endif
#ifndef FDICTIONARY
   #include "../dictionary.h"
#endif
#ifndef FSQLCOMMANDS
   #include "../sqlcommands.h"
#endif
#ifndef FDATABASE
   #include "../database.h"
#endif
#ifndef FPARSER
   #include "parser.h"
#endif

extern char* yytext[];
extern FILE * yyin;
extern FILE* outFile_p;

int yywrap() {
    return 1;
}


#line 108 "interface/y.tab.c"

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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INSERT = 3,                     /* INSERT  */
  YYSYMBOL_INTO = 4,                       /* INTO  */
  YYSYMBOL_VALUES = 5,                     /* VALUES  */
  YYSYMBOL_SELECT = 6,                     /* SELECT  */
  YYSYMBOL_FROM = 7,                       /* FROM  */
  YYSYMBOL_CREATE = 8,                     /* CREATE  */
  YYSYMBOL_TABLE = 9,                      /* TABLE  */
  YYSYMBOL_INTEGER = 10,                   /* INTEGER  */
  YYSYMBOL_VARCHAR = 11,                   /* VARCHAR  */
  YYSYMBOL_DOUBLE = 12,                    /* DOUBLE  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_PRIMARY = 14,                   /* PRIMARY  */
  YYSYMBOL_KEY = 15,                       /* KEY  */
  YYSYMBOL_REFERENCES = 16,                /* REFERENCES  */
  YYSYMBOL_DATABASE = 17,                  /* DATABASE  */
  YYSYMBOL_DROP = 18,                      /* DROP  */
  YYSYMBOL_OBJECT = 19,                    /* OBJECT  */
  YYSYMBOL_NUMBER = 20,                    /* NUMBER  */
  YYSYMBOL_VALUE = 21,                     /* VALUE  */
  YYSYMBOL_QUIT = 22,                      /* QUIT  */
  YYSYMBOL_LIST_TABLES = 23,               /* LIST_TABLES  */
  YYSYMBOL_LIST_TABLE = 24,                /* LIST_TABLE  */
  YYSYMBOL_CONNECT = 25,                   /* CONNECT  */
  YYSYMBOL_HELP = 26,                      /* HELP  */
  YYSYMBOL_LIST_DBASES = 27,               /* LIST_DBASES  */
  YYSYMBOL_CLEAR = 28,                     /* CLEAR  */
  YYSYMBOL_CONTR = 29,                     /* CONTR  */
  YYSYMBOL_WHERE = 30,                     /* WHERE  */
  YYSYMBOL_OPERADOR = 31,                  /* OPERADOR  */
  YYSYMBOL_RELACIONAL = 32,                /* RELACIONAL  */
  YYSYMBOL_LOGICO = 33,                    /* LOGICO  */
  YYSYMBOL_ASTERISCO = 34,                 /* ASTERISCO  */
  YYSYMBOL_SINAL = 35,                     /* SINAL  */
  YYSYMBOL_FECHA_P = 36,                   /* FECHA_P  */
  YYSYMBOL_ABRE_P = 37,                    /* ABRE_P  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_INDEX = 39,                     /* INDEX  */
  YYSYMBOL_ON = 40,                        /* ON  */
  YYSYMBOL_IMPLEMENT = 41,                 /* IMPLEMENT  */
  YYSYMBOL_HISTORY = 42,                   /* HISTORY  */
  YYSYMBOL_DELETE = 43,                    /* DELETE  */
  YYSYMBOL_DELETE_HISTORY = 44,            /* DELETE_HISTORY  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '-'  */
  YYSYMBOL_48_ = 48,                       /* '+'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_start = 50,                     /* start  */
  YYSYMBOL_connection = 51,                /* connection  */
  YYSYMBOL_qualquer_coisa = 52,            /* qualquer_coisa  */
  YYSYMBOL_exit_program = 53,              /* exit_program  */
  YYSYMBOL_clear = 54,                     /* clear  */
  YYSYMBOL_parentesis_open = 55,           /* parentesis_open  */
  YYSYMBOL_parentesis_close = 56,          /* parentesis_close  */
  YYSYMBOL_table_attr = 57,                /* table_attr  */
  YYSYMBOL_list_tables = 58,               /* list_tables  */
  YYSYMBOL_list_databases = 59,            /* list_databases  */
  YYSYMBOL_help_pls = 60,                  /* help_pls  */
  YYSYMBOL_implement = 61,                 /* implement  */
  YYSYMBOL_history_pls = 62,               /* history_pls  */
  YYSYMBOL_delete_history_pls = 63,        /* delete_history_pls  */
  YYSYMBOL_contributors = 64,              /* contributors  */
  YYSYMBOL_insert = 65,                    /* insert  */
  YYSYMBOL_66_1 = 66,                      /* $@1  */
  YYSYMBOL_semicolon = 67,                 /* semicolon  */
  YYSYMBOL_table = 68,                     /* table  */
  YYSYMBOL_opt_column_list = 69,           /* opt_column_list  */
  YYSYMBOL_column_list = 70,               /* column_list  */
  YYSYMBOL_column = 71,                    /* column  */
  YYSYMBOL_value_list = 72,                /* value_list  */
  YYSYMBOL_value = 73,                     /* value  */
  YYSYMBOL_create_table = 74,              /* create_table  */
  YYSYMBOL_75_2 = 75,                      /* $@2  */
  YYSYMBOL_table_column_attr = 76,         /* table_column_attr  */
  YYSYMBOL_type = 77,                      /* type  */
  YYSYMBOL_78_3 = 78,                      /* $@3  */
  YYSYMBOL_79_4 = 79,                      /* $@4  */
  YYSYMBOL_column_create = 80,             /* column_create  */
  YYSYMBOL_attribute = 81,                 /* attribute  */
  YYSYMBOL_table_fk = 82,                  /* table_fk  */
  YYSYMBOL_column_fk = 83,                 /* column_fk  */
  YYSYMBOL_drop_table = 84,                /* drop_table  */
  YYSYMBOL_85_5 = 85,                      /* $@5  */
  YYSYMBOL_86_6 = 86,                      /* $@6  */
  YYSYMBOL_create_database = 87,           /* create_database  */
  YYSYMBOL_88_7 = 88,                      /* $@7  */
  YYSYMBOL_89_8 = 89,                      /* $@8  */
  YYSYMBOL_drop_database = 90,             /* drop_database  */
  YYSYMBOL_91_9 = 91,                      /* $@9  */
  YYSYMBOL_92_10 = 92,                     /* $@10  */
  YYSYMBOL_select = 93,                    /* select  */
  YYSYMBOL_94_11 = 94,                     /* $@11  */
  YYSYMBOL_table_query = 95,               /* table_query  */
  YYSYMBOL_projecao = 96,                  /* projecao  */
  YYSYMBOL_97_12 = 97,                     /* $@12  */
  YYSYMBOL_98_13 = 98,                     /* $@13  */
  YYSYMBOL_projecao2 = 99,                 /* projecao2  */
  YYSYMBOL_100_14 = 100,                   /* $@14  */
  YYSYMBOL_where = 101,                    /* where  */
  YYSYMBOL_logicos = 102,                  /* logicos  */
  YYSYMBOL_103_15 = 103,                   /* $@15  */
  YYSYMBOL_adc_abre_p = 104,               /* adc_abre_p  */
  YYSYMBOL_repLogicos = 105,               /* repLogicos  */
  YYSYMBOL_106_16 = 106,                   /* $@16  */
  YYSYMBOL_relacoes = 107,                 /* relacoes  */
  YYSYMBOL_108_17 = 108,                   /* $@17  */
  YYSYMBOL_operacao = 109,                 /* operacao  */
  YYSYMBOL_110_18 = 110,                   /* $@18  */
  YYSYMBOL_111_19 = 111,                   /* $@19  */
  YYSYMBOL_operacao2 = 112,                /* operacao2  */
  YYSYMBOL_operador = 113,                 /* operador  */
  YYSYMBOL_sinal = 114,                    /* sinal  */
  YYSYMBOL_operando = 115,                 /* operando  */
  YYSYMBOL_create_index = 116,             /* create_index  */
  YYSYMBOL_117_20 = 117,                   /* $@20  */
  YYSYMBOL_atributo = 118,                 /* atributo  */
  YYSYMBOL_delete = 119,                   /* delete  */
  YYSYMBOL_120_21 = 120                    /* $@21  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   124

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
       2,     2,     2,    48,    46,    47,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    66,    68,    71,    73,    75,    77,
      80,    90,   100,   107,   111,   114,   116,   119,   126,   126,
     136,   138,   140,   140,   142,   142,   144,   146,   146,   148,
     149,   150,   153,   153,   158,   158,   160,   161,   161,   161,
     167,   168,   170,   172,   173,   174,   176,   178,   181,   181,
     181,   184,   184,   184,   187,   187,   187,   190,   190,   193,
     195,   196,   196,   197,   197,   199,   200,   200,   202,   203,
     205,   206,   206,   208,   210,   211,   211,   213,   213,   215,
     216,   217,   217,   218,   218,   220,   221,   223,   224,   225,
     227,   227,   229,   229,   230,   230,   233,   233,   237,   240,
     240
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
  "\"end of file\"", "error", "\"invalid token\"", "INSERT", "INTO",
  "VALUES", "SELECT", "FROM", "CREATE", "TABLE", "INTEGER", "VARCHAR",
  "DOUBLE", "CHAR", "PRIMARY", "KEY", "REFERENCES", "DATABASE", "DROP",
  "OBJECT", "NUMBER", "VALUE", "QUIT", "LIST_TABLES", "LIST_TABLE",
  "CONNECT", "HELP", "LIST_DBASES", "CLEAR", "CONTR", "WHERE", "OPERADOR",
  "RELACIONAL", "LOGICO", "ASTERISCO", "SINAL", "FECHA_P", "ABRE_P",
  "STRING", "INDEX", "ON", "IMPLEMENT", "HISTORY", "DELETE",
  "DELETE_HISTORY", "';'", "','", "'-'", "'+'", "$accept", "start",
  "connection", "qualquer_coisa", "exit_program", "clear",
  "parentesis_open", "parentesis_close", "table_attr", "list_tables",
  "list_databases", "help_pls", "implement", "history_pls",
  "delete_history_pls", "contributors", "insert", "$@1", "semicolon",
  "table", "opt_column_list", "column_list", "column", "value_list",
  "value", "create_table", "$@2", "table_column_attr", "type", "$@3",
  "$@4", "column_create", "attribute", "table_fk", "column_fk",
  "drop_table", "$@5", "$@6", "create_database", "$@7", "$@8",
  "drop_database", "$@9", "$@10", "select", "$@11", "table_query",
  "projecao", "$@12", "$@13", "projecao2", "$@14", "where", "logicos",
  "$@15", "adc_abre_p", "repLogicos", "$@16", "relacoes", "$@17",
  "operacao", "$@18", "$@19", "operacao2", "operador", "sinal", "operando",
  "create_index", "$@20", "atributo", "delete", "$@21", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      71,     9,  -132,     2,    31,  -132,  -132,  -132,    -1,    17,
    -132,  -132,  -132,  -132,  -132,  -132,    35,  -132,  -132,    46,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,    -4,  -132,  -132,    20,  -132,  -132,  -132,  -132,
    -132,  -132,    28,  -132,  -132,    30,    54,    28,    48,  -132,
      49,    52,    56,  -132,    36,    26,  -132,    56,    36,  -132,
      28,  -132,  -132,  -132,    50,  -132,    59,    76,    63,  -132,
      26,    50,    64,    40,    36,    40,    40,     7,    40,  -132,
      51,    45,    36,  -132,    65,    40,  -132,    51,    53,  -132,
      73,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,     7,    69,    72,     3,    22,  -132,  -132,  -132,    59,
       1,    26,  -132,  -132,    40,  -132,  -132,  -132,  -132,    21,
    -132,    51,    22,    67,    72,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,     7,  -132,  -132,  -132,  -132,  -132,    51,
      60,  -132,  -132,    36,    90,    88,    62,    40,  -132,  -132,
      74,     7,     7,     7,  -132,    40,     1,    89,  -132,  -132,
      80,    64,  -132,    69,    22,  -132,  -132,  -132,  -132,  -132,
    -132,    92,  -132,  -132,  -132,    51,  -132,    82,  -132,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      23,     0,    77,     0,     0,    25,    26,    31,     0,     0,
      33,    32,    27,    37,    34,    35,     0,    36,    40,     0,
      11,    21,    12,    16,     9,    10,    15,    14,    22,    19,
      20,    17,     2,    13,     5,     7,     6,     8,     3,    18,
       4,    38,     0,    52,    71,     0,    68,    74,    30,    24,
     119,     1,     0,    81,    80,     0,     0,     0,     0,   116,
       0,     0,     0,    41,    42,    85,    83,     0,     0,    72,
       0,    69,    75,    79,    88,    28,     0,     0,     0,    82,
      85,    88,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    44,     0,    86,     0,     0,    62,     0,     0,    73,
       0,    70,    76,   101,   115,   114,    93,    99,   110,   111,
      89,     0,    94,     0,     0,   105,   120,    29,    43,     0,
       0,    85,    84,    78,     0,    56,    57,    60,    61,    63,
     118,     0,   105,     0,   103,    95,    90,    97,   113,   112,
     108,   107,   100,     0,   109,    45,    50,    49,    51,     0,
      47,    87,    53,     0,     0,     0,    54,     0,   102,    91,
       0,     0,     0,     0,   106,     0,     0,     0,    64,    66,
       0,     0,   117,    94,   105,    96,    98,   103,    39,    48,
      58,     0,    55,    92,   104,     0,    67,     0,    59,    65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,  -132,  -132,   -67,   -97,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,   -81,   -41,
    -132,     0,  -132,   -46,  -132,  -132,  -132,   -50,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,    55,  -132,  -132,  -132,
     -70,  -132,    42,  -102,  -132,  -131,   -49,  -132,  -132,  -132,
    -105,  -132,  -132,  -124,  -132,  -112,  -132,  -132,  -132,  -132,
    -132,  -132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    19,    20,    21,    22,    23,    76,   118,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    52,    33,    64,
      77,    90,    91,   149,   150,    34,    57,    97,   129,   153,
     185,    98,   156,   170,   187,    35,    60,    85,    36,    58,
      83,    37,    61,    86,    38,    42,    74,    56,    65,    80,
      79,   121,    88,   110,   173,   111,   136,   161,   112,   162,
     113,   132,   160,   142,   143,   114,   115,    39,    70,   131,
      40,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     124,    82,    99,   144,   101,   102,   134,   116,   158,   133,
      94,    43,   163,    41,   123,    53,    68,   100,    48,    44,
     144,   146,   147,   138,   139,   120,   103,   104,   105,    84,
      54,   163,   163,    55,   157,   154,    49,   155,   164,   148,
      46,    45,    50,   152,   106,   107,    51,    63,    47,    66,
     184,   151,   165,   140,   108,   109,   141,   176,   177,   175,
      59,    67,   144,   125,   126,   127,   128,    69,    71,   108,
     109,    72,    78,    75,     1,    73,   172,     2,    89,     3,
      87,    92,    93,    96,   178,    18,   167,   117,   188,     4,
       5,   119,   130,     6,     7,     8,     9,    10,    11,    12,
      13,   122,   135,   159,   137,   168,   166,   169,   171,   180,
     174,   186,    14,    15,    16,    17,    18,   181,   189,   145,
     179,   182,    81,    95,   183
};

static const yytype_uint8 yycheck[] =
{
      97,    68,    83,   115,    85,    86,   111,    88,   132,   111,
      80,     9,   143,     4,    95,    19,    57,    84,    19,    17,
     132,    20,    21,    20,    21,    92,    19,    20,    21,    70,
      34,   162,   163,    37,   131,    14,    19,    16,   143,    38,
       9,    39,     7,   124,    37,    38,     0,    19,    17,    19,
     174,   121,   149,    31,    47,    48,    34,   162,   163,   161,
      40,     7,   174,    10,    11,    12,    13,    19,    19,    47,
      48,    19,    46,    37,     3,    19,   157,     6,    19,     8,
      30,     5,    19,    19,   165,    45,   153,    36,   185,    18,
      19,    46,    19,    22,    23,    24,    25,    26,    27,    28,
      29,    36,    33,    36,    32,    15,    46,    19,    46,    20,
      36,    19,    41,    42,    43,    44,    45,    37,    36,   119,
     166,   171,    67,    81,   173
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     8,    18,    19,    22,    23,    24,    25,
      26,    27,    28,    29,    41,    42,    43,    44,    45,    50,
      51,    52,    53,    54,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    67,    74,    84,    87,    90,    93,   116,
     119,     4,    94,     9,    17,    39,     9,    17,    19,    19,
       7,     0,    66,    19,    34,    37,    96,    75,    88,    40,
      85,    91,   120,    19,    68,    97,    19,     7,    68,    19,
     117,    19,    19,    19,    95,    37,    55,    69,    46,    99,
      98,    95,    55,    89,    68,    86,    92,    30,   101,    19,
      70,    71,     5,    19,    99,   101,    19,    76,    80,    67,
      55,    67,    67,    19,    20,    21,    37,    38,    47,    48,
     102,   104,   107,   109,   114,   115,    67,    36,    56,    46,
      55,   100,    36,    67,    56,    10,    11,    12,    13,    77,
      19,   118,   110,   102,   109,    33,   105,    32,    20,    21,
      31,    34,   112,   113,   114,    70,    20,    21,    38,    72,
      73,    99,    67,    78,    14,    16,    81,    56,   112,    36,
     111,   106,   108,   104,   109,    56,    46,    55,    15,    19,
      82,    46,    67,   103,    36,   102,   109,   109,    67,    72,
      20,    37,    76,   105,   112,    79,    19,    83,    56,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    66,    65,
      67,    68,    69,    69,    70,    70,    71,    72,    72,    73,
      73,    73,    75,    74,    76,    76,    77,    78,    79,    77,
      77,    77,    80,    81,    81,    81,    82,    83,    85,    86,
      84,    88,    89,    87,    91,    92,    90,    94,    93,    95,
      96,    97,    96,    98,    96,    99,   100,    99,   101,   101,
     102,   103,   102,   104,   105,   106,   105,   108,   107,   109,
     109,   110,   109,   111,   109,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   115,   115,   117,   116,   118,   120,
     119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     0,    10,
       1,     1,     0,     3,     1,     3,     1,     1,     3,     1,
       1,     1,     0,     8,     3,     5,     1,     0,     0,     6,
       1,     1,     1,     0,     2,     5,     1,     1,     0,     0,
       6,     0,     0,     6,     0,     0,     6,     0,     7,     1,
       1,     0,     3,     0,     5,     0,     0,     4,     0,     2,
       2,     0,     5,     1,     0,     0,     3,     0,     4,     1,
       2,     0,     3,     0,     5,     0,     2,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     0,     9,     1,     0,
       6
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
  case 13: /* start: semicolon  */
#line 56 "interface/yacc.y"
                                                                        {GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1352 "interface/y.tab.c"
    break;

  case 24: /* connection: CONNECT OBJECT  */
#line 66 "interface/yacc.y"
                           {connect(*yytext); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1358 "interface/y.tab.c"
    break;

  case 25: /* qualquer_coisa: OBJECT  */
#line 68 "interface/yacc.y"
                       {GLOBAL_PARSER.consoleFlag = 1; GLOBAL_PARSER.noerror = 0; return 0;}
#line 1364 "interface/y.tab.c"
    break;

  case 26: /* exit_program: QUIT  */
#line 71 "interface/yacc.y"
                   {quit(0);}
#line 1370 "interface/y.tab.c"
    break;

  case 27: /* clear: CLEAR  */
#line 73 "interface/yacc.y"
             {clear(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1376 "interface/y.tab.c"
    break;

  case 28: /* parentesis_open: ABRE_P  */
#line 75 "interface/yacc.y"
                        {GLOBAL_PARSER.parentesis++;}
#line 1382 "interface/y.tab.c"
    break;

  case 29: /* parentesis_close: FECHA_P  */
#line 77 "interface/yacc.y"
                          {GLOBAL_PARSER.parentesis--;}
#line 1388 "interface/y.tab.c"
    break;

  case 30: /* table_attr: LIST_TABLE OBJECT  */
#line 80 "interface/yacc.y"
                              {
    if(connected.conn_active) {
        printTable(yylval.strval);
        GLOBAL_PARSER.consoleFlag = 1;
    } else
        notConnected();
    return 0;
}
#line 1401 "interface/y.tab.c"
    break;

  case 31: /* list_tables: LIST_TABLES  */
#line 90 "interface/yacc.y"
                         {
    if(connected.conn_active) {
        printTable(NULL);
        GLOBAL_PARSER.consoleFlag = 1;
    } else
        notConnected();
    return 0;
}
#line 1414 "interface/y.tab.c"
    break;

  case 32: /* list_databases: LIST_DBASES  */
#line 100 "interface/yacc.y"
                            {
    showDB();
    GLOBAL_PARSER.consoleFlag = 1;
    return 0;
}
#line 1424 "interface/y.tab.c"
    break;

  case 33: /* help_pls: HELP  */
#line 107 "interface/yacc.y"
               {help(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1430 "interface/y.tab.c"
    break;

  case 34: /* implement: IMPLEMENT  */
#line 111 "interface/yacc.y"
                     {implement(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1436 "interface/y.tab.c"
    break;

  case 35: /* history_pls: HISTORY  */
#line 114 "interface/yacc.y"
                     {printHistory(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1442 "interface/y.tab.c"
    break;

  case 36: /* delete_history_pls: DELETE_HISTORY  */
#line 116 "interface/yacc.y"
                                   {deleteHistory(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1448 "interface/y.tab.c"
    break;

  case 37: /* contributors: CONTR  */
#line 119 "interface/yacc.y"
                    {contr(); GLOBAL_PARSER.consoleFlag = 1; return 0;}
#line 1454 "interface/y.tab.c"
    break;

  case 38: /* $@1: %empty  */
#line 126 "interface/yacc.y"
                    {setMode(OP_INSERT);}
#line 1460 "interface/y.tab.c"
    break;

  case 39: /* insert: INSERT INTO $@1 table opt_column_list VALUES parentesis_open value_list parentesis_close semicolon  */
#line 126 "interface/yacc.y"
                                                                                                                             {
    if (GLOBAL_PARSER.col_count == GLOBAL_PARSER.val_count || GLOBAL_DATA.columnName == NULL)
        GLOBAL_DATA.N = GLOBAL_PARSER.val_count;
    else {
        printf("ERROR: The column counter doesn't match the value counter.\n");
        GLOBAL_PARSER.noerror=0;
    }
    return 0;
}
#line 1474 "interface/y.tab.c"
    break;

  case 41: /* table: OBJECT  */
#line 138 "interface/yacc.y"
              {setObjName(yytext);}
#line 1480 "interface/y.tab.c"
    break;

  case 46: /* column: OBJECT  */
#line 144 "interface/yacc.y"
               {setColumnInsert(yytext);}
#line 1486 "interface/y.tab.c"
    break;

  case 49: /* value: VALUE  */
#line 148 "interface/yacc.y"
             {setValueInsert(yylval.strval, 'D');}
#line 1492 "interface/y.tab.c"
    break;

  case 50: /* value: NUMBER  */
#line 149 "interface/yacc.y"
              {setValueInsert(yylval.strval, 'I');}
#line 1498 "interface/y.tab.c"
    break;

  case 51: /* value: STRING  */
#line 150 "interface/yacc.y"
              {setValueInsert(yylval.strval, 'S');}
#line 1504 "interface/y.tab.c"
    break;

  case 52: /* $@2: %empty  */
#line 153 "interface/yacc.y"
                           {setMode(OP_CREATE_TABLE);}
#line 1510 "interface/y.tab.c"
    break;

  case 53: /* create_table: CREATE TABLE $@2 table parentesis_open table_column_attr parentesis_close semicolon  */
#line 153 "interface/yacc.y"
                                                                                                                          {
    GLOBAL_DATA.N = GLOBAL_PARSER.col_count;
    return 0;
}
#line 1519 "interface/y.tab.c"
    break;

  case 56: /* type: INTEGER  */
#line 160 "interface/yacc.y"
              {setColumnTypeCreate('I');}
#line 1525 "interface/y.tab.c"
    break;

  case 57: /* $@3: %empty  */
#line 161 "interface/yacc.y"
              {setColumnTypeCreate('S');}
#line 1531 "interface/y.tab.c"
    break;

  case 58: /* $@4: %empty  */
#line 161 "interface/yacc.y"
                                                                 { long varcharSize = atol(yylval.strval);

        if (varcharSize <= 0){
                     GLOBAL_PARSER.noerror = 10;
        }
  setColumnSizeCreate(yylval.strval);}
#line 1542 "interface/y.tab.c"
    break;

  case 60: /* type: DOUBLE  */
#line 167 "interface/yacc.y"
             {setColumnTypeCreate('D');}
#line 1548 "interface/y.tab.c"
    break;

  case 61: /* type: CHAR  */
#line 168 "interface/yacc.y"
           {setColumnTypeCreate('C');}
#line 1554 "interface/y.tab.c"
    break;

  case 62: /* column_create: OBJECT  */
#line 170 "interface/yacc.y"
                      {setColumnCreate(yytext);}
#line 1560 "interface/y.tab.c"
    break;

  case 64: /* attribute: PRIMARY KEY  */
#line 173 "interface/yacc.y"
                       {setColumnPKCreate();}
#line 1566 "interface/y.tab.c"
    break;

  case 66: /* table_fk: OBJECT  */
#line 176 "interface/yacc.y"
                 {setColumnFKTableCreate(yytext);}
#line 1572 "interface/y.tab.c"
    break;

  case 67: /* column_fk: OBJECT  */
#line 178 "interface/yacc.y"
                  {setColumnFKColumnCreate(yytext);}
#line 1578 "interface/y.tab.c"
    break;

  case 68: /* $@5: %empty  */
#line 181 "interface/yacc.y"
                       {setMode(OP_DROP_TABLE);}
#line 1584 "interface/y.tab.c"
    break;

  case 69: /* $@6: %empty  */
#line 181 "interface/yacc.y"
                                                        {setObjName(yytext);}
#line 1590 "interface/y.tab.c"
    break;

  case 70: /* drop_table: DROP TABLE $@5 OBJECT $@6 semicolon  */
#line 181 "interface/yacc.y"
                                                                                         {return 0;}
#line 1596 "interface/y.tab.c"
    break;

  case 71: /* $@7: %empty  */
#line 184 "interface/yacc.y"
                                 {setMode(OP_CREATE_DATABASE);}
#line 1602 "interface/y.tab.c"
    break;

  case 72: /* $@8: %empty  */
#line 184 "interface/yacc.y"
                                                                       {setObjName(yytext);}
#line 1608 "interface/y.tab.c"
    break;

  case 73: /* create_database: CREATE DATABASE $@7 OBJECT $@8 semicolon  */
#line 184 "interface/yacc.y"
                                                                                                       {return 0;}
#line 1614 "interface/y.tab.c"
    break;

  case 74: /* $@9: %empty  */
#line 187 "interface/yacc.y"
                             {setMode(OP_DROP_DATABASE);}
#line 1620 "interface/y.tab.c"
    break;

  case 75: /* $@10: %empty  */
#line 187 "interface/yacc.y"
                                                                 {setObjName(yytext);}
#line 1626 "interface/y.tab.c"
    break;

  case 76: /* drop_database: DROP DATABASE $@9 OBJECT $@10 semicolon  */
#line 187 "interface/yacc.y"
                                                                                                 {return 0;}
#line 1632 "interface/y.tab.c"
    break;

  case 77: /* $@11: %empty  */
#line 190 "interface/yacc.y"
               {setMode(OP_SELECT); resetQuery();}
#line 1638 "interface/y.tab.c"
    break;

  case 78: /* select: SELECT $@11 projecao FROM table_query where semicolon  */
#line 191 "interface/yacc.y"
                                         {return 0;}
#line 1644 "interface/y.tab.c"
    break;

  case 79: /* table_query: OBJECT  */
#line 193 "interface/yacc.y"
                    {adcTabelaQuery(yylval.strval, getMode() == OP_SELECT ? 'S' : 'D');}
#line 1650 "interface/y.tab.c"
    break;

  case 80: /* projecao: ASTERISCO  */
#line 195 "interface/yacc.y"
                    {adcProjSelect(yylval.strval);}
#line 1656 "interface/y.tab.c"
    break;

  case 81: /* $@12: %empty  */
#line 196 "interface/yacc.y"
                  {adcProjSelect(yylval.strval);}
#line 1662 "interface/y.tab.c"
    break;

  case 83: /* $@13: %empty  */
#line 197 "interface/yacc.y"
                         {adcProjSelect(yylval.strval);}
#line 1668 "interface/y.tab.c"
    break;

  case 86: /* $@14: %empty  */
#line 200 "interface/yacc.y"
                       {adcProjSelect(yylval.strval);}
#line 1674 "interface/y.tab.c"
    break;

  case 91: /* $@15: %empty  */
#line 206 "interface/yacc.y"
                                      {adcTokenWhere(yylval.strval,6);}
#line 1680 "interface/y.tab.c"
    break;

  case 93: /* adc_abre_p: ABRE_P  */
#line 208 "interface/yacc.y"
                   {adcTokenWhere(yylval.strval,5);}
#line 1686 "interface/y.tab.c"
    break;

  case 95: /* $@16: %empty  */
#line 211 "interface/yacc.y"
                   {adcTokenWhere(*yytext,1);}
#line 1692 "interface/y.tab.c"
    break;

  case 97: /* $@17: %empty  */
#line 213 "interface/yacc.y"
                              {adcTokenWhere(yylval.strval,2);}
#line 1698 "interface/y.tab.c"
    break;

  case 99: /* operacao: STRING  */
#line 215 "interface/yacc.y"
                 {adcTokenWhere(yylval.strval,7);}
#line 1704 "interface/y.tab.c"
    break;

  case 101: /* $@18: %empty  */
#line 217 "interface/yacc.y"
                 {adcTokenWhere(yylval.strval,8);}
#line 1710 "interface/y.tab.c"
    break;

  case 103: /* $@19: %empty  */
#line 218 "interface/yacc.y"
                              {adcTokenWhere(yylval.strval,6);}
#line 1716 "interface/y.tab.c"
    break;

  case 107: /* operador: ASTERISCO  */
#line 223 "interface/yacc.y"
                    {adcTokenWhere(yylval.strval,4);}
#line 1722 "interface/y.tab.c"
    break;

  case 108: /* operador: OPERADOR  */
#line 224 "interface/yacc.y"
                   {adcTokenWhere(yylval.strval,4);}
#line 1728 "interface/y.tab.c"
    break;

  case 110: /* sinal: '-'  */
#line 227 "interface/yacc.y"
           {adcTokenWhere(*yytext,3);}
#line 1734 "interface/y.tab.c"
    break;

  case 111: /* sinal: '+'  */
#line 227 "interface/yacc.y"
                                             {adcTokenWhere(*yytext,3);}
#line 1740 "interface/y.tab.c"
    break;

  case 112: /* operando: sinal VALUE  */
#line 229 "interface/yacc.y"
                      {adcTokenWhere(yylval.strval,9);}
#line 1746 "interface/y.tab.c"
    break;

  case 113: /* operando: sinal NUMBER  */
#line 229 "interface/yacc.y"
                                                                       {adcTokenWhere(yylval.strval,9);}
#line 1752 "interface/y.tab.c"
    break;

  case 114: /* operando: VALUE  */
#line 230 "interface/yacc.y"
                {adcTokenWhere(yylval.strval,9);}
#line 1758 "interface/y.tab.c"
    break;

  case 115: /* operando: NUMBER  */
#line 230 "interface/yacc.y"
                                                           {adcTokenWhere(yylval.strval,9);}
#line 1764 "interface/y.tab.c"
    break;

  case 116: /* $@20: %empty  */
#line 233 "interface/yacc.y"
                              {setMode(OP_CREATE_INDEX);}
#line 1770 "interface/y.tab.c"
    break;

  case 117: /* create_index: CREATE INDEX ON $@20 table parentesis_open atributo parentesis_close semicolon  */
#line 233 "interface/yacc.y"
                                                                                                                    {
    return 0;
}
#line 1778 "interface/y.tab.c"
    break;

  case 118: /* atributo: OBJECT  */
#line 237 "interface/yacc.y"
                 {setColumnBtreeCreate(yytext);}
#line 1784 "interface/y.tab.c"
    break;

  case 119: /* $@21: %empty  */
#line 240 "interface/yacc.y"
                    {setMode(OP_DELETE); resetQuery();}
#line 1790 "interface/y.tab.c"
    break;

  case 120: /* delete: DELETE FROM $@21 table_query where semicolon  */
#line 240 "interface/yacc.y"
                                                                                    { return 0; }
#line 1796 "interface/y.tab.c"
    break;


#line 1800 "interface/y.tab.c"

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

#line 244 "interface/yacc.y"

