#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node node1 = { 0, NULL };
	Node node2 = { 0, NULL };
	Node node3 = { 0, NULL };

	printf("값1 입력 >> ");
	scanf_s("%d", &node1.data);
	printf("값2 입력 >> ");
	scanf_s("%d", &node2.data);
	printf("값3 입력 >> ");
	scanf_s("%d", &node3.data);

	printf("저장된 값 : %d, %d, %d\n", node1.data, node2.data, node3.data);
	printf("값들의 합 : %d\n", node1.data + node2.data + node3.data);
	return 0;
}