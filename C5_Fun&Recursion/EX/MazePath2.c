// Maze Path: if you are standing on (row,col) cordinates of maze and want to go to (1,1) cordinates by using only down and right ways, how many ways it would be needed?

#include <stdio.h>

int mazePath2(int cr, int cc)
// cr= current row,    cc= current column;
{
    int down = 0;
    int right = 0;

    if (cr == 1 && cc == 1)
        return 1;

    if (cr == 1)
    {
        right += mazePath2(cr, cc - 1);
    }

    if (cc == 1)
    {
        down += mazePath2(cr - 1, cc);
    }
    if (cr > 1 && cc > 1)
    {
        right += mazePath2(cr, cc - 1);
        down += mazePath2(cr - 1, cc);
    }

    return down + right;
}

int main()
{
    int row, col;

    printf("Enter rows of the maze: ");
    scanf("%d", &row);

    printf("Enter columns of the maze: ");
    scanf("%d", &col);

    int noOfWays = mazePath2(row, col);

    printf("No of ways to go to the end = %d ", noOfWays);
}