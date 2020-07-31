// Return value but No argument
#include<stdio.h>

int add();
int main()
{
    int c,a,b;
    c=add();
    printf("Addition = %d",c);
    return 0;
}
int add()
{
    int a,b,c;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    c = a + b;
    return c;
}
