// samp - prog71990 - fall24 - Assignment 2 - Refactor

#include "utils.h"

void countSixteenMore(int startNumber) {
	int countUpTo = 16;
	int countEnd = startNumber + countUpTo;
	for (startNumber; startNumber <= countEnd; startNumber++) {
		printf("%d\n", startNumber);
	}
}