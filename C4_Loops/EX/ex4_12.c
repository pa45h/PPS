// Write a program  to check whether a given number is a palindrome or not using loop.

#include <stdio.h>

int main()
{
    int rev = 0, rem, num, oNum;

    scanf("%d", &num);
    oNum = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    if (oNum == rev)
    {
        printf("Palindrome!\n");
    }
    else
    {
        printf("Not Palindrome!\n");
    }
    return 0;
}