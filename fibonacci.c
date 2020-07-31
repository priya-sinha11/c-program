#include<stdio.h>
#include<conio.h>
void main()
{
    int n,first=0,second=1,next,i;
    printf("Enter Number of terms\n");
    scanf("%d",&n);
    printf("First %d terms of fibonacci series\n",n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
            next=i;
        else{
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\n",next);
    }
    getch();
}
