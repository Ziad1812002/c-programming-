#include <stdio.h>

int main()
{
	int height,counter,j;
	printf("Please Enter the height of the pyramid: ");
	scanf("%d",&height);
	
	for (counter = 1; counter <=height; counter ++)
	{
		for (j=1; j<=height-counter; j++)
		{
			printf(" ");
		}
		
		for (j=1; j<=2*counter-1; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
	
	