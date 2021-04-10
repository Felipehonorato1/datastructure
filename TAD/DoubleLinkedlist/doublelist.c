#ifndef DOUBLELIST_C_
#define DOUBLELIST_C_
#include "doublelist.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct no
{
    int info;
    No *prox;
    No *ant;
};

No *create_no(int info)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo)
    {

        novo->prox = NULL;
        novo->ant = NULL;
        novo->info = info;
    }
    return novo;
}

int insert_top(No **lhead, int info)
{
    No *novo = create_no(info);
    if (novo)
    {
        novo->prox = *lhead;
        novo->ant = NULL;
        *lhead = novo;
        return 1;
    }
    return 0;
}
int insert_end(No *lhead, int info)
{
    No *end = create_no(info);
    if (end)
    {
        No *p = lhead;
        No *ant = NULL;
        while (p->prox != NULL)
        {
            ant = p;
            p = p->prox;
        }
        p->prox = end;
        end->ant = p;
        end->prox = NULL;
        return 1;
    }
    return 0;
}
int insert_midle(No *lhead, int where, int info)
{
    if (exists(lhead, where))
    {
        No *new = create_no(info);
        if (new)
        {
            No *p = lhead;
            No *ant = NULL;
            No *aux = NULL;
            while (p->info != where)
            {
                ant = p;
                p = p->prox;
            }
            aux = p->prox;
            p->prox = new;
            new->prox = aux;
            new->ant = p;
            return 1;
        }
    }
    return 0;
}

int exists(No *lhead, int info)
{
    for (No *p = lhead; p != NULL; p = p->prox)
    {
        if (p->info == info)
        {
            return 1;
        }
    }
    return 0;
}

int remove_top(No **lhead)
{
    No *p = *lhead;
    p = p->prox;
    p->ant = NULL;
    *lhead = p;

    return 1;
}
int remove_end(No *lhead)
{
    No *p = lhead;
    No *ant = NULL;
    while (p->prox != NULL)
    {
        ant = p;
        p = p->prox;
    }
    ant->prox = NULL;
    return 1;
}
int remove_midle(No *lhead, int info)
{
    if (exists(lhead, info))
    {
        No *p = lhead;
        No *ant = NULL;
        No *aux = NULL;
        while (p->info != info)
        {
            ant = p;
            p = p->prox;
        }
        ant->prox = p->prox;
        aux = p->prox;
        aux->ant = ant;
        return 1;
    }
    return 0;
}

void clear_list(No **lhead)
{
    No *p = *lhead;
    No *next = NULL;
    while (p != NULL)
    {
        next = p->prox;
        free(p);
        p = next;
    }
    *lhead = NULL;
}

void print_list(No *lhead)
{
    for (No *p = lhead; p != NULL; p = p->prox)
    {
        printf("%d\n", p->info);
    }
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

#endif