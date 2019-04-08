//
// Created by William on 2019/4/5.
//

#ifndef NUSMV_MULTIPATH_H
#define NUSMV_MULTIPATH_H

#include "nusmv/core/node/NodeMgr.h"
#include "nusmv/core/utils/ErrorMgr.h"
#include "nusmv/core/node/printers/MasterPrinter.h"
#include "nusmv/core/mc/mc.h"
#include "nusmv/core/mc/mcInt.h"
#include <string.h>


struct multipath
{
    int index;
    int size;
    struct multipath *next;
    struct multipath *current;
    node_ptr path;
};

struct multipath *multipath_head;

void addToPath(node_ptr path);
node_ptr copy_path(node_ptr path);
node_ptr copy_path_recur(node_ptr path);

bdd_ptr copy_bdd(bdd_ptr bdd);
bdd_ptr copy_bdd_recur(bdd_ptr bdd);

#endif //NUSMV_MULTIPATH_H
