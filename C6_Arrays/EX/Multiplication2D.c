// create a array of size 3×10 containing multiplication table of the numbers 2,7 and 9 respectively.

#include <stdio.h>

int main()
{
    int multiTable[3][10];

        for (int j = 0; j < 10; j++)
        {
            multiTable[0][j] = 2 * (j+1);
        }
        
        for (int j = 0; j < 10; j++)
        {
            multiTable[1][j] = 7 * (j+1);
        }

        for (int j = 0; j < 10; j++)
        {
            multiTable[2][j] = 9 * (j+1);
        }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d", multiTable[i][j]);
        }
        printf("\n");
    }
    return 0;
}