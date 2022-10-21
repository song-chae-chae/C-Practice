#include <stdio.h>

void main() {
	FILE* file;
	char* str = "죽는 날까지 하늘을 우러러 한 점 부끄럼 없기를,\
				잎새에 이는 바람에도 나는 괴로워했다."; // 파일 스트림에 쓰고자 하는 문자열의 내용을 포인터 변수에 담기
	file = fopen("c:\\temp.txt", "wt");

	if (file == NULL) {
		printf("파일 존재 x\n");
	}
	else {
		fputs(str, file); // str에 담긴 문자열의 내용을 file에 쓰기
		printf("문자열이 파일에 쓰여졌습니다.\n");
		fclose(file);
	}

}
