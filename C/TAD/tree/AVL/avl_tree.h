#ifndef AVL_TREE_H_
#define AVL_TREE_H_

typedef struct node Node;

int get_altura(Node *p);

int max(int a, int b);

Node *insert_avl_node(Node *p, int value);

Node *create_node(int value);

int balanceamento(Node *p);

void in_order(Node *p);

Node *rotate_left(Node *x);
Node *rotate_right(Node *p);

Node *delete_node(Node *p, int value);

#endif