#include <stdio.h>

int main(void) {
	short a = 32766;
	short b = 10;
	short c = a + b;
	int d = a + b;

	// 정수형 a의 값 32766와 b의 값 10의 합은 -32760이다.
	// short의 표현범위 -32768 ~ +32766 의 범위를 넘어감으로써 비정상적 출력
	printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d이다.\n", a, b, c);

	// 정수형 a의 값 32766와 b의 값 10의 합은 32776이다.
	printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d이다.\n", a, b, d);

	return 0;
}