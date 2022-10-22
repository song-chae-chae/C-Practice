#include <stdio.h>

extern int Add8(int a, int b);
extern int Minus8(int a, int b);
extern int Multiple8(int a, int b);
extern int Devide8(int a, int b);

void main() {
	int result;

	result = Add8(4, 2);
	printf("두 수의 합 = %d\n", result);

	result = Minus8(4, 2);
	printf("두 수의 차 = %d\n", result);
	
	result = Multiple8(4, 2);
	printf("두 수의 곱 = %d\n", result);
	
	result = Devide8(4, 2);
	printf("두 수의 나누기 = %d\n", result);
}
