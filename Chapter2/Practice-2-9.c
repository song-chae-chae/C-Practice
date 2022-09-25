#include <stdio.h>

int main(void) {
	// 상수
	// 상수는 값이 변하지 않고, 자신의 존재 그 자체이다.
	// 리터럴 상수 : 상수 그 자체를 보고 크기와 자료형 결정하여 메모리 할당
	// 크기와 형태에 따라 컴파일러가 자동으로 메모리 할당 (ex 30 -> short 타입 생성 + 2byte 메모리 할당, 40000 -> int 타입 생성 + 4byte 메모리 할당)
	// 강제로 크기 지정하고 싶으면 상수 뒤에 접미어 붙이기 (ex 30L -> long 타입 생성 + 4byte 메모리 할당
	
	// 심볼릭 상수 : 상수이되, 그 상수를 상징하거나 대신할 수 있는 기호가 존재
	const int TEN = 10;

	int input1, input2;
	int total;

	printf("첫 번째 정수를 입력하세요 :");
	scanf_s("%d", &input1); // & : 해당 변수의 주소를 가리킴 (ex) input1 변수가 어디에 저장되어 있는지를 가리킴)
	printf("두 번째 정수를 입력하세요 :");
	scanf_s("%d", &input2);

	total = input1 + input2;

	printf("두 수의 합은 %d 이다. \n", total);


	return 0;
}