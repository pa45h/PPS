// write a program containing function whuch counts the number of positive integers in an array.

#include<stdio.h>

int count_positive(int *arr,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        count++;
    }
    return count;
}

int main()
{
    int arr[7]={-3,-2,-1,0,1,2,3};

    
    printf("No of positive elements = %d",count_positive(arr,7));
    return 0;
}