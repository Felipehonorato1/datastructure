#ifndef STACK_C_
#define STACK_C_
#include "stack.h"
#include <stddef.h>
#include <stdlib.h>
#define STACK_SIZE 5

struct stack
{
    int topo;
    int vec[STACK_SIZE];
};

Stack *cria_stack()
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    if (s)
    {
        s->topo = -1; // Indicando que está vazia;
    }
    return s;
}

int stack_is_empty(Stack *s)
{
    if (s)
    {
        return (s->topo == -1);
    }
    return 1;
}
int stack_push(Stack *s, int value)
{
    if (s)
    {
        if (s->topo < STACK_SIZE - 1)
        {
            s->topo++;
            s->vec[s->topo] = value;
            return 1;
        }
    }
    return 0;
}
int stack_pop(Stack *s, int *info)
{
    if (!s || s->topo == -1)
    {
        return 0;
    }
    *info = s->vec[s->topo];
    s->topo--;
    return 1;
}
void clear_stack(Stack **s)
{
    free(*s);
    *s = NULL;
}

#endif