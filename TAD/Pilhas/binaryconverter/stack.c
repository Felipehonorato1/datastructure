#ifndef STACK_C_
#define STACK_C_
#include "stack.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

struct no
{
    No *prox;
    int value;
};
typedef struct stack
{
    No *lhead;
};

No *cria_no(int value)
{
    No *p = (No *)malloc(sizeof(No));
    if (p)
    {
        p->value = value;
        p->prox = NULL;
    }
    return p;
}

Stack *cria_stack()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if (s)
    {
        s->lhead = NULL;
    }
    return s;
}
int stack_push(Stack *s, int value)
{
    No *novo = cria_no(value);
    if (novo)
    {
        novo->prox = s->lhead;
        s->lhead = novo;
        return 1;
    }
    return 0;
}
int stack_pop(Stack *s, int *value)
{
    No *p = s->lhead;
    *value = p->value;
    s->lhead = p->prox;
    free(p);
    return 1;
}

int stack_size(Stack *s)
{
    int counter = 0;
    if (s)
    {
        for (No *p = s->lhead; p != NULL; p = p->prox)
        {
            counter++;
        }
        return counter;
    }
    else
        return 0;
}

void print_stack(Stack *s)
{
    for (No *p = s->lhead; p != NULL; p = p->prox)
    {
        printf("%d ", p->value);
    }
}

int convert(int value)
{
    Stack *s = cria_stack();
    while (value / 2 != 0)
    {
        stack_push(s, value % 2);
        value = value / 2;
    }
    if (value / 2 == 0)
    {
        stack_push(s, value % 2);
    }
    print_stack(s);
    clear_stack(s);
    printf("\nStack size after cleaning: %d\n", stack_size(s));
    print_stack(s);
}

void clear_stack(Stack *s)
{
    No *lhead = s->lhead;
    for (No *p = lhead; p != NULL; p = p->prox)
    {
        No *aux = p;
        free(aux);
    }
    s = NULL;
    free(s);
}
#endif