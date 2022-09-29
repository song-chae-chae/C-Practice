#include <stdio.h>

void main() {
	// \0 전까지를 문자열로 인식, 그 뒤는 쓰레기 값으로 취급
	char str[] = "Hello\0world";
	
	printf("str1 = %s\n", str); // Hello

	str[3] = '\0';
	printf("str = %s \n", str); // hel

	str[0] = '\0';
	printf("str1 = %s\n", str); //
	
}