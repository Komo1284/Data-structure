#include <stdio.h>
#include <malloc.h>

// node : 자료구조 분야에서, 값을 저장하고 있는 것들의 단위
struct node {
	int data1;
	int data2;
};
typedef struct node Node;

int main(void) {
	// 선언했을 때 문제 - 변수가 함수에 귀속됨
	// - 메모리 관리를 좀 더 효율적으로 할 수 있음
	// 1) 함수가 없어지면 증발하니, 필요한 값이 함수에 있으면 곤란해짐
	// 2) 함수 자체가 가질 수 있는 변수의 수량이 제한됨(1MB)

	// 동적할당 - 필요한 만큼 함수에 귀속되지 않은 변수를 만드는 기술
	// - 프로그램 그 자체에 귀속되어 있음
	// - 프로그램이 종료가 되지 않으면 계속 남게 됨
	// - 메모리가 부족하면 실패함
	Node* pnode = (Node*)malloc(sizeof(Node));
	if (pnode == NULL) printf("동적할당이 안되었습니다.\n");
	else {
		pnode->data1 = 314;
		pnode->data2 = 999;
		printf("%d, %d\n", pnode->data1, pnode->data2);
	}
	if (pnode != NULL) {
		free(pnode);
		pnode = NULL;
	}
	return 0;
}