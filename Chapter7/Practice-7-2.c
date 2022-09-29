#include <stdio.h>

void main() {
	int total = 0;
	int array[5] = { 1, 2, 3, 4, 5 };
	total = array[0] + array[1] + array[2] + array[3] + array[4];

	printf("배열 요소의 총 합은 %d\n", total);
}