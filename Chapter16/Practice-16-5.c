#include <stdio.h>

#define DOUBLE(x) x + x

void main() {
	int iVal;
	double fVal;

	fputs("정수 입력 : ", stdout);
	scanf_s("%d", &iVal);
	printf("출력 결과는 %d\n", DOUBLE(iVal));

	fputs("실수 입력 : ", stdout);
	scanf_s("%lf", &fVal);
	printf("출력 결과는 %lf\n", DOUBLE(fVal));

	// (전처리기 인식) DOUBLE(iVal) -치환-> (컴파일러 인식) iVal + iVal
	// 컴파일러에 의해 컴파일 되기 전에 전처리기에 의해 치환됨
}
