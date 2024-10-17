// samp - prog71990 - fall24 - Assignment 2

/*Question 3: prompt user to enter some number of days and then converts that value to weeks and days.
Using a do...while loop to allow the user to repeatedly enter day values for conversion.
do...while loop should terminate upon non-positive user input.*/

#include <stdio.h>

#define LENGTH_OF_WEEK		7

int main(void) {

	//input
	int userDaysInput;

	//process / output
	do {				// loop executes until input of 0 or less
		printf("Please input a number of days: ");
		int scanChecker = scanf_s("%d", &userDaysInput);	// collects user input of days
		int weeks = userDaysInput / LENGTH_OF_WEEK;						// finds number of weeks from input days
		int daysLeftOver = userDaysInput % LENGTH_OF_WEEK;				// finds remaining days from input less the calculated week

		if (scanChecker != 1) {								// checking for integer input. 
			printf("Invalid input.\n");						// invalid input terminates the program.
			printf("Please, restart the program and try again!");
			return 0;
		}

		printf("%d days is %d weeks, %d days.\n", userDaysInput, weeks, daysLeftOver);
	} while (userDaysInput > 0);


	return 0;
}