// Online C compiler to run C program online
#include <stdio.h>
#define N 50

int character_count(char string[], char query){
    int count = 0;
    int str_length = strlen(string);

    for(int i=0; i<str_length; i++){
        if(string[i] == query){
            count++;
        }
    }

    return count;
}

int main() {
    char string[N] = "hello world!";
    int h_count = character_count(string, 'h');
    int o_count = character_count(string, 'o');
    printf("H count: %d\n", h_count);
    printf("H count: %d\n", o_count);
    
    return 0;
}