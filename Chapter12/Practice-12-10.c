#include <stdio.h>
#include <string.h>

void main() {
	int ret1, ret2, ret3;
	char s1[] = "ABC";
	char s2[] = "ABC";
	char s3[] = "ABB";
	char s4[] = "ABD";

	ret1 = strcmp(s1, s2);
	ret2 = strcmp(s1, s3);
	ret3 = strcmp(s1, s4);

	printf("ret1의 결과값 %d\n", ret1); // 0 : 동일
	printf("ret2의 결과값 %d\n", ret2); // 1 : 서로 다른 문자 발견되면, 각각 아스키 코드 비교하여 문자열 전체의 대소 비교 (c > b) --> s1 > s3 return 1
	printf("ret3의 결과값 %d\n", ret3); // -1 
}