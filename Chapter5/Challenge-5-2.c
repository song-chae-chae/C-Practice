#include <stdio.h>

void main() {
	int i = 0;
	int j = 0;
	while (i < 5) {
		j = 0;
		while (j < i + 1) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}