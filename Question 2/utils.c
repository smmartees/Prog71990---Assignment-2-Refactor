// samp - prog71990 - fall24 - Assignment 2

#include "utils.h"
#include <stdio.h>
#include <math.h>

#define VALID_INPUT						1
#define INVALID_INPUT					2
#define INVALID_INPUT_OUT_OF_BOUNDS		3
#define LOWER_BOUNDS					5
#define	UPPER_BOUNDS					25

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
int inputValidator(int inputChecker, int input) {
	if (inputChecker != 1) {		// checking for integer input
		printf("\nYour input was invalid. Please try again with an integer.\n");
		return INVALID_INPUT;
	}
	else if (input < LOWER_BOUNDS) {		// checking if input is less than 5
		printf("\nYour input was too small. Try a bigger number.\n");
		return INVALID_INPUT_OUT_OF_BOUNDS;
	}
	else if (input > UPPER_BOUNDS) {		// checking if input is greater than 25
		printf("\nYour input was too large. Try a smaller number.\n");
		return INVALID_INPUT_OUT_OF_BOUNDS;
	}

	return VALID_INPUT;
}

//U
void inputSort(int* firstInput, int* secondInput) {
	if (*firstInput > *secondInput) {
		int* temp = *firstInput;
		*firstInput = *secondInput;
		*secondInput = temp;
	}
}

//D
void getUserInput(int* inputChecker, int* input) {
	int tempInput;
	printf("Please input an integer (between 5 & 25) for the lower range of the table: ");
	*inputChecker = scanf_s("%d", &tempInput);
	*input = tempInput;
}