// write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n, i, prime = 1;

    // prime=0 => not prime.       prime=1 => prime.

    printf("Enter a number:");
    scanf("%d", &n);

    if (n < 2)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
            }
        }
    }

    if (prime == 1)
    {
        printf("It is a prime number!\n");
    }
    else if (prime == 0)
    {
        printf("It is not a prime number!\n");
    }
}