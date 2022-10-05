#include <stdio.h>

void Swap(int a, int b);

void main() {
	int x = 10, y = 20;
	printf("초기값 x = %d, y = %d\n", x, y);

	Swap(x, y);

	printf("함수 밖에서 변경 후 x = %d, y = %d\n", x, y);
}

void Swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("함수 안에서 변경 후 a = %d, b = %d\n", a, b);
}