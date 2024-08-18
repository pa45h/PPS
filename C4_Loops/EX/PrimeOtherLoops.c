// Impliment ex4_8 using other types of loops.

#include <stdio.h>

int main()
{
    int n, i = 2, prime = 1;

    // prime=0 => not prime     prime=1 => prime.

    printf("Enter a number:");
    scanf("%d", &n);

    if (n < 2)
    {
        prime = 0;
    }
    else
    {
        while (i < n)
        {

            if (n % i == 0)
            {
                prime = 0;
            }
            i++;
        }
    }
    if (prime == 1)
    {
        printf("it is prime number");
    }
    else if (prime == 0)
    {
        printf("It is not prime number.");
    }
    return 0;
}