/* wap menu driven program to perform following task using different catagories.
	1.prime number
	2.pallindrome number
	3.reverse number
	4.print even number series till end
	5.
	6.exit*/

#include<stdio.h>
#include<conio.h>
void primenumber();
void pallindromenumber();
void reversenumber();
void evennumber();
void menu();

void main()
{
	int a,b,c,rev,n;
	char ch;
	clrscr();
	do
	{
	       //	c=menu;
		switch(c)
		{
			printf("menu");
			printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-");
			printf("\n\t 1.prime number \n\t 2.pallndrome number \n\t 3.reverse number \n\t 4.even number \n\t 5. \n\t 6.exit\n\t");
			printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-");
			printf("Enter your choise:");
			scanf("%d",&a);
			case 1:
				 prime();
				 break;
			case 2:
				printf("Enetr a number to reverse:");
				scanf("%d",&n);
				while(n>0)
			case 3:
				rev=reverse();
				printf("\n reverse is %d",rev);
				break;
			case 4:
				printf("\n Enter any numbre");
				scanf("%d",&b);
				break;
			case 5:
				break;
			case 6: exit(0);
				default:
					printf("Invalid choise");

		}
			printf("\n\t Do you want to continue ?(yes=Y/y,no=N/n");
			flushall();
			scanf("%c",&ch);
		}
			while (ch=='y'||ch=='y');
			getch();
		}

