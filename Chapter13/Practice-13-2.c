#include <stdio.h>
#include <string.h>

struct student {
	char name[10];
	int age;
	int height;
}st, *pSt; // 일반 변수 st, 포인터 변수 pSt 선언

void main() {
	pSt = &st; // st의 주소값 pSt에 넘겨줌 (st의 메모리 가리키고 있는 것) 
	// -> 연산자 : 포인터의 간접 참조 연산자
	strcpy_s(pSt->name, 10, "이창현"); // pSt->name == (*pSt).name == st.name
	pSt->age = 25;
	pSt->height = 178;

	printf("name : %s, age: %d, height: %d\n", pSt->name, pSt->age, pSt->height);
}