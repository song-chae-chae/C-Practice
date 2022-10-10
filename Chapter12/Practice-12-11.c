#include <stdio.h>
#include <string.h>

void main() {
	char str[20];
	puts("퀴즈 : 세상에서 가장 멋진 사람은?");
	gets(str);

	// strcmp : 문자열 같은지 리턴하는 함수 : 같으면 0
	if (!strcmp(str, "나")) {
		printf("정답입니다.\n");
	}
	else {
		printf("오답\n");
	}
}