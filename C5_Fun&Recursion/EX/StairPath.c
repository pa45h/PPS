// Stair Path: if a person is standing on ground and want to reach on nth step, how many ways are there if he takes 1 or 2 steps at a time ?

#include <stdio.h>

int totalWays(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }

    return totalWays(n - 1) + totalWays(n - 2);
}

int main()
{
    int n;

    printf("Enter the no of stairs: ");
    scanf("%d", &n);

    printf("The number of ways to reach on nth stair = %d ", totalWays(n));

    return 0;
}