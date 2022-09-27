#include <stdio.h>

int main(void) {
	int input1, input2;
	
	printf("두 정수를 입력하시오 : ");
	scanf_s("%d%d", &input1, &input2);

	int share = input1 / input2;
	int remainder = input1 % input2;

	printf("%d / %d 의 몫은 %d, 나머지는 %d\n", input1, input2, share, remainder);

	return 0;
}