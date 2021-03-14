#include <stdio.h>

int main() {
    int num_elements;
    printf("Type the number of elements: ");
    scanf("%d",&num_elements);
    
    int *v = (int *) malloc(num_elements * sizeof(int)) ;// Vai retornar o endereço para a posição da memória alocada;
    
    for(int i =0; i<num_elements; i++){
        printf("Type the %dth element: ", i);
        scanf("%d", &v[i]);
    }
    
    for(int i =0; i<num_elements; i++){
        printf("%d ", v[i]);
    }

    return 0;
}