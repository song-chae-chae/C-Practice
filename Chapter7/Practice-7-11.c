#include <stdio.h>

void main() {
	int i, j;
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	printf("2차원 배열 값의 출력\n");
	printf("===================\n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d    ", arr[i][j]);
		}
		printf("\n");
	}

	printf("===================\n");
}