#include <stdio.h>

int main(void) {
	int input1, input2;
	int total;

	printf("두 정수를 입력하세요. :");
	scanf_s("%d%d", &input1, &input2);
	total = input1 + input2;

	printf("두 수의 합은 %d이다. \n", total);

	return 0;
}