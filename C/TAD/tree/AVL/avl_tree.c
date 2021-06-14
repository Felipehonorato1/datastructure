#ifndef AVL_TREE_C_
#define AVL_TREE_C_
#include "avl_tree.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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
        p->altura = 0;
    }
    return p;
}

Node *insert_avl_node(Node *p, int value)
{
    if (p == NULL)
    {
        return create_node(value);
    }
    else
    { // Caso o valor seja maior que o nó atual;
        if (value > p->info)
        {
            p->right = insert_avl_node(p->right, value);
        }
        // Inserção na subarvore esquerda
        if (value < p->info)
        {
            p->left = insert_avl_node(p->left, value);
        }
    }
    p->altura = 1 + max(get_altura(p->right), get_altura(p->left));

    int fator = balanceamento(p);
    // Right right
    if (fator < -1 && value > p->right->info)
    {
        return rotate_left(p);
    }
    // Right Left
    else if (fator < -1 && value < p->right->info)
    {
        p->right = rotate_right(p->right);
        return rotate_left(p);
    }

    // Left left
    else if (fator > 1 && value < p->left->info)
    {
        return rotate_right(p);
    }

    // Left Right
    else if (fator > 1 && value > p->left->info)
    {
        p->left = rotate_left(p->left);
        return rotate_right(p);
    }

    return p;
}

int get_altura(Node *p)
{
    if (p == NULL)
    {
        return -1;
    }
    return p->altura;
}

int balanceamento(Node *p)
{
    int factor = get_altura(p->left) - get_altura(p->right);
    return factor;
}

void in_order(Node *p)
{
    if (p == NULL)
        return;

    in_order(p->left);
    // printf("%d, altura_total = %d, altura_esq = %d, altura_dir = %d, fator = [%d]\n", p->info, p->altura, get_altura(p->left), get_altura(p->right), balanceamento(p));
    in_order(p->right);
}

Node *rotate_right(Node *a)
{
    Node *new_root = a->left;
    Node *T2 = new_root->right;

    // Rotaciona:
    new_root->right = a;
    a->left = T2;

    a->altura = 1 + max(get_altura(a->right), get_altura(a->left));
    new_root->altura = 1 + max(get_altura(new_root->right), get_altura(new_root->left));

    return new_root;
}

Node *rotate_left(Node *x)
{
    // A -> Desbalanceado, B-> filho da esquerda de A, C-> filho da direita de A
    Node *y = x->right;
    Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->altura = max(get_altura(x->left), get_altura(x->right)) + 1;
    y->altura = max(get_altura(y->left), get_altura(y->right)) + 1;

    // Return new root
    return y;
}

Node *delete_node(Node *p, int value)
{
    if (p == NULL)
    {
        return NULL;
    }
    else
    {
        if (value > p->info)
        {
            p->right = delete_node(p->right, value);
        }
        else if (value < p->info)
        {
            p->left = delete_node(p->left, value);
        }
        else
        {
            // Meaning that we have found P;
            if (p->right != NULL && p->left != NULL)
            {
            }
        }

        // Atualizando as alturas

        return p;
    }
}
#endif