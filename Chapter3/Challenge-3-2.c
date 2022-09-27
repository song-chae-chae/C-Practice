#include <stdio.h>

int main(void) {
	int input1, input2, input3;
	int result;

	printf("세 정수를 입력하시오 :");
	scanf_s("%d%d%d", &input1, &input2, &input3);

	result = input1 * input2 + input3;
	printf("%d * %d + %d = %d", input1, input2, input3, result);

	return 0;
}