#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node node1 = { 10, NULL };
	Node node2 = { 20, NULL };
	// �ڱ���������ü�� ��� : �����ͺ����� �ּҰ� �����ϱ�
	node1.link = &node2;
	// - "����"�� ��������, ����� ������ �̸��� �ǹ̰� ������
	printf("%d\n", node1.data);
	printf("%d\n", node2.data);			// ������������ ���� ���� ���ɾ���
	printf("%d\n", node1.link->data);	// link����� �̸� �����Ͽ� ���� ��
	return 0;
}