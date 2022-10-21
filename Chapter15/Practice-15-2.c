#include <stdio.h>

void main() {
	FILE* file;
	char ch;

	file = fopen_s(&file, "C:\\Temp.txt", "wt");

	if (file == NULL) {
		printf("파일 존재 x\n");
	}
	else {
		printf("파일 존재\n");
		for (ch = 'A'; ch <= 'Z'; ch++) {
			fputc(ch, file); // fopen으로 연 파일 스트림에 문자를 대입
			// 파일 스트림에 문자 쓰여지면 파일의 문자 위치 그 다음으로 이동
		}
		fclose(file);
	}
}
