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