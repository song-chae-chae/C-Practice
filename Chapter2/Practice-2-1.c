#include <stdio.h>

int main(void) {
	int value; // ���� -> value �޸� �ȿ��� �ǹ� ���� ������ �� ��
	int num = 5; // ����� ���ÿ� �ʱ�ȭ
	value = 100; // ���� �Ǿ� �ִ� value ���� �ȿ� �ǹ� �ִ� �� ��

	printf("%d %d \n", value, num);
	// %d : ���� ����(conversion specifier) -> ����ϰ��� �ϴ� ������ ��� ���� ����

	return 0;
}