// 23. 동적할당EX2.c
#include <stdio.h>
#include <malloc.h>

struct node {
	int data1; int data2;
};
typedef struct node Node;

void checkThat(Node* that1, Node* that2) {
	if (that1 != NULL) printf("YES");
	else printf("NO");
	printf(" and ");
	if (that2 != NULL) printf("YES");
	else printf("NO");
	printf("\n");
}

// 두 값을 교체하는 것과 식별하여 옮기는 것은 좀 다른 과정이 됨
// 다만, 같은 결과가 됨
void moveThat(Node** p1, Node** p2) {
	if (*p1 != NULL && *p2 != NULL) return;
	else if (*p1 != NULL) { *p2 = *p1; *p1 = NULL; }
	else		  		  { *p1 = *p2; *p2 = NULL; }
}
void moveThatSwap(Node** p1, Node** p2) {
	Node* tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main(void) {
	// 실습 : 왼쪽 핸들에는 아무것도 없고, 오른쪽 핸들에는 자료가 있습니다.
	Node* LeftHandle = NULL;
	Node* RightHandle = (Node*)malloc(sizeof(Node));
	if (RightHandle != NULL) {
		RightHandle->data1 = 100;
		RightHandle->data2 = 200;
	}
	// 자료를 어느 쪽 핸들에 있는지 식별하여 없는 쪽으로 옮겨주는 moveThat을 정의해보세요.
	// 결과는 제가 정의해드린 함수로 체크합니다.
	moveThat(&LeftHandle, &RightHandle);
	checkThat(LeftHandle, RightHandle);	// YES and NO
	moveThat(&RightHandle, &LeftHandle);
	checkThat(LeftHandle, RightHandle);	// NO and YES
	
	return 0;
}