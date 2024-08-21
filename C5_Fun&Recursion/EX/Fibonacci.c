//  write a program using recursion to calculate nth element of fibonacci series.

//  0,1,1,2,3,5,8,13,21,34,...

// fib(n) = fib(n-2) + fib(n-1)

#include <stdio.h>

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 2) + fib(n - 1));
    }
}

int main()
{
    int n;
    printf("Enter a number till you want the series:");
    scanf("%d", &n);

    printf("%dth element of fibonacci series= %d", n, fib(n));
    return 0;
}