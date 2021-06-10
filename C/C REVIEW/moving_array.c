
#include <stdio.h>
#include <stdlib.h>

void moving_array(int array[], int array_size){
    for(int i = array_size-1; i!=0; i--){
        array[i-1] = array[i];
        array[i] = 0;
    }
}

int main() {
    int aux;
    int array_size;
    printf("Type the number of elements: ");
    scanf("%d", &array_size);
    int p[array_size];
    
    for(int i = 0; i< array_size; i++){
        printf("Type the array %dth element: ", i);
        scanf("%d", &aux);
        p[i] = aux;
    }
    moving_array(p, array_size);
    for(int j =0; j< array_size; j++){
        printf("%d ", p[j]);
    }
    
    return 0;
}