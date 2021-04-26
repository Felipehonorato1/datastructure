#ifndef STACK_C_
#define STACK_C_
#include "stack.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct no
{
    char info;
    No *prox;
};
int check_balanced(char str[])
{
    No *lhead = NULL;
    char value;
    int i = 0;
    while (i <= strlen(str) - 1)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(&lhead, str[i]);
        }
        else
        {
            pop(&lhead, &value);
            if (str[i] == '}' && value == '{' || str[i] == ')' && value == '(' || str[i] == ']' && value == '[')
            {
                i++;
                continue;
            }
            else
            {
                return 0;
            }
        }
        i++;
    }
    return 1;
}
No *cria_no(char info)
{
    No *p = (No *)malloc(sizeof(No));
    if (p)
    {
        p->info = info;
        p->prox = NULL;
    }
    return p;
}
int push(No **lhead, char value)
{
    No *novo = cria_no(value);
    if (novo)
    {
        novo->prox = *lhead;
        *lhead = novo;
    }
    return 1;
}
int pop(No **lhead, char *value)
{
    No *p = *lhead;
    *value = p->info;
    *lhead = p->prox;
    return 1;
}
int is_empty(No *lhead)
{
    return (lhead == NULL);
}
int stack_size(No *lhead)
{
    int counter = 0;
    for (No *p = lhead; p != NULL; p = p->prox)
    {
        counter++;
    }
    return counter;
}
void clear_stack(No **lhead)
{

    No *p = *lhead;
    while (p != NULL)
    {
        No *aux = p;
        free(p);
        p = aux->prox;
    }
    *lhead = NULL;
    free(*lhead);
}
void print_stack(No *lhead)
{
    for (No *p = lhead; p != NULL; p = p->prox)
    {
        printf("%c\n", p->info);
    }
}
#endif