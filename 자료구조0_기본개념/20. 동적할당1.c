// 20. �����Ҵ�1.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	// ��κ��� �ڷᱸ����, ������ ���� �ֱ� ������
	// �� ������ �ǽð����� �����ؼ� �÷���
	// - ������ ���� �Ǵܹ��
	//   - �ݺ��� & ���ǹ� : ���ѹݺ�/���ѹݺ����� Ȯ����

	// �������� : �� ���� �ٲٴ� ������, �ڷᰡ �߰�/���ŵ� ���� �߻�
	//           �ʿ��� ���� �ڷᱸ���� �ٵ�� ���� ���� ��
	Node* root = NULL;
	// ���� ���� ����ִ��� ���θ� üũ��
	if (root == NULL) {
		root = (Node*)malloc(sizeof(Node));
		// �����Ҵ����� ������ �Ǿ����� ���θ� üũ��
		if (root != NULL) {
			root->data = 10;
			root->link = NULL;
		}
	}

	// ���� ���� ���� ���� ������ ù��°���� üũ�ϸ� ������
	if (root == NULL) {
		root = (Node*)malloc(sizeof(Node));
		// �����Ҵ����� ������ �Ǿ����� ���θ� üũ��
		if (root != NULL) {
			root->data = 20;
			root->link = NULL;
		}
	}
	else {
		if (root->link == NULL) {
			root->link = (Node*)malloc(sizeof(Node));
			if (root->link != NULL) {
				root->link->data = 20;
				root->link->link = NULL;
			}
		}
	}
	// �ε��� : ���°�� �����Ǿ������� ��Ÿ���� ��
	// - �ڷᱸ�������� ������ �ڵ带 "���" �ݺ���ų ���ΰ��� �ǹ���

	if (root != NULL) printf("%d ", root->data);
	// ����� �������� "���η� �İ���" ���ǹ����� �ټ� ������
	// - ����Լ����� ���Ǿ��, ���ϴ� ���� �� �� ����
	if (root != NULL) {
		if (root->link != NULL) printf("%d ", root->data);
	}
	return 0;
}