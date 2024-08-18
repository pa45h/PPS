// write a program to check whether a number is divisibe by 97 or not.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Test result= %d\n", n % 97);
    printf("0 means divisivible, otherwise non dividable.");

    return 0;
}