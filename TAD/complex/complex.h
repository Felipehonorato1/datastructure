#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct complex Complex;

Complex *create_complex(float a, float b);
int get_complex(Complex *complex_a, float *x, float *y);
int set_complex(Complex *complex_a, float x, float y);
Complex *complex_sum(Complex *complex_a, Complex *complex_b);
Complex *complex_sub(Complex *complex_a, Complex *complex_b);
Complex *complex_mul(Complex *complex_a, Complex *complex_b);
Complex *complex_div(Complex *complex_a, Complex *complex_b);
void free_complex(Complex *comp);

#endif