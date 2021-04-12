// Online C compiler to run C program online
#include <stdio.h>
#define PI 3.14

void even_odd(int number){
    if (number%2 ==0){
        printf("Even\n");
    }
    else
        printf("Odd\n");
}

int main() {
    int num = 1;
    while(num != 0){
        printf("Type your number: ");
        scanf("%d",&num);
        even_odd(num);
    }
    return 0;
}