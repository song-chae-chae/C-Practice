#include <stdio.h>

int main(void) {
	int a = 74; // 0100 1010
	int b = 19; // 0001 0011
				// 0101 1001 : ^연산 시 같은 비트끼리 연산 결과 0, 다른 비트끼리 연산 결과 1
	
	printf("a ^ b의 연산 결과는 : %x\n", a ^ b); // 16진수
	printf("a ^ b의 연산 결과는 : %d\n", a ^ b); // 10진수

	return 0;
}