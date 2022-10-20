#include <stdio.h>
#include <stdlib.h>

void main() {
	int* arr = (int*)malloc(sizeof(int) * 5); // 힙 영역에 메모리 할당
	int* rearr;

	for (int i = 0; i < 5; i++) {
		arr[i] = i + 1; // 포인터 arr을 통해 힙 메모리에 값 대입
	}

	// realloc을 통해 힙 메모리 재할당, 기반 메모리는 앞서 malloc을 통해 메모리를 할당한 arr
	// realloc 함수에 설정할 메모리 크기는 기존에 할당한 메모리 크기 + 새로 늘어날 메모리 공간을 합한 크기
	// 만약 재할당하고자 하는 메모리가 연속적이지 않은 경우 (이미 사용되고 있어서) 메모리 공간을 연속적으로 할당할 수 있는 새로운 위치의 메모리 공간을 새로 할당
	rearr = (int*)realloc(arr, sizeof(int) * 10);

	for (int i = 5; i < 10; i++) {
		rearr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", rearr[i]);
	}

	free(rearr);
}
