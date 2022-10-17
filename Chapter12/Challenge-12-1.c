#include <stdio.h>
#include <string.h>

void main() {
	char str1[20];
	char str2[20];

	int len, i;

	fputs("문자열 입력 : ", stdout);
	fgets(str1, sizeof(str1), stdin);
	len = strlen(str1);

	for (i = 0; i < len; i++) {
		strcpy(str2, "");
		strncat(str2, str1, i);
		puts(str2);
	}
}