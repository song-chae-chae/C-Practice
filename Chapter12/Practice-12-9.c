#include <stdio.h>
#include <string.h>

void main() {
	char dest[100] = "i am";
	char src1[] = " not a student";
	char src2[] = " a nice guy";

	// 추가할 문자열 개수 지정할때
	strncat_s(dest, 100, src1, 4); // i am not
	puts(dest);

	strcat_s(dest, 100, src2); // i am not a nice guy (dest에 ' not' 붙어있으니까)
	puts(dest);
}