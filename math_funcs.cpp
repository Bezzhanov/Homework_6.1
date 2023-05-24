#include "math_funcs.h"
int addition(int a, int b) { return a + b; };
int subtraction(int a, int b) { return a - b; };
int multiply(int a, int b) { return a * b; };
int division(int a, int b) {
	if (b == 0) {
		return 0;
	}
	return a / b;
};
int exponentiation(int a, int b) {
	int result = a;
	if (b == 0) {
		return 1;
	}
	for (int i = 1; i < b; ++i) {
		result *= a;
	}

	return result;
}