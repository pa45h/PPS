// Write a program to find out whether student is pass or fail, if it requires total 40% and at least 33% in each subject to pass, assume 3 subjects  and take  marks as an input from the user.

#include <stdio.h>

int main()
{
    int maths, phy, chem;

    printf("Enter marks of Maths:\n");
    scanf("%d", &maths);

    printf("Enter marks of Physics:\n");
    scanf("%d", &phy);

    printf("Enter marks of Chemistry:\n");
    scanf("%d", &chem);

    float persent = (maths + phy + chem) / 3;

    if ((maths >= 33) && (phy >= 33) && (chem >= 33) && (persent >= 40))
    {
        printf("YOU ARE PASSED with %0.2f !!\n", persent);
    }
    else
    {
        printf("YOU ARE FAILED!!\n");
    }
    return 0;
}