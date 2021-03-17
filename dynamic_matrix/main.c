#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "matrix.c"

int main()
{
    Matriz * mat = cria_matriz(3,3);
    atribui_matriz(mat, 0,0, 1);
    atribui_matriz(mat, 0,1, 2);
    atribui_matriz(mat, 0,2, 3);
    atribui_matriz(mat, 1,0, 4);
    atribui_matriz(mat, 1,1, 5);
    atribui_matriz(mat, 1,2, 6);
    atribui_matriz(mat, 2,0, 7);
    atribui_matriz(mat, 2,1, 8);
    atribui_matriz(mat, 2,2, 9);

    int acesso = acessa_matriz(mat, 0,0);

    printf("\aNumero de colunas: %d\n", nlinhas(mat));
    printf("\aNumero de colunas: %d\n", ncolunas(mat));

    for(int i=0; i<nlinhas(mat);i++){
        for(int j =0; j<ncolunas(mat); j++){
            printf("%d ", acessa_matriz(mat, i, j));
        }
        printf("\n");
    }
}
