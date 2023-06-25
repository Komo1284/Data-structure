// 24. 동적할당EX3.c
#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
};
typedef struct node Node;

// 동적할당 재포장 함수 getNode
Node* getNode(void) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL) {
		newNode->data = 0;
	} return newNode;
}
// 구조체의 값을 출력하는 함수
void showValue(Node* pnode) {
	printf("저장된 값 : %d\n", pnode->data);
}
// 구조체에 값을 저장하는 함수
void inputValue(Node* pnode) {
	printf("저장할 값 >> ");
	scanf_s("%d", &pnode->data);
}
// 두 구조체를 교환하는 함수
void swap(Node** pn1, Node** pn2) {
	Node* tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
// 동적할당제거 함수
void delNode(Node** pnode) {
	if (*pnode != NULL) {
		free(*pnode);
		*pnode = NULL;
	}
}

int main(void) {
	// 위 구조체를 이용하여 아래의 코드가 실행됩니다.
	// 이에 맞는 함수들을 정의하세요.

	Node* pnode1 = getNode();
	Node* pnode2 = getNode();
	if (pnode1 != NULL && pnode2 != NULL) {
		showValue(pnode1);	// 저장된 값 : 0
		showValue(pnode2);	// 저장된 값 : 0
		inputValue(pnode1);	// 저장할 값 >> (scanf_s로 입력을 받아서)
		inputValue(pnode2);	// 저장할 값 >> (구조체 멤버변수에 저장하세요)
		showValue(pnode1);	// 저장된 값 : (윗단계에서 첫번째로 입력한 값)
		showValue(pnode2);	// 저장된 값 : (윗단계에서 두번째로 입력한 값)
		swap(&pnode1, &pnode2);
		showValue(pnode1);	// 저장된 값 : (윗단계에서 두번째로 입력한 값)
		showValue(pnode2);	// 저장된 값 : (윗단계에서 첫번째로 입력한 값)
	}
	else printf("동적할당 실패\n");
	delNode(&pnode1);
	delNode(&pnode2);
	return 0;
}