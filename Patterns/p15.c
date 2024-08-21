//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1

#include <stdio.h>

int main()
{
    int i, j, k = 0, n;

    for (i = 1; i <= 9; i++)
    {
        i <= 5 ? k++ : k--;
        n = 1;
        for (j = 1; j <= 5; j++)
        {
            if (j >= 6 - k)
            {
                printf("%d", n);
                n++;
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