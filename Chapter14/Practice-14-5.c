#include <stdio.h>
#include <stdlib.h>

void main() {
	int num, total = 0;
	int* student;

	fputs("학생 수 입력 : ", stdout);
	scanf_s("%d", &num);

	// malloc 과 같은 동작을 하는 함수이지만 받는 인자가 다름
	// malloc은 할당할 개수 * 자료형 메모리 크기 지만
	// calloc은 할당할 개수, 자료형 메모리 크기를 각각 받음
	student = (int*)calloc(num, sizeof(int));

	if (student == NULL) {
		printf("메모리 부족으로 메모리 할당 불가\n");
		return;
	}

	for (int i = 0; i < num; i++) {
		printf("%d번째 학생의 성적 입력 : ", i + 1);
		scanf_s("%d", &student[i]);
	}

	for (int i = 0; i < num; i++) {
		total += student[i];
	}

	printf("총점 : %d, 평균 : %d\n", total, total / num);

	free(student);
}