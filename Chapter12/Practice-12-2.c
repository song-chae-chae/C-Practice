#include <stdio.h>

void main() {
	char str[10];

	fputs("gets 문자열 입력 : ", stdout);
	gets(str); // 데이터 입력에 대한 메모리 오버플로우 발생 문제 있음
	puts(str);

	fputs("fgets 문자열 입력 : ", stdout);
	fgets(str, sizeof(str), stdin); // 배열의 할당 크기만큼만 입력 가능 (오버플로우 발생 x)
	puts(str);
}