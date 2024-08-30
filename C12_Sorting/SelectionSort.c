#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element-[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEntered array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minIdx = -1;

        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }

    printf("\nSorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}