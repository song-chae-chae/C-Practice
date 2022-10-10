#include <stdio.h>
#include <string.h>

void main() {
	char* arr[] = { "김맹구","이영구","박빠꾸", "김상룡", "변강쇠" };
	puts("회사에서 김씨 성을 가진 사람만 출력해라");

	for (int i = 0; i < 5; i++) {
		if (!strncmp(arr[i], "김", 1)) {
			printf("%s\n", arr[i]);
		}
	}
}