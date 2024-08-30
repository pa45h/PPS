#include <stdio.h>

int main()
{
    FILE *fptr1 = fopen("ReadCharByChar.txt", "r");

    if (fptr1 == NULL)
    {
        printf("FILE DOES NOT EXIST");
    }
    else
    {
        FILE *fptr2 = fopen("WriteCharByChar.txt", "w");
        char c = getc(fptr1);

        while (c != EOF)
        {
            fprintf(fptr2, "%c", c);
            c = getc(fptr1);
        }
        fclose(fptr1);
        fclose(fptr2);
    }
    return 0;
}