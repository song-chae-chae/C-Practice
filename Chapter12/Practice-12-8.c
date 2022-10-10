#include <stdio.h>
#include <string.h>

void main() {
	char dest[15] = "i am";
	char src[] = " a student";

	// 문자열 합치기
	// dest의 끝에 있던 널 종료 문자가 삭제되고 그 자리에 src가 붙음
	strcat_s(dest, 15, src);
	puts(dest);
}