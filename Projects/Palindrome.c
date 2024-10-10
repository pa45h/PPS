#include <stdio.h>

int Reverse(int n)
{
    int rn=0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        rn = rn*10 + rem;
    }
    return rn;
}

void IsPalindrome(int n, int rn)
{
    if(n==rn)
    {
        printf("\nPalindrome!\n");
    }
    else
    {
        printf("\nNot a Palindrome!\n");
    }
}

int main()
{
    int n;
    printf("\nEnter a no: ");
    scanf("%d", &n);

    IsPalindrome(n,Reverse(n));

    return 0;
}