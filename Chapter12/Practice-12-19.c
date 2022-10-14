#include <stdio.h>
#include <stdlib.h>

void main() {
	double value = 314.159265;
	char* pStr;
	int dec, sign;

	pStr = fcvt(value, 4, &dec, &sign);
	printf("변환된 문자열 %s\n", pStr);
	printf("소수점 위치는 %d, 부호는 %d\n", dec, sign);

	value = -314.159265;
	pStr = fcvt(value, 6, &dec, &sign);
	printf("변환된 문자열 %s\n", pStr);
	printf("소수점 위치는 %d, 부호는 %d\n", dec, sign);
}