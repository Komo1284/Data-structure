// 14. 자기참조구조체EX3.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node node1;
	Node node2;
	Node node3;

	node1.data = 10;
	node1.link = &node2;
	node1.link->data = 20;
	node1.link->link = &node3; // node2.link = &node3; 와 동일
	node2.link->data = 30;

	// 선형 단방향 구조
	// - 선형 : 일직선으로 나열시킴
	// - 단방향 : 포인터변수가 하나뿐이기에 연산이 제한됨
	printf("첫번째 : %d\n", node1.data);
	printf("두번째 : %d\n", node1.link->data);
	printf("세번째 : %d\n", node1.link->link->data);
	return 0;
}