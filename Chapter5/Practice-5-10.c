﻿#include <stdio.h>

void main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 5 - i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
}