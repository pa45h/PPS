/* IF ELSE IF:
                if(condition1){
                    code;
                    }
                else if(condition2){
                    code;
                    }
                    .
                    .
                    .
                else{
                    code;
                }  */

#include <stdio.h>

int main()
{
    int a;

    printf("Enter your age:\n");
    scanf("%d", &a);

    if (a <= 1)
    {
        printf("YOU ARE A BABY!\n");
    }
    else if ((a > 1) && (a <= 3))
    {
        printf("YOU ARE A TODLER!\n");
    }
    else if ((a > 3) && (a <= 5))
    {
        printf("YOU ARE A PRESCHOOLER!\n");
    }
    else if ((a > 5) && (a <= 12))
    {
        printf("YOU ARE A GRADESCHOOLER!\n");
    }
    else if ((a > 12) && (a <= 18))
    {
        printf("YOU ARE A TEENAGER!\n");
    }
    else if ((a > 18) && (a <= 21))
    {
        printf("YOU ARE A YOUNG ADULT!\n");
    }
    else if ((a > 21) && (a <= 35))
    {
        printf("YOU ARE AN ADULT!\n");
    }
    else if ((a > 35) && (a <= 50))
    {
        printf("YOU ARE A MIDAGER!\n");
    }
    else if ((a > 50) && (a <= 100))
    {
        printf("YOU ARE A LATE ADULT!");
    }
    else
    {
        printf("YOU ARE ALMOST DEAD!\n");
    }
    return 0;
}