// samp - prog71990 - fall24 - Assignment 2

/*Question 2: Print a table made out of ASCII printable characters. Each line should give:
an integer, its cube, its square, and its square root, in that order.
Prompt user for lower and upper limits for the table; program restraints between 5 & 25.
Output with for loop.*/

#include <stdio.h>
#include <math.h>

int main(void) {

	//input
	int lowInput;				// variable for user's lower / first input
	int highInput;				// variable for user's higher / second input
	int lowInputChecker;		// checks that the input is an integer
	int highInputChecker;		// checks that the input is an integer
	printf("This program will produce a table of integers and their cubes, squares, and squareroots.\n");
	printf("Please input an integer (between 5 & 25) as the lower range of the table: ");
	lowInputChecker = scanf_s("%d", &lowInput);
	printf("Please input an integer (between 5 & 25) as the upper range of the table: ");
	highInputChecker = scanf_s("%d", &highInput);

	if (lowInputChecker != 1) {		// checking for integer input
		printf("Your first input was invalid. Please try again with an integer.\n");
	}
	else if (lowInput < 5) {		// checking if input is less than 5
		printf("Your first input was too small. Try a bigger number.\n");
	}
	if (highInputChecker != 1) {	// checking for integer input
		printf("Your second input was invalid. Please try again with an integer.\n");
	}
	else if (highInput > 25) {		// checking if input is less than 5
		printf("Your second input was too large. Try a smaller number.\n");
	}
	if (lowInput > highInput) {
		printf("Your second input was larger than your first input.\n");
		printf("Please try again making the second input larger than the first.");
	}


	//processing & output
	int i;			// counting variable - starting at lower input terminating at higher input

	if (lowInput >= 5 && highInput <= 25) {		// checking user input is within parameters 5 & 25 
												//to execute the for loop
		printf(" _________________________________________\n");
		for (i = lowInput; i <= highInput; i++) {	// creates a table where each line is comprised of integer, cube, squared, squareroot
			int iCubed = i * i * i;
			int iSquared = i * i;
			float iSquareRoot = sqrtf((float)i);
			
			printf("| %d  |  %d  |  %d  |  %f  |\n", i, iCubed, iSquared, iSquareRoot);
			printf(" _________________________________________\n");
		}
	}

	return 0;
}