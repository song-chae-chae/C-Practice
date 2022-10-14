#include <stdio.h>

void main() {
	char str[100];
	int i = 10;
	double d = 3.14;

	sprintf(str, "%d", i);
	printf("정수를 문자열로 변환 : %s\n", str);

	sprintf(str, "%.2f", d);
	printf("실수를 문자열로 변환 : %s\n", str);
}