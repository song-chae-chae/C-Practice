#include <stdio.h>

int main(void) {
	char ch = 50;
	short sNum = 1000;
	int iNum = 50000;
	float fNum = 3.14f;
	double dNum = 3.1415;

	printf("변수 ch의 크기는 %d바이트이다.\n", sizeof ch); // sizeof ch : 변수의 크기 바이트로 출력
	printf("변수 sNum의 크기는 %d바이트이다.\n", sizeof sNum);
	printf("변수 iNum의 크기는 %d바이트이다.\n", sizeof iNum);
	printf("변수 fNum의 크기는 %d바이트이다.\n", sizeof fNum);
	printf("변수 dNum의 크기는 %d바이트이다.\n", sizeof dNum);

	printf("자료형 ch의 크기는 %d바이트이다.\n", sizeof(char)); // sizeof(char) : 자료형의 크기 바이트로 출력
	printf("자료형 sNum의 크기는 %d바이트이다.\n", sizeof(short));
	printf("자료형 iNum의 크기는 %d바이트이다.\n", sizeof(int));
	printf("자료형 fNum의 크기는 %d바이트이다.\n", sizeof(float));
	printf("자료형 dNum의 크기는 %d바이트이다.\n", sizeof(double));

	return 0;
}