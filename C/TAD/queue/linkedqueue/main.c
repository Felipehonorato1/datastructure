#include "queue.h"
#include <stdio.h>

int main()
{
    Queue *q = create_queue();
    for (int i = 0; i < 5; i++)
    {
        if (insert_element(q, i))
        {
            printf("Inserted element: %d\n", i);
        }
    }
    int value;
    for (int i = 0; i < 3; i++)
    {
        if (remove_element(&q, &value))
        {
            printf("Removed element %d\n", value);
        }
    }
    print_queue(q);
    clear_queue(q);
    return 0;
}