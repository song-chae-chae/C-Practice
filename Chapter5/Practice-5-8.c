#include <stdio.h>

void main() {
	int dan, i;
	printf("단을 입력하시오 : ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}