#include <stdio.h>

int func(int* pArr, int size);

void main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int sumArr, sizeArr;
	sizeArr = sizeof(arr) / sizeof(int); // 해당 배열의 요소 개수
	sumArr = func(arr, sizeArr);

	printf("배열의 총 합은 : %d\n", sumArr);
}

int func(int* pArr, int size) {
	// pArr : 주소값을 저장하는 포인터 -> 배열 요소의 첫번째 주소값을 넘겨받음
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += *(pArr + i);
	}
	return sum;
}
