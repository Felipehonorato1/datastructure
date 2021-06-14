#include "avl_tree.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Node *root = create_node(10);
    root = insert_avl_node(root, 20);
    root = insert_avl_node(root, 30);
    root = insert_avl_node(root, 40);
    root = insert_avl_node(root, 50);
    root = insert_avl_node(root, 25);
    in_order(root);
    return 0;
}