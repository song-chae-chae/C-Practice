#include <stdio.h>

void func(void);

void main() {
	int i = 0;
	while (i < 5) {
		func();
		i++;
	}
}

void func(void) {
	static int value = 0; // 초기화를 최초 한 번만 함
	value++; // ++된 상태를 함수가 끝나도 기억함으로써 함수가 호출될 때마다 value 값이 증가됨
	printf("%d\n", value); 
}