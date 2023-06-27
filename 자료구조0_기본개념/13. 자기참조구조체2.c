#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	Node node1 = { 10, NULL };
	Node node2 = { 20, NULL };
	// 자기참조구조체의 운용 : 포인터변수에 주소값 저장하기
	node1.link = &node2;
	// - "연결"된 시점부터, 연결된 변수의 이름은 의미가 없어짐
	printf("%d\n", node1.data);
	printf("%d\n", node2.data);			// 개별변수명을 쓰는 것은 관심없음
	printf("%d\n", node1.link->data);	// link멤버에 이를 연결하여 쓰는 것
	return 0;
}