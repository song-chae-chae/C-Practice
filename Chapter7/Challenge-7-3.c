#include <stdio.h>

void main() {
	int arr1[2][3] = {
		{1, 2, 3},
		{4, 5, 6},
	};
	int arr2[3][2] = {
		{1, 2},
		{3, 4},
		{5, 6}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d    ", arr1[i][j] * arr2[j][i]);
		}
		printf("\n");
	}
}