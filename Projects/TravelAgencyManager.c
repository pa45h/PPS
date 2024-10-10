// You manage a travel agency and you want your n drivers to input their following details:
// 1. Name
// 2. Driving License No
// 3. Route
// 4. Kms that are driwen under your agency

// Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

// Your program should print details of the drivers in a beautiful fashion.
// Use structures.

#include<stdio.h>

typedef struct Driver
{
    char name[18];
    int lNo;
    char route[18];
    int kms;
}driver;

int main()
{
    int n;
    printf("\nEnter the no of drivers: ");
    scanf("%d",&n);

    driver d[n];
    for(int i=0;i<n;i++)
    {
        printf("\n\nFor Driver-%d\n",i+1);
        printf("\nEnter name:");
        scanf("%s",d[i].name);
        printf("\nEnter Driving License No.: ");
        scanf("%d",&d[i].lNo);
        printf("\nEnter route:");
        scanf("%s",d[i].route);
        printf("\nEnter Driving Kms: ");
        scanf("%d",&d[i].kms);
    }
    printf("\n\n----------Printing The Information Of Drivers----------\n\n");
    for(int i=0;i<n;i++)
    {
        printf("\n\nFor Driver-%d\n",i+1);
        printf("\nName: %s",d[i].name);
        printf("\nDriving License No.: %d",d[i].lNo);
        printf("\nRoute: %s",d[i].route);
        printf("\nDriving Kms: %d",d[i].kms);
    }


    return 0;
}