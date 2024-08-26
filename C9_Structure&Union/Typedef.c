#include<stdio.h>

typedef struct ComlexNum
{
    int real;
    int img;
}cmp;

int main()
{
    typedef unsigned int ui;
    ui a=10;
    printf("%u\n",a);

    cmp c1;
    c1.real=1;
    c1.img=3;
    printf("Complex Number = %d + %di",c1.real,c1.img);
    
    return 0;
}