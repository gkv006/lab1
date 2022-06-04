#include <stdlib.h>
#include <stdio.h>
#include "Intvector.h"
//#include "doublevector.h"
#include "ComplexVector.h"
#include <time.h>
void test_int(){
    printf("Int tests:\n");
    printf("введите 6 любых цифр не влияет на результат");
    srand(time(NULL));
    Vector* v1=make_int_vector();
    Vector* v2=make_int_vector();
    int* x1=calloc(1,sizeof(int));
    int* y1=calloc(1,sizeof(int));
    int* z1=calloc(1,sizeof(int));
    int* x2=calloc(1,sizeof(int));
    int* y2=calloc(1,sizeof(int));
    int* z2=calloc(1,sizeof(int));
    for (int i=0;i<3;i++){
        printf("Тест номер %d/n",i);
        int a=rand()%100;
        *x1=a;
        int b=rand()%100;
        *y1=b;
        int c=rand()%100;
        *z1=c;
        int d=rand()%100;
        *x2=d;
        int e=rand()%100;
        *y2=e;
        int f=rand()%100;
        *z2=f;
        Set_x(v1,(void *)(x1));
        Set_y(v1,(void *)(y1));
        Set_z(v1,(void *)(z1));
        Set_x(v2,(void *)(x2));
        Set_y(v2,(void *)(y2));
        Set_z(v2,(void *)(z2));
        printf("Проверка функции Sum_vector:\n");
        printf("Складываем вектора:\n");
        Print(v1);
        printf(" + ");
        Print(v2);
        printf("\n");
        int newx=a+d;
        int newy=b+e;
        int newz=c+f;
        printf("Ожидаемый результат: (x = %d ,y = %d,z = %d)\nПолученный результат:",newx,newy,newz);
        Vector *res= Sum(v1,v2);
        Print(res);
        printf("\n");
        printf("Проверка функции subtract_vector:\n");
        printf("Вычитаем вектора:\n");
        Print(v1);
        printf(" - ");
        Print(v2);
        newx=d-a;
        newy=e-b;
        newz=f-c;
        printf("Ожидаемый результат: (x = %d,y = %d,z = %d)\nПолученный результат:",newx,newy,newz);
        res= Substract(v1,v2);
        Print(res);
        printf("\n");
        printf("Проверка функции scalar_mult:\n");
        printf("Скалярно умножаем вектора:\n");
        Print(v1);
        printf(" * ");
        Print(v2);
        printf("\n");
        int mult=a*d+b*e+c*f;
        printf("Ожидаемый результат: %d\nПолученный результат:",mult);
        void *scalres= Multiply_vectors(v1,v2);
        print_int(scalres);
        printf("\n");
        printf("Проверка функции vector_product:\n");
        printf("Векторно умножаем вектора:\n");
        Print(v1);
        printf(" * ");
        Print(v2);
        printf("\n");
        int h=b*f-c*e;
        int j=a*f-c*d;
        int k=a*e-b*d;
        printf("Ожидаемый результат: %di+%dj-%dk\nПолученный результат:",h,j,k);
        Vector_Product(v1,v2);
        printf("\n");

    }

}
void test_double(){
    printf("Double tests:\n");
    printf("введите 6 любых цифр не влияет на результат");
    srand(time(NULL));
    Vector* v1=make_double_vector();
    Vector* v2=make_double_vector();
    double* x1=calloc(1,sizeof(double));
    double* y1=calloc(1,sizeof(double));
    double* z1=calloc(1,sizeof(double));
    double* x2=calloc(1,sizeof(double));
    double* y2=calloc(1,sizeof(double));
    double* z2=calloc(1,sizeof(double));
    for (int i=0;i<3;i++){
        printf("Тест номер %d/n",i);
        double a= (double) (rand()%100) /(100-1)+rand()%100;
        *x1=a;
        double b=(double) (rand()%100) /(100-1)+rand()%100;
        *y1=b;
        double c=(double) (rand()%100) /(100-1)+rand()%100;
        *z1=c;
        double d=(double) (rand()%100) /(100-1)+rand()%100;
        *x2=d;
        double e=(double) (rand()%100) /(100-1)+rand()%100;
        *y2=e;
        double f=(double) (rand()%100) /(100-1)+rand()%100;
        *z2=f;
        Set_x(v1,(void *)(x1));
        Set_y(v1,(void *)(y1));
        Set_z(v1,(void *)(z1));
        Set_x(v2,(void *)(x2));
        Set_y(v2,(void *)(y2));
        Set_z(v2,(void *)(z2));
        printf("Проверка функции Sum_vector:\n");
        printf("Складываем вектора:\n");
        Print(v1);
        printf(" + ");
        Print(v2);
        printf("\n");
        double newx=a+d;
        double newy=b+e;
        double newz=c+f;
        printf("Ожидаемый результат: (x = %lf ,y = %lf ,z = %lf)\nПолученный результат:",newx,newy,newz);
        Vector *res= Sum(v1,v2);
        Print(res);
        printf("\n");
        printf("Проверка функции subtract_vector:\n");
        printf("Вычитаем вектора:\n");
        Print(v1);
        printf(" - ");
        Print(v2);
        newx=d-a;
        newy=e-b;
        newz=f-c;
        printf("Ожидаемый результат: (x = %lf,y = %lf,z = %lf)\nПолученный результат:",newx,newy,newz);
        res= Substract(v1,v2);
        Print(res);
        printf("\n");
        printf("Проверка функции scalar_mult:\n");
        printf("Скалярно умножаем вектора:\n");
        Print(v1);
        printf(" * ");
        Print(v2);
        printf("\n");
        double mult=a*d+b*e+c*f;
        printf("Ожидаемый результат: %lf\nПолученный результат:",mult);
        void *scalres= Multiply_vectors(v1,v2);
        print_double(scalres);
        printf("\n");
        printf("Проверка функции vector_product:\n");
        printf("Векторно умножаем вектора:\n");
        Print(v1);
        printf(" * ");
        Print(v2);
        printf("\n");
        double h=b*f-c*e;
        double j=a*f-c*d;
        double k=a*e-b*d;
        printf("Ожидаемый результат: %lfi+%lfj-%lfk\nПолученный результат:",h,j,k);
        Vector_Product(v1,v2);
        printf("\n");

    }
}

void test_complex()
{
    printf("Complex tests:\n");
    printf("введите 12 любых цифр не влияет на результат");
    srand(time(NULL));
    Vector* v1=make_complex_vector();
    Vector* v2=make_complex_vector();
    Complex * x1=calloc(1,sizeof(Complex));
    Complex* y1=calloc(1,sizeof(Complex));
    Complex* z1=calloc(1,sizeof(Complex));
    Complex* x2=calloc(1,sizeof(Complex));
    Complex* y2=calloc(1,sizeof(Complex));
    Complex* z2=calloc(1,sizeof(Complex));
    for (int i=0;i<3;i++){
        printf("Тест номер %d/n",i);
        double *x1i=malloc(sizeof (double));
        double *x1r=malloc(sizeof (double));
        double *y1i=malloc(sizeof (double));
        double *y1r=malloc(sizeof (double));
        double *z1i=malloc(sizeof (double));
        double *z1r=malloc(sizeof (double));
        double *x2i=malloc(sizeof (double));
        double *x2r=malloc(sizeof (double));
        double *y2i=malloc(sizeof (double));
        double *y2r=malloc(sizeof (double));
        double *z2i=malloc(sizeof (double));
        double *z2r=malloc(sizeof (double));
        double a= (double) (rand()%100) /(100-1)+rand()%100;
        double b=(double) (rand()%100) /(100-1)+rand()%100;
        *x1i=a;
        *x1r=b;
        x1->imaginary=x1i;
        x1->real=x1r;
        double c=(double) (rand()%100) /(100-1)+rand()%100;
        double d=(double) (rand()%100) /(100-1)+rand()%100;
        *y1i=c;
        *y1r=d;
        y1->real=y1r;
        y1->imaginary=y1i;
        double e=(double) (rand()%100) /(100-1)+rand()%100;
        double f=(double) (rand()%100) /(100-1)+rand()%100;
        *z1i=e;
        *z1r=f;
        z1->real=z1r;
        z1->imaginary=z1i;
        Set_x(v1,(void *)(x1));
        Set_y(v1,(void *)(y1));
        Set_z(v1,(void *)(z1));
        double a2= (double) (rand()%100) /(100-1)+rand()%100;
        double b2=(double) (rand()%100) /(100-1)+rand()%100;
        *x2i=a2;
        *x2r=b2;
        x2->imaginary=x2i;
        x2->real=x2r;
        double c2=(double) (rand()%100) /(100-1)+rand()%100;
        double d2=(double) (rand()%100) /(100-1)+rand()%100;
        *y2i=c2;
        *y2r=d2;
        y2->real=y2r;
        y2->imaginary=y2i;
        double e2=(double) (rand()%100) /(100-1)+rand()%100;
        double f2=(double) (rand()%100) /(100-1)+rand()%100;
        *z2i=e2;
        *z2r=f2;
        z2->real=z2r;
        z2->imaginary=z2i;
        Set_x(v2,(void *)(x2));
        Set_y(v2,(void *)(y2));
        Set_z(v2,(void *)(z2));
        printf("Проверка функции Sum_vector:\n");
        printf("Складываем вектора:\n");
        Print(v1);
        printf(" + ");
        Print(v2);
        printf("\n");
        double newxr=a+a2;
        double newx=b+b2;
        double newyr=c+c2;
        double newy=d+d2;
        double newzr=e+e2;
        double newz=f+f2;
        printf("Ожидаемый результат: (x = %lf + i*%lf ,y = %lf+ i*%lf ,z = %lf + i*%lf)\nПолученный результат:",newxr,newx,newyr,newy,newzr,newz);
        Vector *res= Sum(v1,v2);
        Print(res);
        printf("\n");
        printf("Проверка функции subtract_vector:\n");
        printf("Вычитаем вектора:\n");
        Print(v1);
        printf(" - ");
        Print(v2);
        newx=a2-a;
        newxr=b2-b;
        newy=c2-c;
        newyr=d2-d;
        newz=e2-e;
        newzr=f2-f;
        printf("Ожидаемый результат: (x = %lf + i*%lf ,y = %lf+ i*%lf ,z = %lf + i*%lf)\nПолученный результат:",newxr,newx,newyr,newy,newzr,newz);
        res= Substract(v1,v2);
        Print(res);
        printf("\n");
        printf("Проверка функции scalar_mult:\n");
        printf("Скалярно умножаем вектора:\n");
        Print(v1);
        printf(" * ");
        Print(v2);
        printf("\n");
        double multr=a*a2+c*c2+e*e2;
        double multi=b*b2+d*d2+f*f2;
        printf("Ожидаемый результат: %lf+i*%lf\nПолученный результат:",multr,multi);
        void *scalres= Multiply_vectors(v1,v2);
        print_complex(scalres);
        printf("\n");
        printf("Проверка функции vector_product:\n");
        printf("Векторно умножаем вектора:\n");
        Print(v1);
        printf(" * ");
        Print(v2);
        printf("\n");
        double hr=d*f2-f*d2;
        double hi=c*e2-e*c2;
        double jr=b*f2-f*b2;
        double ji=a*e2-e*a2;
        double kr=b*d2-d*b2;//
        double ki=a*c2-c*a2;//
        printf("Ожидаемый результат: %lf +i * %lf i - %lf + i * %lf j - %lf +i * %lf k\nПолученный результат:",hr,hi,jr,ji,kr,ki);
        Vector_Product(v1,v2);
        printf("\n");

    }
}