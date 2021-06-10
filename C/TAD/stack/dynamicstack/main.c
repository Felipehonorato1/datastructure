#include "dynamic_stack.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Stack *s = cria_stack();
    for (int i = 0; i < 5; i++)
    {
        if (stack_push(s, i))
        {
            printf("Pushed %d\n", i);
        }
    }
    int value;
    for (int j = 0; j < 5; j++)
    {
        if (stack_pop(s, &value))
        {
            printf("Popped %d\n", value);
        }
    }

    if (stack_is_empty(s))
    {
        printf("List is empty\n");
    }
}