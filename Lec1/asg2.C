#include <stdio.h>

int main()
{
int ID;
int pass;
printf("Plese Enter Your ID: ");
scanf("%d",&ID);
printf("Enter your password: ");
scanf("%d",&pass);
switch(ID)
{
case 470:
printf("Welcome Mahmoud");
break;
switch(pass)
{
case 602:
printf("Welcome Mahmoud");
}
default :
printf("incorrect password");
break;
}
return 0;
}