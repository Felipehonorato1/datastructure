#ifndef CIRC_C_
#define CIRC_C_
#include <stddef.h>
#include <stdlib.h>
#include "circular.h"
#include <stdio.h>

struct no
{
    int info;
    No *prox;
};

No *create_no(int info)
{
    No *new = (No *)malloc(sizeof(No));
    if (new)
    {
        new->info = info;
        new->prox = NULL;
    }
    return new;
}

int insert_top(No **lhead, int info)
{
    No *aux = NULL;
    No *novo = create_no(info);

    if (*lhead == NULL) // Which means that the list is empty;
    {
        *lhead = novo;
        novo->prox = *lhead;
        return 1;
    }
    else
    {
        aux = *lhead;
        while (aux->prox != *lhead)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = *lhead;
        *lhead = novo;
        return 1;
    }
    return 0;
}
int insert_end(No *lhead, int info)
{
    No *novo = create_no(info);
    if (novo)
    {
        No *p = lhead;
        while (p->prox != lhead)
        {
            p = p->prox;
        }
        p->prox = novo;
        novo->prox = lhead;
        return 1;
    }
    return 0;
}
int insert_midle(No *lhead, int where, int info)
{
    if (exists(lhead, where))
    {
        {
            No *novo = create_no(info);
            No *ant = NULL;
            No *p = lhead;
            No *aux = NULL;
            while (p->info != where)
            {
                ant = p;
                p = p->prox;
            }
            aux = p->prox;
            p->prox = novo;
            novo->prox = aux;
            return 1;
        }
    }
    return 0;
}

int remove_top(No **lhead)
{

    No *newtop = (*lhead)->prox;
    No *p = *lhead;
    while (p->prox != *lhead)
    {
        p = p->prox;
    }
    p->prox = newtop;
    *lhead = newtop;
    return 1;
}
int remove_end(No *lhead)
{
    No *p = lhead;
    No *ant = NULL;
    while (p->prox != lhead)
    {
        ant = p;
        p = p->prox;
    }
    ant->prox = lhead;
    p->prox = NULL;
    return 1;
}
int remove_midle(No *lhead, int info)
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
        p->prox = NULL;
    }
    return 0;
}

int is_empty(No *lhead)
{
    return (lhead == NULL);
}
int list_size(No *lhead)
{
    int counter = 0;
    No *p = lhead;
    do
    {
        counter++;
        p = p->prox;
    } while (p != lhead);
    return counter;
}
int exists(No *lhead, int info)
{
    for (No *p = lhead; p->prox != lhead; p = p->prox)
    {
        if (p->info == info)
        {
            return 1;
        }
    }
    return 0;
}

void print_list(No *lhead)
{
    if (lhead != NULL)
    {
        No *p = lhead;
        do
        {
            printf("%d\n", p->info);
            p = p->prox;
        } while (p != lhead);
    }
}

void clear_list(No **lhead)
{
    No *p = *lhead;
    No *aux;
    while (p != NULL)
    {
        aux = p;
        free(aux);
        p = p->prox;
    }
    *lhead = NULL;
    free
}
#endif