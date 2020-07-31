#include<stdio.h>  
#include<stdlib.h>  
#include<conio.h>  
  
struct play {  
            char name[20];  
            int score;  
            int rat;       //star ratings  
}p;  
  
void high_score();  
void start();  
void help();  
  
void main()  
{ int chc=0;
    clrscr();

  
    printf("Press 1 to start the game\n2 to see high scores \n3 to see game help\n0 to exit :   ");  
    scanf("%d",&chc);  
  
    switch(chc)  
    {  
        case 1:  
        start();  
        break;  
  
        case 2:  
        high_score();  
        break;  
  
        case 3:  
        help();  
        break;  
  
          default:  
          exit(1);  
    }  
  
  getch();  
}  
  
void help()  
{  
     int ch;  
  
     printf("\n\n ************************* GAME HELP *************************");  
     printf("\n -------------------------------------------------------------------------");  
     printf("\n .................... C program Quiz Game...........\n");  
     printf("\n >> There will be a total of 20 questions");  
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");  
     printf("\n    right option");  
     printf("\n >> Each question will carry 5 points");  
     printf("\n >> You will be asked questions continuously.");  
     printf("\n >> There is no negative marking for wrong answer");  
  
    printf("\n\n ************************* BEST OF LUCK *************************\n\n");  
  
  
    printf("\nContinue playing ? (1/0) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  
  
void start()  
{  
          int ans;  
          int count=0;  
          char rating[20];  
  
          FILE *fp;  
  
          if((fp=fopen("\\tmp\play2.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
  
  
        printf("\nPlease enter your name: ");  
        scanf("%s",p.name);  
  
  
  
  
        printf("******************* Welcome \" %s \"  to C Quiz Game *************************** \n\n", p.name);  
  

	printf("Q(1).which of the following is not keyword in java \n 1.boolean \t\t2.static \n 3.void \t\t 4.private \n\n");

	printf("Your answer: ");
	scanf("%d",&ans);

	if(ans==1)
	{
	    printf("Correct! +5 points\n\n");
	    ++count;

	}
	else
	{
	    printf("Wrong answer! Correct answer is 1.boolean \n\n");
	}

	printf("Q(2) what is the size of char variable \n 1.8 bit \t\t2.16 bit \n3.32 bit \n4.64 bit\n\n");
	printf("Your answer: ");
	scanf("%d",&ans);

	if(ans==2)
	{
	    printf("Correct! +5 points\n\n");

		++count;

	}
	else
	{
	    printf("Wrong answer! Correct answer is 2.16 bit \n\n");
	}

	printf("Q(3) Method Overloading is an example of \n1.static Binding \t\t2.Dynamic Binding\n3.Both of the above \t\t4.None of the above\n\n");

	printf("Your answer: ");
	scanf("%d",&ans);

	if(ans==1)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 1.Static Binding \n\n");
	}


	printf("Q(4).can try statement be nested \n1.True\n2.flase\n\n");
	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==1)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 1. True \n\n");
	}

	printf("Q(5).What is the default value of int variable \n1.0\t2.0.0 \n3.null\t4.not defined \n\n");
	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==1)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 1.0 \n\n");
	}

	printf("Q(6).Package of drawing() method is \n1.java.applet\t2.java.io\n3javax.swing\t4.java.awt \n\n");
	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==4)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 4.java.awt\n\n");
	}

	printf("Q(7).which of these method can be used to know which key is pressed \n1.getActionEvent()\t2.getActionKey()\n3.getModifier()\t\t4.getKey() \n\n");
	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==3)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 3.getModifier \n\n");
	}

	printf("Q(8). swing element are preceded by the letter \n1.S \t2. A\n3.x \t4. j\n\n");
	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==4)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 4.j\n\n");
	}

	printf("Q(9).JDBC technology based drivers generally fit into how many categories  \n1.4\t2.3\n3.2\t4.5\n\n");
	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==1)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 1.4\n\n");
	}

	printf("Q(10).JDBC stands for \n1.java database connectivity\t2.java database concept\n3.java  database communications\t4.none of the above\n\n");
	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==1)
	{
	    printf("Correct! +5 points\n\n");

		++count;
	}
	else
	{
	    printf("Wrong answer! Correct answer is 1. java database connectivity\n\n");
	}




	if(count>0)

	{
		printf("Thanks for playing, Your scored: %d points \t", count*5);

		p.score=count*5;

		if(p.score >= 50)
		{
		    printf("Rating: * * * * *");
		    p.rat=5;
		}
		else if(p.score >= 40 && p.score < 50)
		{
		    printf("Rating: * * * *");
		    p.rat=4;
		}
		else if(p.score >=30 && p.score < 40)
		{
		    printf("Rating: * * *");
		  p.rat=3;
		}
		else if(p.score >= 20 && p.score < 30)
		{
		    printf("Rating: * *");
		    p.rat=2;
		}
		else if(p.score < 20)
		{
		    printf("Rating: *");
		     p.rat=1;
		}

            //writing to file  
  
                    fprintf(fp,"%s %d %d", p.name,p.score,p.rat);  
                    fclose(fp);  
        }  
        else  
        {  
            printf("Try again!");  
        }  
}  
  
void high_score()  
{  
  
    int ch;  
  
    FILE *fp;  
    if((fp=fopen("\\tmp\play2.txt", "r"))==NULL)  
          {  
                //printf("error opening file\n");  
                printf("\nNo games played yet!\n");  
            }  
            else  
            {  
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.rat) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.rat);  
    }  
  
    fclose(fp);  
  
    }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  
