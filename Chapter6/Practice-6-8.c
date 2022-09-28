#include <stdio.h>
#include <Windows.h>

void countdown(int n);

void main() {
	int n;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &n);
	printf("***** 카운트다운 *****\n");
	countdown(n);
}

void countdown(int n) {
	if (n < 1) {
		printf("발사\n");
		return;
	}
	Sleep(1000);
	printf("%d\n", n);
	(countdown(n - 1));
}