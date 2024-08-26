// WAP to encrypt a string by adding 1 to the ascii value of its elements.

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

void encrypt(char *ogStr, char *enStr)
{
    int size = strSize(ogStr);
    int j = 0;

    for (j = 0; j < size; j++)
    {
        enStr[j] = ((int)ogStr[j] + 1);
    }
    enStr[j] = '\0';

    puts(enStr);
}

int main()
{
    char str[50];
    char strs[50];

    printf("Enter a string: ");
    gets(str);

    printf("\nEncrypted string: ");
    encrypt(str,strs);
    return 0;
}