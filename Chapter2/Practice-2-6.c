#include <stdio.h>

int main(void) {
	// �Ǽ����� ���е� ��
	// float : ����Ʈ 4 , ���е� : �Ҽ��� ���� 7�ڸ�
	// double : ����Ʈ 8, ���е� : �Ҽ��� ���� 15�ڸ�
	// long double : ����Ʈ 10 ~ 16, ���е� : �Ҽ��� ���� 19�ڸ�
	double area;
	double radius = 5;

	area = radius * radius * 3.14;

	printf("���� ���̴� %f�̴�.\n", area);

	return 0;
}