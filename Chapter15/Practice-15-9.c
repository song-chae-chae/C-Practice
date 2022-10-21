#include <stdio.h>

void main() {
	FILE* file;
	char buf[256];

	file = fopen("c:\\temp.txt", "rt");

	if (file != NULL) {
		fseek(file, 21, SEEK_SET); // 스트림의 처음 위치에서 +21만큼의 위치에서 부터 스트림 읽어옴
		fgets(buf, 256, file);
		printf("%s\n\n", buf);
		fclose(file);
	}
}
