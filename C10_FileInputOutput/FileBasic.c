#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("FileBasic.txt", "w");

    char str[100];
    printf("Enter a string: ");
    gets(str);

    fprintf(fptr, "%s", str);

    fclose(fptr);

    fptr = fopen("FileBasic.txt", "r");

    if (fptr == NULL)
    {
        printf("FILE DOES NOT EXIST\n");
    }
    else
    {
        char c = fgetc(fptr);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(fptr);
        }
    }

    fclose(fptr);

    return 0;
}