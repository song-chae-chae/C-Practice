#include <stdio.h>

void main() {
	char str[] = "have a nice day";
	puts(str); // 개행 문자 쓰지 않고도 개행됨

	fputs(str, stdout);
	fputs("\n", stdout); // 개행문자 써줘야 개행됨
}