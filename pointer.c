#include<stdio.h>
int main()
{
    int var = 20;
    int *p = &var;
    printf("Address of var : %p\n",&var);
    printf("Address of variable: %p\n",p);
    printf("Address of pointer : %p\n", &p);
    printf("Value of a :%d\n",*p);
    printf("Value of var : %d\n",a);
    return 0;
}
