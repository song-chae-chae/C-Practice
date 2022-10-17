#include <stdio.h>
#include <string.h>

struct student {
	// 구조체 : 하나 이상의 서로 다른 종류의 변수들을 묶어서 새로운 자료형을 정의하는 것 (사용자 정의 자료형)
	//			배열이나 포인터와 같은 자료형도 포함될 수 있음
	//          연관된 변수들을 하나로 묶어서 관리함으로써 데이터 관리에 유용
	char name[10];
	int age;
	int height;
}st1; // 구조체 선언문 끝에 ';' 붙여야함

void main() {
	strcpy_s(st1.name, 10, "이창현"); // st1.name 에 '이창현' 복사
	st1.age = 25;
	st1.height = 178;

	printf("이름 = %s, 나이 = %d, 키 = %d\n", st1.name, st1.age, st1.height);

	// student 구조체 멤버의 총 크기는?
	// 변수 name - 10byte(문자형 10개의 배열 요소), 변수 age - 4byte(정수형), 변수 height - 4byte(정수형) => 18byte

	struct student2 {
		char name[10];
		int age;
		int height;
	}st3, st4; // 정의와 동시에 변수 선언도 가능 (st3, st4)

	// struct stduent st1; 구조체를 미리 정의해놓고 부를 수 있음
}