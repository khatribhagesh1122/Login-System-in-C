//admin PWD
#include<stdio.h>
#include<string.h>

void main()
{
	char un[10],pw[10];
	int i=0;
	clrscr();
	   do
		{
		printf("\n Enter the user name");
		scanf("%s",un);
		printf("\n Enter the password");
		scanf("%s",pw);
		    if(strcmp(un,"admin")==0 && strcmp(pw,"staff")==0)
			{
				printf("\n Welcome..Your login is successful");
				break;
			}
		   else
			{
				printf("\n Wronng User Name/ Password");
			}
		i++;
		   if(i==3)
				printf("\n You have tried thrice!!! You have reached maximum login limits!!BYE!!!");
		}while(i!=3);
getch();
}
