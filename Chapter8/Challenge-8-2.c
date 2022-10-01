#include <stdio.h>

void main() {
	char a = 'C';
	int b = 10;
	double c = 3.14;

	char* pA = &a;
	char* pB = &b;
	char* pC = &c;

	(*pA)++;
	(*pB)++;
	(*pC)++;

	printf("%c\n", a);
	printf("%d\n", b);
	printf("%f\n", c);

}