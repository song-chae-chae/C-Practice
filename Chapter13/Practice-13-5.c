#include <stdio.h>

struct student {
	char name[10];
	int age;
	double height;
}st[5] = { {"이창현", 25, 178.5}, {"이주성", 8, 125.8}, {"송유흠", 11, 145.5}, {"김민준", 11, 145}, {"김민성", 11, 146.3} };

void main() {
	struct student* pst;
	pSt = st;

	printf("st[i] 구조체 멤버의 초기값 출력\n");
	
	for (int i = 0; i < 5; i++) {
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name, st[i].age, st[i].height);
	}

	//구조체 포인터를 이용한 출력
	printf("\n구조체 포인터를 이용한 출력\n");
	for (int i = 0; i < 5; i++) {
		// (pSt + i) -> 구조체 배열의 요소가 이동
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
	}
}