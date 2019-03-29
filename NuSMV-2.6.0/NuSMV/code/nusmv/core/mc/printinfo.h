//
// Created by william on 19-3-14.
//

#ifndef NUSMV_PRINTINFO_H
#define NUSMV_PRINTINFO_H







char *myitoa(int num,char *str,int radix)
{
    /* 索引表 */
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned unum; /* 中间变量 */
    int i=0,j,k;
    char temp;
    /* 确定unum的值 */
    if(radix==10&&num<0) /* 十进制负数 */
    {
        unum=(unsigned)-num;
        str[i++]='-';
    }
    else unum=(unsigned)num; /* 其它情况 */
    /* 逆序 */
    do
    {
        str[i++]=index[unum%(unsigned)radix];
        unum/=radix;
    }while(unum);
    str[i]='\0';
    /* 转换 */
    if(str[0]=='-') k=1; /* 十进制负数 */
    else k=0;
    /* 将原来的“/2”改为“/2.0”，保证当num在16~255之间，radix等于16时，也能得到正确结果 */

    for(j=k;j<=(i-k-1)/2.0;j++)
    {
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
    return str;
}

char *search_str(int n)
{
    char *enum_kv[157]={

            "NUSMV_STATEMENTS_SYMBOL_FIRST = NUSMV_CORE_SYMBOL_FIRST",


            "TRANS", /* 101 */
            "INIT",
            "INVAR",
            "ASSIGN",
            "FAIRNESS",
            "JUSTICE",
            "COMPASSION",
            "SPEC",
            "LTLSPEC",
            "PSLSPEC", /* 110 */
            "INVARSPEC",
            "COMPUTE",
            "DEFINE",
            "ISA",
            "GOTO",
            "CONSTRAINT",
            "MODULE",
            "PROCESS",
            "MODTYPE",
            "LAMBDA", /* 120 */
            "CONSTANTS",

            /* To be moved elsewhere */
            "PRED",
            "ATTIME",
            "PREDS_LIST",
            "MIRROR",
            /* End to be moved elsewhere */

            "DEFINE_PROPERTY",

            "SYNTAX_ERROR",

            "NUSMV_STATEMENTS_SYMBOL_LAST",
            /* ---------------------------------------------------------------------- */


            /* ---------------------------------------------------------------------- */
            "NUSMV_EXPR_SYMBOL_FIRST",

            "FAILURE",
            "CONTEXT",//131
            "EU",
            "AU",
            "EBU",
            "ABU",
            "MINU",
            "MAXU",
            "VAR",
            "FROZENVAR",
            "IVAR", /* 140 */
            "BOOLEAN",
            "ARRAY",
            "SCALAR",
            "CONS",
            "BDD", /* 145 */
            "SEMI",
            "EQDEF",
            "TWODOTS",
            "FALSEEXP",
            "TRUEEXP", /* 150 */
            "SELF",
            "CASE",
            "COLON",
            "IFTHENELSE",
            "SIMPWFF", /* 155 */
            "NEXTWFF",
            "LTLWFF",
            "CTLWFF",
            "COMPWFF",
            "ATOM", /* 160 */
            "NUMBER",//161
            "COMMA",
            "IMPLIES",
            "IFF",
            "OR",
            "XOR",
            "XNOR",
            "AND",
            "NOT",//169
            "EX",
            "AX",
            "EF",//172
            "AF",
            "EG",
            "AG",
            "SINCE",
            "UNTIL",
            "TRIGGERED",
            "RELEASES",
            "EBF", /* 180 */
            "EBG",
            "ABF",
            "ABG",
            "OP_NEXT",
            "OP_GLOBAL",
            "OP_FUTURE",
            "OP_PREC",
            "OP_NOTPRECNOT",
            "OP_HISTORICAL",
            "OP_ONCE",
            "EQUAL",//191
            "NOTEQUAL",
            "LT",
            "GT",
            "LE",
            "GE",
            "UNION",
            "SETIN",
            "MOD",
            "PLUS", /* 200 */
            "MINUS",
            "TIMES",
            "DIVIDE",
            "UMINUS",
            "NEXT", /* 205 */
            "SMALLINIT",
            "DOT",
            "BIT",
            "RANGE",
            "UNSIGNED_WORD", /* identifies expressions and types */
            "SIGNED_WORD",   /* identifies types */
            "INTEGER",
            "REAL",
            "CONTINUOUS",

            "NUMBER_UNSIGNED_WORD", /* identifies constants */
            "NUMBER_SIGNED_WORD",   /* identifies constants */
            "NUMBER_FRAC",
            "NUMBER_REAL",
            "NUMBER_EXP",
            "LSHIFT",
            "RSHIFT", /* 220 */
            "LROTATE",
            "RROTATE",
            "BIT_SELECTION",
            "CONCATENATION",
            "CAST_BOOL",
            "CAST_WORD1",
            "CAST_SIGNED",
            "CAST_UNSIGNED",
            "EXTEND", /* 230 extend the width of a word (signed or unsigned) */
            "WORDARRAY",
            "WAREAD",
            "WAWRITE",
            "UWCONST", /* these are removed by the flattener, so */
            "SWCONST", /* after flattening they do not exist anywhere */
            "WRESIZE",
            "WSIZEOF",
            "CAST_TOINT",

            "COMPID", /* Used for comparing properties ids */

            "ARRAY_TYPE", /* 240 Used to represent generic array type */
            "ARRAY_DEF",  /* Define obtained via Matrix-Define */

            "NFUNCTION",
            "NFUNCTION_TYPE",
            "FUN",

            "COUNT",
            "FLOOR",

            "ITYPE", /* used to represent an internal type as read from the parser */

            "WORDARRAY_TYPE", /* Represent generic array type with word indices */
            "INTERNAL_ARRAY_STRUCT", /* Internal representation of the array structure
                    for processing the write function of arrays */
            "CONST_ARRAY", /* 250 Constant array */
            "INTARRAY",
            "INTARRAY_TYPE", /* Represent generic array type with integer indices */
            "TYPEOF", /* function for returning the type of variable */

            "CAST_TO_UNSIGNED_WORD", /* integer to bv conversion */

            "NUSMV_EXPR_SYMBOL_LAST",
            /* ---------------------------------------------------------------------- */

            "NUSMV_CORE_SYMBOL_LAST",
    };

    if(n>=100&&n<=256)
    {
        return enum_kv[n-100];
    }
    else
    {
        return "";
    }

}


//TODO:boolean,array类型的暂未支持，目前支持number类型的
static int ind;



void bst_print_dot_aux(struct node* node, FILE* stream,char* last_str,int index)
{
    static int nullcount = 0;
    char *inttype=NULL;
    char strtype[1000];
    char buffer[100];
    char total_str[2000];
    int span=0;
    node_val *nv;
    strcpy(total_str,"");


    switch(node->type) {

//        case CONTEXT:
//        case AND:
//        case OR:
//        case XOR:
//        case XNOR:
//        case NOT:
//        case IMPLIES:
//        case IFF:
//        case EX:
//        case AX:
//        case EF:
//        case AG:
//        case AF:
//        case EG:
//        case EU:
//        case AU:
//        case EBU:
//        case ABU:
//        case EBF:
//        case ABF:
//        case EBG:
//        case ABG:
            //


        case ATOM:
//             nv=(node_val*)(node->left.nodetype);
             strcpy(strtype,node->left.strtype->text);
             fprintf(stream, "   \"%d : %s\" -> \"%d : %s\";\n",index, last_str,++ind, strtype);
            break;
        case NUMBER:
//            nv=(node_val*)(node->left.nodetype);
            inttype=myitoa(node->left.inttype,buffer,10);
            fprintf(stream, "   \"%d : %s\" -> \"%d : 【%s】\";\n", index,last_str,++ind, inttype);
            break;

//
//        case FAILURE:
//        case TRUEEXP:
//        case FALSEEXP:
//        case SELF:
//        case BOOLEAN:
//        case DOT:
//        case ARRAY:
//        case NUMBER_UNSIGNED_WORD:
//        case UWCONST:
//        case SWCONST:
//        case NUMBER_SIGNED_WORD:
//        case NUMBER_FRAC:
//        case NUMBER_REAL:
//        case NUMBER_EXP:
//        case BIT:break;

        default:
            if(node->type<100||node->type>256)  break;

            if ((node->left).nodetype)
            {
                inttype=search_str((node->left).nodetype->type);
                fprintf(stream, "   \"%d : %s\" -> \"%d : %s\";\n",index, last_str, ind+1,inttype);
                bst_print_dot_aux((node->left).nodetype, stream,inttype,++ind);

            }


            if ( (node->right).nodetype )
            {

                inttype=search_str((node->right).nodetype->type);

                fprintf(stream, "   \"%d : %s\" -> \"%d : %s\";\n", index,last_str,ind+1, inttype);
                bst_print_dot_aux((node->right).nodetype, stream,inttype,++ind);
//                ind++;
            }

            break;

    }


}

void bst_print_dot(struct node * tree, FILE* stream)
{
    int index=0;
    ind=0;
    fprintf(stream, "digraph Tree {\n");
    fprintf(stream, "    node [fontname=\"Arial\"];\n");

    if (!tree)
        fprintf(stream, "\n");
    else if (!(tree->left).nodetype && !(tree->right).nodetype && !(tree->left).strtype && !(tree->right).strtype) {
        fprintf(stream, "%d : Root:%s;\n",index, search_str(tree->type));
    }
    else {
        bst_print_dot_aux(tree, stream,search_str(tree->type),index);
    }

    fprintf(stream, "}\n");
}

//go可以代替底下的4条
//read_model
//flatten_hierarchy
//encode_variabes
//build_model

#endif //NUSMV_PRINTINFO_H