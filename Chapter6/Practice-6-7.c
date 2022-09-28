#include <stdio.h>

int factorial(int n);

void main() {
	int n;
	int result;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &n);

	result = factorial(n);
	printf("%d!의 결과는 : %d\n", n, result);
}

int factorial(int n) {
	if (n == 1) return 1;
	return (n * factorial(n - 1));
}