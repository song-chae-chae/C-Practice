#include <stdio.h>

// 구조체는 자료형 이므로 배열형으로도 선언 가능
struct student {
	char name[10];
	int age;
	double height;
}st[5] = { {"이창현", 25, 178.5}, {"이주성", 8, 125.8}, {"송유흠", 11, 145.5}, {"김민준", 11, 145}, {"김민성", 11, 146.3} };

void main() {
	printf("st[i] 구조체 멤버의 초기값 출력\n");
	for (int i = 0; i < 5; i++) {
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name, st[i].age, st[i].height);
	}

	// 구조체 데이터 변경
	st[2].height = 146;
	printf("\nst[2] 구조체 멤버의 데이터 변경 \n");
	printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[2].name, st[2].age, st[2].height);

}