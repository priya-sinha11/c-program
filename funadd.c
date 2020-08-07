//NO argument no return value
#include<stdio.h>
#include<conio.h>
void add();
void main()
{

    add();
}
 void add()
 {
     int a,b,c;
     printf("Emter two number:\n");
     scanf("%d%d",&a,&b);
     c = a + b;
     printf("Addition of %d and %d = %d",a,b,c);

 getch();
}
