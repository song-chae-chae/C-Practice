#include <stdio.h>

void main() {
	char str[] = "love";	// 문자열 전체를 배열의 요소에 저장
	char* pStr = "you";		// 메모리 상에 저장되어 있는 문자열 상수 "you"의 첫번째 요소의 주소값을 가지고 있음
							// 즉 포인터를 통해 you라는 문자열 상수 자체를 가리키겠다는 말
							// 문자열 상수는 메모리 공간에 저장되면 그 순간 문자열 상수의 주소값이 반환됨

	printf("str : %s\n", str);
	printf("pStr : %s\n", pStr);
}