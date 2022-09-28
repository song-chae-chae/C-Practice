#include <stdio.h>

void main() {
	int i, j = 0;
	int count = 5;
	int sum = -2;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < count; j++) {
			printf("*");
		}
		if (count == 1) {
			sum = 2;
		}
		count += sum;

		printf("%d\n", count);
	}
}