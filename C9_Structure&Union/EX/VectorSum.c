// write a function which returns the sum of two vectors passed to it.

#include <stdio.h>

struct vector
{
    int x;
    int y;
} v1, v2;

void vectorSum(struct vector v1, struct vector v2)
{
    int X = v1.x + v2.x;
    int Y = v1.y + v2.y;

    printf("\nV1+V2 = %di + %dj", X, Y);
}

int main()
{
    printf("For v1:\n");
    printf("x= ");
    scanf("%d", &v1.x);
    printf("y= ");
    scanf("%d", &v1.y);

    printf("For v2:\n");
    printf("x= ");
    scanf("%d", &v2.x);
    printf("y= ");
    scanf("%d", &v2.y);

    vectorSum(v1, v2);
    return 0;
}