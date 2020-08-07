#include<stdio.h>
int main()
{
    int var=20;
    int *p;
    p=&var;
    printf("Address of var :%x\n",&var);
    printf("Address of *p :%x\n",p);
    printf("Value of *p :%d\n",*p);
    return 0;
}
