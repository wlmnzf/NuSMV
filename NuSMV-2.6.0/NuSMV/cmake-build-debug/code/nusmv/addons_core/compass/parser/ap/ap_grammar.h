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

#ifndef YY_PARSER_AP_HOME_WILLIAM_CLIONPROJECTS_NUSMV_NUSMV_2_6_0_NUSMV_CMAKE_BUILD_DEBUG_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_AP_AP_GRAMMAR_H_INCLUDED
# define YY_PARSER_AP_HOME_WILLIAM_CLIONPROJECTS_NUSMV_NUSMV_2_6_0_NUSMV_CMAKE_BUILD_DEBUG_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_AP_AP_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int parser_ap_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_ATOM = 258,
    TOK_FALSEEXP = 259,
    TOK_TRUEEXP = 260,
    TOK_NUMBER = 261,
    TOK_NUMBER_FRAC = 262,
    TOK_NUMBER_REAL = 263,
    TOK_NUMBER_EXP = 264,
    TOK_NUMBER_WORD = 265,
    TOK_CONS = 266,
    TOK_SEMI = 267,
    TOK_LP = 268,
    TOK_RP = 269,
    TOK_RB = 270,
    TOK_LCB = 271,
    TOK_RCB = 272,
    TOK_TWODOTS = 273,
    TOK_SELF = 274,
    TOK_CASE = 275,
    TOK_ESAC = 276,
    TOK_COLON = 277,
    TOK_COMMA = 278,
    TOK_IMPLIES = 279,
    TOK_IFF = 280,
    TOK_OR = 281,
    TOK_XOR = 282,
    TOK_XNOR = 283,
    TOK_AND = 284,
    TOK_NOT = 285,
    TOK_EX = 286,
    TOK_AX = 287,
    TOK_EF = 288,
    TOK_AF = 289,
    TOK_EG = 290,
    TOK_AG = 291,
    TOK_EE = 292,
    TOK_AA = 293,
    TOK_SINCE = 294,
    TOK_UNTIL = 295,
    TOK_TRIGGERED = 296,
    TOK_RELEASES = 297,
    TOK_EBF = 298,
    TOK_EBG = 299,
    TOK_ABF = 300,
    TOK_ABG = 301,
    TOK_BUNTIL = 302,
    TOK_MMIN = 303,
    TOK_MMAX = 304,
    TOK_OP_NEXT = 305,
    TOK_OP_GLOBAL = 306,
    TOK_OP_FUTURE = 307,
    TOK_OP_PREC = 308,
    TOK_OP_NOTPRECNOT = 309,
    TOK_OP_HISTORICAL = 310,
    TOK_OP_ONCE = 311,
    TOK_EQUAL = 312,
    TOK_NOTEQUAL = 313,
    TOK_LT = 314,
    TOK_GT = 315,
    TOK_LE = 316,
    TOK_GE = 317,
    TOK_UNION = 318,
    TOK_SETIN = 319,
    TOK_LSHIFT = 320,
    TOK_RSHIFT = 321,
    TOK_LROTATE = 322,
    TOK_RROTATE = 323,
    TOK_MOD = 324,
    TOK_PLUS = 325,
    TOK_MINUS = 326,
    TOK_TIMES = 327,
    TOK_DIVIDE = 328,
    TOK_NEXT = 329,
    TOK_SMALLINIT = 330,
    TOK_CONCATENATION = 331,
    TOK_LB = 332,
    TOK_DOT = 333,
    TOK_BIT = 334,
    TOK_SIGNED = 335,
    TOK_UNSIGNED = 336,
    TOK_EXTEND = 337,
    TOK_BOOL = 338,
    TOK_WORD1 = 339
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 87 "ap_grammar.y" /* yacc.c:1909  */

  node_ptr node;

#line 143 "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/addons_core/compass/parser/ap/ap_grammar.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE parser_ap_lval;

int parser_ap_parse (void);

#endif /* !YY_PARSER_AP_HOME_WILLIAM_CLIONPROJECTS_NUSMV_NUSMV_2_6_0_NUSMV_CMAKE_BUILD_DEBUG_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_AP_AP_GRAMMAR_H_INCLUDED  */
