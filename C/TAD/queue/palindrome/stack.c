#ifndef STACK_C_
#define STACK_C_
#include "stack.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

struct stack
{
    No *lhead;
};

struct no
{
    char info;
    No *prox;
};

Stack *cria_stack()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if (s)
    {
        s->lhead = NULL;
    }
    return s;
}

No *cria_no(char info)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo)
    {
        novo->info = info;
        novo->prox = NULL;
    }
    return novo;
}
int push(Stack *s, char value)
{
    No *p = cria_no(value);
    if (p)
    {
        if (stack_is_empty(s))
        {
            s->lhead = p;
            return 1;
        }
        else
        {
            p->prox = s->lhead;
            s->lhead = p;
            return 1;
        }
    }
    return 0;
}
int pop(Stack *s, char *value)
{
    No *p = s->lhead;
    *value = p->info;
    s->lhead = p->prox;
    return 1;
}
int stack_is_empty(Stack *s)
{
    return (s->lhead == NULL);
}
void clear_stack(Stack *s)
{
    No *p = s->lhead;
    while (p != NULL)
    {
        No *aux = p->prox;
        free(p);
        p = aux;
    }
    free(s);
    s = NULL;
}

void print_stack(Stack *s)
{
    if (stack_is_empty(s))
    {
        return;
    }
    else
    {
        No *p = s->lhead;
        while (p != NULL)
        {
            printf("%c ", p->info);
            p = p->prox;
        }
    }
}

#endif