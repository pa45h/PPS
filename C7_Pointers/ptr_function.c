#include <stdio.h>
void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main()
{
    int x=13,y=32;

    printf("Befor swap The value of x= %d  y= %d \n",x,y);
    swap(&x,&y);
    printf("After swap The value of x= %d  y= %d \n",x,y);
    return 0;
}