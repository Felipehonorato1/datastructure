#ifndef BINARY_TREE_C_
#define BINARY_TREE_C_
#include "binary_tree.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

struct treenode
{
    char info;
    treeNode *leftNode;
    treeNode *rightNode;
};
struct tree
{
    treeNode *root;
};
treeNode *create_node(char c, treeNode *left, treeNode *right)
{
    treeNode *p = (treeNode *)malloc(sizeof(treeNode));
    if (p)
    {
        p->info = c;
        p->leftNode = left;
        p->rightNode = right;
    }
    return p;
}
Tree *create_tree(treeNode *r)
{
    Tree *t = (Tree *)malloc(sizeof(Tree));
    if (t)
    {
        t->root = r;
    }
    return t;
}
void print_tree(Tree *r)
{
    printf("PRE-ORDER PRINTING: \n");
    pre_print_node(r->root);
    printf("SIMETRIC-ORDER PRINTING \n");
    simetric_print_node(r->root);
    printf("POST-ORDER PRINTING: \n");
    post_print_node(r->root);
}
void pre_print_node(treeNode *n)
{
    if (n != NULL)
    {
        printf("%c\n", n->info);
        pre_print_node(n->leftNode);
        pre_print_node(n->rightNode);
    }
}

void simetric_print_node(treeNode *n)
{
    if (n != NULL)
    {
        simetric_print_node(n->leftNode);
        printf("%c\n", n->info);
        simetric_print_node(n->rightNode);
    }
}

void post_print_node(treeNode *n)
{
    if (n != NULL)
    {
        simetric_print_node(n->leftNode);
        simetric_print_node(n->rightNode);
        printf("%c\n", n->info);
    }
}

#endif