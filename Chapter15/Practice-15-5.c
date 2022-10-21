#include <stdio.h>

void main() {
	FILE* file;
	char buf[256]; // 파일 스트림으로부터 읽어온 문자열을 저장할 버퍼

	file = fopen("c:\\temp.txt", "wt");

	if (file == NULL) {
		printf("파일 존재 x\n");
	}
	else {
		while (1) {
			if (fgets(buf, 256, file) == NULL) // 256 바이트 단위의 문자열을 읽어오되, 리턴 값이 파일의 끝인지 검사하고 끝이면 반복물 탈출
				break;

			printf("읽어온 문자열 : %s\n", buf);
			fclose(file);
		}
	}
}
