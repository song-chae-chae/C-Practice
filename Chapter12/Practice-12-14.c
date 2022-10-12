#include <stdio.h>
#include <string.h>

void main() {
	char str[] = "우리는 이에 우리 조선이 독립한 나라임과\ 조선 사람이 자주적인 민족임을 선언한다. 이로써 세계 만국에\ 알리어 인류 평등의 큰 도의를 분명히 하는 바이며, \ 이로써 자손만대에 깨우쳐 일러 민족의 독자적 생존의\ 정당한 권리를 영원히 누려 가지게 하는 바이다.";

	char strSearch[100];
	fputs("검색할 문자열을 입력하세요 : ", stdout);
	gets(strSearch);

	if (strstr(str, strSearch))
		puts("문자열을 찾았습니다.");
	else {
		puts("문자열을 찾을 수 없습니다.");
	}

}