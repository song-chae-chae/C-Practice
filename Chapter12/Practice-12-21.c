#include <stdio.h>
#include <stdlib.h>

void main() {
	char ch;
	fputs("맞으면 'y' 또는 'Y'를, 틀리면 'n' 또는 'N'을 눌러주세요 : ", stdout);
	scanf_s("%c", &ch);

	switch (ch) {
	case 'Y':
	case 'y':
		puts("승인");
		break;
	case 'n':
	case 'N':
		puts("취소");
		break;
	}
}