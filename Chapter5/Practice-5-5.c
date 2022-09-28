#include <stdio.h>

void main() {
	int i = 0;
	// 반복 조건에 상관없이 최소 한 번은 루프 실행
	do {
		printf("Programming\n");
		i++;
	} while (i < 5);
}