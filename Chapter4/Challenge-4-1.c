#include <stdio.h>

void main() {
	int num;

	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("짝수\n");
	else
		printf("홀수\n");

}