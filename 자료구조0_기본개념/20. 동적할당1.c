// 20. 동적할당1.c
#include <stdio.h>
#include "BASE.h"
typedef struct node Node;

int main(void) {
	// 대부분의 자료구조는, 저장할 값이 있기 때문에
	// 그 공간을 실시간으로 생성해서 늘려줌
	// - 저장할 값의 판단방식
	//   - 반복문 & 조건문 : 무한반복/유한반복으로 확보함

	// 관리변수 : 그 값을 바꾸는 과정은, 자료가 추가/제거될 때만 발생
	//           필요한 곳에 자료구조를 붙들어 놓기 위한 것
	Node* root = NULL;
	// 제일 먼저 비어있는지 여부를 체크함
	if (root == NULL) {
		root = (Node*)malloc(sizeof(Node));
		// 동적할당으로 생성이 되었는지 여부를 체크함
		if (root != NULL) {
			root->data = 10;
			root->link = NULL;
		}
	}

	// 다음 값을 넣을 때도 무조건 첫번째부터 체크하며 진행함
	if (root == NULL) {
		root = (Node*)malloc(sizeof(Node));
		// 동적할당으로 생성이 되었는지 여부를 체크함
		if (root != NULL) {
			root->data = 20;
			root->link = NULL;
		}
	}
	else {
		if (root->link == NULL) {
			root->link = (Node*)malloc(sizeof(Node));
			if (root->link != NULL) {
				root->link->data = 20;
				root->link->link = NULL;
			}
		}
	}
	// 인덱스 : 몇번째에 보관되었는지를 나타내는 값
	// - 자료구조에서는 저러한 코드를 "몇번" 반복시킬 것인가를 의미함

	if (root != NULL) printf("%d ", root->data);
	// 만드는 과정에서 "내부로 파고드는" 조건문들이 다수 등장함
	// - 재귀함수까지 사용되어야, 원하는 것을 할 수 있음
	if (root != NULL) {
		if (root->link != NULL) printf("%d ", root->data);
	}
	return 0;
}