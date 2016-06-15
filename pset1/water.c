
/* The water program calculates water waste */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
        // User input must be a hole number.
        printf("Enter time spent in shower(In Minutes)\nMinutes: ");
        int time_spent = GetInt();

        // Calculates water waste.                   
        printf("Bottles: %i\n", time_spent * 192 / 16);

        return 0;
}
