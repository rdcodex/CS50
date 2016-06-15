/*The greedy program is used to determine the minimum number of coins needed when making change*/

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
	float change;
	int cents, coins, quaters, dimes, nickels, pennies;

	// Must take positive number input.
	do
	{
		printf("Enter how much change is owed: ");
        	change = GetFloat();
		
	}while(change < 0);

	// Turns change into cents.
	cents = (int) round(change * 100);

	// instantiate coins.
	coins = 0;

	// instantiate quaters.
	quaters = 0;

	// Loop, modulo - Quaters.
	while(quaters < cents)
	{
		coins += cents / 25;
        	cents %= 25;
        	quaters += 25;
  	}

  	// instantiate dimes.
  	dimes = 0;

  	// Loop, modulo - Dimes.
  	while(dimes < cents)
  	{
    		coins += cents / 10;
    		cents %= 10;
    		dimes += 10;
  	}

  	// instantiate nickels.
  	nickels = 0;

  	// Loop, modulo - Nickels.
  	while(nickels < cents)
  	{
  		coins += cents / 5;
    		cents %= 5;
    		nickels += 5;
  	}

  	// instantiate pennies.
  	pennies = 0;

  	// Loop, modulo - Pennies.
  	while(pennies < cents)
  	{
    		coins += cents / 1;
    		pennies += 1;
  	}

  	// print result.
  	printf("%i\n", coins);

  	return 0;
}


