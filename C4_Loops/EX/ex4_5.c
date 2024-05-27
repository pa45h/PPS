// Write a program  to claculate the sum of the numbers ocurring in the multiplication table of 8.

#include <stdio.h>

int main()
{
    int i, sum = 0, m;

    for (i = 1; i <= 10; i++)
    {
        m = 8 * i;
        sum += m;
    }
    printf("%d\n", sum);
    return 0;
}