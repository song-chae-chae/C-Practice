#include <stdio.h>

void main() {
	int score;
	
	scanf_s("%d", &score);
	
	int grade = score / 10;

	switch (grade) {
	case 10:
	case 9:
		printf("학점은 A");
		break;
	case 8:
		printf("학점은 B");
		break;
	case 7:
		printf("학점은 C");
		break;
	case 6:
		printf("학점은 D");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("학점은 F");
		break;
	default:
		printf("잘못된 점수");
		break;
	}
}