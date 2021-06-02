#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int main()
{
    // Create a binary tree

    Tree *t = create_tree(create_node('A', create_node('B', create_node('D', NULL, NULL), NULL), create_node('C', NULL, NULL)));
    print_tree(t);
    return 0;
}