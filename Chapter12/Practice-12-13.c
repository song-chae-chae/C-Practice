#include <stdio.h>
#include <string.h>

void main() {
	char str[] = "applepie";
	int count = 0;
	char* ptr;
	char* rptr;
	int i;

	ptr = strchr(str, 'e'); // 문자열 str을 기반으로 문자 'e'를 문자열 처음부터 검색하여 검색되면 해당 위치의 포인터 리턴함
	rptr = strrchr(str, 'e'); // 문자열 str을 기반으로 문자 'e'를 문자열 끝에서부터 검색하여 검색이 되면 해당 위치의 포인터 리턴

	if (ptr == NULL) {
		printf("문자 'e'를 찾을 수 없습니다.");
	}
	else {
		printf("strchar : 문자 'e'를 %d번째 위치에서 찾았습니다.\n", (ptr - str) + 1); // 포인터를 이용하여 문자 'e'를 발견한 위치가 문자열에서 몇 번째인지 출력
		printf("strchar : 문자 'e'를 %d번째 위치에서 찾았습니다.\n", (rptr - str) + 1);
	}
}