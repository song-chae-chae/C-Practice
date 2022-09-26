#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	printf("!(a == 10) 의 결과는 : %d\n", !(a == 10)); // false
	printf("(a < b) && (a < c) 의 결과는 : %d\n", (a < b) && (a < c)); // true
	printf("(a >= c) || (a == d) 의 결과는 : %d\n", (a >= c) || (a == d)); // true

	return 0;
}