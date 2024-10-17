// samp - prog71990 - fall24 - Assignment 2

/*Question 3: prompt user to enter some number of days and then converts that value to weeks and days.
Using a do...while loop to allow the user to repeatedly enter day values for conversion.
do...while loop should terminate upon non-positive user input.*/

//Question 3: Convert a number of days to mixed weeks / days format
//o Specifications : 4.00 / 4.00 (The program works and meets all of the 
//	specifications.)
//o Readability + Design : 4.00 / 4.00 (The code is exceptionally well 
//	organized and readable due to the use of good variable names, data and 
//	function structure(demonstrating SRP, coupling and /or cohesion).
//	The code utilizes provided interfaces(encapsulation, interface segregation).
//	The code is designed ‘defensively’(meaning garbage is kept out).
//	The code allows for both effective testing and extension(OCP).)
//o Reusability : 4.00 / 4.00 (The code could be reused as a whole or each 
//	routine could be reused.)
//o Documentation : 4.00 / 4.00 (The documentation is well written and clearly 
//	explains what the code is accomplishing and how.)

//	Refactor Specifications:
// 2. As much as is reasonably possible, convert the portions of your program 
//	that “do the work”(single responsibility) into properly formatted and 
//	specified functions(.h and .c files).
//3. For any input from the user, make sure to check the return value and 
//	assess whether the user input was appropriate.For any inappropriate input,
//	immediately exit the program, otherwise continue.

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