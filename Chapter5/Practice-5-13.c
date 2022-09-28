#include <stdio.h>

void main() {
	int a = 0;

	while (1) {
		if (a > 100)
			break;

		printf("a의 값 : %d\n", a);
		a++;
	}

	printf("a는 100보다 큼\n");
}