#include<stdio.h>
int main()
{
    int a,b,*p,*q,sum;
    printf("Enter Two Number:");
    scanf("%d%d",&a,&b);
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("Addition of two number = %d",sum);
    return 0;

}
