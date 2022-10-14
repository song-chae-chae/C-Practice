#include <stdio.h>
#include <stdlib.h>

void main() {
	int value = 70;
	char string[100];
	int radix = 10;

	itoa(value, string, radix);
	printf("변환된 문자열 %s\n", string);

	value = -50;
	itoa(value, string, radix);
	printf("변환된 문자열 %s\n", string);
}