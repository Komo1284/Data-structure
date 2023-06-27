#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node* DStructure = NULL;
	// ������ �ڷᱸ���� �����ϴ� ����� ���س��� ����Ѵ�.
	// - �ٽ��� ���� ������ ��, �̸� ������/���������� �������ΰ� ��
	// ������ : 1,2,3���� �־����� 1,2,3���� ������
	// ������ : 1,2,3���� �־����� 3,2,1���� ������
	// - �����Ҵ����� �����̴�.
	int tmp1 = 0;
	int count = 1;
	Node* tmp2 = NULL;
	/*
	* ������
	Node** pnode = &DStructure;
	while (count <= 5) {
		printf("��%d �Է� >> ", count); scanf_s("%d", &tmp1);
		if (*pnode == NULL) {
			*pnode = getNode();
			if (*pnode != NULL) {
				(*pnode)->data = tmp1;
				pnode = &(*pnode)->link;
			}
		}
		count += 1;
	}
	*/
	
	while (count <= 5) {
		printf("��%d �Է� >> ", count); scanf_s("%d", &tmp1);
		Node* tmp = getNode();
		if (tmp != NULL) {
			tmp->data = tmp1;
			tmp->link = DStructure;
			DStructure = tmp;
		}
		count += 1;
	}

	count = 1;
	tmp2 = DStructure;
	while (tmp2 != NULL) {
		printf("%d : %d\n", count, tmp2->data);
		tmp2 = tmp2->link;
		count += 1;
	}

	while (DStructure != NULL) {
		Node* tmp = DStructure;
		DStructure = tmp->link;
		free(tmp);
	}
	return 0;
}