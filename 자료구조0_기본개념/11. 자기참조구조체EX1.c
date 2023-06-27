#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

// BASE.h 헤더파일을 불러와서 이용하시고
// typedef는 BASE.h에 포함시키지 않습니다.

int main(void) {
	Node node1 = { 10, NULL };
	Node node2 = { 20, NULL };
	Node node3 = { 30, NULL };
	printf("첫번째 : %d\n", node1.data);
	printf("두번째 : %d\n", node2.data);
	printf("세번째 : %d\n", node3.data);
	return 0;
}