#ifndef COMPLEXVECTOR_H
#define COMPLEXVECTOR_H
#include "vector.h"

typedef struct Complex{
    void *real;
    void *imaginary;
}Complex;

void *sum_complex(Complex *v1, Complex *v2);
void *multiply_complex(Complex* v1, Complex *v2);
void *substract_complex(Complex* v1, Complex *v2);
Vector* make_complex_vector();
void print_complex(Complex *d);
void *input_complex();

#endif //COMPLEXVECTOR_H
