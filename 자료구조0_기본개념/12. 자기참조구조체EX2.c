#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node node1 = { 0, NULL };
	Node node2 = { 0, NULL };
	Node node3 = { 0, NULL };

	printf("��1 �Է� >> ");
	scanf_s("%d", &node1.data);
	printf("��2 �Է� >> ");
	scanf_s("%d", &node2.data);
	printf("��3 �Է� >> ");
	scanf_s("%d", &node3.data);

	printf("����� �� : %d, %d, %d\n", node1.data, node2.data, node3.data);
	printf("������ �� : %d\n", node1.data + node2.data + node3.data);
	return 0;
}