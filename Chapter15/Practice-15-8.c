#include <stdio.h>
#include <string.h>

#define BUF_SIZE 30

void main() {
	char buf[BUF_SIZE];
	int readLen = 0;
	FILE* src, * des; // 파일 읽어서 복사(쓰기)할 스트림 2개 선언

	src = fopen("c:\\수련.jpg", "rb"); // 원본 파일 바이너리 형태로 읽어서 rb 모드
	des = fopen("c:\\수련_copy.jpg", "rb"); // 바이너리 형태로 써야 해서 wb 모드

	if (src == NULL || des == NULL) {
		puts("파일을 열지 못했습니다.");
		return;
	}

	while (1) {
		readLen = fread(buf, 1, BUF_SIZE, src); // src의 바이너리 데이터 BUF_SIZE 크기 단위로 읽어서 읽어온 데이터의 길이 리턴
		if (readLen < BUF_SIZE) { // 마지막 데이터면 BUF_SIZE보다 작은 값 리턴될 것이므로 복사 완료로 간주
			// feof : 파일의 마지막을 찾기 위해 사용하는 함수 - 파일 스트림의 마지막에 도달하지 않았다면 0을 리턴, 도달했으면 0이 아닌 값 리턴
			if (feof(src) != 0) {
				fwrite(buf, 1, readLen, des);
				puts("파일 복사 완료");
				break;
			}
			else {
				puts("파일 복사 실패");
			}
		}
		fwrite(buf, 1, BUF_SIZE, des); // 저장한 바이너리 데이터를 이미지 복사본의 대상인 des에 씀
	}

	if (fclose(src) != 0 || fclose(des) != 0) {
		puts("파일을 닫지 못함\n");
		return;
	}
}
