#ifndef VECTOR_C_
#define VECTOR_C_
#include "vector.h"
#include "stdlib.h"

struct dvector
{
    int n_elements;
    int v_dim;
    float *v;
};

Dvector *create_vec(int dim)
{
    Dvector *vec = (Dvector *)malloc(sizeof(Dvector));
    if (vec)
    {
        float *v = (float *)malloc(sizeof(float) * dim);
        if (v)
        {
            vec->n_elements = 0;
            vec->v_dim = dim;
            vec->v = v;
        }
    }
    return vec;
}

int insert(Dvector *vec, float x)
{
    if (vec)
    {
        if (vec->n_elements == vec->v_dim)
        {
            vec->v = (float *)realloc(vec->v, vec->v_dim + 10);
            vec->v_dim = vec->n_elements + 10;
        }
        vec->v[vec->n_elements] = x;
        vec->n_elements++;
        return 1;
    }
    else
    {
        return 0;
    }
}
int size(Dvector *vec)
{
    return vec->n_elements;
}
int access(Dvector *vec, int pos, float *v)
{
    if (pos > 0 && vec && v)
    {
        *v = vec->v[pos];
        return 1;
    }
    return 0;
}
void free_v(Dvector **vec)
{
    free(*vec);
    *vec = NULL;
}

#endif