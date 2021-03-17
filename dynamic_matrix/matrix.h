#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

typedef struct matriz Matriz;

Matriz* cria_matriz(int nl, int nc);
void libera_matriz(Matriz * mat);
int acessa_matriz(Matriz * mat,int i, int j);
void atribui_matriz(Matriz * mat,int i, int j, float value);
int nlinhas(Matriz * mat);
int ncolunas(Matriz * mat);




#endif // MATRIX_H_INCLUDED
