// Impement a program to generate the Finonacci series up to a given number using loops.

// 0,1,1,2,3,5,8,13,21,34 ...

// a,b,c

// i=0 ; c=0
// i=1 ; c=1
// i=2 ; c=0+1 = 1 ; a=0,b=1       c=a+b
// i=3 ; c=1+1 = 2 ; a=1,b=1       a=b
// i=4 ; c=1+2 = 3 ; a=1,b=2       b=c
// i=5 ; c=2+3 = 5 ; a=2,b=3
// i=6 ; c=3+5 = 8 ; a=3,b=5

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n, i;

    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }
}

