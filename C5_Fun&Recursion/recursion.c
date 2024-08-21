// RECURSION: Recursion is a programming technique in which a function calls itself directly or indirectly to solve a problem. It allows a function to solve complex problems by breaking them down into smaller, similar subproblems.

#include <stdio.h>

int factorial(int n) // Recursive function.
{
    if (n == 0) // base condition.
    {
        return 1;
    }
    else
    {
        // printf("%d\n",n);
        return (factorial(n - 1) * n); // function is calling itselt again and again until the base condition(n==0) satisfies.
    }
}

int main()
{
    int n;

    printf("Enter the number that you want to find factorial of:\n");
    scanf("%d", &n);

    printf("The factorial of %d = %d ", n, factorial(n));

    return 0;
}