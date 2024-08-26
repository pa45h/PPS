//  write your own version of strlen().

#include <stdio.h>

int strlength(char s[])
{
    int l;
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char s[100];
    printf("enter a string: ");
    gets(s);

    printf("Length Of the String = %d", strlength(s));
    return 0;
}