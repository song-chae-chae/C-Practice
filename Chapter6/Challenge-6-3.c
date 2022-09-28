#include <stdio.h>

void print_page();
int add_total_page(int page);

void main() {
	// 책읽기 마라톤 : 내가 읽은 책들의 페이지 수 누적 계산하는 기능
	int readPage = 0;
	
	for (;;) {

		print_page();
		scanf_s("%d", &readPage);
		int totalPage = add_total_page(readPage);

		if (readPage < 0) {
			printf("더 분발하세요.\n");
			break;
		}
		else {
			printf("최종 누적 페이지: %d\n", totalPage);

		}
	}
}

void print_page() {
	printf("읽은 책의 페이지 수를 입력하시오. : ");
}

int add_total_page(int page) {
	static int total = 0;
	total += page;
	return total;
}