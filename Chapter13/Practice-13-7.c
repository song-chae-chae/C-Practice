#include <stdio.h>

enum Week {
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};

void main() {
	// 열거형(enum) : 메모리 상에 저장될 데이터들을 열거한 집합
	//               컴파일러는 열거형의 멤버들을 정수형 상수로 취급
	//               열거형 멤버에 따로 값을 설정해주지 않으면 0부터 자동으로 1씩 증가됨
	//               중간에 값을 설정했다면 그 다음 멤버는 설정한 값 + 1이 됨

	int day;
	printf("요일을 입력하세요 (1.일, 2.월, 3.화, 4.수, 5.목, 6.금, 7.토) : ");
	scanf_s("%d", &day);

	switch (day) {
	case sun:
		printf("일요일\n");
		break;
	case mon:
		printf("월요일\n");
		break;
	case tue:
		printf("화요일\n");
		break;
	case wed:
		printf("수요일\n");
		break;
	case thu:
		printf("목요일\n");
		break;
	case fri:
		printf("금요일\n");
		break;
	case sat:
		printf("토요일\n");
		break;
	default:
		printf("잘못 입력\n");
	}
}