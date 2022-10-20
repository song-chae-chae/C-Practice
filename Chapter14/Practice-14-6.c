#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

void main() {
	int* arr = (int*)malloc(sizeof(int) * 10);
	
	printf("===== 메모리 초기화 전 =====\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]); // 쓰레기 값으로 채워져 있음
	}

	// 메모리 블록에서 모든 바이트를 특정 값으로 설정할 때 사용하는 함수
	// 배열 선언 시 초기화하지 않았거나 실행 중에 이미 값이 저장되어 있는 배열을 특정 값으로 초기화시키고자 할 때 사용
	// 인수 : 대상이 되는 메모리 블록, 설정할 값, 설정할 값을 메모리에 초기화할 크기
	memset(arr, 0, sizeof(int) * 10);
	
	printf("===== 메모리 초기화 후 =====\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	
	free(arr);
}