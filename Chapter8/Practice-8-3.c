#include <stdio.h>

void main() {
	char str[] = "Programming";
	char* ptr1;

	ptr1 = &str[0];

	printf("%p\n", ptr1); // P 들어있는 주소값
	printf("%p\n", ptr1 + 1);  // r 들어있는 주소값
	printf("%c\n", *(ptr1 + 1)); // r

	printf("%p\n", ptr1 + 3); // g 들어있는 주소값
	printf("%c\n", *(ptr1 + 3)); // g
}