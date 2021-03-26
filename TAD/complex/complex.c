#ifndef COMPLEX_C
#define COMPLEX_C

#include "complex.h"
#include <stdlib.h>

struct complex
{
    float a;
    float b;
};

Complex *create_complex(float x, float y)
{
    Complex *comp = (Complex *)malloc(sizeof(Complex));
    if (comp)
    {
        comp->a = x;
        comp->b = y;
    }
    return comp;
}

int get_complex(Complex *complex_a, float *x, float *y)
{
    if (complex_a)
    {
        *x = complex_a->a;
        *y = complex_a->b;
        return 1;
    }
    return 0;
}

int set_complex(Complex *complex_a, float x, float y)
{
    if (complex_a)
    {
        complex_a->a = x;
        complex_a->b = y;
    }

    return 0;
}

Complex *complex_sum(Complex *complex_a, Complex *complex_b)
{
    Complex *sum = create_complex(0, 0);
    if (sum)
    {
        sum->a = complex_a->a + complex_b->a;
        sum->b = complex_a->b + complex_b->b;
    }

    return sum;
}

Complex *complex_sub(Complex *complex_a, Complex *complex_b)
{
    Complex *sub = create_complex(0, 0);
    if (sub)
    {
        sub->a = complex_a->a - complex_b->a;
        sub->b = complex_a->b - complex_b->b;
    }
    return sub;
}

Complex *complex_mul(Complex *complex_a, Complex *complex_b)
{
    Complex *mul = create_complex(0, 0);
    if (mul)
    {
        mul->a = complex_a->a * complex_b->a;
        mul->b = complex_a->b * complex_b->b;
    }

    return mul;
}

Complex *complex_div(Complex *complex_a, Complex *complex_b)
{
    Complex *div = create_complex(0, 0);
    if (div)
    {
        div->a = complex_a->a / complex_b->a;
        div->b = complex_a->b / complex_b->b;
    }

    return div;
}

void free_complex(Complex **comp)
{
    free(*comp);
    *comp = NULL;
}

#endif