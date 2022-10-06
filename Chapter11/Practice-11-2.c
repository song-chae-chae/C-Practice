#include <stdio.h>

void Swap(int* a, int* b);

void main() {
	int x = 10, y = 20;
	int* pX, * pY;

	pX = &x;
	pY = &y;

	printf("초기값 x = %d, y = %d\n", x, y); // 10, 20

	Swap(pX, pY);
	printf("함수 밖에서 변경 후 *pX = %d, *pY = %d\n", *pX, *pY); // 10, 20

	// 포인터를 넘겨서 참조에 의한 호출 방식(call-by-reference)로 두 값을 교환했으나 함수 밖에서 찍어보니 값이 바뀌지 않음
	// 이유는?
	// 함수를 호출하는 순간 *a, *b가 메모리 상에 새로 생기게 되고
	// *a, *b도 pX, pY와 마찬가지로 x, y의 주소값을 가지고 있게 된다. (2개의 포인터가 같은 곳을 바라보게 됨)
	// 그런데 a = b, b = temp 하는 순간 pX, pY는 여전히 x, y의 주소값을 가지고 있고, a, b 는 서로 값을 교환하게 된다
	// Swap의 매개변수 a, b가 실인수와 같은 메모리를 공유하는 것이 아니라 메모리를 별도로 할당하여 주소값만 복사하는 것 때문에
	// 참조에 의한 호출처럼 보이지만 사실은 값에 의한 호출의 형태가 되는 것
}

void Swap(int* a, int* b) {
	int* temp;

	temp = a;
	a = b;
	b = temp;
	printf("함수 안에서 변경 후 *a = %d, *b = %d\n", *a, *b); // 20, 10
}
