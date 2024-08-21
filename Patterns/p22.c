//    1
//   12A
//  123AB
// 1234ABC

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        int n=1;
        char k='A';
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if(j<=4)
                {
                    printf("%d",n);
                    n++;
                }
                else 
                {
                    printf("%c",k);
                    k++;
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