#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main()
{
    float x, y;
    Complex *comp1 = create_complex(1, 2);
    Complex *comp2 = create_complex(2, 5);
    get_complex(comp1, &x, &y);
    printf("\n\aValores atribuidos ao complexo 1: %.2f  e %.2f\n", x, y);
    get_complex(comp2, &x, &y);
    printf("\aValores atribuidos ao complexo 2: %.2f  e %.2f\n", x, y);
    set_complex(comp1, 10, 10);
    get_complex(comp1, &x, &y);
    printf("\a\nNovos valores atribuidos ao complexo 1: %.2f  e %.2f\n", x, y);
    Complex *sum = complex_sum(comp1, comp2);
    get_complex(sum, &x, &y);
    printf("\aDepois da soma entre o novo complexo 1 e o complexo 2: %.2f  e %.2f\n", x, y);

    free_complex(&comp1);
    free_complex(&comp2);
    free_complex(&sum);
    return 0;
}