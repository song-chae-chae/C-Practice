#include <stdio.h>

void main() {
	int sum = 0;
	int input = 0;

	do {
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &input);
		sum += input;
	} while (input != 0);

	printf("총 합은 %d\n", sum);
}