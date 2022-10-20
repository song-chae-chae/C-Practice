#include <stdio.h>
#include <stdlib.h>

void main() {
	int num, i, total = 0;
	int* student;

	fputs("학생 수 입력 : ", stdout);
	scanf_s("%d", &num);

	student = (int*)malloc(sizeof(int) * num); // 학생 수를 입력받아 학생 수 기반으로 힙 영역에 메모리 할당

	if (student == NULL) {
		printf("메모리 부족으로 메모리 할당 불가\n");
		return;
	}

	for (int i = 0; i < num; i++) {
		printf("%d번째 학생의 성적 입력 : ", i + 1);
		scanf_s("%d", &student[i]); // 할당한 메모리에 각 학생의 성적 입력해서 힙 영역에 데이터 저장 (동적 할당 메모리)
	}

	for (int i = 0; i < num; i++) {
		total += student[i]; // 동적 메모리 상에 있는 데이터들을 student 포인터를 사용하여 읽어온 후 total 변수에 누적 합
	}

	printf("총점 : %d, 평균 : %d\n", total, total / num);

	free(student); // 동적 할당 메모리 해제
}
