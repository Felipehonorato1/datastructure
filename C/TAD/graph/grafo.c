#ifndef GRAFO_C_
#define GRAFO_C_
#include "grafo.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
// Usando lista de adjacência.

struct adjacency_list
{
    Node *head;
};

struct node
{
    int value;
    Node *next;
};

struct grafo
{
    int n_vertices;
    AdjList *list;
};

Grafo *cria_grafo(int num)
{
    Grafo *g = (Grafo *)malloc(sizeof(Grafo));
    if (g)
    {
        g->n_vertices = num;
        g->list = (AdjList *)malloc(num * sizeof(AdjList));
        for (int i; i <= num; i++)
        {
            // Initializing every adjacency_list node head as NULL;
            g->list[i].head = NULL;
        }
    }
    // Returning an empty graph;
    return g;
}

Node *cria_node(int value)
{
    Node *p = (Node *)malloc(sizeof(Node));
    if (p)
    {
        p->value = value;
        p->next = NULL;
    }
    return p;
}

void *adiciona_edge(Grafo *g, int pos, int value)
{
    Node *new_node = cria_node(value);
    new_node->next = g->list[pos].head;
    g->list[pos].head = new_node;
}

void print_grafo(Grafo *g)
{
    for (int i = 0; i < g->n_vertices; i++)
    {
        printf("Lista de adjacencia do vertice %d", i);
        Node *head = g->list[i].head;
        while (head)
        {

            printf(" -> %d", head->value);
            head = head->next;
        }
        printf("\n");
    }
}

void remove_edge(Grafo *g, int src, int dest)
{
    Node *head = g->list[src].head;
    while (head->value != dest)
    {
        head = head->next;
    }

    head->value = head->next->value;
    head->next = head->next->next;
}
#endif