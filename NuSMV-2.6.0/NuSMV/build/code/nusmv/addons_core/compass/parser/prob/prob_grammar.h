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

#ifndef YY_PARSER_PROB_HOME_WILLIAM_NUSMV_A_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_PROB_PROB_GRAMMAR_H_INCLUDED
# define YY_PARSER_PROB_HOME_WILLIAM_NUSMV_A_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_PROB_PROB_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int parser_prob_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_EQUAL = 258,
    TK_COLON = 259,
    TK_LB = 260,
    TK_RB = 261,
    TK_ATOM = 262,
    TK_NUMBER = 263,
    TK_REAL = 264,
    TK_TRUE = 265,
    TK_FALSE = 266,
    TK_AND = 267,
    TK_DOT = 268,
    TK_SEMI = 269
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 75 "prob_grammar.y" /* yacc.c:1909  */

  node_ptr node;

#line 73 "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/build/code/nusmv/addons_core/compass/parser/prob/prob_grammar.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE parser_prob_lval;

int parser_prob_parse (void);

#endif /* !YY_PARSER_PROB_HOME_WILLIAM_NUSMV_A_NUSMV_2_6_0_NUSMV_BUILD_CODE_NUSMV_ADDONS_CORE_COMPASS_PARSER_PROB_PROB_GRAMMAR_H_INCLUDED  */
