# include <stdio.h>

int main(){

int lower_value, higher_value;
printf("TYPE THE LOWER VALUE: ");
scanf("%d", &lower_value);
printf("TYPE THE HIGHER VALUE: ");
scanf("%d", &higher_value);

for(int i = lower_value; i <= higher_value; i++){
    printf("%d ", i);
}

return 0;
}
