//    A1
//   AB12
//  ABC123
// ABCD1234

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        char k='A';
        int n=1;

        for (j = 1; j <= 8; j++)
        {
            if (j >= 5 - i && j <= 4 + i)
            {
                if(j<=4)
                {
                    printf("%c",k);
                    k++;
                }
                else
                {
                    printf("%d",n);
                    n++;
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