#include <stdio.h>

int main(void) {
	int input1, input2;
	int total;

	printf("�� ������ �Է��ϼ���. :");
	scanf_s("%d%d", &input1, &input2);
	total = input1 + input2;

	printf("�� ���� ���� %d�̴�. \n", total);

	return 0;
}