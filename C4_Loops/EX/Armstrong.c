// Write a c program to check whether a given number is an Armstrong number ot not using loop.

// ex. 153: 
// 1^3=1 ; 5^3=125 ; 3^3=27 
// 1+125+27=153.             => 153= 1^3 + 5^3 + 3^3. [Armstrong number]

#include <stdio.h>

int main()
{
    int num, sum = 0, oNum;

    scanf("%d", &num);
    oNum = num;

    while (num != 0)
    {
        sum = sum + ((num % 10) * (num % 10) * (num % 10));
        num = num / 10;
    }

    if (oNum == sum)
    {
        printf("Armstrong number!");
    }
    else
    {
        printf("Not Armstrong number!");
    }
    return 0;
}