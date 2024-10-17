// samp - prog71990 - fall24 - Assignment 2

/*Question 2: Print a table made out of ASCII printable characters. Each line should give:
an integer, its cube, its square, and its square root, in that order.
Prompt user for lower and upper limits for the table; program restraints between 5 & 25.
Output with for loop.*/

//Question 2: Display a table of numbers, squares and others
//o Specifications : 4.00 / 4.00 (The program works and meets all of the 
//	specifications.)
//o Readability + Design : 4.00 / 4.00 (The code is exceptionally well 
//	organized and readable due to the use of good variable names, data and 
//	function structure(demonstrating SRP, coupling and /or cohesion).The code 
//	utilizes provided interfaces(encapsulation, interface segregation).The code 
//	is designed ‘defensively’(meaning garbage is kept out).The code allows for 
//	both effective testing and extension(OCP).)
//o Reusability : 3.00 / 4.00 (Most of the code could be reused in other 
//	programs or the following issues were noted : )
//—Having hard coded(magic) values in function limits reusability
//o Documentation : 4.00 / 4.00 (The documentation is well written and clearly 
//	explains what the code is accomplishing and how.)

//	Refactor Specifications:
// 2. As much as is reasonably possible, convert the portions of your program 
//	that “do the work”(single responsibility) into properly formatted and 
//	specified functions(.h and .c files).
//3. For any input from the user, make sure to check the return value and 
//	assess whether the user input was appropriate.For any inappropriate input,
//	immediately exit the program, otherwise continue.

#include "utils.h"
#include <stdio.h>

#define INVALID_INPUT	2

int main(void) {

	//input
	int firstInput;				// variable for user's lower / first input
	int secondInput;				// variable for user's higher / second input
	int inputChecker;		// checks that the input is an integer

	printf("This program will produce a table of integers and their cubes, squares, and squareroots.\n\n");
	printf("Please input an integer (between 5 & 25) for the lower range of the table: ");
	inputChecker = scanf_s("%d", &firstInput);
	if (inputChecker != 1) {		// checking for integer input
		printf("\nYour first input was invalid. Please try again with an integer.\n");
		return INVALID_INPUT;
	}
	printf("Please input an integer (between 5 & 25) for the upper range of the table: ");
	inputChecker = scanf_s("%d", &secondInput);
	if (inputChecker != 1) {	// checking for integer input
		printf("\nYour second input was invalid. Please try again with an integer.\n");
		return INVALID_INPUT;
	}

	if (firstInput > secondInput) {
		inputSort(&firstInput, &secondInput);
	}

	//input validation
	int lowValidator = lowInputValidator(firstInput);
	int highValidator = highInputValidator(secondInput);

	//processing & output
	if (lowValidator == 1 && highValidator == 1) {		// checking user input is within parameters 5 & 25 
		createTable(firstInput, secondInput);
	}

	return 0;
}