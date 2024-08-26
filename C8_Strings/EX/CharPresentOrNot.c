// WAP to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int strSize(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int charPrsnt(char *str, char c)
{
    int size = strSize(str);
    int j = 0;

    for (j = 0; j < size; j++)
    {
        if (str[j] == c)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char str[50];
    char c;

    printf("Enter a string: ");
    gets(str);
    printf("Enter the character: ");
    scanf(" %c", &c);

    int flag = charPrsnt(str, c);

    if (flag == 1)
    {
        printf("\n%c is PRESENT in given string");
    }
    else
    {
        printf("\n%c is NOT PRESENT in given string");
    }

    return 0;
}