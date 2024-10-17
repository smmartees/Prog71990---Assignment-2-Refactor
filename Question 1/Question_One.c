// samp - prog71990 - fall24 - Assignment 2

/* Question 1: prompt user for an integer. Print all integers starting at user input value
upto 16 more than the start value. Each value is output on a new line.*/

#include <stdio.h>

int main(void) {

	//input
	int userInput;
	int inputChecker;

	printf("Please input an integer: ");
	inputChecker = scanf_s("%d", &userInput);

	//process / output
	int countEnd = userInput + 16;

	if (inputChecker != 1) {
		printf("Input is invalid, please try again with an integer.");
	}
	else {
		for (userInput; userInput <= countEnd; userInput++) {
			printf("%d\n", userInput);
		}
	}
	
	

	return 0;
}