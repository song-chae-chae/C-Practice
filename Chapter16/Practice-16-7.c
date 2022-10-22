#include <stdio.h>

extern int Add16(int a, int b); // extern : 외부의 함수 호출하겠다는 선언

void main() {
	int result;
	result = Add16(2, 5);
	printf("두 수의 합은 %d\n", result);
}
