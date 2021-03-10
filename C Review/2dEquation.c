// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

float delta_extract(float a,float b,float c){
    float delta = b*b - 4*a*c;
    //printf("Delta: %f", delta);
    return delta;
}

float * calculate(float a,float b, float c){
    float delta = delta_extract(a,b,c);
    float xs[2];
    xs[0] = (-b + sqrt(delta))/(2*a);
    xs[1] = (-b - sqrt(delta))/(2*a);
    printf("X1: %.2f X2: %.2f", xs[0],xs[1]);

    return xs;
}

int main() {
    float a,b,c;

    printf("Type your a: ");
    scanf("%f",&a);

    printf("Type your b: ");
    scanf("%f",&b);

    printf("Type your c: ");
    scanf("%f",&c);

    float *xs;
    xs = calculate(a,b,c);

    //printf("X1: %f X2: %f", xs[0], xs[1]);




}
