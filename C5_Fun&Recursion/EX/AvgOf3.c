// write a program using function to find average of 3 numbers.

#include <stdio.h>

float avg(float n1, float n2, float n3)
{
    return ((n1 + n2 + n3) / 3);
}

int main()
{
    float n1, n2, n3;

    printf("Enter 3 numbers to find average:");
    scanf("%f %f %f", &n1, &n2, &n3);

    float a = avg(n1, n2, n3);

    printf("The average of %0.2f, %0.2f and %0.2f = %0.2f", n1, n2, n3, a);

    return 0;
}