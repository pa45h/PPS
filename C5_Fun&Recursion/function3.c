// Use the library function to claculate the are of a square with side a.

#include <stdio.h>
#include <math.h>

int main()
{
    int a;

    printf("Enter the side:");
    scanf("%d", &a);

    double area = pow(a, 2); // library fun from math.h

    printf("The area of square= %f\n", area);

    return 0;
}