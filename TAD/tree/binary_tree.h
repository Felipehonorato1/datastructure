#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

typedef struct treenode treeNode;
typedef struct tree Tree;

treeNode *create_node(char c, treeNode *left, treeNode *right);
Tree *create_tree(treeNode *r);
void print_tree(Tree *r);
void pre_print_node(treeNode *n);
void simetric_print_node(treeNode *n);
void post_print_node(treeNode *n);

#endif