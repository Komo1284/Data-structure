#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node* p1 = NULL;
	Node** pnode = NULL;
	int tmp1 = 0;
	Node* tmp2 = NULL;
	int result = 0;

	// �ڷᱸ���� ���� ������������ �ϸ� ���� �������� �� ����
	// - �Է¹�� / ��¹�� / ������ ���..
	//   �Լ��� �Ź� �޶����� ������
	// - "ö��"�ϰ� ��ȹ�� ��� ������� ������ ����������, ��Ȱ�뵵 �ȵ�

	pnode = &p1;
	for (int i = 1; i <= 4; i += 1) {
		printf("��%d �Է� >> ", i);
		scanf_s("%d", &tmp1);
		if (*pnode == NULL) {
			*pnode = getNode();
			if (*pnode != NULL) {
				p1->data = tmp1;
				pnode = &(*pnode)->link;
			}
		}
	}

	tmp2 = p1;
	while (tmp2 != NULL) {
		printf("-> %d\n", tmp2->data);
		tmp2 = tmp2->link;
	}
	/*
	printf("ù��° : %d\n", p1->link->data);
	printf("�ι�° : %d\n", p1->link->data);
	printf("����° : %d\n", p1->link->link->data);
	printf("�׹�° : %d\n", p1->link->link->link->data);
	*/

	tmp2 = p1;
	while (tmp2 != NULL) {
		result += tmp2->data;
		tmp2 = tmp2->link;
	}
	printf("������ �� : %d\n", result);
	return 0;
}