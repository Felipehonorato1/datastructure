#ifndef GRAFO_H_
#define GRAFO_H_
typedef struct adjacency_list AdjList;
typedef struct node Node;
typedef struct grafo Grafo;

AdjList *cria_adj_list(Node *head);

void *adiciona_edge(Grafo *g, int pos, int value);

Grafo *cria_grafo(int num);

Node *cria_node(int value);

void print_grafo(Grafo *g);

void remove_edge(Grafo *g, int src, int dest);

#endif