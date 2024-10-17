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


int main(void) {

	int firstInput;				// variable for user's first input
	int secondInput;			// variable for user's second input
	int inputChecker;			// checks that the input is an integer

	printf("This program will produce a table of integers and their cubes, squares, and squareroots.\n\n");
	
	//get input / input validation
	getUserInput(&inputChecker, &firstInput);
	int firstInputValidator = inputValidator(inputChecker, firstInput);
	
	int secondInputValidator;
	if (firstInputValidator == 1) {
		getUserInput(&inputChecker, &secondInput);
		secondInputValidator = inputValidator(inputChecker, secondInput);
	}
	
	//processing & output
	inputSort(&firstInput, &secondInput);

	if (firstInputValidator == 1 && secondInputValidator == 1) {	//if all is well.. 
		createTable(firstInput, secondInput);
	}

	return 0;
}