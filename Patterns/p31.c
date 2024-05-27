//    1
//   A B
//  1 2 3
// A B C D

#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 4; i++)
    {
        char c = 'A';
        int n = 1;
        k = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i && k)
            {
                if (i % 2 == 0)
                {
                    printf("%c", c++);
                    k = 0;
                }
                else
                {
                    printf("%d", n++);
                    k = 0;
                }
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}