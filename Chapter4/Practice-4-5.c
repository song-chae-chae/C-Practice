#include <stdio.h>

void main() {
	int shortcut;
	printf("단축키를 입력하시오. : ");

	scanf_s("%d", &shortcut);

	switch (shortcut)
	{
		case 1:
			printf("아들 : \n");
			break;
		case 2:
			printf("딸 : \n");
			break;
		case 3:
			printf("동생 : \n");
			break;
		case 4:
			printf("남편 : \n");
			break;
		default:
			printf("해당 단축키 없음\n");
			break;
	}
}