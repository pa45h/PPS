// WAP to generate multiplication table of a given number in text format.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    FILE *fptr = fopen("MultiplicationTableFile.txt", "w");

    fprintf(fptr,"********** TABLE OF %d ********** \n\n",n);

    for (int i = 1; i <= 10; i++)
    {
        fprintf(fptr, "%d * %d = %d\n", n, i, n * i);
    }
    fclose(fptr);
    
    return 0;
}