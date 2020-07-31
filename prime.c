#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,p=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p==2)
        printf("%d is prime number",n);
    else
        printf("%d is not prime number",n);
    getch();

}
