#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void main() {
	int* arr1 = (int*)malloc(sizeof(int) * 5); // 동적 메모리 선언
	int arr2[5]; // 복사될 대상 메모리를 스택 메모리에 선언

	for (int i = 0; i < 5; i++) {
		arr1[i] = i + 1;
	}

	// memcpy : 메모리끼리 복사할 때 사용
	// 인수 : 복사될 대상 메모리 블록, 복사할 원본 메모리 블록, 복사할 메모리의 바이트 수
	// 대응되는 바이트끼리 기계적으로 복사하기 때문에, 복사할 자료형에 대해 구애받지 않음 (모든 자료형에 대해 사용 가능)
	memcpy(arr2, arr1, sizeof(int) * 5);

	printf("===== 메모리 복사 출력 =====\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr2[i]);
	}

	free(arr1);
}