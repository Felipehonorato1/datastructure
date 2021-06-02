#ifndef FILA_C_
#define FILA_C_
#include "fila.h"

struct fila
{
    int n_elements;
    int dim;
    int *vec;
};
Fila *cria_fila()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    if (f)
    {
        f->dim = 5;
        f->n_elements = 0;
        f->vec = (int *)malloc(f->dim * sizeof(int));
    }
    return f;
}
int insere_fila(Fila *f, int value){
    if(f->dim == f->n_elements){
        f->vec = (int *)realloc(p->dim + 10 * sizeof(int*));
        f->dim = p->dim + 10;
        
    }
}
int retira_fila(Fila *f);
int fila_vazia(Fila *f);
void libera_fila(Fila *f);

#endif
