// samp - prog71990 - fall24 - Assignment 2 - Refactor

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

#include "utils.h"
#include <stdio.h>



int main(void) {

	//start
	welcomeToCalc();

	//input / process / output
	daysToWeeks();

	return 0;
}