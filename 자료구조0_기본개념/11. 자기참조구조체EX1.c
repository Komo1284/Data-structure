#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

// BASE.h ��������� �ҷ��ͼ� �̿��Ͻð�
// typedef�� BASE.h�� ���Խ�Ű�� �ʽ��ϴ�.

int main(void) {
	Node node1 = { 10, NULL };
	Node node2 = { 20, NULL };
	Node node3 = { 30, NULL };
	printf("ù��° : %d\n", node1.data);
	printf("�ι�° : %d\n", node2.data);
	printf("����° : %d\n", node3.data);
	return 0;
}