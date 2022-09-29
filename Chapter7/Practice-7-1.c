#include <stdio.h>

void main() {
	int total = 0;
	double ave = 0.0;
	int arrGrade[5];
	int i;
	int count = 0;

	for (i = 0; i < sizeof(arrGrade) / sizeof(arrGrade[0]); i++) {
		printf("%d번째 학생 성적을 입력하세요.:", i + 1);
		scanf_s("%d", &arrGrade[i]);
		count++;
	}

	for (i = 0; i < count; i++) {
		total += arrGrade[i];
	}

	ave = total / count;
	printf("총점은 %d이고 평균은 %f 이다\n", total, ave);
}