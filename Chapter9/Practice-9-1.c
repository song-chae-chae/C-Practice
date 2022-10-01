#include <stdio.h>

void main() {
	int arr[] = { 1, 2, 3, 4, 5 };

	printf("배열의 요소 출력 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	printf("배열의 주소 출력 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", &arr[i]); // 각 요소별 주소값을 가리키는 포인터
	}
	printf("\n\n");

	printf("배열의 이름 출력 : %d\n", arr); // 첫번째 요소의 주소값을 가리키는 포인터
}