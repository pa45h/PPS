// Write a program to determine whether a character entered by the user is lowercase or not.

#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter a character:");
    scanf("%c",&ch);

    // 97-122 = a-z (from ascii table)

    (ch>=97 && ch<=122)? printf("It is lower case") : printf("It is not lower case.") ;

    return 0;
}