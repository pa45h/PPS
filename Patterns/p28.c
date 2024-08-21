// 1
// 3*2
// 4*5*6
// 10*9*8*7
// 11*12*13*14*15

#include <stdio.h>

int main()
{
    int i, j, n = 0, p;

    for (i = 1; i <= 5; i++)
    {
        if (i % 2 == 1)
        {
            n = n + 1;
        }
        else
        {
            n--;
            n = n + i;
        }
        p = n;
        for (j = 1; j <= 9; j++)
        {
            if (j <= 2 * i - 1)
            {
                if (j % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    printf("%d", p);
                    if (i % 2)
                    {
                        p++;
                        n++;
                    }
                    else
                    {
                        p--;
                    }
                }
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