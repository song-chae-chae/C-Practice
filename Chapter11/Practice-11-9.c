#include <stdio.h>

int Add(int a, int b);
int Min(int a, int b);

void main() {
	// 함수 포인터 - 함수도 엄밀하게 생각해보면 포인터
	// 선언, 정의, 호출 - 함수를 호출한다는 의미는 함수가 정의되어 있는 메모리 주소를 찾아서 호출한다는 의미
	// 함수의 내용은 내가 호출하고자 하는 코드의 위치에 있는 것이 아니고, 어딘가에 정의되어 있고, 필요할 때 그 위치를 참조 하는 것
	// 왜 함수 포인터를 굳이 사용?
	// 코드를 컴파일하게 되면 코드의 변수, 함수들은 컴파일 타임에 메모리의 크기와 위치 결정됨
	// 메모리 위치는 이때 정해지고 함수의 경우 호출 시 매번 같은 주소 참조 - 정적 바인딩
	// 컴파일 타임이 아닌 프로그램이 실행 시 메모리 할당되는 경우(런타임) - 동적 바인딩
	// 프로그램의 확장성과 유용성을 위해 사용 ex)플러그인에 새로운 함수 추가될때마다 다시 컴파일하는 비효율적인 상황 해결

	// 함수 포인터를 통해서 동적으로 함수 호출하는 예제
	int a, b, sel, result;
	int(*fPtr)(int a, int b); // Add, Min 함수를 참조하기 위한 두개의 정수형 매개변수를 갖는 함수 포인터 선언

	while (1) {
		printf("다음 중 선택하시오 (1.덧셈 2.뺄셈 3.종료) : ");
		scanf_s("%d", &sel);

		switch (sel) {
		case 1:
			fPtr = Add; // fPtr에 Add 함수의 주소값 대입
			break;
		case 2:
			fPtr = Min;
			break;
		case 3:
			return;
		default:
			fPtr = Add;
			break;
		}

		printf("두 정수를 입력하시오 : ");
		scanf_s("%d%d", &a, &b);

		result = fPtr(a, b);
		printf("결과 : %d\n", result);
	}
}

int Add(int a, int b) {
	return a + b;
}

int Min(int a, int b) {
	return a - b;
}
