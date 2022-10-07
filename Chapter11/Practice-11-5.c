﻿#include <stdio.h>

void main() {
	// void형 포인터 : 메모리를 저장하기 위한 포인터형
	// 자료형이 정해져있지 않아 가리키는 대상체에 몇 바이트를 읽을 수 있는지는 모르나, 주소값을 갖는 포인터라는 것
	// 포인터 변수는 어떤 자료형이든 4byte 만큼의 크기를 할당하므로 포인터 변수 a의 크기는 4byte이다.
	// a가 할당받은 4byte는 포인터 주소값을 저장하기 위한 메모리이고, 거기서 가리키는 대상체의 크기는 아직 정해지지 않았다는 것
	void* a;
}