#include<stdio.h>

int main()
{
    int arr[4];
    int *ptr=arr;   // arr == &arr[0]

    for(int i=0; i<4; i++)
    {
        printf("Enter the value of arr[%d] : ", i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0; i<4; i++)
    {
        printf("The value of arr[%d] : %d \n", i+1, *(arr+i));  // arr[i] == *(arr+i)
        printf("The Address of arr[%d] : %u \n", i+1, (arr+i));  
    }
    return 0;
}           