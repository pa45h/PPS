//  write a recursive function to calculate the sum of first n natural number.

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (sum(n - 1) + n);
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("The sum of first %dth number= %d", n, sum(n));

    return 0;
}