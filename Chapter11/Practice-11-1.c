#include <stdio.h>


void main() {
	// 이중 포인터
	int a; // 정수형 변수
	int* p; // 정수형 포인터 변수
	int** pp; // 정수형 이중 포인터 변수

	a = 100;
	p = &a;
	pp = &p; // a의 주소값을 p가 가지고 있고 p의 주소값을 pp가 가리킨다

	printf("a의 주소값 &a : %x\n", &a);
	printf("p의 값 : %x\n", p);
	printf("*p의 값 : %d\n\n", *p);

	printf("pp의 값 : %x\n", pp); // pp : p의 주소 값
	printf("*pp의 값 : %x\n", *pp); // *pp : p의 주소값을 통해 접근한 p가 가지고 있는 a의 주소값
	printf("**pp의 값 : %d\n", **pp); // p가 가지고 있는 a의 주소값을 통해 접근한 a의 실제 값
}

