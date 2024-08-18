/* IF: 
        if(condition){
            code;
        } */
        
#include <stdio.h>

int main()
{
    int n;

    printf("Enter your age:\n");
    scanf("%d", &n);

    if(n>=18){
        printf("You are eligible to voting! \n");
    }

    return 0;
}

