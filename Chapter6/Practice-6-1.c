#include <stdio.h>

int Add(int a, int b); // 함수의 원형 선언

void main() {
	int a;
	int b;
	int hap;

	printf("두 개의 정수를 입력 : ");
	scanf_s("%d %d", &a, &b);
	
	hap = Add(a, b);

	printf("%d", hap);
}

int Add(int a, int b) {
	return a + b;
}