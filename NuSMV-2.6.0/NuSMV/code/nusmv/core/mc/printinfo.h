//
// Created by william on 19-3-14.
//

#ifndef NUSMV_PRINTINFO_H
#define NUSMV_PRINTINFO_H

#include "nusmv/core/utils/OStream.h"
#include "nusmv/core/utils/StreamMgr.h"
#include "nusmv/core/utils/Logger.h"
#include "nusmv/core/node/NodeMgr.h"
#include "nusmv/core/utils/ErrorMgr.h"
#include "nusmv/core/node/printers/MasterPrinter.h"
#include "nusmv/core/mc/mc.h"
#include "nusmv/core/mc/mcInt.h"

#include "nusmv/core/parser/symbols.h"
#include "nusmv/core/utils/error.h"
#include "nusmv/core/compile/symb_table/SymbTable.h"
#include "nusmv/core/wff/wff.h"


char *myitoa(int num,char *str,int radix);
char *search_str(int n);
void bst_print_dot_aux(struct node* node, FILE* stream,char* last_str,int index);
void bst_print_dot(struct node * tree, FILE* stream);


//go可以代替底下的4条
//read_model
//flatten_hierarchy
//encode_variabes
//build_model

#endif //NUSMV_PRINTINFO_H