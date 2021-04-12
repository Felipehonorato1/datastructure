#include <stdio.h>
#define PI 3.14

float circle_area(float raio)
{
    return PI * raio * raio;
}

int main(void)
{
    float raio = 0;
    while (raio <= 0)
    {
        printf('Type a valid radius for your circunference: ');
        scanf(("%f", &raio));
    }
    printf('\a The area of the circunference is %f', circle_area(raio));

    return 0;
}