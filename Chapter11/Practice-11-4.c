#include <stdio.h>

void main() {
	// void는 크기를 가지는 자료형이 아니기 때문에 void형으로 변수를 선언 시 컴파일러가 메모리 상에 어느 정도의 크기로 메모리를 할당할지 알 수 없어서 error 발생
	void a; // error
}
