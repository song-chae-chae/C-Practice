#include <stdio.h>
#include <string.h>

void main() {
	char str1[] = "cprogramming";
	char str2[20];

	strcpy_s(str2, 13, str1);
	puts(str2);
}