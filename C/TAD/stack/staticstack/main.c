#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int v;
    Stack *s = cria_stack();
    printf("Is stack empty? %d\n", stack_is_empty(s));
    for (int i = 0; i < 10; i++)
    {
        if (stack_push(s, i))
        {
            printf("Pushed %d\n", i);
        }
    }
    for (int j = 0; j < 2; j++)
    {
        if (stack_pop(s, &v))
        {
            printf("Value popped: %d\n", v);
        }
    }
    return 0;
}