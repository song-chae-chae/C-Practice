#include <stdio.h>

int main(void) {
	int a = 4;
	a = a * 2 + 6 / 2 - 1;
	printf("첫번째 연산 결과는 : %d\n", a); // 10
	a = 4;
	a *= 2 + 6 / 2 - 1;
	printf("두번째 연산 결과는 : %d\n", a); // 16 (a * 오른쪽 연산 값)
	return 0;
}