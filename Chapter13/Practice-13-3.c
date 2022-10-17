#include <stdio.h>

struct student {
	char name[10];
	int age;
	int height;
}st = {"이창현", 25, 178}; // 구조체 변수 st 선언과 동시에 초기화

void main() {
	printf("name : %s, age : %d, height: %d\n", st.name, st.age, st.height);
}