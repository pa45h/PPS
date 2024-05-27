// Write a program to print all the even/odd numbers between 1 and 50.

#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2) // for even numbers => i=2;
    {
        printf("%d\n", i);
    }
    return 0;
}