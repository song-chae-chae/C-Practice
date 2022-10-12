#include <stdio.h>
#include <string.h>

void main() {
	char string[] = "f(x)=a+b*c%d-f";
	char strSeparate[] = "%=+-*";
	char* strPos = string;

	do {
		strPos = strpbrk(strPos, strSeparate);

		if (strPos != NULL) {
			printf("%s\n", strPos);
			++strPos;
		}
	} while (strPos != NULL);
}