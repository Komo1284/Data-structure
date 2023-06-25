// 21. 동적할당EX1.c
#include <stdio.h>
#include <malloc.h>

struct node {
	int data1;
	int data2;
};
typedef struct node Node;

// 1. 구조체에 대한 동적할당은 초기화과정을 포함시켜서 재포장함
// - 동적할당자체가 반환값이 상태값을 같이 해주고 있기 때문에..
//   이를 건드리지 않고, 그대로 넘겨줌
Node* getNode(void) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode != NULL) {
		newNode->data1 = 0;
		newNode->data2 = 0;
	} return newNode;
}

// 2. 구조체를 제거하는 과정에서, 멤버가 어떤 구성인가에 따라서...
//   제거할 때 부가로 붙는 코드가 많거나, 복잡한 경우가 많음
//   포인터 변수에 대한 관리를 위해서 이중포인터 변수가 준비되어 사용됨
int remove(Node** target) {
	// target : 단일포인터변수의 주소값
	// *target : 공유한 구조체변수의 주소값
	// **target : 구조체 변수
	if (*target != NULL) {
		free(*target);
		*target = NULL;
		return 1;
	}
	else return 0;
	// return을 통해 상태값을 반환함
}

int main(void) {
	// 실습
	// 동적할당으로 구조체 변수 3개를 생성하고
	// 각 구조체 변수의 멤버를 모두 0으로 초기화하고
	// 생성된 구조체 변수를 제거하세요.
	// ※ 조건문으로 정상작동하도록 구성하셔야 합니다.
	Node* pnode1 = getNode();
	Node* pnode2 = getNode();
	Node* pnode3 = getNode();
	if (pnode1 == NULL || pnode2 == NULL || pnode3 == NULL) {
		printf("하나 이상의 동적할당이 실패했습니다.\n");
	}
	else {
		printf("초기화된 구조체 변수를 다루게 됨...\n");
	}
	/*
	int count = 0;
	count += remove(&pnode1);
	count += remove(&pnode2);
	count += remove(&pnode3);
	printf("제거된 공간의 수량 : %d\n", count);
	*/
	if (remove(&pnode1)) printf("제거완료!\n");
	else printf("제거실패\n");
	
	if (remove(&pnode2)) printf("제거완료!\n");
	else printf("제거실패\n");
	
	if (remove(&pnode3)) printf("제거완료!\n");
	else printf("제거실패\n");
	return 0;
}