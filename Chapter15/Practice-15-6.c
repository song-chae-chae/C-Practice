#include <stdio.h>
#include <string.h>

void main() {
	FILE* file;
	char buf[256];

	memset(buf, 0, 256);
	printf("문자열 입력 : ");
	gets(buf); // 사용자로부터 데이터 입력받아 버퍼에 저장

	file = fopen("c:\\temp.txt", "wt");

	if (file == NULL) {
		printf("파일 존재 x\n");
	}
	else {
		fwrite(buf, 1, 256, file); // 파일 스트림에 데이터 쓰기
		printf("버퍼의 내용이 파일에 쓰여졌다.\n");
		fclose(file);
	}
}
