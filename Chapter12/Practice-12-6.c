#include <stdio.h>
#include <string.h>

void main() {
	char str1[5];

	// 배열의 할당 공간 부족하여 오류 메세지 나옴
	// 빌드가 되고 문자열도 정상적으로 출력되긴 함 -> 부족한 메모리 공간을 str1의 메모리에 인접한 변수의 메모리를 침범하여 사용하기 때문
	// 그래서 vs에서 strcpy_s 사용하도록 권장함
	strcpy(str1, "beautiful");
	puts(str1);
}