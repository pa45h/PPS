// create an array of 10 numbers. verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=&arr[0];

    for(int i=0;i<10;i++)
    {
        printf("for ptr+%d = %d\n", i,*ptr+i);

    }
    return 0;
}