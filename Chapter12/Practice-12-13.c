#include <stdio.h>
#include <string.h>

void main() {
	char str[] = "applepie";
	int count = 0;
	char* ptr;
	char* rptr;
	int i;

	ptr = strchr(str, 'e');
	rptr = strchr(str, 'e');

	if (ptr == NULL) {
		printf("문자 'e'를 찾을 수 없습니다.");
	}
	else {
		printf("strchar : 문자 'e'를 %d번째 위치에서 찾았습니다.\n", (ptr - str) + 1);
		printf("strchar : 문자 'e'를 %d번째 위치에서 찾았습니다.\n", (rptr - str) + 1);
	}
}