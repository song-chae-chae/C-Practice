#include <stdio.h>
#include <string.h>

void main() {
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 1, 2, 3, 4, 5 };

	// 두 개의 메모리에 대해 내용을 비교하여 첫번째 인수의 메모리가 두번째 인수의 메모리보다 큰지, 작은지, 같은지 구함
	// 인수 : 비교할 메모리1, 비교할 메모리2, 비교할 메모리 크기
	// 메모리 크기만큼 1, 2 를 비교해서 같으면 0, 1이 크다면 0보다 큰 값, 2가 크면 0보다 작은 값 리턴
	if (memcmp(arr1, arr2, sizeof(int) * 5) == 0) {
		printf("arr1 과 arr2 는 일치 \n");
	}
	else {
		printf("arr1과 arr2는 불일치\n");
	}
}
