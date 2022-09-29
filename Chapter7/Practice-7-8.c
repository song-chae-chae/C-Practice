#include <stdio.h>

void main() {
	char str[] = "hello world";

	printf("--- 문자열 변경 전 ---\n");
	printf("%s \n\n", str);

	str[6] = 'K';
	str[7] = 'O';
	str[8] = 'R';
	str[9] = 'E';
	str[10] = 'A';

	printf("--- 문자열 변경 후 ---\n");
	printf("%s\n", str);
}