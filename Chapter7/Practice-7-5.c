#include <stdio.h>

void main() {
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5];

	for (int i = 0; i < 5; i++) {
		arr2[i] = arr1[i];
	}
	for (int i = 0; i < 5; i++) {
		printf("배열 arr2[%d] = %d\n", i, arr2[i]);
	}
}