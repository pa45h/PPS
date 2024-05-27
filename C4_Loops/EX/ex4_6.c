// Write a program to calculate the factorial of a given number using for loop.

#include <stdio.h>

int main()
{
    int n, i, m = 1;

    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        m *= i;
    }
    printf("The factorial of %d = %d", n, m);
}