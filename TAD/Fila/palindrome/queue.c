#ifndef QUEUE_C_
#define QUEUE_C_
#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

struct node
{
    char value;
    Node *next;
};

struct queue
{
    Node *lhead;
};

// First in first out.

Node *create_node(char value)
{
    Node *p = (Node *)malloc(sizeof(Node));
    if (p)
    {
        p->value = value;
        p->next = NULL;
    }
    return p;
}
Queue *create_queue()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    if (q)
    {
        q->lhead = NULL;
    }
    return q;
}
int insert_element(Queue *q, char value)
{
    Node *new = create_node(value);
    if (new)
    {
        if (is_empty(q))
        {
            q->lhead = new;
            return 1;
        }
        else
        {
            Node *p = q->lhead;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = new;
            return 1;
        }
    }
    return 0;
}
int remove_element(Queue **q, char *value)
{
    if (!is_empty(*q))
    {

        Node *p = (*q)->lhead;
        *value = p->value;
        (*q)->lhead = p->next;
        free(p);
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_empty(Queue *q)
{
    return (q->lhead == NULL);
}
int queue_size(Queue *q)
{
    if (is_empty(q))
    {
        return 0;
    }
    else
    {
        int counter = 0;
        Node *p = q->lhead;
        while (p != NULL)
        {
            p = p->next;
            counter++;
        }
        return counter;
    }
}
void clear_queue(Queue *q)
{
    Node *p = q->lhead;
    while (p != NULL)
    {
        Node *aux = p->next;
        free(p);
        p = aux;
    }
    q->lhead = NULL;
}
void print_queue(Queue *q)
{
    if (!is_empty(q))
    {
        Node *p = q->lhead;
        while (p != NULL)
        {
            printf("%c ", p->value);
            p = p->next;
        }
    }
    else
    {
        return;
    }
}

#endif