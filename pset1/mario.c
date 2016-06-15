/*Mario program is used to build the half-pyramid.*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int height;
        
        // Users input must be between 0 and 23.
	printf("Enter a height value between (0 & 23)\n");

	do
	{
		height = GetInt();
		if(height < 0 || height > 23)
			printf("Retry: ");
	}
	while(height < 0 || height >  23);

	// Loops depending on user input.
	for(int i = 0; i < (height + 1); i++)
	{
		// Prints spaces depending on input.
		for(int j = 0; j < (height - i); j++ )
			printf(" ");

		// Prints hashes depending on user input.
		for(int h = 0; h < i; h++)
			printf("#");

		// New line with every loop.
		printf("\n");
	}

	return 0;
}
