// Write a c program to fine the area of a rectangle
// (1)Using hard coded inputs
// (2)Using input supplied bye the user

#include <stdio.h>
int main()
{
    //(1)

    int a=9;
    int b=6;

    printf("L=%d\n", a);
    printf("B=%d\n", b); 
    printf("Area=%d\n", a*b);

    //(2)

    int c, d, area;

    printf("Length=");
    scanf("%d", &c);
    printf("Breadth=");
    scanf("%d", &d);

    printf("Area of rectengle = %d\n", c*d );
    
    return 0;
}