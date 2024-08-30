// from given sorted array find two nums such that they add up to a specific target num.

#include <stdio.h>

int main()
{
    int n, t;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("\nEnter a sorted array:\n\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element-[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the target : ");
    scanf("%d", &t);

    // Method-1:    Time Complexity = O(n^2)
    // int flag = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == t)
    //         {
    //             printf("%d + %d = %d\n", arr[i], arr[j], t);
    //             flag = 1;
    //         }
    //     }
    // }
    // if (flag == 0)
    // {
    //     printf("not found\n");
    // }

    // Method-2:    2 pointer method    Time Complexity = O(n)
    int i = 0;
    int j = n - 1;
    int flag = 0;

    while (i < j)
    {
        if (arr[i] + arr[j] == t)
        {
            printf("%d + %d = %d\n", arr[i], arr[j], t);
            flag = 1;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > t)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if (flag == 0)
    {
        printf("not found\n");
    }
    return 0;
}