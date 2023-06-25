#include <stdio.h>
#include <malloc.h>

struct node {
	int data1;
	int data2;
};
typedef struct node Node;
// 다른 단일 포인터 변수를 준비해서 늘려서 쓰는 골
void pswap1(Node* pn1, Node* pn2) {
	Node* tmp = pn1;
	pn1 = pn2;
	pn2 = tmp;
}
// 같은 값을 가지는 변수가 2개가 됨
void pswap2(Node* pn1, Node* pn2) {
	Node tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}
// 더 효율적인 값의 "이동"을 구현하기 위해 사용함
void pswap3(Node** pn1, Node** pn2) {
	Node* tmp = *pn1; // 내가 다룰 대상에 맞춰서 자료형을 준비해야 함
	*pn1 = *pn2;
	*pn2 = tmp;
}

int main(void) {
	// 포인터변수 : 대상 변수를 한번 참조해서 공유하여 사용하기 위한 변수
	Node* pnode1 = NULL; 
	Node* pnode2 = NULL;
	pnode1 = (Node*)malloc(sizeof(Node));
	pnode2 = (Node*)malloc(sizeof(Node));
	// 이중포인터변수 : 대상 단일포인터변수를 공유하여 사용하기 위한 변수
	pswap3(&pnode1, &pnode2);
	return 0;
}
