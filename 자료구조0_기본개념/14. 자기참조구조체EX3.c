// 14. �ڱ���������üEX3.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node node1;
	Node node2;
	Node node3;

	node1.data = 10;
	node1.link = &node2;
	node1.link->data = 20;
	node1.link->link = &node3; // node2.link = &node3; �� ����
	node2.link->data = 30;

	// ���� �ܹ��� ����
	// - ���� : ���������� ������Ŵ
	// - �ܹ��� : �����ͺ����� �ϳ����̱⿡ ������ ���ѵ�
	printf("ù��° : %d\n", node1.data);
	printf("�ι�° : %d\n", node1.link->data);
	printf("����° : %d\n", node1.link->link->data);
	return 0;
}