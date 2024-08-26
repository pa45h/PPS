#include <stdio.h>
#include <stdbool.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date d1, d2;

    printf("Enter 1st date(dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter 2nd date(dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    bool flag = true;

    if (d1.day != d2.day)
        flag = false;
    if (d1.month != d2.month)
        flag = false;
    if (d1.year != d2.year)
        flag = false;

    if (flag == true)
    {
        printf("Both Dates are same.");
    }
    else
    {
        printf("Both Dates are different.");
    }

    return 0;
}