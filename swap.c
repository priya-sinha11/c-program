#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter Two Number:");
    scanf("%d %d",&a,&b);
    printf("\n\nBefore Swapping");
    printf("\n\n%d %d",a,b);
    t = a;
    a = b;
    b = t;
    printf("\n\nAfter Swapping:");
    printf("\n\n%d %d",a,b);
    return 0;
}
