/* NESTED IF:
                if(condition1){
                    if(condition2){
                        if(condition3){
                            .
                            .
                            .
                            if(conditionN){
                                code;
                            }
                        }
                    }
                }
                else{
                    code;
                }
                */
#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("Enter a number:\n");
    scanf("%d", &b);
    printf("Enter a number:\n");
    scanf("%d", &c);

    printf("You have entered %d, %d, %d.\n", a, b, c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("The largest number is %d\n", a);
        }
        else
        {
            printf("The largest number is %d\n", c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("The largest number is %d\n", b);
        }
        else
        {
                printf("The largest number is %d\n", c);
        }
    }
    return 0;
}