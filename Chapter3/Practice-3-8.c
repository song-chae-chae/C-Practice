#include <stdio.h>

int main(void) {
	// & 연산자 : 이항 연산자 
	// 두 개의 비트가 모두 1일때 참

	int a = 74; // 0100 1010
	int b = 19; // 0001 0011
				// 0000 0010

	printf("a & b의 연산 결과는 : %x\n", a & b); // 16진수
	printf("a & b의 연산 결과는 : %d\n", a & b); // 10진수

	return 0;
}