#include <stdio.h>

void mario(int h);

int main(void)
{
	int h = 0;
	printf("Enter the height:");
	scanf("%i", &h);
	mario(h);


}


// Functions

void mario(int h)
	{

	if (h < 0)
	{
		printf("Type in postivevalue");
	}
	else if (h == 0)
	{
		printf("#");
	}
	else 
	{
			
		int step = 0;
		
		for (int j = h; j >= 1; j--)
			{
				printf(" ");		
			}
		
		printf("#");
		printf("\n");

		for (int i = h; i >= 1; i--)
		{
			step = step + 1;
				
			for (int j = i-1; j >= 1; j--)
			{
				printf(" ");		
			}

			for (int k = 1; k <= step; k++)
			{
				printf("#");		
			}
				
			printf(" ");
				
			
			for (int k = 1; k <= step; k++)
			{
				printf("#");		
			}
			
			printf("\n");


		}
		
		
		
	}

	
	}