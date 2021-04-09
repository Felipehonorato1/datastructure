#ifndef LLIST_C_
#define LLIST_C_
#include "llist.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct lista
{
    No *prim;
};
struct no
{
    int info;
    No *prox;
};

Lista *cria_lista()
{
    Lista *l = (Lista *)malloc(sizeof(Lista));
    if (l)
    {
        l->prim = NULL;
    }
    return l;
}
int insert_on_top(Lista *l, int v)
{
    No *p = (No *)malloc(sizeof(No));
    if (p)
    {
        p->info = v;
        p->prox = l->prim; // O Próximo vai se tornar aquele que era o "topo" antes, por isso essa atribuição.
        l->prim = p;       // O primeiro nó agora será o novo criado;
        return 1;
    }
    return 0;
}
void print_elements(Lista *l)
{
    if (l)
    {
        for (No *p = l->prim; p != NULL; p = p->prox)
        {
            printf("info: %d \n", p->info);
        }
    }
}
int exists(Lista *l, int value)
{
    if (l)
    {
        for (No *p = l->prim; p != NULL; p = p->prox)
        {
            if (p->info == value)
            {
                return 1;
            }
        }
        return 0;
    }
    return -1;
}
int insert_end(Lista *l, int v)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo)
    {
        novo->info = v;
        novo->prox = NULL;
        No *p = l->prim;
        while (p->prox != NULL)
            p = p->prox;

        p->prox = novo;
        return 1;
    }
    return 0;
}
int list_size(Lista *l)
{
    int counter = 0;
    for (No *p = l->prim; p != NULL; p = p->prox)
    {
        counter++;
    }
    return counter;
}
int llist_is_empty(Lista *l)
{
    return (l->prim == NULL);
}
void clear_list(Lista *l)
{
    No *p = l->prim;
    while (p != NULL)
    {
        No *atual = p;
        p = atual->prox;
        free(atual);
    }
    l->prim = NULL;
    free(l);
}

int remove_item(Lista *l, int info)
{
    if (exists(l, info))
    {
        No *p = l->prim;
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
int insert_sorted(Lista *l, int info)
{

    if (llist_is_empty(l))
    {
        insert_on_top(l, info);
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
            No *p = l->prim;
            while (p != NULL && p->info < info)
            {
                anterior = p;
                p = p->prox;
            }

            if (anterior == NULL)
            {
                novo->prox = l->prim;
                l->prim = novo;
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