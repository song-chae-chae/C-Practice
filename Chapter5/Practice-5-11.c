#include <stdio.h>

void main() {
	int i, input, total = 1;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &input);

	for (i = input; i > 0; i--) {
		total = total * i;
	}
	printf("%d! = %d\n", input, total);
}