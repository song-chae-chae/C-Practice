#include <stdio.h>

int main(void) {
	int a = 5;
	int b = 3;

	a += b;
	printf("a += b�� ����� %d �Դϴ�.\n", a); // 8

	a -= b;
	printf("a -= b�� ����� %d �Դϴ�.\n", a); // 5

	a *= b;
	printf("a *= b�� ����� %d �Դϴ�.\n", a); // 15

	a /= b;
	printf("a /= b�� ����� %d �Դϴ�.\n", a); // 5

	a %= b;
	printf("a %= b�� ����� %d �Դϴ�.\n", a); // 2

	return 0;
}