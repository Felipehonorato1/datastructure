#include "queue.h"
#include <stdio.h>

int main()
{
    Queue *q = create_queue();
    for (int i = 0; i < 5; i++)
    {
        if (insert_queue(q, i))
        {
            printf("Valor inserido: %d\n", i);
        }
    }
    print_queue(q);
    printf("\nQueue Size: %d\n", queue_size(q));

    printf("Removing first element: \n");
    remove_queue(q);
    print_queue(q);
    clear_queue(&q);
    printf("After cleaning queue size: \n");
    printf("%d\n", queue_size(q));
    return 0;
}