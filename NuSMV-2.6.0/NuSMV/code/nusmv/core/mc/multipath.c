//
// Created by William on 2019/4/5.
//

#include "nusmv/core/mc/multipath.h"


struct multipath *multipath_head;

void addToPath(node_ptr path)
{
    struct multipath *tmp_mp;
    node_ptr tmp=copy_path(path);
    tmp_mp=(struct multipath *)malloc(sizeof(struct multipath));
    tmp_mp->index=++(multipath_head->size);
    tmp_mp->path=tmp;
    tmp_mp->current=NULL;
    tmp_mp->next=NULL;
    tmp_mp->size=-1;



    if(multipath_head->current==NULL)
    {
        multipath_head->next=tmp_mp;

//        multipath_head->size
    } else
    {
        multipath_head->current->next=tmp_mp;
    }
    multipath_head->current=tmp_mp;
}

node_ptr copy_path(node_ptr path)
{
    node_ptr cp_path;
    cp_path=(node_ptr)malloc(sizeof(struct node));
    memcpy(cp_path,path,sizeof(struct node));
//    return cp_path;
    if(path->left.nodetype)
    {
        cp_path->left.nodetype=copy_path_recur(path->left.nodetype);
        cp_path->left.strtype=cp_path->left.nodetype;
        cp_path->left.bddtype=cp_path->left.nodetype;


    } else
    {
        cp_path->left.nodetype=NULL;
        cp_path->left.strtype=NULL;
        cp_path->left.bddtype=NULL;
    }


    if(path->right.nodetype)
    {
        cp_path->right.nodetype=copy_path_recur(path->right.nodetype);
        cp_path->right.strtype=cp_path->right.nodetype;
        cp_path->right.bddtype=cp_path->right.nodetype;
    } else
    {
        cp_path->right.nodetype=NULL;
        cp_path->right.strtype=NULL;
        cp_path->right.bddtype=NULL;
    }


    //copy head


    //copy left


    //copy right

}

//cp path时注意一些关键地方需要深拷贝
//node->lineno         = nusmv_yylineno;
//node->left.nodetype  = left;
//node->right.nodetype = right;
//return node;
node_ptr copy_path_recur(struct node* path)
{
   struct  node* tmp=(struct node*)malloc(sizeof(struct node));
   memcpy(tmp,path, sizeof(struct node));
   tmp->link=copy_path_recur(path->link);


    if(path->left.nodetype)
    {
        tmp->left.nodetype=copy_path_recur(path->left.nodetype);
        tmp->left.strtype=tmp->left.nodetype;
        tmp->left.bddtype=tmp->left.nodetype;

    } else
    {
        tmp->left.nodetype=NULL;
        tmp->left.strtype=NULL;
        tmp->left.bddtype=NULL;
    }


    if(path->right.nodetype)
    {
        tmp->right.nodetype=copy_path_recur(path->right.nodetype);
        tmp->right.strtype=tmp->right.nodetype;
        tmp->right.bddtype=tmp->right.nodetype;
    } else
    {
        tmp->right.nodetype=NULL;
        tmp->right.strtype=NULL;
        tmp->right.bddtype=NULL;
    }


}


bdd_ptr copy_bdd(bdd_ptr bdd)
{
    bdd_ptr cp_bdd;
    cp_bdd=(node_ptr)malloc(sizeof(struct DdNode));
    memcpy(cp_bdd,bdd,sizeof(struct DdNode));
//    return cp_path;


}


bdd_ptr copy_bdd_recur(bdd_ptr bdd)
{

}


