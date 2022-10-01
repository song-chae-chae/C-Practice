#include <stdio.h>

void main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[0];
	int* result = ((ptr + 4) - ptr) / 2;

	printf("%d", *result);
}