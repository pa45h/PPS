#include <stdio.h>
#include <string.h>

int main()
{
    char str0[30] = "Enter the 1st string: ";
    char str1[20];
    char str2[20];
    char str3[20];

    puts(str0); // (1) prints the string as it is(multi words)
    gets(str1); // (2) scans the string as it is
    printf("Enter the 2nd string:\n");
    gets(str2);

    strcpy(str3, str1); // (3) copies str1 into str3
    puts(str3);

    strcat(str1, str2); // (4) concatenate(joins) str1 and str2 into str1
    puts(str1);

    int cmp = strcmp(str3, str2); // (5) compares str3 & str2

    if (cmp == 0) // returns 0 if bothe are equal
    {
        printf("str3 & str2 are equal\n");
    }
    else if (cmp > 0) // returns +ve value if asci val of str3 > str2
    {
        printf("str3 > str2\n");
    }
    else // returns -ve value if asci val of str3 < str2
    {
        printf("str3 < str2\n");
    }

    char *pos = strchr(str1, 't'); // (6) returns string from 't' occures in str1
    if (pos != NULL)
    {
        printf("First occurrence of 't' in str1: %s\n", pos);
    }
    else
    {
        printf("'t' not found in str1\n");
    }

    return 0;
}