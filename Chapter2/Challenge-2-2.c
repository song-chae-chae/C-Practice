#include <stdio.h>

int main(void) {
	int input1, input2, input3;
	int result;

	printf("�� ������ �Է��Ͻÿ�. :");
	scanf_s("%d%d%d", &input1, &input2, &input3);

	result = input1 * input2 * input3;

	printf("�� ������ ���� %d�̴�.", result);

	return 0;
}