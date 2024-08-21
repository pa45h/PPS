// write a program to create an array of 10 integers and store multiplication table of 5 in it. 

#include<stdio.h>

int main()
{
    int tbl[10];

    for(int i=0;i<10;i++)
    {
        tbl[i]=(5*(i+1));
        printf("%d\n",tbl[i]);
    }
    return 0;
}