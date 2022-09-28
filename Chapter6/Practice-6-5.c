#include <stdio.h>

int global;
void Add(int a, int b);

void main() {
	int a;
	int b;

	printf("두 개의 정수를 입력 : ");
	scanf_s("%d %d", &a, &b);

	Add(a, b);

	printf("두 정수의 합은 %d\n", global);
}

void Add(int a, int b) {
	global = a + b;
}