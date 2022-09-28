#include <stdio.h>

void main() {
	int num;
	int i = 1;
	scanf_s("%d", &num);

	while (i < 10) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}
}