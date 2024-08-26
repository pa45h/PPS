// Write a program to print the address of a variable, use this address to get the value of this variable.

#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    printf("Address of the a = %u \n", ptr);
    printf("Value of the a = %d \n", *ptr);

    return 0;
}