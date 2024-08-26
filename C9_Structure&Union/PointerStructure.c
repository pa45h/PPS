#include<stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1;
    struct point *ptr1;
    ptr1=&p1;

    (*ptr1).x=1;
    // OR
    ptr1->y=2;

    printf("Coordinents of point p1 = (%d,%d)",ptr1->x,(*ptr1).y);

    printf("Coordinents of point p1 = (%d,%d)",p1.x,p1.y);

    return 0;
}