#include <stdio.h>

void main() {
	void* a;
	double b = 3.14;

	a = &b;
	
	printf("%f\n", *(double*)a);
}