#include <stdio.h>

int main(void) {
	unsigned short a = 32766;
	unsigned short b = 10;
	unsigned short c = a + b;
	int d = a + b;

	// ������ a�� �� 32766�� b�� �� 10�� ���� 32776�̴�.
	// short�� ǥ������ 0 ~ +65535 �� ������ �Ѿ���ν� ������ ���
	printf("������ a�� �� %d�� b�� �� %d�� ���� %d�̴�.\n", a, b, c);

	// ������ a�� �� 32766�� b�� �� 10�� ���� 32776�̴�.
	printf("������ a�� �� %d�� b�� �� %d�� ���� %d�̴�.\n", a, b, d);

	return 0;
}