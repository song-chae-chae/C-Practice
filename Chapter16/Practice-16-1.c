#include <stdio.h>

#define PI 3.14 // 매크로 상수 PI 선언하고 3.14로 치환됨

void main() {
	// 전처리
	// 소스코드는 컴파일을 통해 목적 파일이 만들어지고, 그 목적 파일은 링크 과정을 거쳐야만 실행파일이 생성됨
	// 컴파일 이전에 실행되어야 하는 작업들이 있는데 이것을 앞서 수행된다고 하여 선행 처리 or 전처리라고 한다.
	// 전처리기가 처리
	// 사용 규칙 
	// 1. 전처리문 앞에는 # 를 붙인다.
	// 헤더를 포함시킬 때 include 앞에 # 를 붙였고 # 를 전처리기 지시자라고 한다.
	// 2. 전처리문 끝에는 ; 를 붙이지 않는다.
	// 3. 한 줄에 하나의 전처리문만 사용할 수 있다.
	
	// 종류
	// #include : 헤더 파일 선언
	// #define : 매크로 상수 및 매크로 함수 선언
	// #ifdef : 때에 따라 조건부 컴파일 하는 경우

	// macro : #define 으로 처리되는 전처리기문을 통칭 - 매크로 상수, 함수로 나누어짐
	// 특징
	// 문자열 상수 안에 있는 매크로의 이름은 치환 X
	// 실제 값은 어떤 형태든 상관 X - 연산도 가능

	double area;
	double radius;

	fputs("반지름을 입력 : ", stdout);
	scanf_s("%lf", &radius);

	area = radius * radius * PI;
	printf("원의 넓이는 %lf\n", area);
}
