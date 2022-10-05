#include <stdio.h>

void func(int* pArr);

void main() {
	// 배열을 함수의 인자로 전달하기
	int arr[] = { 1, 2, 3, 4, 5 };

	func(arr);
	for (int i = 0; i < 5; i++) {
		printf("배열의 요소 출력 : %d\n", arr[i]);
	}
}

void func(int* pArr) {
	// *pArr 이 arr의 주소값을 받아서 가지고 있음 -> 같은 배열을 2개의 포인터가 가리키고 있는 것(arr, *pArr)
	for (int i = 0; i < 5; i++) {
		printf("함수 안에서 배열의 요소* 출력 : %d\n", *(pArr + i));
	}
	printf("\n");
}
