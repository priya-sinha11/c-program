#include<stdio.h>
int main()
 {
     int a,b ,*p,*q,t;
     printf("\n\nEnter Two Number:");
     scanf("%d%d",&a,&b);
     printf("\n\nBefore swapping:");
     printf("\n%d%d",a,b);
     p = &a;
     q = &b;

     t = *p;
     *p = *q;
     *q = t;
     printf("\n\nAfter Swapping:");
     printf("\n%d%d",a,b);
     return 0;
 }
