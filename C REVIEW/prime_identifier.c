#include <stdio.h>

void isPrime(int number){
    for(int i =2; i<number; i++){
        if(number%i == 0){
            printf("Not prime");
        }
    }
    printf("Prime");
}

int main(){

int num;
printf("Type a number: ");
scanf("%d", &num);

isPrime(num);

return 0;
}
