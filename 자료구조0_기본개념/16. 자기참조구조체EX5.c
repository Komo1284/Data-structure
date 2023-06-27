// 15. 자기참조구조체EX4.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node p1 = { 5, NULL };
	Node p2 = { 10, NULL };
	Node p3 = { 15, NULL };
	Node p4 = { 20, NULL };
	
	p3.link = &p1;
	p1.link = &p4;
	p4.link = &p2;

	printf("%d-%d-%d-%d\n", p1.data, p2.data, p3.data, p4.data);
	printf("A : %d, ", p3.data);
	printf("B : %d\n", p3.link->data);
	printf("C : %d, ", p3.link->link->data);
	printf("D : %d\n", p3.link->link->link->data);
	
	// 반복을 구성하는 방법 : 모양을 전부 같게 만든다.
	Node* tmp = &p3;				// 시작값
	while (tmp != NULL) {			// 끝값
		printf("%d ", tmp->data);	// 값을 출력
		tmp = tmp->link;			// 위치 변화
	} printf("\n");
	return 0;
}