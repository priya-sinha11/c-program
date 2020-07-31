#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is Even Number",n);
    else
        printf("%d is Odd Number",n);
    getch();
}
