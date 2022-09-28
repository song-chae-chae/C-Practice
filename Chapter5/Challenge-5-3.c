#include <stdio.h>

void main() {
	// 입력받은 수까지의 합을 계산하여 출력
	int input;
	int sum = 0;
	
	scanf_s("%d", &input);
	
	do {
		sum += input;
		input--;
	} while (input > 0);

	printf("합 : %d\n", sum);
}