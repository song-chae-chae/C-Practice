#include <stdio.h>

void main() {
	int input1, input2;

	printf("두 정수를 입력 : ");
	scanf_s("%d %d", &input1, &input2);

	int max = get_Max(input1, input2);
	int min = get_Min(input1, input2);
	printf("최대 : %d, 최소 : %d\n", max, min);
}

int get_Max(int a, int b) {
	return a > b ? a : b;
}
int get_Min(int a, int b) {
	return a > b ? b : a;
}