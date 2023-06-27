// 15. �ڱ���������üEX4.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node p1 = { 0, NULL };
	Node p2 = { 0, NULL };
	Node p3 = { 0, NULL };
	Node p4 = { 0, NULL };
	// �������� ���� ���� ���
	p1.link = &p2;
	p1.link->link = &p3;
	p1.link->link->link = &p4;
	// ������ ����� ����, �ݺ��� ���� �� ���� �� ������ �ݺ��� ���� �� �ְ� �����.
	// - �����͸� �̿��Ͽ�, ����� �����Ͽ� �̿���
	// �� �ڷᱸ���� �����ϱ� ���� �����ͺ����� �׻� �غ��
	// root, head, top, bottom, front, rear ���....
	Node* root = NULL;
	// 1) �̷��� ������ main�� �ִ�
	// - ������ �ʿ��� ���� �ٵ��α� ���� �뵵
	// 2) �̷��� ������ �� �ִ� / �Լ��� �ִ�.
	// - ������ �̿��Ͽ� ���� ���� �뵵
	printf("�� 4�� �Է� >> ");
	scanf_s("%d", &p1.data);
	scanf_s("%d", &p1.link->data);
	scanf_s("%d", &p1.link->link->data);
	scanf_s("%d", &p1.link->link->link->data);
	printf("%d-%d-%d-%d\n", p1.data, p2.data, p3.data, p4.data);
	printf("A : %d, ", p1.data);
	printf("B : %d\n", p1.link->data);
	printf("C : %d, ", p1.link->link->data);
	printf("D : %d\n", p1.link->link->link->data);
	return 0;
}