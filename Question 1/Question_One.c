// samp - prog71990 - fall24 - Assignment 2 - Refactor

/* Question 1: prompt user for an integer. Print all integers starting at user input value
upto 16 more than the start value. Each value is output on a new line.*/

//Question 1: Print a range of numbers
//o Specifications : 4.00 / 4.00 (The program works and meets all of the 
//	specifications.)
//o Readability + Design : 4.00 / 4.00 (The code is exceptionally well 
//	organized and readable due to the use of good variable names, data and 
//	function structure(demonstrating SRP, coupling and /or cohesion).The code 
//	utilizes provided interfaces(encapsulation, interface segregation).
//	The code is designed ‘defensively’(meaning garbage is kept out).
//	The code allows for both effective testing and extension(OCP).)
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
	int userInput;
	int inputChecker;

	printf("Please input an integer: ");
	inputChecker = scanf_s("%d", &userInput);

	//process / output
	if (inputChecker != 1) {
		printf("\nInput is invalid, please try again with an integer.\n");
		return INVALID_INPUT;
	}
	else {
		countSixteenMore(userInput);
	}
	
	return 0;
}