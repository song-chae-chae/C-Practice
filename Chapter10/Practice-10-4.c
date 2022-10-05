#include <stdio.h>

int func(int pArr[], int size);

void main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int sumArr, sizeArr;

	sizeArr = sizeof(arr) / sizeof(int);
	sumArr = fumc(arr, sizeArr);

	printf("배열의 총 합은 %d\n", sumArr);
}

int func(int pArr[], int size) {
	int sum = 0;
	int temp = 100;

	for (int i = 0; i < size; i++) {
		sum += pArr[i];
	}

	// 배열은 포인터 상수이다 -> pArr이 배열이라면 포인터 변수가 아닌 포인터 상수이다 -> 포인터 상수에 다른 값을 할당한다면 빌드 에러가 날 것이다 ? => NO
	// pArr에 &temp를 대입해 다른 주소값을 할당해도 에러가 나지 않는다 -> pArr 은 포인터 변수이다.
	// int *pArr 과 int pArr[]은 같은 표현이라는 것
	// 함수의 매개변수에서 배열이 넘어온다는 것을 명시하기 위한 표시로 int pArr[]을 허용하고 있는 것
	// *주의* : 함수의 매개변수에서는 허용되지만 배열 선언 시 []에 크기를 입력해주지 않으면 배열 크기를 알 수 없어 스택 메모리에 할당할 수 없으므로 오류 발생함
	pArr = &temp;

	return sum;
}
