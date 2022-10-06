#include <stdio.h>

void main() {
	void* a;
	int b = 1234;

	a = &b;
	printf("%d\n", *(int*)a); // void 포인터 a를 정수형 포인터로 형변환해주고 그 안에 들어있는 값을 꺼냄 
}
