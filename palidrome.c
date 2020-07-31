#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,t,rev=0;
    printf("Enter Number:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    printf("%d is palidrome",rev);
    else
        printf("%d is not palidrome",rev);
    getch();
}
