#include <stdio.h>

void main() {
	int i, j, aSize, index, total = 0;
	int arr[][3] = {
		{1, 2, 3},
		{4, },
		{5, 6},
		{7, 8, 9}
	};

	aSize = sizeof(arr) / sizeof(arr[0][0]);
	index = aSize / 3;

	for (i = 0; i < index; i++) {
		for (j = 0; j < 3; j++) {
			total = total + arr[i][j];
		}
	}
	printf("배열 요소의 총 합 = %d\n", total);
}