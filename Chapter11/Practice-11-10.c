#include <stdio.h>
#include <string.h>

void main() {
	// NULL 포인터 : 아무것도 가리키지 않는 포인터 - 포인터 변수에 0을 넣으면 아무것도 가리키지 않는다고 간주하고 NULL 포인터라고 명명
	// 함수의 동작 에러 체크 용도로 주로 사용
	// 0을 넣으면 아무것도 가리키지 않는다고 말하지만 엄밀히 말하면 0번지를 가리키고 - 0번지는 시스템 영역임

	char str[] = "Love";
	char* p;

	p = strchr(str, 'v'); // strchr : str에서 v를 검색하여 위치 주소값을 리턴하는 함수

	if (p != NULL) {
		*p = 'b'; // strchr 함수의 리턴값인 주소값을 참조해서 실제 값을 b로 변경해버림
		printf("변경 결과 : %s\n", str);

	}
	else {
		printf("NULL을 리턴 \n");
	}

}

int Add(int a, int b) {
	return a + b;
}

int Min(int a, int b) {
	return a - b;
}
