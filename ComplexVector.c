#include <stdlib.h>
#include <stdio.h>
#include "ComplexVector.h"

Vector *make_complex_vector()
{
    double zero = 0.0000;
    double one = 1.0000;
    RingInfo *ringInfo = create(sizeof(Complex), &zero, &one, substract_complex, sum_complex, multiply_complex, input_complex, print_complex);
    Vector *vector = Make_vector(ringInfo);
    return vector;
};

void *input_complex()
{
    Complex *complex = calloc(1, sizeof(Complex));
    complex->imaginary = calloc(1, sizeof(double));
    complex->real = calloc(1, sizeof(double));
    double *a = malloc(sizeof(double));
    double *b = malloc(sizeof(double));
    double a1;
    double b1;
    int k;
    printf("Input real part:");
    k = scanf("%lf", a);
    while (k < 1)
    {
        printf("Введите корректные значения: ");
        char c = getchar();
        k = scanf("%lf", &a1);
    }
    printf("Input imaginary part:");
    k = scanf("%lf", &b1);
    while (k < 1)
    {
        printf("Введите корректные значения: ");
        char c = getchar();
        k = scanf("%lf", &b1);
    }
    *a = a1;
    *b = b1;
    complex->real = a;
    complex->imaginary = b;
    return (void *)complex;
}
void *sum_complex(Complex *v1, Complex *v2)
{
    Complex *sumres = calloc(1, sizeof(Complex));
    sumres->imaginary = calloc(1, sizeof(double));
    sumres->real = calloc(1, sizeof(double));
    *(double *)sumres->real = *(double *)v1->real + *(double *)v2->real;
    *(double *)sumres->imaginary = *(double *)v1->imaginary + *(double *)v2->imaginary;
    return (void *)sumres;
}

void *substract_complex(Complex *v1, Complex *v2)
{
    Complex *subres = calloc(1, sizeof(Complex));
    subres->imaginary = calloc(1, sizeof(double));
    subres->real = calloc(1, sizeof(double));
    *(double *)subres->real = *(double *)v1->real - *(double *)v2->real;
    *(double *)subres->imaginary = *(double *)v1->imaginary - *(double *)v2->imaginary;
    return (void *)subres;
}

void *multiply_complex(Complex *v1, Complex *v2)
{
    Complex *multres = calloc(1, sizeof(Complex));
    multres->imaginary = calloc(1, sizeof(double));
    multres->real = calloc(1, sizeof(double));
    *(double *)multres->real = ((*(double *)v1->real) * (*(double *)v2->real)) - ((*(double *)v1->imaginary) * (*(double *)v2->imaginary));
    *(double *)multres->imaginary = (((*(double *)v1->real) * (*(double *)v2->imaginary)) + (((*(double *)v1->imaginary) * (*(double *)v2->real))));
    return (void *)multres;
}

void print_complex(Complex *v1)
{
    printf("%lf + %lf * i   ", *(double *)v1->real, *(double *)v1->imaginary);
}