#include <stdio.h>

#define A 5 
#define B A + 10 // 매크로 중첩 선언 : 위에서 선언한 매크로 A를 매크로 B에서 활용

void main() {
	printf("A = %d\n", A); // 5
	printf("B = %d\n", B); // 15
	printf("B * 2 = %d\n", B * 2); // B * 2 -> A + 10 * 2 -> 5 + 10 * 2 ==> 25
}
