﻿#include <stdio.h>

void main() {
	int arr[] = { 1, 2, 3 };
	void* pA;

	pA = arr; // pA에 배열의 주소값을 대입
	pA = (int*)pA + 1; // 배열의 주소값은 요소의 첫번째 주소값을 가지고 있음, 정수형 배열이니까 (int*)로  형변환 해주고 1을 더하면 (포인터 변수가 가리키는 자료형의 단위만큼 움직임) 2번째 요소의 주소값을 가지게 됨

	printf("이동한 *pA의 출력 : %d\n", *(int*)pA); // 2번째 요소의 주소값을 꺼내보면 2 나옴
}