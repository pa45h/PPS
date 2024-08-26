// write a program using a function which calculate the sum and avarage of two numbers. use pointers and print the value of the sum and avarage in main().

#include <stdio.h>

float avg(float *x, float *y)
{
    float sum = *x + *y;
    float avg = sum / 2;

    printf("SUM = %.2f\n", sum);
    printf("AVARAGE = %.2f\n", avg);

    return 0;
}

int main()
{
    float a, b;

    printf("Enter two numbers :");
    scanf("%f %f", &a, &b);

    avg(&a, &b);

    return 0;
}