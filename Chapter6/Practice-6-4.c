#include <stdio.h>

void main() {
	int val = 0; // main 함수 끝날때까지 val 변수는 한번만 메모리 할당, 해제됨

	while (val < 5) {
		int local = 0; // while문 한번 돌때마다 메모리 할당, 해제 반복
		local++;
		val++; 
		printf("local = %d, val = %d\n", local, val);
	}

	if (val == 5) {
		int local = 100;
		val++;
		printf("local = %d, val = %d\n", local, val);
	}
}