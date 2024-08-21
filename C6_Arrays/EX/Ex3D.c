// create a 3d array and print the address of its elements in increasing order.

#include<stdio.h>

int main()
{
    int arr3d[2][2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf("%p \n",&arr3d[i][j][k]);
            }
        }
    }
    return 0;
}