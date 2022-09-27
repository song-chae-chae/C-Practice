#include <stdio.h>

int main(void) {
	int a = 3;
	int b = 5;

	// 산술연산 결과의 자료형 == 피연산자의 자료형
	// int 끼리 계산 후 double에 넣으면 소수부는 손실됨
	double f = a / b; 
	double g = (double)a / b;
	printf("나눗셈의 결과는 %f\n", f); // 0.000000
	printf("나눗셈의 결과는 %f\n", g); // 0.600000

	return 0;
}