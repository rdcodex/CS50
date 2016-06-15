/*The greedy program is used to determine the minimum number of coins needed when making change*/

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
  float change;
  int cents, coins, quaters, dimes, nickels, pennies;

  printf("Enter how much change is owed: ");

  do
  {
    printf("Retry: ");
    change = GetFloat();

  }while(change < 0);

  // Turns change into cents.
  cents = (int) round(change * 100);

  coins = 0;

  quaters = 0;
        while(quaters < cents)
        {
                coins += cents / 25;
                cents %= 25;
                quaters += 25;
        }

        quaters = 0;
        while(quaters < cents)
        {
                coins += cents / 25;
                cents %= 25;
                quaters += 25;
        }

        dimes = 0;
        while(dimes < cents)
        {
                coins += cents / 10;
                cents %= 10;
                dimes += 10;
        }

        nickels = 0;
        while(nickels < cents)
        {
                coins += cents / 5;
                cents %= 5;
                nickels += 5;
        }

        pennies = 0;
        while(pennies < cents)
        {
                coins += cents / 1;
                pennies += 1;
        }

        printf("%i\n", coins);

        return 0;
}
