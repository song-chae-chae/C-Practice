#include <stdio.h>

int Add(int a, int b);
void print_Start() {
	printf("======== Program Start ========\n");
	printf("두 개의 정수를 입력하시오 : ");
}

void print_Hap(int result) {
	printf("두 수의 합은 : %d\n", result);
	printf("======== Program End ========\n");
}
void main() {
	int a;
	int b;
	int hap;

	print_Start();
	scanf_s("%d %d", &a, &b);

	hap = Add(a, b);

	print_Hap(hap);
}

int Add(int a, int b) {
	return a + b;
}