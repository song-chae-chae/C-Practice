#include <stdio.h>

void main() {
	int total = 0;
	int array[5] = { 1, 2 };

	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		total += array[i];
	}
	printf("배열 요소의 총 합은 %d\n", total);
}