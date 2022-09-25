#include <stdio.h>

int main(void) {
	char character;

	printf("문자를 입력하시오. :");
	scanf_s("%c", &character);
	printf("%d", character);

	return 0;
}