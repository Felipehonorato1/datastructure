#ifndef DYNAMIC_STACK_C_
#define DYNAMIC_STACK_C_
#include "dynamic_stack.h"
#include <stddef.h>
#include <stdlib.h>

struct stack
{
    int dim;
    int *vec;
    int n_elements;
};

Stack *cria_stack()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if (s)
    {
        s->dim = 2;
        s->n_elements = -1;
        s->vec = (int *)malloc(s->dim * sizeof(int));
    }
    return s;
}
int stack_push(Stack *s, int value)
{
    if (!s)
    {
        return 0;
    }

    if (s->n_elements == s->dim)
    {
        s->dim = s->dim + 10;
        s->vec = (int *)realloc(s->vec, (sizeof(int) * s->dim));
    }

    s->n_elements++;
    s->vec[s->n_elements] = value;
    return 1;
}
int stack_pop(Stack *s, int *value)
{
    if (!s || s->n_elements == 0)
    {
        return 0;
    }
    *value = s->vec[--s->n_elements];
    return 1;
}
int stack_is_empty(Stack *s)
{
    if (!s)
    {
        return 1;
    }
    return (s->n_elements == 0);
}
void clear_stack(Stack **s)
{
    free(*s);
    *s = NULL;
}

#endif