#include<stdio.h>
int main()
{
    int i,n,p,first,last;
    printf("Enter first and last range for prime number:\n");
    scanf("%d%d",&first,&last);
    printf("Display prime number between given range:\n");
    for(n=first;n<=last;n++)
    {
        p=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
              p++;

            }
        }
        if(p==2)
        printf(" %d \t",n);
    }
         return 0;
}
