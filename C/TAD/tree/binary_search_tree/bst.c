#ifndef BST_C_
#define BST_C_
#include "bst.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct bst
{
    Node *root;
};

struct node
{
    Node *left;
    Node *right;
    int value;
};

Node *create_node(int value)
{
    Node *p = (Node *)malloc(sizeof(Node));
    if (p)
    {
        p->left = NULL;
        p->right = NULL;
        p->value = value;
    }
    return p;
}
BST *create_tree(Node *root)
{
    BST *t = (BST *)malloc(sizeof(BST));
    if (t)
    {
        t->root = root;
    }
    return t;
}

int insert_bst(BST *t, int value)
{
    node_insert(t->root, value);
    return 1;
}
void node_insert(Node *p, int value)
{
    if (value > p->value)
    {
        // PERCORRER A ÁRVORE DA DIREITA
        if (p->right == NULL)
        {
            p->right = create_node(value);
        }
        else
        {
            (node_insert(p->right, value));
        }
    }

    else
    {
        // PERCORRER A ÁRVORE DA ESQUERDA
        if (p->left == NULL)
        {
            p->left = create_node(value);
        }
        else
        {
            node_insert(p->left, value);
        }
    }
}

void pre_print_node(Node *p)
{
    if (p == NULL)
    {
        return;
    }
    else
    {
        printf("%d\n", p->value);
        pre_print_node(p->left);
        pre_print_node(p->right);
    }
}
void print_tree(BST *t)
{
    pre_print_node(t->root);
}

int remove_bst(BST *t, int value);
int remove_node(Node *n, int value)
{
    if (n == NULL)
    {
        return 0;
    }
    else if (value > n->value)
    {
        remove_node(n->right, value);
    }
    else if (value < n->value)
    {
        remove_node(n->left, value);
    }
    else
    {
        // Checa se tem filhos
        if (n->right == NULL && n->left == NULL)
        {
            free(n);
            n = NULL;
        }
        else if (n->left == NULL)
        {
            // Checa se tem filho na direita
            Node *t = n;
            n = n->right;
            free(t);
        }
        else if (n->right == NULL)
        {
            // Checa se só tem filho na esquerda
            Node *t = n;
            n = n->left;
            free(t);
        }
        else
        { // INCOMPLETO
            // Quando tem os dois filhos
            Node *t = n;
            n = n->right;
            n->left = t->left;
            free(t);
        }
    }
}

#endif