#include <stdio.h>

void Factorial(int num, int* result);

void main() {
	int a;
	int result;
	scanf_s("%d", &a);

	Factorial(a, &result);
	printf("결과 : %d\n", result);
}

void Factorial(int num, int* result) {
	int factorial = 1;
	for (int i = num; i > 0; i--) {
		factorial *= i;
	}

	*result = factorial;
	printf("함수 안 결과 : %d\n", factorial);
}
