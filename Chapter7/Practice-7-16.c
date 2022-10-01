#include <stdio.h>

void main() {
	int i, j, total = 0, avg = 0;
	int arr1[3][3];
	int arr2[5][3];
	int result[2][3];
	char *name[3] = { "영구", "맹구", "빡구" };
	for (i = 0; i < 3; i++) {
		printf("%s의 국어, 수학, 영어 점수 입력 : ", name[i]);

		for (j = 0; j < 3; j++) {
			scanf_s("%d", &arr1[i][j]);
			arr2[i][j] = arr1[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			total += arr1[i][j];
		}

		arr2[j][i] = total;
		avg = arr2[j][i] / 3;
		arr2[j + 1][i] = avg;
		total = 0;
		avg = 0;
	}

	printf("===============\n");

	printf("    영구 맹구 빡구\n");
	for (i = 0; i < 5; i++) {
		if (i == 0) {
			printf("국어 ");
		}
		else if (i == 1)
			printf("영어 ");
		else if (i == 2)
			printf("수학 ");
		else if (i == 3)
			printf("총점 ");
		else if (i == 4)
			printf("평균 ");

		for (j = 0; j < 3; j++) {
			if (i < 3)
				printf(" %d", arr2[j][i]);
			else
				printf(" %d", arr2[i][j]);
		}
		printf("\n");
	}
	printf("===============\n");
}