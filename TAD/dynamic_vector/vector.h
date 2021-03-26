#ifndef VECTOR_H_
#define VECTOR_H_

typedef struct dvector Dvector;

Dvector *create_vec(int dim);
int insert(Dvector *vec, float x);
int size(Dvector *vec);
int access(Dvector *vec, int pos, float *v);
void free_v(Dvector **vec);

#endif