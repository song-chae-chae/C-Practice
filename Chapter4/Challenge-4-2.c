#include <stdio.h>

void main() {
	int a, b, c;
	int min;

	scanf_s("%d%d%d", &a, &b, &c);
	
	min = a;
	
	if (a > b)
		min = b;

	if (min < c)
		printf("최소값 : %d", min);
	else
		printf("최소값 : %d", c);
}