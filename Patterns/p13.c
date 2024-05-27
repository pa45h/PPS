//    1
//   232
//  34543
// 4567654

#include <stdio.h>

int main()
{
    int i, j, n = 0;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                j <= 4 ? n++ : n--;
                printf("%d", n);
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