#include "fizzbuzz.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void assert_values(const int value, const char *expected) {
	char *actual = fizzbuzz(value);
	assert(strcmp(actual, expected) == 0);
	free(actual);
}

static void should_return_1_when_passing_1(void) {
	assert_values(1, "1");
}

static void should_return_2_when_passing_2(void) {
	assert_values(2, "2");
}

static void should_return_fizz_when_passing_3(void) {
	assert_values(3, "Fizz");
}

static void should_return_fizz_when_passing_6(void) {
	assert_values(6, "Fizz");
}

static void should_return_fizz_when_passing_9(void) {
	assert_values(9, "Fizz");
}

static void should_return_buzz_when_passing_5(void) {
	assert_values(5, "Buzz");
}

static void should_return_buzz_when_passing_10(void) {
	assert_values(10, "Buzz");
}

static void should_return_buzz_when_passing_20(void) {
	assert_values(20, "Buzz");
}

static void should_return_fizzbuzz_when_passing_15(void) {
	assert_values(15, "FizzBuzz");
}

static void should_return_fizzbuzz_when_passing_30(void) {
	assert_values(30, "FizzBuzz");
}

static void should_return_fizzbuzz_when_passing_45(void) {
	assert_values(45, "FizzBuzz");
}

int main(void) {
	should_return_1_when_passing_1();
	should_return_2_when_passing_2();
	should_return_fizz_when_passing_3();
	should_return_fizz_when_passing_6();
	should_return_fizz_when_passing_9();
	should_return_buzz_when_passing_5();
	should_return_buzz_when_passing_10();
	should_return_buzz_when_passing_20();
	should_return_fizzbuzz_when_passing_15();
	should_return_fizzbuzz_when_passing_30();
	should_return_fizzbuzz_when_passing_45();
	puts("All tests passed");
}

