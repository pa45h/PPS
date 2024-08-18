// write a c program to reverse a number using loop.

#include <stdio.h>

int main()
{
    int rev = 0, rem, num;

    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    printf("%d\n", rev);
    return 0;
}