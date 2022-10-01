﻿#include <stdio.h>

void main() {
	// 배열의 이름이 배열의 첫번째 주소값과 같은 결과를 출력한 것이 의미하는 바
	// 배열의 이름은 배열의 첫번째 요소의 주소값을 가리키는 포인터

	// 배열의 이름이 포인터라고 하지만 일반 포인터와 다른 점이 있음
	// int *pTemp 같은 포인터는 '변수'이지만
	// 배열의 이름인 arr 과 같은 포인터는 '상수' 이다
	// 상수의 특성은 값을 변경할 수 없다는 점
	// 배열의 이름의 경우 상수이므로 가리키고 있는 배열의 주소를 변경할 수 없음
	// 즉, 배열의 이름이 가리키고 있는 대상을 프로그램이 종료될 때까지 절대 변경 불가
	// 일반 포인터 같은 포인터 : 포인터 변수
	// 배열의 이름 같은 포인터 : 포인터 상수

	// int arr[] = { 1, 2, 3, 4, 5 };
	// int temp = 10;

	// arr = temp; // 오류 발생 : 상수니까


	int arr[] = { 1, 2, 3, 4, 5 };

	printf("배열의 요소 출력 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("배열이름을 이용한 배열 요소 출력 : ");

	for (int i = 0; i < 5; i++) {
		printf("%d ", *(arr + i));
	}

	printf("\n\n");

}