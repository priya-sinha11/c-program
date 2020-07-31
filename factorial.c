#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fac=1;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("Factorial of %d = %d",n,fac);
    getch();
}
