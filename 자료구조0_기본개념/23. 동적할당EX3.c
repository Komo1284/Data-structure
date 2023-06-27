#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node* DStructure = NULL;
	// 보통은 자료구조를 관리하는 방법을 정해놓고 사용한다.
	// - 핵심은 값을 보관할 때, 이를 정방향/역방향으로 보관여부가 됨
	// 정방향 : 1,2,3으로 넣었으면 1,2,3으로 보관됨
	// 역방향 : 1,2,3으로 넣었으면 3,2,1으로 보관됨
	// - 동적할당해제 때문이다.
	int tmp1 = 0;
	int count = 1;
	Node* tmp2 = NULL;
	/*
	* 정방향
	Node** pnode = &DStructure;
	while (count <= 5) {
		printf("값%d 입력 >> ", count); scanf_s("%d", &tmp1);
		if (*pnode == NULL) {
			*pnode = getNode();
			if (*pnode != NULL) {
				(*pnode)->data = tmp1;
				pnode = &(*pnode)->link;
			}
		}
		count += 1;
	}
	*/
	
	while (count <= 5) {
		printf("값%d 입력 >> ", count); scanf_s("%d", &tmp1);
		Node* tmp = getNode();
		if (tmp != NULL) {
			tmp->data = tmp1;
			tmp->link = DStructure;
			DStructure = tmp;
		}
		count += 1;
	}

	count = 1;
	tmp2 = DStructure;
	while (tmp2 != NULL) {
		printf("%d : %d\n", count, tmp2->data);
		tmp2 = tmp2->link;
		count += 1;
	}

	while (DStructure != NULL) {
		Node* tmp = DStructure;
		DStructure = tmp->link;
		free(tmp);
	}
	return 0;
}