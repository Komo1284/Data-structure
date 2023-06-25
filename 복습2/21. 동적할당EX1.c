// 21. �����Ҵ�EX1.c
#include <stdio.h>
#include <malloc.h>

struct node {
	int data1;
	int data2;
};
typedef struct node Node;

// 1. ����ü�� ���� �����Ҵ��� �ʱ�ȭ������ ���Խ��Ѽ� ��������
// - �����Ҵ���ü�� ��ȯ���� ���°��� ���� ���ְ� �ֱ� ������..
//   �̸� �ǵ帮�� �ʰ�, �״�� �Ѱ���
Node* getNode(void) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL) {
		newNode->data1 = 0;
		newNode->data2 = 0;
	} return newNode;
}

// 2. ����ü�� �����ϴ� ��������, ����� � �����ΰ��� ����...
//   ������ �� �ΰ��� �ٴ� �ڵ尡 ���ų�, ������ ��찡 ����
//   ������ ������ ���� ������ ���ؼ� ���������� ������ �غ�Ǿ� ����
int remove(Node** target) {
	// target : ���������ͺ����� �ּҰ�
	// *target : ������ ����ü������ �ּҰ�
	// **target : ����ü ����
	if (*target != NULL) {
		free(*target);
		*target = NULL;
		return 1;
	}
	else return 0;
	// return�� ���� ���°��� ��ȯ��
}

int main(void) {
	// �ǽ�
	// �����Ҵ����� ����ü ���� 3���� �����ϰ�
	// �� ����ü ������ ����� ��� 0���� �ʱ�ȭ�ϰ�
	// ������ ����ü ������ �����ϼ���.
	// �� ���ǹ����� �����۵��ϵ��� �����ϼž� �մϴ�.
	Node* pnode1 = getNode();
	Node* pnode2 = getNode();
	Node* pnode3 = getNode();
	if (pnode1 == NULL || pnode2 == NULL || pnode3 == NULL) {
		printf("�ϳ� �̻��� �����Ҵ��� �����߽��ϴ�.\n");
	}
	else {
		printf("�ʱ�ȭ�� ����ü ������ �ٷ�� ��...\n");
	}
	/*
	int count = 0;
	count += remove(&pnode1);
	count += remove(&pnode2);
	count += remove(&pnode3);
	printf("���ŵ� ������ ���� : %d\n", count);
	*/
	if (remove(&pnode1)) printf("���ſϷ�!\n");
	else printf("���Ž���\n");
	
	if (remove(&pnode2)) printf("���ſϷ�!\n");
	else printf("���Ž���\n");
	
	if (remove(&pnode3)) printf("���ſϷ�!\n");
	else printf("���Ž���\n");
	return 0;
}