// Write a program to calculate simple interest for a set of values representing principal, no of years and rate of interest.

#include <stdio.h>

int main()
{
    float p,r,t,i,a; // p= principal, r= rate of interest, t= no of years, i= simple interest, a= total amount after t time.
    
    printf("Enter principal amount=");
    scanf("%f", &p);
    printf("Enter rate of interest=");
    scanf("%f", &r);
    printf("Enter no of years=");
    scanf("%f", &t);

    i=p*r*t/100;
    printf("Simple Interest=%f\n",i);

    a=p+i;
    printf("Total amount after t time=%f\n",a);
    
    return 0;

}