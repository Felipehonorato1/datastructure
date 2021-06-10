#ifndef AVL_TREE_C_
#define AVL_TREE_C_
#include "avl_tree.h"
#include <stddef.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

struct node
{
    int info;
    Node *left;
    Node *right;
    int altura;
};

Node *create_node(int value)
{
    Node *p = (Node *)malloc(sizeof(Node));
    if (p)
    {
        p->info = value;
        p->right = NULL;
        p->left = NULL;
        p->altura = 1;
    }
    return p;
}

struct avl_tree
{
    Node *root;
};
AVLTree *create_tree(Node *r)
{
    AVLTree *t = (AVLTree *)malloc(sizeof(AVLTree));
    if (t)
    {
        t->root = r;
    }
    return t;
}

Node *insert_avl_node(Node *p, int value)
{
    if (p == NULL)
    {
        return;
    }
    else
    { // Caso o valor seja maior que o nó atual;
        if (value > p->info)
        {
            if (p->right == NULL)
            {
                p->right = create_node(value);
                p->altura++;
                return p;
            }
            else
                insert_avl_node(p->right, value);
        }
        // Inserção na subarvore esquerda
        if (value < p->info)
        {
            if (p->left == NULL)
            {
                p->left = create_node(value);
                p->altura++;
                return p;
            }
            else
                insert_avl_node(p->left, value);
        }
    }
    return NULL;
}
int insert_tree(AVLTree *t, int value)
{
    Node *p = insert_avl_node(t->root, value); // Node where the new one was inserted.
}
int get_altura(Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    return p->altura;
}

int balanceamento(Node *p)
{
    int factor = get_altura(p->right) - get_altura(p->left);
    // Se o fator for positivo e maior que 1, a árvore da direita está desbalanceada -> fazer rotação a esquerda.
    // Se o fator for negativo e menor que -1, a árvore da esquerda está desbalanceada -> fazer rotação à direita.
    return factor;
}

#endif