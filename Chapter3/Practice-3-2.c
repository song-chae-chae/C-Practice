#include <stdio.h>

int main(void) {
	int a = 5;
	int b = 3;

	a += b;
	printf("a += b의 결과는 %d 입니다.\n", a); // 8

	a -= b;
	printf("a -= b의 결과는 %d 입니다.\n", a); // 5

	a *= b;
	printf("a *= b의 결과는 %d 입니다.\n", a); // 15

	a /= b;
	printf("a /= b의 결과는 %d 입니다.\n", a); // 5

	a %= b;
	printf("a %= b의 결과는 %d 입니다.\n", a); // 2

	return 0;
}