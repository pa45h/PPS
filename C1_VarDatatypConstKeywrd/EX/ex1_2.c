// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder.

#include <stdio.h>

int main()
{
    int r, h;
    float pi = 3.14;

    printf("Enter the redius=");
    scanf("%d", &r);
    printf("Enter the height of the cylinder=");
    scanf("%d", &h);

    float area = pi * r * r;
    printf("The area of the circle is=%f\n", area);

    printf("The area of the cylinder is=%f\n", area * h);
    return 0;
}