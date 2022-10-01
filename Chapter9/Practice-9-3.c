#include <stdio.h>

void main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	// 포인터를 배열의 이름처럼 사용 가능
	// pTemp는 배열의 첫번째 요소를 가리킴
	int* pTemp = arr;

	printf("배열의 요소 출력 : ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", pTemp[i]);
	}
	printf("\n");
}