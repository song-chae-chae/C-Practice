#include <stdio.h>

void main() {
	int grade;
	
	scanf_s("%d", &grade);
	
	if (grade > 90)
		printf("학점은 A");
	else if (grade > 80)
		printf("학점은 B");
	else if (grade > 70)
		printf("학점은 C");
	else if (grade > 60)
		printf("학점은 D");
	else 
		printf("학점은 E");
}