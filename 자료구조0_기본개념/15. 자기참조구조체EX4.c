// 15. 자기참조구조체EX4.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node p1 = { 0, NULL };
	Node p2 = { 0, NULL };
	Node p3 = { 0, NULL };
	Node p4 = { 0, NULL };
	// 구조부터 먼저 만들 경우
	p1.link = &p2;
	p1.link->link = &p3;
	p1.link->link->link = &p4;
	// 구조를 만들고 나서, 반복을 돌릴 수 없는 이 구조를 반복을 돌릴 수 있게 만든다.
	// - 포인터를 이용하여, 대상을 선택하여 이용함
	// ※ 자료구조를 관리하기 위한 포인터변수가 항상 준비됨
	// root, head, top, bottom, front, rear 등등....
	Node* root = NULL;
	// 1) 이러한 변수가 main에 있다
	// - 구조를 필요한 곳에 붙들어두기 위한 용도
	// 2) 이러한 변수가 또 있다 / 함수에 있다.
	// - 구조를 이용하여 쓰기 위한 용도
	printf("값 4개 입력 >> ");
	scanf_s("%d", &p1.data);
	scanf_s("%d", &p1.link->data);
	scanf_s("%d", &p1.link->link->data);
	scanf_s("%d", &p1.link->link->link->data);
	printf("%d-%d-%d-%d\n", p1.data, p2.data, p3.data, p4.data);
	printf("A : %d, ", p1.data);
	printf("B : %d\n", p1.link->data);
	printf("C : %d, ", p1.link->link->data);
	printf("D : %d\n", p1.link->link->link->data);
	return 0;
}