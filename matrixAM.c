#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],d[2][2],i,j,k;
    printf("Enter First Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter Second Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("\nDisplay First Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
         printf("\nDisplay Second Matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
        printf("\nAddition of matrix:\n");
          for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            d[i][j]=0;
            for(k=0;k<2;k++)
            {
              d[i][j]+=a[i][k]*b[k][j];
            }
         }
    }
     printf("\nMultiplication of matrix:\n");
          for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
     return 0;
}

