#include <stdio.h>
#include <string.h>

void main() {
	char str1[11] = "smartphone";
	char str2[11] = "interphone";

	// 복사할 문자열의 개수 지정해서 복사한것만 붙여넣음
	strncpy_s(str2, 11, str1, 5); 
	puts(str2);
}