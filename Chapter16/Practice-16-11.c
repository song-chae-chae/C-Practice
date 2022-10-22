#include <stdio.h>
#include "Practice-16-11-decrease.h"
#include "Practice-16-11-increase.h"

void main() {
	int result1, result2;

	result1 = increase();
	result2 = decrease();

	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);

	return;

	// 빌드 시 -> commom : 재정의. 여러번 초기화했습니다. 에러 발생
	// decrease.h, increase.h 에서 commom.h를 include 하고 있음 -> 각각 common 변수 초기화 함 -> 컴파일 시 문제
	// main 함수 입장에서는 int common = 0; 이라는 문장이 두번 선언된 것 -> common.h 파일을 포함할 때 어디선가 한번 포함하면 다시 포함하지 않도록 해주면 됨 -> #ifdef 사용
}
