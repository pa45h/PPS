// write a program containing a function which reverse the array passed to it.

#include <stdio.h>
void arr_reverse(int *arr, int n)
{
    int temp;

    for (int i = 0; i < (n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1 - i];
        arr[n-1 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    arr_reverse(arr,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}