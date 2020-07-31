//NO return value but argument
#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    add(a,b);
}
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("additon of %d and %d = %d",a,b,c);
    getch();
}
