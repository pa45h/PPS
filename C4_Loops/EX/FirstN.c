//  Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;

    printf("Enter a number:");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i; // sum+=i;
        i++;
    }
    printf("The sum of first n netural numbers is= %d", sum);
    return 0;
}