#include <stdio.h>

void callValue(int b);

void main() {
	// 값 호출 방식 (call-by-value)
	// 실인수의 값이 형식 인수로 전달되는 방식
	// 값을 전달하고자 하는 인수인 실인수의 메모리와 값을 전달 받고자 하는 형식 인수의 메모리는 각각 별개이고, 실인수의 값이 형식 인수로 복사되는 형태
	// 같은 값을 지닌 변수가 서로 다른 메모리 공간에 두 개 존재하는 것
	int a = 1;
	callValue(a);

	printf("실인수 a의 출력 : %d\n", a); // call-by-value 방식이므로 callValue 함수 안에서 a를 매개변수로 받아서 새로운 값을 할당했어도 a에는 영향을 미치지 못한다.
}

void callValue(int b) {
	// 실인수 a를 받아서 형식인수 b로 넘겨받으면서 메모리 상에 별도로 복사가 일어남 -> 변수 a의 값이 변수 b로 복사됨
	b = b + 3;
	printf("형식인수 b의 출력 : %d\n", b);
}
