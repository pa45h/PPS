// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four number:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("Greatest no is= %d", a);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("Greatest no is= %d", b);
        }
    }
    else if (c > d)
    {
        printf("Greatest no is= %d", c);
    }
    else
    {
        printf("Greatest no is= %d", d);
    }
    return 0;
}