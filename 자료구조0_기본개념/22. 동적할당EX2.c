#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node* p1 = NULL;
	Node** pnode = NULL;
	int tmp1 = 0;
	Node* tmp2 = NULL;
	int result = 0;

	// 자료구조는 대충 굴려먹을려고 하면 대충 굴려먹을 수 있음
	// - 입력방법 / 출력방법 / 연산방법 등등..
	//   함수가 매번 달라지기 시작함
	// - "철저"하게 계획을 잡고 운용하지 않으면 난잡해지고, 재활용도 안됨

	pnode = &p1;
	for (int i = 1; i <= 4; i += 1) {
		printf("값%d 입력 >> ", i);
		scanf_s("%d", &tmp1);
		if (*pnode == NULL) {
			*pnode = getNode();
			if (*pnode != NULL) {
				p1->data = tmp1;
				pnode = &(*pnode)->link;
			}
		}
	}

	tmp2 = p1;
	while (tmp2 != NULL) {
		printf("-> %d\n", tmp2->data);
		tmp2 = tmp2->link;
	}
	/*
	printf("첫번째 : %d\n", p1->link->data);
	printf("두번째 : %d\n", p1->link->data);
	printf("세번째 : %d\n", p1->link->link->data);
	printf("네번째 : %d\n", p1->link->link->link->data);
	*/

	tmp2 = p1;
	while (tmp2 != NULL) {
		result += tmp2->data;
		tmp2 = tmp2->link;
	}
	printf("값들의 합 : %d\n", result);
	return 0;
}