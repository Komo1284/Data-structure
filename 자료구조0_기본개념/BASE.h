#include <malloc.h>

// �ڱ���������ü : �ڷᱸ���� ���� ������ ����� ���� �ڷ���
struct node {
	// data : �ڷᱸ���� ������ų �ڷḦ �����ϱ� ���� ����
	// - �ʿ��� ������ ���� �ڷ����� �ٲ�
	int data;
	// link : �ڷᱸ���� ������ ���� �����ͺ���
	// - � ������ ������ΰ��� ���� ������ �ٲ�
	struct node* link;
};

// �����Ҵ� ������ �Լ� getNode
struct node* getNode(void) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	if (newNode != NULL) {
		newNode->data = 0;
		newNode->link = NULL;
	} return newNode;
}