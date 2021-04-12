#include <stdio.h>
#define N 5

void min_max_identifier(int values_vec[]){
    int max = values_vec[0];
    int min = values_vec[0];
    
    for(int i =1; i<N; i++){
        if(values_vec[i] > max){
            max = values_vec[i];
        }
    
        if(values_vec[i] < min){
            min = values_vec[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

int main() {
    
    int number_seq[N] = {1,-12,15,2,5};
    min_max_identifier(number_seq);
    

    return 0;
}