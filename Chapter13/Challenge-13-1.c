#include <stdio.h>
#include <string.h>

struct object {
	char name[10];
	int height;
	int weight;
};

void main() {
	struct object obj;

	printf("물건의 이름 : ");
	gets(obj.name);
	printf("물건의 높이(cm) : ");
	scanf_s("%d", &obj.height);
	printf("물건의 무게(kg) : ");
	scanf_s("%d", &obj.weight);

	printf("\n보낼 물건의 정보 : %s, %dcm, %dkg\n", obj.name, obj.height, obj.weight);
}