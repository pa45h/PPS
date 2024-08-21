// Tower Of Hanoi: There are 3 rods, 1st rod is source which has n disks, 2nd is helper, 3rd is destination, you have to bring all the disks to the destination from source.

#include <stdio.h>

void TowerHanoi(int n, char s, char h, char d)
{
    if (n == 0)
        return;
                
    TowerHanoi(n - 1, s, d, h);

    printf("%c --> %c\n", s, d);

    TowerHanoi(n - 1, h, s, d);

    return;
}

int main()
{
    int n;

    printf("Enter a no: ");
    scanf("%d", &n);

    TowerHanoi(n, 'A', 'B', 'C');

    return 0;
}