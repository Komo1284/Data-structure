#include <stdio.h>
#include <malloc.h>

// node : �ڷᱸ�� �о߿���, ���� �����ϰ� �ִ� �͵��� ����
struct node {
	int data1;
	int data2;
};
typedef struct node Node;

int main(void) {
	// �������� �� ���� - ������ �Լ��� �ͼӵ�
	// - �޸� ������ �� �� ȿ�������� �� �� ����
	// 1) �Լ��� �������� �����ϴ�, �ʿ��� ���� �Լ��� ������ �������
	// 2) �Լ� ��ü�� ���� �� �ִ� ������ ������ ���ѵ�(1MB)

	// �����Ҵ� - �ʿ��� ��ŭ �Լ��� �ͼӵ��� ���� ������ ����� ���
	// - ���α׷� �� ��ü�� �ͼӵǾ� ����
	// - ���α׷��� ���ᰡ ���� ������ ��� ���� ��
	// - �޸𸮰� �����ϸ� ������
	Node* pnode = (Node*)malloc(sizeof(Node));
	if (pnode == NULL) printf("�����Ҵ��� �ȵǾ����ϴ�.\n");
	else {
		pnode->data1 = 314;
		pnode->data2 = 999;
		printf("%d, %d\n", pnode->data1, pnode->data2);
	}
	if (pnode != NULL) {
		free(pnode);
		pnode = NULL;
	}
	return 0;
}