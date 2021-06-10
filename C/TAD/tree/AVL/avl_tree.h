#ifndef AVL_TREE_H_
#define AVL_TREE_H_

typedef struct node Node;
typedef struct avl_tree AVLTree;

int get_altura(Node *p);

int max(int a, int b);

Node *insert_avl_node(AVLTree *t, int value);
int insert_tree(AVLTree *t, int value);

Node *create_node(int value);
AVLTree *create_tree(Node *r);

int balanceamento(Node *p);

#endif