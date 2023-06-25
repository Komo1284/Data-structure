// 24. �����Ҵ�EX3.c
#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
};
typedef struct node Node;

// �����Ҵ� ������ �Լ� getNode
Node* getNode(void) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL) {
		newNode->data = 0;
	} return newNode;
}
// ����ü�� ���� ����ϴ� �Լ�
void showValue(Node* pnode) {
	printf("����� �� : %d\n", pnode->data);
}
// ����ü�� ���� �����ϴ� �Լ�
void inputValue(Node* pnode) {
	printf("������ �� >> ");
	scanf_s("%d", &pnode->data);
}
// �� ����ü�� ��ȯ�ϴ� �Լ�
void swap(Node** pn1, Node** pn2) {
	Node* tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
// �����Ҵ����� �Լ�
void delNode(Node** pnode) {
	if (*pnode != NULL) {
		free(*pnode);
		*pnode = NULL;
	}
}

int main(void) {
	// �� ����ü�� �̿��Ͽ� �Ʒ��� �ڵ尡 ����˴ϴ�.
	// �̿� �´� �Լ����� �����ϼ���.

	Node* pnode1 = getNode();
	Node* pnode2 = getNode();
	if (pnode1 != NULL && pnode2 != NULL) {
		showValue(pnode1);	// ����� �� : 0
		showValue(pnode2);	// ����� �� : 0
		inputValue(pnode1);	// ������ �� >> (scanf_s�� �Է��� �޾Ƽ�)
		inputValue(pnode2);	// ������ �� >> (����ü ��������� �����ϼ���)
		showValue(pnode1);	// ����� �� : (���ܰ迡�� ù��°�� �Է��� ��)
		showValue(pnode2);	// ����� �� : (���ܰ迡�� �ι�°�� �Է��� ��)
		swap(&pnode1, &pnode2);
		showValue(pnode1);	// ����� �� : (���ܰ迡�� �ι�°�� �Է��� ��)
		showValue(pnode2);	// ����� �� : (���ܰ迡�� ù��°�� �Է��� ��)
	}
	else printf("�����Ҵ� ����\n");
	delNode(&pnode1);
	delNode(&pnode2);
	return 0;
}