#include<stdio.h>
void main()
{
    int i,n,p;
    printf("Prime Number Between 1 to 100 \n");
    for(n=1;n<=100;n++)
    {
        p=0;
        for(i=1;i<=n;i++)
        {

            if((n%i)==0)
            {

            p++;


            }

    }
    if(p==2)

        printf("%d \t",n);
    }

}
