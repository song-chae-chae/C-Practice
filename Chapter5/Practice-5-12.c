#include <stdio.h>

void main() {
	int i, j, end = 1;
	int sum = 0;
	
	for (i = 0; i < 10; i++) {
		for (j = end; j < end + 10; j++) {
			sum = sum + j;
		}
		printf("%d부터 %d까지의 합 : %d\n", end, end + 9, sum);
		end = j;
		sum = 0;
	}
}