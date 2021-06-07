#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main()
{
    Node *root = create_node(10);
    BST *t = create_tree(root);
    insert_bst(t, 8);
    insert_bst(t, 13);
    insert_bst(t, 7);
    insert_bst(t, 9);
    insert_bst(t, 6);

    return 0;
}