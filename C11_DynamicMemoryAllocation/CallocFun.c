#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("\nEnter n : ");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter element-[%d] : ", i);
            scanf("%d", &ptr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
        }
    }
    free(ptr);
    ptr = NULL;
    return 0;
}