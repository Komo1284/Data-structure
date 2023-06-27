#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node nd1 = { 1, NULL };
	Node nd2 = { 2, NULL };
	Node nd3 = { 3, NULL };
	Node nd4 = { 4, NULL };
	Node nd5 = { 5, NULL };
	int result = 0;
	// ※ 선형 단방향 구조의 끝을 처음으로 이어붙이면...
	//   원형(환형) 단방향 구조가 되며, 이는 횟수를 기반으로 통제해야 함
	nd1.link = &nd4;
	nd4.link = &nd2;
	nd2.link = &nd5;
	nd5.link = &nd3; // 여기서 끊으면 선형 구조
	nd3.link = &nd1; // 이어붙이면 원형 구조
	
	Node* tmp1 = &nd1;
	int count1 = 5;
	while (count1 > 0) {
		result += tmp1->data;
		tmp1 = tmp1->link;
		count1 -= 1;
	}
	/*
	result += nd1.data;
	result += nd1.link->data;
	result += nd1.link->link->data;
	result += nd1.link->link->link->data;
	result += nd1.link->link->link->link->data;
	*/
	Node* tmp2 = &nd1;
	int count2 = 6;
	while (count2 > 0) {
		printf("%d ", tmp2->data);
		tmp2 = tmp2->link;
		count2 -= 1;
	} printf("\n");
	printf("\nRESULT : %d\n", result);
	/*
	printf("%d - %d - %d - %d - %d - %d\n",
		nd1.data,
		nd1.link->data,
		nd1.link->link->data,
		nd1.link->link->link->data,
		nd1.link->link->link->link->data,
		nd1.link->link->link->link->link->data
	);
	*/
	return 0;
}