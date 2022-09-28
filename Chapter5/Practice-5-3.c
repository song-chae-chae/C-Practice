#include <stdio.h>

void main() {
	int i = 2;
	int j = 1;
	while (i < 10) {
		j = 1;
		while (j < 10) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}
}