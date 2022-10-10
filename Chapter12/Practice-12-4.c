#include <stdio.h>
#include <string.h>

void main() {
	char str1[10] = "beautiful";

	strcpy_s(str1, 6, "dirty");
	puts(str1);
}