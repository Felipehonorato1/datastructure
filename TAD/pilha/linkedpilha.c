#ifndef LINKEDPILHA_C_
#define LINKEDPILHA_C_
#include "linkedpilha.h"
#include <stddef.h>

struct pilha
{
    No *lhead;
};
struct no
{
    int info;
    No *prox;
};

Pilha *cria_pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    if (p)
    {
        No *n = NULL;
        p->lhead = n;
    }
    return p;
}
int push_pilha(Pilha *l, int info)
{
    No *novo = create_no(info);
    if (novo)
    {
        novo->prox = l->lhead;
        l->lhead = novo;
        return 1;
    }
    return 0;
}
int pop_pilha(Pilha *l)
{
    No *p = l->lhead;
    l->lhead = get_prox(p);
    free(p);
    return 1;
}
int pilha_vazia(Pilha *l)
{
    return (l->lhead == NULL);
}
void libera_pilha(Pilha *l)
{
    No *p = l->lhead;
    while (p != NULL)
    {
        No *t = p->prox;
        free(p);
        p = t;
    }
    free(p);
}
No *create_no(int info)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo)
    {
        novo->prox = NULL;
        novo->info = info;
    }
    return novo;
}
No *get_prox(No *p)
{
    return p->prox;
}
int get_info(No *p)
{
    return p->info;
}

#endif