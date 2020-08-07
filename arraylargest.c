#include<stdio.h>
int main()

{
    int i,n,a[50];
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[0]<a[i])
         a[0]=a[i];
    }
    printf("\nlargest number=%d",a[0]);
    return 0;
}
