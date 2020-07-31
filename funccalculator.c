//WAP to calculator with function
#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,op,sum,sub,mul;
     float div;
     printf("Welcome to Priya Calculator Service :\n 1: Addition \n 2: Substraction \n 3: Multiply \n 4: Division");
     printf("\n\n choose your choice : ");
     scanf("%d",&op);
     switch(op)
              {
                case 1: add();
                        break;
                case 2: subs();
                        break;
                case 3: multi();
                        break;
                case 4: divide();
                        break;
                default : printf("\nInvalid Input");
               }
}//main()
  void add()
  {
       int a,b,sum;
       printf("\nEnter two number : ");
       scanf("%d%d",&a,&b);
       sum=a+b;
       printf("\n addition = %d",sum);
       getch();
  }
  void subs()
  {
      int a,b,sub;
      printf("\nEnter two number : ");
      scanf("%d%d",&a,&b);
      sub=a-b;
      printf("substraction = %d",sub);
      getch();
  }
  void multi()
  {
     int a,b,mul;
     printf("\nEnter two number : ");
     scanf("%d%d",&a,&b);
     mul=a*b;
     printf("multiplication = %d",mul);
     getch();
  }
   void divide()
   {
      int a,b,div;
      printf("\nEnter two number : ");
      scanf("%d%d",&a,&b);
      div=a/b;
      printf("division = %f",div);
      getch();
   }

