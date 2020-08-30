#include<stdio.h>
int main ()
{
    int a = 5;
    int* p = &a;
    printf("\n%d",p);
    p++;
    printf("\n\n%d",p);
    printf("\n\n%d",p-2);
    return 0;
}
