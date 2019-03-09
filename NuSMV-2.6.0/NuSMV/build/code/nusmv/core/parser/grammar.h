/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_NUSMV_YY_HOME_WILLIAM_NUSMV_A_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED
# define YY_NUSMV_YY_HOME_WILLIAM_NUSMV_A_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int nusmv_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_CONSTRAINT = 258,
    TOK_ITYPE = 259,
    TOK_MODULE = 260,
    TOK_PROCESS = 261,
    TOK_CONTEXT = 262,
    TOK_EU = 263,
    TOK_AU = 264,
    TOK_EBU = 265,
    TOK_ABU = 266,
    TOK_MINU = 267,
    TOK_MAXU = 268,
    TOK_VAR = 269,
    TOK_FROZENVAR = 270,
    TOK_IVAR = 271,
    TOK_FUN = 272,
    TOK_DEFINE = 273,
    TOK_ARRAY_DEFINE = 274,
    TOK_INIT = 275,
    TOK_TRANS = 276,
    TOK_INVAR = 277,
    TOK_SPEC = 278,
    TOK_CTLSPEC = 279,
    TOK_LTLSPEC = 280,
    TOK_COMPUTE = 281,
    TOK_NAME = 282,
    TOK_PSLSPEC = 283,
    TOK_CONSTANTS = 284,
    TOK_INVARSPEC = 285,
    TOK_FAIRNESS = 286,
    TOK_COMPASSION = 287,
    TOK_JUSTICE = 288,
    TOK_ISA = 289,
    TOK_ASSIGN = 290,
    TOK_OF = 291,
    TOK_CONS = 292,
    TOK_SEMI = 293,
    TOK_LP = 294,
    TOK_RP = 295,
    TOK_RB = 296,
    TOK_LCB = 297,
    TOK_RCB = 298,
    TOK_EQDEF = 299,
    TOK_TWODOTS = 300,
    TOK_SELF = 301,
    TOK_CASE = 302,
    TOK_ESAC = 303,
    TOK_COLON = 304,
    TOK_INCONTEXT = 305,
    TOK_SIMPWFF = 306,
    TOK_NEXTWFF = 307,
    TOK_LTLWFF = 308,
    TOK_LTLPSL = 309,
    TOK_CTLWFF = 310,
    TOK_COMPWFF = 311,
    TOK_COMPID = 312,
    TOK_ARRAY = 313,
    TOK_BOOLEAN = 314,
    TOK_WORD = 315,
    TOK_BOOL = 316,
    TOK_WORD1 = 317,
    TOK_CONST_ARRAY = 318,
    TOK_WAREAD = 319,
    TOK_WAWRITE = 320,
    TOK_SIGNED = 321,
    TOK_UNSIGNED = 322,
    TOK_EXTEND = 323,
    TOK_UWCONST = 324,
    TOK_SWCONST = 325,
    TOK_WRESIZE = 326,
    TOK_WSIZEOF = 327,
    TOK_WTOINT = 328,
    TOK_COUNT = 329,
    TOK_TYPEOF = 330,
    TOK_ATOM = 331,
    TOK_FALSEEXP = 332,
    TOK_TRUEEXP = 333,
    TOK_NUMBER = 334,
    TOK_NUMBER_FRAC = 335,
    TOK_NUMBER_REAL = 336,
    TOK_NUMBER_EXP = 337,
    TOK_NUMBER_WORD = 338,
    TOK_ABS = 339,
    TOK_MIN = 340,
    TOK_MAX = 341,
    TOK_COMMA = 342,
    TOK_IMPLIES = 343,
    TOK_IFF = 344,
    TOK_OR = 345,
    TOK_XOR = 346,
    TOK_XNOR = 347,
    TOK_AND = 348,
    TOK_NOT = 349,
    TOK_QUESTIONMARK = 350,
    TOK_EX = 351,
    TOK_AX = 352,
    TOK_EF = 353,
    TOK_AF = 354,
    TOK_EG = 355,
    TOK_AG = 356,
    TOK_EE = 357,
    TOK_AA = 358,
    TOK_SINCE = 359,
    TOK_UNTIL = 360,
    TOK_TRIGGERED = 361,
    TOK_RELEASES = 362,
    TOK_EBF = 363,
    TOK_EBG = 364,
    TOK_ABF = 365,
    TOK_ABG = 366,
    TOK_BUNTIL = 367,
    TOK_MMIN = 368,
    TOK_MMAX = 369,
    TOK_OP_NEXT = 370,
    TOK_OP_GLOBAL = 371,
    TOK_OP_FUTURE = 372,
    TOK_OP_PREC = 373,
    TOK_OP_NOTPRECNOT = 374,
    TOK_OP_HISTORICAL = 375,
    TOK_OP_ONCE = 376,
    TOK_EQUAL = 377,
    TOK_NOTEQUAL = 378,
    TOK_LT = 379,
    TOK_GT = 380,
    TOK_LE = 381,
    TOK_GE = 382,
    TOK_UNION = 383,
    TOK_SETIN = 384,
    TOK_LSHIFT = 385,
    TOK_RSHIFT = 386,
    TOK_LROTATE = 387,
    TOK_RROTATE = 388,
    TOK_MOD = 389,
    TOK_PLUS = 390,
    TOK_MINUS = 391,
    TOK_TIMES = 392,
    TOK_DIVIDE = 393,
    TOK_NEXT = 394,
    TOK_SMALLINIT = 395,
    TOK_CONCATENATION = 396,
    TOK_LB = 397,
    TOK_DOT = 398,
    TOK_BIT = 399
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 138 "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.y" /* yacc.c:1909  */

  node_ptr node;
  int lineno;

#line 204 "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/grammar.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE nusmv_yylval;

int nusmv_yyparse (void);

#endif /* !YY_NUSMV_YY_HOME_WILLIAM_NUSMV_A_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_CORE_PARSER_GRAMMAR_H_INCLUDED  */
