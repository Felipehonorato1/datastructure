
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows,columns;
    int **p; 
    
    printf("Type the number of rows:");
    scanf("%d", &rows);
    printf("Type the number of columns:");
    scanf("%d", &columns);
    
    p = malloc(rows * sizeof(int*));
    
    for(int k = 0; k< rows; k++){
        p[k] = (int *) malloc(columns * sizeof(int));
    }
    
    
    
    int aux = 0;
    for(int i = 0; i< rows; i++){
        for(int j = 0; j<columns; j++){
            printf("Type the Matrix[%d][%d] value: ", i,j);
            scanf("%d", &aux);
            p[i][j] = aux;
        }
    }
    
    for(int i = 0; i< rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d ", p[i][j]);
        }    
        printf("\n");
    
    }
    
    return 0;
}