#include "Intvector.h"
#include <stdlib.h>
#include <stdio.h>
Vector* make_int_vector()
{
    int zero=0;
    int one=1;
    RingInfo* ringInfo= create(sizeof (int),&zero,&one,substract_int,sum_int,multiply_int,input_int,print_int);
    Vector* vector= Make_vector(ringInfo);
    return vector;
}
void *input_int(){
    int *res=malloc(sizeof (int));
    int k;
    int a;
    k=scanf("%d",&a);
    while (k<1){
        printf("Введите корректные значения: ");
        char c=getchar();
        k=scanf("%d",&a);
    }
    *res=a;
    return (void *) res;
}

void print_int(void *d){
    printf("%d ",*(int*) d);
}

void *multiply_int(void *a, void *b)
{
    int multiplierA = *(int *) a;
    int multiplierB = *(int *) b;
    int result=multiplierB*multiplierA;
    int *res = calloc(1, sizeof(int));
    *res = multiplierA * multiplierB;
    return (void *) res;
}
void *sum_int(void *a,void *b)
{
    int sa = *(int *) a;
    int sb = *(int *) b;
    int *res = calloc(1, sizeof(int));
    *res = sa + sb;
    return (void *) res;
}

void *substract_int(void *a,void *b)
{
    int sa = *(int *) a;
    int sb = *(int *) b;
    int *res = calloc(1, sizeof(int));
    *res = sa - sb;
    return (void *) res;
}
