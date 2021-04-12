#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

struct matriz{
    int lin;
    int col;
    float** v;
};


void libera_matriz(Matriz * mat){
    free(mat->v);
    free(mat);

}

Matriz* cria_matriz(int nl, int nc){
    Matriz* matriz = (Matriz *)malloc(sizeof(Matriz));
    if(matriz){
        float **v = malloc(sizeof(float) * nl);
        for(int i=0; i< nl; i++){
            v[i] = (float *)malloc(sizeof(float) * nc);
        }
            matriz->v = v;
            matriz->lin = nl;
            matriz->col = nc;
    }

    return matriz;
}

int nlinhas(Matriz * mat){
    return mat->lin;
    }

int ncolunas(Matriz * mat){
    return mat->col;
}

int acessa_matriz(Matriz * mat, int i, int j){
    if(i>mat->lin || j>mat->col){
        printf("Valor inválido");
        return 0;
    }
    else{
        return mat->v[i][j];

    }

}

void atribui_matriz(Matriz * mat, int i, int j, float value){
    if(i > mat->lin || j> mat->col){
        printf("Valor inválido");
    }
    else{
        mat->v[i][j] = value;
    }
}
