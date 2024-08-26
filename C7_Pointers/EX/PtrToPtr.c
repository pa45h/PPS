// write a prgram to write the value of a variable i by using poniter to pinter type of variable.

#include<stdio.h>

int main()
{
    int i=1000000;
    int *ptr1=&i;
    int **ptr2=&ptr1;

    printf("%d",**ptr2);

    return 0;
}