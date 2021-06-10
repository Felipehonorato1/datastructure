#include <stdio.h>
#define N 5

void inverse_vec(int values_vec[]){
    int *p = values_vec;
    for(int i = 0; i<N; i++){
        p[i] = values_vec[i] * -1;
    }
}

int main() {
    
    int number_seq[N] = {1,-12,15,2,5};
    
    inverse_vec(number_seq);
    
    for(int i =0; i<N; i++){
        printf("%d ", number_seq[i]);
        
    }
    

    return 0;
}