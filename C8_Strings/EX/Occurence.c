// WAP to count the occurence of a given character in a string.

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

int occure(char *str, char c)
{
    int size = strSize(str);
    int j = 0;
    int count = 0;

    for (j = 0; j < size; j++)
    {
        if (str[j] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[50];
    char c;

    printf("Enter a string: ");
    gets(str);
    printf("Enter the character: ");
    scanf("%c", &c);

    printf("\nNumber of occurence of '%c' in given string = %d ", c, occure(str, c));
    
    return 0;
}