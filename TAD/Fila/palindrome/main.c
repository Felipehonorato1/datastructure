#include "queue.h"
#include "stack.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_palindrome(char str[])
{
    Queue *q = create_queue();
    Stack *s = cria_stack();
    char stack_value, queue_value;
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isspace(str[i]))
        {
            insert_element(q, str[i]);
            push(s, str[i]);
        }
    }
    print_stack(s);
    printf("\n");
    print_queue(q);
    while (!is_empty(q) && !stack_is_empty(s))
    {
        char stack_value, queue_value;
        pop(s, &stack_value);
        remove_element(&q, &queue_value);
        if (queue_value != stack_value)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[] = "ovo";
    printf("\nIs %s a palindrome? %d", str, check_palindrome(str));

    return 0;
}