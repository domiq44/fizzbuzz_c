#include "fizzbuzz.h"

#include <malloc.h>
#include <stdio.h>
#include <string.h>

char* fizzbuzz(int value) {
	char *ptr = NULL;
	if (value % 15 == 0) {
		ptr = (char*) malloc(9);
		strcpy(ptr, "FizzBuzz");
		return ptr;
	}
	if (value % 5 == 0) {
		ptr = (char*) malloc(5);
		strcpy(ptr, "Buzz");
		return ptr;
	}
	if (value % 3 == 0) {
		ptr = (char*) malloc(5);
		strcpy(ptr, "Fizz");
		return ptr;
	}
	ptr = (char*) malloc(20);
	sprintf(ptr, "%d", value);
	return ptr;
}
