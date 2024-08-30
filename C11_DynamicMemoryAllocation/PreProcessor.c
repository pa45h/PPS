#include<stdio.h>

#include "Display.c"

#define PI 3.14
#define SQUARE(x) ((x)*(x))

int main()
{
    int r;

    printf("Enter Radius: ");
    scanf("%d",&r);
    float a=PI*SQUARE(r);

    printf("Area of circle= ");
    display(a);

    return 0;
}