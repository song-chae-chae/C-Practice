#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
	char str1[100];
	char* strPos;
	int i, len, total = 0;

	fputs("문자열 입력 : ", stdout);
	fgets(str1, sizeof(str1), stdin);
	len = strlen(str1);

	strPos = strtok(str1, " ");

	while (strPos != NULL) {
		total = total + atoi(strPos);
		strPos = strtok(NULL, " ");
	}

	printf("각 자리수의 총합은 %d\n", total);
}