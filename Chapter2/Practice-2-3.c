#include <stdio.h>

int main(void) {
	char ch = 50;
	short sNum = 1000;
	int iNum = 50000;
	float fNum = 3.14f;
	double dNum = 3.1415;

	printf("���� ch�� ũ��� %d����Ʈ�̴�.\n", sizeof ch); // sizeof ch : ������ ũ�� ����Ʈ�� ���
	printf("���� sNum�� ũ��� %d����Ʈ�̴�.\n", sizeof sNum);
	printf("���� iNum�� ũ��� %d����Ʈ�̴�.\n", sizeof iNum);
	printf("���� fNum�� ũ��� %d����Ʈ�̴�.\n", sizeof fNum);
	printf("���� dNum�� ũ��� %d����Ʈ�̴�.\n", sizeof dNum);

	printf("�ڷ��� ch�� ũ��� %d����Ʈ�̴�.\n", sizeof(char)); // sizeof(char) : �ڷ����� ũ�� ����Ʈ�� ���
	printf("�ڷ��� sNum�� ũ��� %d����Ʈ�̴�.\n", sizeof(short));
	printf("�ڷ��� iNum�� ũ��� %d����Ʈ�̴�.\n", sizeof(int));
	printf("�ڷ��� fNum�� ũ��� %d����Ʈ�̴�.\n", sizeof(float));
	printf("�ڷ��� dNum�� ũ��� %d����Ʈ�̴�.\n", sizeof(double));

	return 0;
}