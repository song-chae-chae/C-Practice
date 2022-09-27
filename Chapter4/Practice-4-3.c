#include <stdio.h>

void main() {
	int a;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a > 5)
		printf("입력 값은 5보다 크다.\n");
	else
		printf("입력 값은 5보다 크지 않다.\n");
}