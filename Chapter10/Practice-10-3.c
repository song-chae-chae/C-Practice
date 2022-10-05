#include <stdio.h>

int func(int pArr[], int size);

void main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int sumArr, sizeArr;

	sizeArr = sizeof(arr) / sizeof(int);
	sumArr = fumc(arr, sizeArr);

	printf("배열의 총 합은 %d\n", sumArr);
}

int func(int pArr[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += pArr[i];
	}

	return sum;
}
