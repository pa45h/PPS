// Write a a program to implement program ex4_3 using for and do-while.

#include <stdio.h>

int main()
{
    int i = 0, sum1 = 0, j = 0, sum2 = 0;

    // Using For loop;
    for (i; i <= 10; i++)
    {
        sum1 += i;
    }
    printf("Sum using for loop= %d\n", sum1);

    // Using Do-while loop;
    do
    {
        sum2 += j;
        j++;
    } while (j <= 10);

    printf("Sum using Do-While loop= %d\n", sum2);
}