#include <stdio.h>

void callReference(int* b);

void main() {
	// 참조 호출 방식 (call-by-reference)
	// 함수 호출 시 전달 인자로 메모리의 접근에 사용되는 주소값을 전달하는 방식

	int a = 1;
	callReference(&a);

	// 함수에서 a의 주소값에 접근해서 값이 변경되었으므로 a의 값도 변경됨
	printf("실인수 a의 출력 : %d\n", a); // 4
}

void callReference(int* b) {
	// 실인수 a의 주소값을 받아 그 안에 들어있는 값에 3을 더했음
	// a를 가리키는 포인터가 하나 더 생긴것
	*b = *b + 3;
	printf("형식인수 *b의 출력 : %d\n", *b); // 4
}