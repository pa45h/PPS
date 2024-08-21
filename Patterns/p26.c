// A
// BA
// CBA
// DCBA

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        char k = 'A' - 1 + i;
        for (j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                printf("%c", k--);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}