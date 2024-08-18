// Write a program to find LCM and GCD of two given numbers.

#include <stdio.h>

int main()
{
    int a, b, small, i, lcm, gcd;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        small = a;
    }
    else
    {
        small = b;
    }

    for (i = 1; i <= small; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    lcm = a * b / gcd; // formula: lcm*gcd = a*b

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}