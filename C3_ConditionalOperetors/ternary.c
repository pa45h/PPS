// variable = (condition) ? printf("expression1") : printf("expression2");

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter your marks:");
    scanf("%d", &a);

    b= (a>=33) ? printf("Pass") : printf("Failed");
    return 0;
}
