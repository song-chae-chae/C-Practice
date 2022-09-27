#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("세 정수를 입력하시오 : ");
	scanf_s("%d%d%d", &a, &b, &c);
	int result = (a * b) + (b / c) * (a % c);

	printf("(a * b) + (b / c) * (a %% c) = %d\n", result);

	return 0;
}