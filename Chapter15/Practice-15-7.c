#include <stdio.h>
#include <string.h>

void main() {
	FILE* file;
	char buf[256]; // 데이터 읽어서 저장할 버퍼 선언

	file = fopen("c:\\temp.txt", "wt");

	if (file == NULL) {
		printf("파일 존재 x\n");
	}
	else {
		memset(buf, 0, 256);
		// fread : 스트림으로부터 데이터 읽어오는 함수
		// file로부터 1바이트 단위로 256개의 데이터를 가져와서 buf에 저장
		while (fread(buf, sizeof(char), 256, file)) {
			printf("%s\n", buf);
		}

		fclose(file);
	}
}
