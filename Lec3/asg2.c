#include <stdio.h>

int main()
{
	int ID,pass,counter,flag=0;
	printf("Please Enter your ID: ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Please Enter Password: ");
		           for (counter = 0; counter <3; counter++)
				   {
					   scanf ("%d",&pass);
					   if(pass == 7788)
					   {
						   printf("Welcome Ahmed");
						   flag = 1;
						   break;
					   }
					   
					   else if (counter<2)
					   {
						   printf("Try again: ");
					   }
				   }
				   break;
				   
		case 5678: printf("Please Enter Password: ");
		           for (counter = 0; counter <3; counter++)
				   {
					   scanf ("%d",&pass);
					   if(pass == 5566)
					   {
						   printf("Welcome Amr");
						   flag = 1;
						   break;
					   }
					   
					   else if (counter<2)
					   {
						   printf("Try again: ");
					   }
				   }
				   break;
				   
		case 9870: printf("Please Enter Password: ");
		           for (counter = 0; counter <3; counter++)
				   {
					   scanf ("%d",&pass);
					   if(pass == 1122)
					   {
						   printf("Welcome Wael");
						   flag = 1;
						   break;
					   }
					   
					   else if (counter<2)
					   {
						   printf("Try again: ");
					   }
				   }
				   break;
				   
		default  : printf("You are not registered");
		           flag = 2;
	}
	
	if (flag == 0)
	{
		printf("Incorrect password for 3 times, No more tries");
	}
	return 0;
}