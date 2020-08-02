#include<stdio.h>
int main()
{

    int i,n,p,first,last,sum=0;
    printf("Enter first and last range for prime number:\n");
    scanf("%d%d",&first,&last);
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

           sum+=n;

    }
        printf(" \nsum = %d \t",sum);

         return 0;
}

