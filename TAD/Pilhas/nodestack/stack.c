#ifndef STACK_C_
#define STACK_C_
#include "stack.h"
#include <stddef.h>

struct stack
{
    No *lhead;
};

struct no
{
    int info;
    No *prox;
};

No *cria_no(int info)
{
    No *novo = (No *)sizeof(No);
    if (novo)
    {
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}
int push(Stack *s, int value)
{
    No *p = cria_no(value);
    if (p)
    {
        p->prox = s->lhead;
        s->lhead = p;
        return 1;
    }
    return 0;
}
int pop(Stack *s, int *value)
{
    No *p = s->lhead;
    value = p->info;
    s->lhead = p->prox;
    return 1;
}
int is_empty(Stack *s)
{
    return (s->lhead == NULL);
}
void clear_stack(Stack *s)
{
    No *p = s->lhead;
    while (p != NULL)
    {
        free(p);
        p = p->prox;
    }
    free(s);
    s = NULL;
}

#endif