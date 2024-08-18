/*
    Calculate income tax paid by an employ to the government as per the slabs mentioned below;

    IncomeSlabs    Tax
    2.5L-5.0L        5%
    5.0L-10.0L      20%
    Above 10.0L     30%
*/

#include <stdio.h>

int main()
{
    float tax = 0, income;

    printf("Enter your income:\n");
    scanf("%f", &income);

    if ((income >= 250000) && (income <= 500000))
    {
        tax = tax + 0.05 * (income - 250000);
        // 0% tax will be applied from 0 to 2.5L, hence (income-2.5L).
    }

    if ((income >= 500000) && (income <= 1000000))
    {
        tax = tax + 0.20 * (income - 500000);
        // for 2.5L to 5L 20% tax, hence(income-5L).
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("your income tax=%f\n", tax);

    return 0;
}
