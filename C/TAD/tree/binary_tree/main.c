#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int main()
{
    // Create a binary tree

    Tree *t = create_tree(create_node('A', create_node('B', create_node('D', NULL, NULL), NULL), create_node('C', NULL, NULL)));
    print_tree(t);
    printf("Tree height: %d\n", tree_height(t));
    printf("Is there any 'A' in the tree? %d\n", tree_contain(t, 'A'));
    printf("Is there any 'F' in the tree? %d", tree_contain(t, 'F'));
    return 0;
}