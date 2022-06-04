#include <stdlib.h>
#include <stdio.h>

#include "doublevector.h"

Vector* make_double_vector(){
        double zero=0.0f;
        double one=1.0f;
        RingInfo* ringInfo= create(sizeof (double),&zero,&one,substract_double,sum_double,multiply_double,input_double,print_double);
        Vector* vector= Make_vector(ringInfo);
        return vector;
};

void *input_double(){
    double *res=malloc(sizeof (double ));
    int k;
    double a;
    k=scanf("%lf",&a);
    while (k<1){
        printf("Введите корректные значения: ");
        char c=getchar();
        k=scanf("%lf",&a);
    }
    *res=a;
    return (void*)res;
}

void print_double(void *d){
    printf("%lf ",*(double *) d);
}

void *multiply_double(void *a, void *b)
{
    double multiplierA = *(double *) a;
    double multiplierB = *(double *) b;
    double result=multiplierB*multiplierA;
    double *res = calloc(1, sizeof(double ));
    *res = multiplierA * multiplierB;
    return (void *) res;
}
void *sum_double(void *a,void *b)
{
    double sa = *(double *) a;
    double sb = *(double *) b;
    double *res = calloc(1, sizeof(double ));
    *res = sa + sb;
    return (void *) res;
}

void *substract_double(void *a,void *b)
{
    double sa = *(double *) a;
    double sb = *(double *) b;
    double *res = calloc(1, sizeof(double ));
    *res = sa - sb;
    return (void *) res;
}


