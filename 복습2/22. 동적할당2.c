#include <stdio.h>
#include <malloc.h>

struct node {
	int data1;
	int data2;
};
typedef struct node Node;
// �ٸ� ���� ������ ������ �غ��ؼ� �÷��� ���� ��
void pswap1(Node* pn1, Node* pn2) {
	Node* tmp = pn1;
	pn1 = pn2;
	pn2 = tmp;
}
// ���� ���� ������ ������ 2���� ��
void pswap2(Node* pn1, Node* pn2) {
	Node tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
// �� ȿ������ ���� "�̵�"�� �����ϱ� ���� �����
void pswap3(Node** pn1, Node** pn2) {
	Node* tmp = *pn1; // ���� �ٷ� ��� ���缭 �ڷ����� �غ��ؾ� ��
	*pn1 = *pn2;
	*pn2 = tmp;
}

int main(void) {
	// �����ͺ��� : ��� ������ �ѹ� �����ؼ� �����Ͽ� ����ϱ� ���� ����
	Node* pnode1 = NULL; 
	Node* pnode2 = NULL;
	pnode1 = (Node*)malloc(sizeof(Node));
	pnode2 = (Node*)malloc(sizeof(Node));
	// ���������ͺ��� : ��� ���������ͺ����� �����Ͽ� ����ϱ� ���� ����
	pswap3(&pnode1, &pnode2);
	return 0;
}
