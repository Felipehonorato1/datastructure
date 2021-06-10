#ifndef LLIST_C_
#define LLIST_C_
#include "llist.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct no
{
    int info;
    No *prox;
};
No *get_prox(No *node)
{
    return node->prox;
}
int get_info(No *node)
{
    return node->info;
}
No *create_no(int info)
{
    No *p = (No *)malloc(sizeof(No));
    if (p)
    {
        p->info = info;
        p->prox = NULL;
    }
    return p;
}
int insert_on_top(No **lhead, int v)
{
    No *p = (No *)malloc(sizeof(No));
    if (p)
    {
        p->info = v;
        p->prox = *lhead; // O Próximo vai se tornar aquele que era o "topo" antes, por isso essa atribuição.
        *lhead = p;       // O primeiro nó agora será o novo criado;
        return 1;
    }
    return 0;
}
void print_elements(No *lhead)
{
    for (No *p = lhead; p != NULL; p = p->prox)
    {
        printf("info: %d \n", p->info);
    }
}
int exists(No *lhead, int value)
{
    if (lhead)
    {
        for (No *p = lhead; p != NULL; p = p->prox)
        {
            if (p->info == value)
            {
                return 1;
            }
        }
        return 0;
    }
    return 0;
}
int insert_end(No *lhead, int v)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo)
    {
        novo->info = v;
        novo->prox = NULL;
        No *p = lhead;
        while (p->prox != NULL)
            p = p->prox;

        p->prox = novo;
        return 1;
    }
    return 0;
}
int list_size(No *lhead)
{
    int counter = 0;
    for (No *p = lhead; p != NULL; p = p->prox)
    {
        counter++;
    }
    return counter;
}
int llist_is_empty(No *lhead)
{
    return (lhead == NULL);
}
void clear_list(No **lhead)
{
    No *p = *lhead;
    while (p != NULL)
    {
        No *atual = p;
        p = atual->prox;
        free(atual);
    }
    *lhead = NULL;
    free(*lhead);
}

int remove_item(No *lhead, int info)
{
    if (exists(lhead, info))
    {
        No *p = lhead;
        No *ant = NULL;

        while (p->info != info)
        {
            ant = p;
            p = p->prox;
        }
        ant->prox = p->prox;
        free(p);
        return 1;
    }
    return 0;
}
int insert_sorted(No **lhead, int info)
{

    if (llist_is_empty(*lhead))
    {
        insert_on_top(lhead, info);
        return 1;
    }
    else
    {
        No *novo = (No *)malloc(sizeof(No));
        novo->info = info;
        novo->prox = NULL;
        if (novo)
        {
            No *anterior = NULL;
            No *p = *lhead;
            while (p != NULL && p->info < info)
            {
                anterior = p;
                p = p->prox;
            }

            if (anterior == NULL)
            {
                novo->prox = *lhead;
                *lhead = novo;
                return 1;
            }

            novo->prox = anterior->prox;
            anterior->prox = novo;
            return 1;
        }
    }
    return 0;
}

#endif