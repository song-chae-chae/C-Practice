#include <stdio.h>

int main(void) {
	int value; // 선언만 -> value 메모리 안에는 의미 없는 쓰레기 값 들어감
	int num = 5; // 선언과 동시에 초기화
	value = 100; // 선언만 되어 있던 value 변수 안에 의미 있는 값 들어감

	printf("%d %d \n", value, num);
	// %d : 서식 문자(conversion specifier) -> 출력하고자 하는 변수의 출력 형태 지정

	return 0;
}