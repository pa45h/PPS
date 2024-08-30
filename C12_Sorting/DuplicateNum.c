#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element-[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    // Method-1:    enfficient in terms of space but not in terms of time 
    // int flag=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             printf("\n%d is duplicate element\n",arr[i]);
    //             flag=1;
    //             break;
    //         }
    //     }
    // }
    // if(flag==0)
    // {
    //     printf("\nThere is no duplicate element present.");
    // }

    // Method-2:    Efficient in terms of time but not in terms of space.
    // int visited[1000]={0};
    // int key=0;
    // int flag=0;

    // for(int i=0;i<n;i++)
    // {
    //     key=arr[i];

    //     if(visited[key]==1)
    //     {
    //         printf("%d is duplicate element",key);
    //         flag=1;
    //     }
    //     else
    //     {
    //         visited[key]=1;
    //     }
    // }
    
    // if(flag==0)
    // {
    //     printf("\nThere is no duplicate element present.");
    // }

    // Method-3:    Efficient in terms of time & space 
    //              but does not give proper ans if array elements has no duplicate.

    int sum=0;
    int sumIdx=((n-1)*n)/2;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int diff=sum-sumIdx;

    printf("%d\n",sum);
    printf("%d\n",sumIdx);
    printf("%d\n",diff);

    if(diff<=0 )
    {
        printf("\nThere is no duplicate element present");
    }
    else 
    {
        printf("\n%d is duplicate element",diff);
    }

    return 0;
}