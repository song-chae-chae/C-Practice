#include <stdio.h>

int main(void) {
	char ch1 = 'A'; // 아스키 코드 65
	
	printf("%d, %c\n", ch1, ch1); // 정수형 65, 문자형 A
	
	// 문자형도 내부적으로는 숫자로 표현
	// char형도 엄밀히 따지면 정수형
	// 연산을 필요로 하는 숫자와 같은 정수형 - int 저장
	// 연산이 필요없는 문자와 같은 정수형 - char 저장

	return 0;
}