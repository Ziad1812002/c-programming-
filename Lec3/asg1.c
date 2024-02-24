#include <stdio.h>

int main()
{
	int FirstNumber,SeconedNumber;
	
	while(1)
	{
		printf("Please enter first number ");
		scanf("%d",&FirstNumber);
		
		printf("Please enter second number ");
		scanf("%d",&SeconedNumber);
		
		printf("The result of %d and %d is %d\n",FirstNumber,SeconedNumber,FirstNumber+SeconedNumber);
		
	}
	return 0;
}