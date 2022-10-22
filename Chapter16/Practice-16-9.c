#include <stdio.h>
#include "Practice-16-9-calc.h" // 헤더파일 포함해서 외부 함수 선언 내용 가져옴

void main() {
	int result;

	result = Add9(1, 2);
	printf("두 수의 합 = %d\n", result);

	result = Minus9(1, 2);
	printf("두 수의 차 = %d\n", result);

	result = Multiple9(4, 2);
	printf("두 수의 곱 = %d\n", result);

	result = Devide9(4, 2);
	printf("두 수의 나누기 = %d\n", result);
}
