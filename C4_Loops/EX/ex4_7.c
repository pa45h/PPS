// Repeat program ex4_6 using while loop.

#include <stdio.h>

int main()
{
    long int i = 1, n, m = 1;

    printf("Enter a number:");
    scanf("%d", &n);

    while (i <= n)
    {
        m *= i;
        i++;
    }
    printf("The factorial of %d using while loop = %d\n", n, m);

    return 0;
}