#include <stdio.h>

void main() {
	char str[100];
	int i = 10;
	double d = 3.14;

	// sprintf : 정수, 실수 출력하고자 할 때 결과값을 buffer에 대입함으로써 문자열로 변환 가능 
	sprintf(str, "%d", i);
	printf("정수를 문자열로 변환 : %s\n", str);

	sprintf(str, "%.2f", d);
	printf("실수를 문자열로 변환 : %s\n", str);
}