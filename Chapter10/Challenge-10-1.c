#include <stdio.h>

void calculator(int* a, int* b, int* sum, int* multiple);

void main() {
	int a, b;
	int sumResult, multipleReuslt;

	printf("두 수를 입력하시오 : ");
	scanf_s("%d%d", &a, &b);

	calculator(&a, &b, &sumResult, &multipleReuslt);

	printf("합 : %d\n", sumResult);
	printf("곱 : %d\n", multipleReuslt);
}

void calculator(int* a, int* b, int* sum, int* multiple) {
	*sum = *a + *b;
	*multiple = *a * *b;
}