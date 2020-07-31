#include<stdio.h>
#include<conio.h>
void main()
{

    int n,t,r,s=0;
    printf("Enter number:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(t==s)
        printf("%d is amstrong no.",t);
    else
        printf("%d is not amstrong no.",t);
    getch();

}
