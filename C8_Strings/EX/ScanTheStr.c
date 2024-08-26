// write a program to take string as an input from the user using %C and %s, confirm that the strings are equal.

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20], s2[20];
    int i = 0;
    char c;

    printf("enter 1st string = ");
    while ((c = getchar()) != '\n' && c != EOF && (sizeof(s1) - 1))
    {
        s1[i] = c;
        i++;
    }
    s1[i] = '\0';

    printf("enter 2nd string = ");
    scanf("%s", s2);

    int x = strcmp(s1, s2);

    if (x == 0)
    {
        printf("equal %d ", x);
    }
    else
    {
        printf("NOT equal %d ", x);
    }
}