#include <stdio.h>
#include <string.h>

void main() {
	char string[] = "f(x)=a+b*c%d-f";
	char strSeparate[] = "%=+-*";
	char* strPos = string;

	do {
		// strpbrk : 첫번째 인수로 주어진 문자열에서 두 번째 인수로 주어진 문자열에 속해 있는 문자 중 가장 먼저 발견된 문자를 찾아 그 번지를 리턴
		strPos = strpbrk(strPos, strSeparate);

		if (strPos != NULL) {
			// strPos의 포인터 위치에 해당하는 문자열 출력 후, strPos의 포인터 위치를 1만큼 이동
			printf("%s\n", strPos);
			++strPos;
		}
	} while (strPos != NULL);
}