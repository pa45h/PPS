// Write a fun slice() to slice a string, it should change the original string such that it is now the sliced string. take m & n as start and ending position for slice.

#include <stdio.h>

void slice(char s[], int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        printf("%c", s[i]);
    }
}

int main()
{
    char s[50];
    int m, n;

    printf("Enter a string that you want to slice: ");
    gets(s);

    printf("Enter the starting point(from 0): ");
    scanf("%d", &m);
    printf("Enter the ending ponit(to the length of your string): ");
    scanf("%d", &n);

    slice(s, m, n);
    return 0;
}