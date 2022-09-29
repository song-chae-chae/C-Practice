#include <stdio.h>

void main() {
	int arr1[7] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(arr1) / sizeof(arr1[0]);

	for (int i = 0; i < size / 2; i++) {
		int temp = arr1[i];
		arr1[i] = arr1[size - i - 1];
		arr1[size - i - 1] = temp;
	}

	for (int i = 0; i < size; i++) {
		printf("배열 arr1[%d] = %d\n", i, arr1[i]);
	}
}