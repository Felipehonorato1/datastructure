#ifndef BST_H_
#define BST_H_

typedef struct bst BST;
typedef struct node Node;

Node *create_node(int value);
BST *create_tree(Node *root);

int insert_bst(BST *t, int value);
void node_insert(Node *p, int value);

int remove_bst(BST *t, int value);
int remove_node(Node *n, int value);

Node *search_bst(BST *t, int value);

void pre_print_node(Node *p);
void print_tree(BST *t);

#endif