#include <stdio.h>

#define SIZE 5 // 매크로 상수 SIZE 선언 후 5로 치환

void main() {
	char str[SIZE] = "Love"; // 배열 크기에 매크로 상수 대입 - SIZE는 상수이므로 배열 선언시 배열의 길이로 사용 가능
	
	for (int i = 0; i < SIZE; i++) {
		printf("배열 요소 %d = %c\n", str[i]);
	}
}
