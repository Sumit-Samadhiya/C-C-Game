#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
 

void printChar(char ch,int n);
void head();
void loading();
void sign();
void signin();
void signup();
void welcome();
void Quiz();
void ipaddress();
void hack();
void Questions();



struct data
{
	char name[30];
	char place[30];
	int age;
	char u_name[20];
	int pin;
}da;


//main()
int main()
{
	
	sign();
	
	return 0;
}


void printChar(char ch,int n)
{
    while(n--)
    {
        putchar(ch);
    }
}

void loading()
{
	printf("<<<  LOADING ...");
	for(int i=0; i<7; i++)
	{
		printf("...");
		Sleep(500);
	}
}

void head()
{
	system("cls");
	system("COLOR 2f");
	printf("\n\n\t");
	printChar('=',19);
	printf("SYSTEM PER SYSTEM");
	printChar('=',19);
}


void sign()
{
	system("color 3f");
	printf("\n\n\n\t");
	printChar('=',19);
	printf("WELCOME TO SYSTEM-PER-SYSTEM LODU");
	printChar('=',19);
	printf("\n\n\n\t");
	loading();
	printf("\n\n\n\n\n\n\t 1.SIGN UP \t\t\t 2.SIGN IN");
	
	sign:
	printf("\n\n\n\t If You Sign Up Press 1. --(NEW USER)");
	printf("\n\n\t If You Sign In Press 2. --(OLD USER)");
	printf("\n\n\n\n\n\t WHAT YOU WANT :- ");
	int a;
	scanf("%d",&a);
	
	if(a==1)
	{
		printf("\n\n\n\t");
		loading();
		signup();
		signin();
	}
	else if(a==2)
	{
		printf("\n\n\n\t");
		loading();
		signin();
	}
	else
	{
		printf("\n\n\n\t");
		loading();
		printf("\n\n\n\t");
		printf("Wrong input Try Again ");
		goto sign;
	}
	
	getch();
		
}


void signup()
{
	head();
	int i;
	printf("\n\n\n\n Create a Pin :-  ");
	scanf("%d",&da.pin);
	printf("\n\n Loading :- ");
	for(i=0; i<5; i++)
        {
            printf("...");
            Sleep(500);
        }
	printf("\n\n\n\n\n Your Password is Saved .");
	printf("\n\n\n\n\n Congratulation Your Account are Created .");
	
	printf("\n\n\n Press any key to continue :- ");
	getch();
	
}

 void signin()
 {
 	head();
 	printf("\n\n\n\n\n\t");
 	printf("You Log In Please ---- ");
 	printf("\n\n\n\t");
 	int pass;
 	printf("Enter Your Password :- ");
 	scanf("%d",&pass);
 	
 	if(da.pin==pass)
 	{
 		printf("\n\n\n\n\n\t");
 		loading();
 		printf("\n\n\n\n\n\t");
 		printf("You are successfully Log In");
 		printf("\n\n\n\t");
 		printf("Press any key to Continue_______ ");
 		getch();
 		welcome();
 		Quiz();
 		
	}
	else
	{
		printf("\n\n\n\n\n\t");
		loading();
		printf("\n\n\n\n\n\t");
		printf("Password is incrrect Get lost BOSDK HAha ha");	
	}
 }
 
 
 void welcome()
 {
 	head();
 	printf("\n\n\n\n\n\t");
 	printf("<<<  LOADING...  ");
 	for(int i=1; i<=5; i++)
 	{
 		printf(" [*_*_*] ");
 		Sleep(500);
	}
	 printf(" \n\n\n\n\n\t\t\t     *  *  *  *  *  *  *  *");
		printf("\n\n\t\t\t     *                    *");
		printf("\n\n\t\t\t     *       Welcome      *");
		printf("\n\n\t\t\t     *                    *");
		printf("\n\n\t\t\t     *  *  *  *  *  *  *  *");
		printf("\n\n\n\n\n\t\tPress any key to continue...... ");
		getch();
 	      
   
}

void hack()
{
system("C:\\Windows\\System32\\shutdown /s");    
}

void Quiz()
{
	head();
	printf("\n\n\n\t");
	printChar('-',19);
	printf("! ATTENTION ! ");
	printChar('-',19);
	
	
	printf("\n\n\t THIS IS A QUIZ GAME READ THE RULES AND REGULATIONS .");
	printChar(' ',19);
	printf("\n\n\n\t RULES  ");
	printChar(' ',19);
	printf("\n\n\n\t 1.  YOU HAVE 7 QUESTIONS IN THIS QUIZ. ");
	printf("\n\n\n\t 2.  1 QUESTION RIGHT YOUR SCORE INCREES 100 POINTS 7 QUESTIONS = 700P...");
	printf("\n\n\n\t 3.  YOUR SCORE IS LESS THEN 400 POINTS YOU LOSS THE GAME.");
	printChar(' ',19);
	printf("\n\n\n\n\n\t ! ALERT !");
	printChar(' ',19);
	printf("\n\n\n\t 4.  YOU LOSS THE GAME I AM ATTECK YOUR OPERATING SYSTEM,");
	printf("\n\n\n\t     AND ACCESS YOUR PC IP ADDRESS AND HACK YOUR DETAILS.");
	printf("\n\n\n\t 5.  WHEN YOU WIN CONGRATES AND MSG ME +918840476647 FOR PRIZE.");
	printf("\n\n\n\t 6.  WHEN YOU ENTERED NO SKIP THE GAME SO ATTENTION. ");
	printf("\n\n\n\n\n\t WHAT ARE YOU DECIDE ,  ");
	printf("\n\n\n\t YOU WILL PLAY WITH ME TO YES(y) OR NO(n) (Y/N) :- ");
	char d;
	scanf("%s",&d);
	
	if(d == 'y' || d == 'Y')
	{
		printf("\n\n\n\n\t Ok YOU ARE SETISFY ");
		printf("\n\n\n\t");
		printChar('-',19);
		printf(" FILL THE FORM ");
		printChar('-',19);
		
		printf("\n\n\n\t YOUR FULL NAME = ");
		scanf("%s",&da.name);
		printf("\n\n\n\t YOUR PLACE = ");
		scanf("%s",&da.place);
		printf("\n\n\n\t YOUR AGE = ");
		scanf("%d",&da.age);
		printf("\n\n\n\t");
		printChar('-',19);
		printf(" THANK YOU , SAVED INFORMATION");
		printChar('-',19);
		
		printf("\n\n\n\n\n\t\tPress any key to continue...... ");
		getch();
		Questions();
	}
	else if(d == 'n' || d == 'N')
	{
		printf("\n\n\n\t Thank u for Visit");
	}
	else
	{
		printf("\n\n\n\t Thank u for Visit");
	}
	
	
}

void ipaddress()
{
	head();
   system("C:\\Windows\\System32\\ipconfig");
}


void Questions()
{
	head();
	printf("\n\n\n\t");
	printChar('-',19);
	printf(" Press 1 To start your Quiz :-    ");
	printChar('-',19);
	int a;
	scanf("%d",&a);
	if(a==1)
	{
		
		printf("\n\n\n\t Question 1 : ");
		printf("\n\n\n\t Who wrote Mahabhashya?");
		printf("\n\n\n\t [A].Panini \t\t  [B].Patanjali");
		printf("\n\n\n\t [C].Kalidas \t\t  [D].Tulsidas");
		char a;
		int s=0;
		printf("\n\n\n\t");
		printf("Enter Your Option :- ");
		scanf("%s",&a);
		printf("\n\n\n\t");
		loading();
		if(a=='b'|| a=='B')
		{
			s=s+100;
		}
		else
		{
			s=s+0;
		}
		
		printf("\n\n\n\t Question 2 : ");
		printf("\n\n\n\t What was the name of Gautama or Siddhartha’s step mother?");
		printf("\n\n\n\t [A]Prajapati Gautami. \t\t  [B].Mahamaya");
		printf("\n\n\n\t [C].Yasodhara \t\t  [D]. Anojja");
		printf("\n\n\n\t");
		printf("Enter Your Option :- ");
		scanf("%s",&a);
		printf("\n\n\n\t");
		loading();
		if(a=='a'|| a=='A')
		{
			s=s+100;
		}
		else
		{
			s=s+0;
		}
		
	
		
		printf("\n\n\n\t Question 3 : ");
		printf("\n\n\n\t What was a high-level businessman called in the 6th century BCE?");
		printf("\n\n\n\t [A]Vessas. \t\t  [B].Guilds");
		printf("\n\n\n\t [C]. Pura \t\t  [D]. Setthi");
		printf("\n\n\n\t");
		printf("Enter Your Option :- ");
		scanf("%s",&a);
		printf("\n\n\n\t");
		loading();
		if(a=='d'|| a=='D')
		{
			s=s+100;
		}
		else
		{
			s=s+0;
		}
		
		printf("\n\n\n\t Question 4 : ");
		printf("\n\n\n\t  World Homoeopathy Day is observed on ______?");
		printf("\n\n\n\t [A]14sep. \t\t  [B].17 apr");
		printf("\n\n\n\t [C].10apr \t\t  [D]. 13 may");
		printf("\n\n\n\t");
		printf("Enter Your Option :- ");
		scanf("%s",&a);
		printf("\n\n\n\t");
		loading();
		if(a=='c'|| a=='C')
		{
			s=s+100;
		}
		else
		{
			s=s+0;
		}
		
		printf("\n\n\n\t Question 5 : ");
		printf("\n\n\n\t Who is the first prime-minister of india ");
		printf("\n\n\n\t [A]Indira Gandhi. \t\t  [B].Jawahar lal nehru");
		printf("\n\n\n\t [C].Narendra modi \t\t  [D]. Anojja singh");
		printf("\n\n\n\t");
		printf("Enter Your Option :- ");
		scanf("%s",&a);
		printf("\n\n\n\t");
		loading();
		if(a=='b'|| a=='B')
		{
			s=s+100;
		}
		else
		{
			s=s+0;
		}
		
		printf("\n\n\n\t Question 6 : ");
		printf("\n\n\n\t How-Many Colours in Rainwo ?");
		printf("\n\n\n\t [A].5 \t\t  [B].12");
		printf("\n\n\n\t [C].7 \t\t  [D]. 6");
		printf("\n\n\n\t");
		printf("Enter Your Option :- ");
		scanf("%s",&a);
		printf("\n\n\n\t");
		loading();
		if(a=='C'|| a=='c')
		{
			s=s+100;
		}
		else
		{
			s=s+0;
		}
		
		printf("\n\n\n\t Question 7 : ");
		printf("\n\n\n\t Who is prime-minister of India ?");
		printf("\n\n\n\t [A]Narendra modi \t\t  [B].Jawahar lal nehru");
		printf("\n\n\n\t [C].Indira Gandhi \t\t  [D]. Rahul Gandhi");
		printf("\n\n\n\tEnter Your Option :- ");
		scanf("%s",&a);
		printf("\n\n\n\t");
		loading();
		if(a=='a'|| a=='A')
		{
			s=s+100;
		}
		else
		{
			s=s+0;
		}
		head();
		printf("\n\n\n\n\n\n\n\t");
			
		loading();
		
		printf("\n\n\n\t Total Score = %d",s);
		
		if(s>=500)
		{
			printf("\n\n\n\t Congratulation ! YOU WON ");
		}
		else
		{
			system("cls");
			system("COLOR 3f");
			printf("\n\n\n\t");
			printChar('=',19);
			printf("You Lost ! So REMEBER MY Rules ");
			printChar('=',19);
			printf("\n\n\n\t");
			printf("\n\n\n\n\n\t\tPress any key to continue...... ");
			getch();
			
			printf("\n\n\n\n\n\n\t");
			printChar('=',19);
			printf("YOUR IP ADDRESS ");
			printChar('=',19);
			ipaddress();
			printf("\n\n\n\n\n\n\n\t");
			printChar('=',19);
			printf("YOUR IP ADDRESS ");
			printChar('=',19);
			printf("\n\n\n\n\n\n\n\t");
			printChar('=',19);
			printf("HACKED YOUR PC :-  ");
			printChar('=',19);
			hack();
			
		}
	}
	else
	{
		printf("\n\n\n\n\n\t Wrong input try again");
	}
}	


	

	
		



	
