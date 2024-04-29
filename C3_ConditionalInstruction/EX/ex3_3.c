// Write a program to check whether a year entered by the user is leap year or not.

#include <stdio.h>

int main()
{
    int yr;

    printf("Enter a year:");
    scanf("%d", &yr);

    if (yr % 4 == 0)
    {
        printf("It's a leap year!");
    }
    else
    {
        printf("It isn't leap year!");
    }
    return 0;
}