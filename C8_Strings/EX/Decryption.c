// WAP to decrypt the string encrypted using encrypt fun in ex8_5.

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

void encrypt(char *enptStr, char *deptStr)
{
    int size = strSize(enptStr);
    int j = 0;

    for (j = 0; j < size; j++)
    {
        deptStr[j] = ((int)enptStr[j] - 1);
    }
    deptStr[j] = '\0';

    puts(deptStr);
}
int main()
{
    char enStr[50];
    char detrs[50];

    printf("Enter encrypted string: ");
    gets(enStr);

    printf("\nDecrypted string: ");
    encrypt(enStr, detrs);
    return 0;
}