#include <stdio.h>

void Swap(int** a, int** b);

void main() {
	int x = 10, y = 20;
	int* pX, * pY;

	pX = &x;
	pY = &y;

	printf("초기값 x = %d, y = %d\n", x, y); // 10, 20

	Swap(&pX, &pY); // 포인터 변수의 주소값을 넘겨줌 (이중 포인터 변수 --> 주소값의 주소값을 넘겨주는거니까)
	printf("함수 밖에서 변경 후 *pX = %d, *pY = %d\n", *pX, *pY); // 20, 10

}

void Swap(int** a, int** b) {
	int* temp;

	temp = *a;
	*a = *b; // *a = 포인터 pX, *b = 포인터 pY
	*b = temp;
	printf("함수 안에서 변경 후 **a = %d, **b = %d\n", **a, **b); // 20, 10
}
