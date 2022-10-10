#include <stdio.h>
#include <string.h>

void main() {
	char str[100] = "have a nice day";
	int len = 0;

	len = strlen(str); // 문자열의 시작부터 널 문자 직전까지의 문자 개수 세어주는 함수

	printf("문자열의 길이는 %d\n", len);
}
