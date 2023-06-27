#include <malloc.h>

// 자기참조구조체 : 자료구조의 기초 구조를 만들기 위한 자료형
struct node {
	// data : 자료구조에 보관시킬 자료를 저장하기 위한 변수
	// - 필요한 구성에 따라 자료형이 바뀜
	int data;
	// link : 자료구조를 만들어내기 위한 포인터변수
	// - 어떤 구조를 만들것인가에 따라 수량이 바뀜
	struct node* link;
};

// 동적할당 재포장 함수 getNode
struct node* getNode(void) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	if (newNode != NULL) {
		newNode->data = 0;
		newNode->link = NULL;
	} return newNode;
}