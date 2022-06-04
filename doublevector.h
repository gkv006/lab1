#ifndef DOUBLEVECTOR_H
#define DOUBLEVECTOR_H
#include "vector.h"
void *sum_double(void *a, void* b);
void *multiply_double(void *a, void *b);
void *substract_double(void *a, void *b);
Vector* make_double_vector();
void print_double(void *d);
void *input_double();
#endif //DOUBLEVECTOR_H