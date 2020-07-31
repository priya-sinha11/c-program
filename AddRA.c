//Return and Argument
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,c;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    c = add(a,b);
    printf("addition of %d and %d = %d",a,b,c);
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
