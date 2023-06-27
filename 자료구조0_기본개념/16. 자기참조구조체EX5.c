// 15. �ڱ���������üEX4.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node p1 = { 5, NULL };
	Node p2 = { 10, NULL };
	Node p3 = { 15, NULL };
	Node p4 = { 20, NULL };
	
	p3.link = &p1;
	p1.link = &p4;
	p4.link = &p2;

	printf("%d-%d-%d-%d\n", p1.data, p2.data, p3.data, p4.data);
	printf("A : %d, ", p3.data);
	printf("B : %d\n", p3.link->data);
	printf("C : %d, ", p3.link->link->data);
	printf("D : %d\n", p3.link->link->link->data);
	
	// �ݺ��� �����ϴ� ��� : ����� ���� ���� �����.
	Node* tmp = &p3;				// ���۰�
	while (tmp != NULL) {			// ����
		printf("%d ", tmp->data);	// ���� ���
		tmp = tmp->link;			// ��ġ ��ȭ
	} printf("\n");
	return 0;
}