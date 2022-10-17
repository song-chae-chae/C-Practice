#include <stdio.h>
#include <string.h>

void main() {
	char str1[100];
	char str2[100];
	int result;

	fputs("첫 번재 문자열 입력 : ", stdout);
	fgets(str1, sizeof(str1), stdin);
	fputs("두 번째 문자열 입력 : ", stdout);
	fgets(str2, sizeof(str2), stdin);

	result = strcmp(str1, str2);

	if (result > 0)
		puts("첫 번째가 더 큼");
	else if (result < 0)
		puts("두 번째가 더 큼");
	else
		puts("두 문자열이 같음");
}