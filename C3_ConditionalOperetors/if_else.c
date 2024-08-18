/* IF ELSE:
            if(condition){
                code;
            }
            else{
                code;
            } */

#include <stdio.h>

int main()
{
    int n;

    printf("Enter your age:\n");
    scanf("%d", &n);

    if(n>=18){
        printf("You are eligible for voting!\n");
    }
    else{
        printf("You are under age for voting!\n");
    }
    return 0;
}