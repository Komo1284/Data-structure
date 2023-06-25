// 23. �����Ҵ�EX2.c
#include <stdio.h>
#include <malloc.h>

struct node {
	int data1; int data2;
};
typedef struct node Node;

void checkThat(Node* that1, Node* that2) {
	if (that1 != NULL) printf("YES");
	else printf("NO");
	printf(" and ");
	if (that2 != NULL) printf("YES");
	else printf("NO");
	printf("\n");
}

// �� ���� ��ü�ϴ� �Ͱ� �ĺ��Ͽ� �ű�� ���� �� �ٸ� ������ ��
// �ٸ�, ���� ����� ��
void moveThat(Node** p1, Node** p2) {
	if (*p1 != NULL && *p2 != NULL) return;
	else if (*p1 != NULL) { *p2 = *p1; *p1 = NULL; }
	else		  		  { *p1 = *p2; *p2 = NULL; }
}
void moveThatSwap(Node** p1, Node** p2) {
	Node* tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void) {
	// �ǽ� : ���� �ڵ鿡�� �ƹ��͵� ����, ������ �ڵ鿡�� �ڷᰡ �ֽ��ϴ�.
	Node* LeftHandle = NULL;
	Node* RightHandle = (Node*)malloc(sizeof(Node));
	if (RightHandle != NULL) {
		RightHandle->data1 = 100;
		RightHandle->data2 = 200;
	}
	// �ڷḦ ��� �� �ڵ鿡 �ִ��� �ĺ��Ͽ� ���� ������ �Ű��ִ� moveThat�� �����غ�����.
	// ����� ���� �����ص帰 �Լ��� üũ�մϴ�.
	moveThat(&LeftHandle, &RightHandle);
	checkThat(LeftHandle, RightHandle);	// YES and NO
	moveThat(&RightHandle, &LeftHandle);
	checkThat(LeftHandle, RightHandle);	// NO and YES
	
	return 0;
}