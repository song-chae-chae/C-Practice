#include <stdio.h>
#include <string.h>

void main() {
	FILE* file;
	char ch; // 문자 하나 저장할 변수
	char str[2] = { 0, }; // 문자 하나를 문자열 형태로 저장할 변수
	char buf[256] = { 0, }; // 문자들을 하나의 버퍼에 모을 변수

	file = fopen_s(&file, "c:\\temp.txt", "rt");

	if (file == NULL) {
		printf("파일 존재 x\n");
	}
	else {
		// do ~ while 문을 사용하여 파일 스트림의 내용을 읽어옴
		// 최초 한번은 fgetc를 통해 스트림으로부터 문자를 읽어서 문자가 파일의 끝인지 아닌지 검사하기 위함
		do {
			ch = fgetc(file); // 파일 스트림으로부터 한 문자를 읽은 값을 리턴 받아 ch에 대입
			sprintf(str, "%c", ch); // ch에 대입한 문자를 str에 문자열 형태로 대입
			strcat(buf, str); // 버퍼에 이어서 붙여넣기
		} while (ch != EOF);
		puts(buf); // 한문자씩 모아놓은 버퍼 출력
		fclose(file);
	}
}
