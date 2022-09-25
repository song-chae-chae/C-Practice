#include <stdio.h>

int main(void) {
	// 실수형의 정밀도 비교
	// float : 바이트 4 , 정밀도 : 소수점 이하 7자리
	// double : 바이트 8, 정밀도 : 소수점 이하 15자리
	// long double : 바이트 10 ~ 16, 정밀도 : 소수점 이하 19자리
	double area;
	double radius = 5;

	area = radius * radius * 3.14;

	printf("원의 넓이는 %f이다.\n", area);

	return 0;
}