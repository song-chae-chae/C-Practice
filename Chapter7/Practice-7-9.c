#include <stdio.h>

void main() {
	char str[100] = "beautiful";

	// 문자열 끝에는 null 이 들어가서 문자열의 끝임을 확인 (쓰레기 값과 의미 있는 문자열을 구분하기 위해)
	for (int i = 0; i < 10; i++) {
		printf("%c ", str[i]);
	}
	printf("\n");
	printf("str1 = %s \n", str);
}