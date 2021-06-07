#ifndef AVL_TREE_H_
#define AVL_TREE_H_

typedef struct node Node;
typedef struct avl_tree AVLTree;

int insert_avl_node(AVLTree *t, Node *p);
int check_node_balancement(Node *p);

#endif