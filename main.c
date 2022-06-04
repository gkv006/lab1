#include <stdio.h>
#include "Intvector.h"
#include "doublevector.h"
#include "ComplexVector.h"
#include "test.c"
int Ask_type()
{
    printf("Enter the data type:\n1 - Int\n2 - Double\n3 - Complex\n");
    int k;
    scanf("%d", &k);
    return k;
}
int Ask_activity()
{
    printf("\nWhat do you want to do\n1-add vectors\n2-subtract vectors\n3-Scalar product\n4-Multiply a vector by a scalar\n5-get the scalar product\n ");
    int k;
    scanf("%d", &k);
    return k;
}
int Ask_continue_vector()
{
    int t;
    printf("\n1-continue with this vector\n0-no\n");
    scanf("%d", &t);
    return t;
}
int Ask_continue_type()
{
    int t;
    printf("\n1-continue with this data type\n0-no\n");
    scanf("%d", &t);
    return t;
}
int Ask_continue()
{
    int t;
    printf("\n1-continue \n0-the end\n");
    scanf("%d", &t);
    return t;
}

int main()
{
    int c = 1;
    while (c == 1)
    {
        int ask_type = Ask_type();
        int cont_type = 1;
        while (cont_type == 1)
        {
            if (ask_type == 1)
            {
                printf("Input vector: ");
                Vector *vector = make_int_vector();
                printf("\nYour vector: ");
                Print(vector);

                int cont_vector = 1;
                while (cont_vector == 1)
                {
                    int ask_activity = Ask_activity();
                    if (ask_activity == 1)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        Vector *result = Sum(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 2)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        Vector *result = Substract(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 3)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        void *result = Multiply_vectors(vector, vector2);
                        vector->ringInfo->print(result);
                    }
                    if (ask_activity == 4)
                    {
                        Vector *result = Multiply_on_scalar(vector);
                        Print(result);
                        vector = result;
                    }
                    if (ask_activity == 3)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        Vector_Product(vector, vector2);
                    }
                    cont_vector = Ask_continue_vector();
                }
            }
            if (ask_type == 2)
            {
                printf("Input vector: ");
                Vector *vector = make_double_vector();
                printf("\nYour vector: ");
                printf("\n");
                Print(vector);
                int ask_activity = Ask_activity();
                int cont_vector = 1;
                while (cont_vector == 1)
                {
                    if (ask_activity == 1)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_double_vector();
                        Vector *result = Sum(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 2)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_double_vector();
                        Vector *result = Substract(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 3)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_double_vector();
                        void *result = Multiply_vectors(vector, vector2);
                        vector->ringInfo->print(result);
                    }
                    if (ask_activity == 4)
                    {
                        Vector *result = Multiply_on_scalar(vector);
                        Print(result);
                        vector = result;
                    }

                    cont_vector = Ask_continue_vector();
                }
            }
            if (ask_type == 3)
            {
                printf("Input vector: ");
                Vector *vector = make_complex_vector();
                printf("\nYour vector: ");
                Print(vector);
                int ask_activity = Ask_activity();
                int cont_vector = 1;
                while (cont_vector == 1)
                {
                    if (ask_activity == 1)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_complex_vector();
                        Vector *result = Sum(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 2)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_complex_vector();
                        Vector *result = Substract(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 3)
                    {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_complex_vector();
                        void *result = Multiply_vectors(vector, vector2);
                        vector->ringInfo->print(result);
                    }
                    if (ask_activity == 4)
                    {
                        Vector *result = Multiply_on_scalar(vector);
                        Print(result);
                        vector = result;
                    }

                    cont_vector = Ask_continue_vector();
                }
            }

            cont_type = Ask_continue_type();
        }
        cont = Ask_continue();
    }
}
