#include "vector.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
    Dvector *vec = create_vec(3);
    float *v;
    printf("Inserting first element 1 in pos 0: %d\n", insert(vec, 1));
    printf("Size of vec: %d\n", size(vec));
    printf("Inserting second element 2 in pos 1: %d\n", insert(vec, 10));
    printf("Size of vec: %d\n", size(vec));
    printf("Inserting second element 3 in pos 2: %d\n", insert(vec, 20));
    printf("Size of vec: %d\n", size(vec));
    access(vec, 1, v);
    printf("Value of element in pos 1: %.2f\n", *v);
    free_v(&vec);

    return 0;
}