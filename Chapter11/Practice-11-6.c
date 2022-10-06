#include <stdio.h>

void main() {
	void* a;
	int b = 1234;

	a = &b;

	// void형 포인터 a 가 정수형 변수 b의 주소값 받고 있는데 a는 b의 주소값만 넘겨받았을 뿐, 어떤 자료형인지는 모름 -> error
	printf("%d\n", *a); // error
}
