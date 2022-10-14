#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main() {
	char ch;
	fputs("맞으면 'y' or 'Y', 틀리면 'n' or 'N'을 눌러라 : ", stdout);
	scanf_s("%s", &ch);

	switch (tolower(ch)) {
	case 'y':
		puts("승인");
		break;
	case 'n':
		puts("취소");
		break;
	}
	}
}