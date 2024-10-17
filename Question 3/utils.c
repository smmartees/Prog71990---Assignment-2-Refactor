// samp - prog71990 - fall24 - Assignment 2 - Refactor 

#include "utils.h"
#include <stdio.h>

#define VALID_INPUT			1
#define INVALID_INPUT		0
#define LENGTH_OF_WEEK		7

//C

//R
void getUserInput(int* checker, int* input) {
	int tempInput;
	printf("Please input a number of days: ");
	*checker = scanf_s("%d", &tempInput);	// collects user input of days
	*input = tempInput;
}

//U
void daysToWeekCalculator(int days) {
	int weeks = days / LENGTH_OF_WEEK;			// finds number of weeks from input days
	int daysLeftOver = days % LENGTH_OF_WEEK;	// finds remaining days from input 
	printf("%d days is %d weeks, %d days.\n\n", days, weeks, daysLeftOver);
}

int inputValidator(int checker) {
	if (checker != 1) {				// checking for integer input. 
		printf("\nInvalid input.\n");
		printf("Please, restart the program and try again!\n");
		return INVALID_INPUT;
	}
	return VALID_INPUT;
}

void daysToWeeks() {
	int userDaysInput;
	int scanChecker;

	do {	// loop executes until input of 0 or less
		getUserInput(&scanChecker, &userDaysInput);
		
		inputValidator(scanChecker);
		
		if (userDaysInput != 0 && scanChecker == VALID_INPUT) {
			daysToWeekCalculator(userDaysInput);
		}
		else {
			printf("\nThank you for using the Days-to-Weeks calculator!\n");
		}
	} while (userDaysInput > 0);
}

//D
void welcomeToCalc() {
	printf("Welcome to our Days-to-Weeks calculator!\n");
	printf("If ever you want to exit, input 0 or less.\n\n");
}
