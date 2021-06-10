#ifndef QUEUE_C_
#define QUEUE_C_
#define MAX_SIZE 10
#include "queue.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// Adding at the last position, removing top

struct queue
{
    int n_elements;
    int vetor[MAX_SIZE];
    int topo, fim;
};

Queue *create_queue()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    if (q)
    {
        q->n_elements = 0;
        q->topo = 0;
        q->fim = 0;
    }
    return q;
}

int insert_queue(Queue *q, int value)
{
    if (q->n_elements == MAX_SIZE)
    {
        return 0;
    }
    else
    {
        q->vetor[q->fim] = value;
        q->fim = (q->fim + 1) % MAX_SIZE; // Fazemos essa divisão para pegar o resto e para ficar circular.
        q->n_elements++;
        return 1;
    }
}
int remove_queue(Queue *q)
{
    if (!q)
    {
        return 0;
    }
    else
    {
        q->topo = (q->topo + 1) % MAX_SIZE;
        q->n_elements--;
    }
}
int queue_size(Queue *q)
{
    if (!q)
    {
        return 0;
    }

    return (q->n_elements);
}
int queue_is_empty(Queue *q)
{
    if (!q || q->n_elements == 0)
    {
        return 1;
    }
    return 0;
}

void print_queue(Queue *q)
{
    if (!q)
    {
        return;
    }
    else
    {
        for (int i = 0; i < q->n_elements; i++)
        {
            printf("%d ", q->vetor[q->topo + i]);
        }
    }
}
void clear_queue(Queue **q)
{
    *q = NULL;
    free(*q);
}

#endif