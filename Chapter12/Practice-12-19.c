#include <stdio.h>
#include <stdlib.h>

void main() {
	double value = 314.159265;
	char* pStr;
	int dec, sign;

	pStr = fcvt(value, 4, &dec, &sign);
	printf("��ȯ�� ���ڿ� %s\n", pStr);
	printf("�Ҽ��� ��ġ�� %d, ��ȣ�� %d\n", dec, sign);

	value = -314.159265;
	pStr = fcvt(value, 6, &dec, &sign);
	printf("��ȯ�� ���ڿ� %s\n", pStr);
	printf("�Ҽ��� ��ġ�� %d, ��ȣ�� %d\n", dec, sign);
}