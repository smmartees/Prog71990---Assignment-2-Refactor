// samp - prog71990 - fall24 - Assignment 2

#include "utils.h"
#include <stdio.h>
#include <math.h>

#define VALID_INPUT					1
#define INVALID_INPUT_TOO_LOW		3
#define	INVALID_INPUT_TOO_HIGH		4
#define LOWER_BOUNDS				5
#define	UPPER_BOUNDS				25

//C
void createTable(int lowNum, int highNum) {
	printf(" _________________________________________\n");
	for (int i = lowNum; i <= highNum; i++) { 	// creates a table where each line is comprised of integer, cube, squared, squareroot
		int iCubed = i * i * i;
		int iSquared = i * i;
		float iSquareRoot = sqrtf((float)i);

		printf("| %d  |  %d  |  %d  |  %f  |\n", i, iCubed, iSquared, iSquareRoot);
		printf(" _________________________________________\n");
	}
}

//R
int lowInputValidator(int input) {
	
	if (input < LOWER_BOUNDS) {		// checking if input is less than 5
		printf("Your first input was too small. Try a bigger number.\n");
		return INVALID_INPUT_TOO_LOW;
	}

	return VALID_INPUT;
}

int highInputValidator(int input) {
	
	if (input > UPPER_BOUNDS) {		// checking if input is greater than 25
		printf("Your second input was too large. Try a smaller number.\n");
		return INVALID_INPUT_TOO_HIGH;
	}

	return VALID_INPUT;
}

//U
void inputSort(int* firstInput, int* secondInput) {
	int* temp = *firstInput;
	*firstInput = *secondInput;
	*secondInput = temp;
}

//D
