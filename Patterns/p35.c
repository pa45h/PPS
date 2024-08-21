//     *
//    * *           ==USING SINGLE LOOP==
//   * * *
//  * * * *
// * * * * *

#include <stdio.h>

int main()
{
    int i, k, flag = 1, n;

    printf("enter a number:");
    scanf("%d", &n);

    for (i = 1, k = 0; i <= n; i++)
    {
        if (i < ((n+1)/2) - k)
        {
            printf(" ");
        }
        else
        {
            if (flag)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            flag = 1 - flag;
        }
        if (i == ((n+1)/2) + k)
        {
            k++;
            printf("\n");
            if (i == n)
                break;
            i = 0;
            flag = 1;
        }
    }
}
