// Online C compiler to run C program online
#include <stdio.h>
#define PI 3.14

float circle_area(float radius){
    float area = PI * radius * radius;
    
    return area;
}

int main() {
    float radius = -1;
    while(radius <= 0){
        printf("Type the radius of your circunference: ");
        scanf("%f", &radius);
    }
    
    printf("Circle area: %f", circle_area(radius));
    
    return 0;
}