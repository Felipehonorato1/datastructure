#ifndef D_QUEUE_C_
#define D_QUEUE_C_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "d_queue.h"

struct queue
{
    int topo, fim, n_elementos;
    int dim;
    int *vec;
};

Queue *create_queue()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    if (q)
    {
        q->dim = 2;
        q->topo = 0;
        q->fim = 0;
        q->n_elementos = 0;
        int *temp_vec = (int *)malloc(q->dim * sizeof(int));
        if (temp_vec)
        {
            q->vec = temp_vec;
            free(temp_vec);
        }
    }
    return q;
}
int insert_queue(Queue *q, int value)
{
    if (!q)
    {
        return 0;
    }
    else if (q->n_elementos == q->dim)
    {
        q->dim = q->dim + 10;
        q->vec = (int *)realloc(q->vec, q->dim * sizeof(int));
    }

    q->fim = (q->fim + 1) % q->dim;
    q->vec[q->n_elementos] = value;
    return 1;
}
int remove_queue(Queue *q)
{
    if (!q)
    {
        return 0;
    }
    else
    {
        q->topo = (q->topo + 1) % q->dim;
        q->n_elementos--;
    }
}
int queue_size(Queue *q)
{
    if (!q)
    {
        return 0;
    }
    else
    {
        return q->n_elementos;
    }
}

void print_queue(Queue *q)
{
    for (int i = 0; i < q->n_elementos; i++)
    {
        printf("%d ", q->vec[q->topo + i]);
    }
}
void clear_queue(Queue **q)
{
    *q = NULL;
    free(*q);
}

#endif