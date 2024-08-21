// ABCDEFG
// ABC EFG
// AB   FG
// A     G

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        char k='A';
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%c",k++);
            }
            else
            {
                printf(" ");
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}