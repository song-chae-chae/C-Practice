#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int multiple(int a, int b);
int devide(int a, int b);

void print_start() {
	printf("======== Program Start ========\n");
	printf("두 개의 정수를 입력하시오 : ");
}

void print_calculation(char* str, int result) {
	printf("두 수의 %s은 : %d \n", str, result);
}
void print_end() {
	printf("======== Program End ========\n");
}

void main() {
	int a;
	int b;
	int calculation;

	print_start();
	scanf_s("%d %d", &a, &b);

	calculation = add(a, b);
	print_calculation("합", calculation);

	calculation = sub(a, b);
	print_calculation("차", calculation);

	calculation = multiple(a, b);
	print_calculation("곱", calculation);

	calculation = devide(a, b);
	print_calculation("나누기", calculation);

	print_end();
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int multiple(int a, int b) {
	return a * b;
}
int devide(int a, int b) {
	return a / b;
}