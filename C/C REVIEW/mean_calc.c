// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

float grades_sum(float grades[]){
    float sum = 0;
    for(int i=0; i<3; i++){
        sum += grades[i];
    }
    return sum;
}

void student_analysis(float sum){
    if (sum >= 21){
        printf("Approved");
    }

    else if(sum>=15){
        printf("Your 4th grade must be: %.2f", (28-sum));
    }

    else{
        printf("Failed");
    }
}



int main() {
    float grades[3];

    for(int i =0; i<3; i++){
        printf("Type your grades: ");
        scanf("%f", &grades[i]);
    }

    float sum = grades_sum(grades);

    student_analysis(sum);


    return 0;
}
