#include <stdio.h>

void main() {
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5];

	for (int i = 5; i > 0; i--) {
		arr2[5 - i] = arr1[i - 1];
	}
	for (int i = 0; i < 5; i++) {
		printf("배열 arr2[%d] = %d\n", i, arr2[i]);
	}
}