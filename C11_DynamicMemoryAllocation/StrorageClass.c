#include<stdio.h>

int a=13;       // Globar variable

void func1(int n)
{
    static int b=1;     // Static variable
    if(n<=10)
    {
        printf("%d ",b);
        b++;
        func1(n+1);
    }
    else
    {
        return;
    }
}

void func2()
{
    register int c=1;     // Register variable
    printf("\nregister = %d ",c);
    printf("\nglobal = %d ",a);

}

int main()
{
    auto int d=31;      // Automatic variable (auto keyword is optional)
    printf("\nauto = %d",d);
    printf("\nstatic = ");
    func1(1);
    func2();
    return 0;
}