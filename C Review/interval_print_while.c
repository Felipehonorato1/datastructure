# include <stdio.h>

int main(){

int lower_value, higher_value;
printf("TYPE THE LOWER VALUE: ");
scanf("%d", &lower_value);
printf("TYPE THE HIGHER VALUE: ");
scanf("%d", &higher_value);

while(lower_value <= higher_value){
    printf("%d ", lower_value);
    lower_value++;
}


return 0;
}
