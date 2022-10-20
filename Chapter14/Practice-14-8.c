#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int* arr1 = (int*)malloc(sizeof(int) * 15); // 동적 메모리 선언 (복사 대상이 되는 메모리)
	int arr2[5] = { -1, -2, -3, -4, -5 }; // 5개의 메모리 할당과 동시에 초기화

	for (int i = 0; i < 10; i++) {
		arr1[i] = i + 1; // 값 대입
	}

	printf("===== 메모리 이동 전 출력 =====\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr1[i]); // 1 ~ 10 출력
	}

	printf("\n");

	// memmove : 메모리의 내용을 지정한 길이만큼 다른 곳으로 옮기는 기능 (메모리 중첩된 경우에도 올바르게 동작 / memcpy는 메모리 중첩될 경우 에러 발생)
	// 할당된 메모리에 임의의 초기값이 들어있는 경우 그 메모리의 중간을 원하는만큼 뒤로 밀어서 빈 공간으로 만든 후 그 공간에 다른 내용을 삽입해 넣을 수 있음
	// 인수 : 복사될 대상 메모리 블록, 복사할 원본 메모리 블록, 복사할 메모리의 바이트 수
	memmove(arr1 + 10, arr1 + 5, sizeof(int) * 5); // arr1 + 5 메모리 주소부터 길이 sizeof(int) * 5 만큼의 데이터를 arr1 + 10 메모리 주소로 이동하라는 의미
	memcpy(arr1 + 5, arr2, sizeof(int) * 5); // arr2의 데이터 arr1 + 5의 위치에 길이 sizeof(int) * 5 만큼 복사

	// 1 2 3 4 5  6  7  8  9 10				// 메모리 이동 전
	// 1 2 3 4 5  6  7  8  9 10 6 7 8 9 10  // 가운데 6 ~ 10 : 메모리 이동 후의 공간
	// 1 2 3 4 5 -1 -2 -3 -4 -5 6 7 8 9 10  // 가운데 6 ~ 10 자리에 arr2 복사

	printf("===== 메모리 이동 후 출력 =====\n");

	for (int i = 0; i < 15; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	
	free(arr1);
}