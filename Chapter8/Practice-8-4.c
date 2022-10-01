#include <stdio.h>

void main() {
	char a = 'A';
	char* pA = &a;

	int b = 100;
	int* pB = &b;

	double c = 3.14;
	double* pC = &c;

	printf("pA의 크기 : %dbyte\n", sizeof(pA)); // 포인터 변수 자체의 바이트는 4로 동일
	printf("pB의 크기 : %dbyte\n", sizeof(pB));
	printf("pC의 크기 : %dbyte\n", sizeof(pC));

	printf("*pA의 크기 : %dbyte\n", sizeof(*pA)); // 포인터 변수가 가리키는 변수의 실제 값이라서 다 다름 : 1
	printf("*pB의 크기 : %dbyte\n", sizeof(*pB)); // 4
	printf("*pC의 크기 : %dbyte\n", sizeof(*pC)); // 8

	// 포인터 변수에 자료형을 지정하는 이유는 포인터 변수가 가리키는 변수의 자료형을 알아야 얼마만큼의 메모리를 읽어야 하는지를 알 수 있기 때문임
}