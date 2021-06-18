#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "grafo.h"

int main()
{
    Grafo *g = cria_grafo(5);
    adiciona_edge(g, 0, 1);
    adiciona_edge(g, 1, 0);
    adiciona_edge(g, 1, 2);
    adiciona_edge(g, 1, 3);
    adiciona_edge(g, 2, 0);
    adiciona_edge(g, 2, 1);
    adiciona_edge(g, 3, 4);
    adiciona_edge(g, 4, 4);
    adiciona_edge(g, 4, 2);
    remove_edge(g, 1, 0);
    print_grafo(g);
    return 0;
}