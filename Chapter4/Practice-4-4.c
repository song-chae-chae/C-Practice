#include <stdio.h>

void main() {
	int a;

	printf("정수 입력");
	scanf_s("%d", &a);

	if (a > 5)
		printf("5보다 큼\n");
	else if (a < 5)
		printf("5보다 작음\n");
	else
		printf("5와 같음\n");
}