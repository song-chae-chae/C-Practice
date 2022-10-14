#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
	char str1[] = "1024";
	char str2[10];
	int total = 0;

	fputs("정수를 입력하세요 : ", stdout);
	gets(str2);
	total = atoi(str1) + atoi(str2);

	printf("두 수의 합 : %d\n", total);
}