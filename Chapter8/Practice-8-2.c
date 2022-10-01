#include <stdio.h>

void main() {
	// 포인터끼리 더하기는 안되지만 빼기는 가능하다
	// 단, 두 포인터는 타입이 같고 같은 배열 내의 다른 요소를 가리키고 있어야 함 (두 요소간의 상대적 거리를 통해 할당된 메모리 크기 구하기 가능)
	char str[] = "Programming";
	char* ptr1, * ptr2;
	ptr1 = &str[0];
	ptr2 = &str[7];

	printf("두 포인터 간의 차는 %d입니다.\n", ptr2 - ptr1);
}