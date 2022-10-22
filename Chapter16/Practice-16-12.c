#include <stdio.h>
#include "Practice-16-12-decrease.h"
#include "Practice-16-12-increase.h"

void main() {
	int result1, result2;

	result1 = increase();
	result2 = decrease();

	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);

	return;
}
