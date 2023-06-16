#include "BASE.h"
typedef struct node Stack;

// 자료구조를 만들어주면서 값을 보관
void push(Stack** top, int data) {
	Stack* tmp = *top;
	*top = getNode();
	if (*top != NULL) {
		(*top)->data = data;
		(*top)->link = tmp;
	}
	else return;
}

// 자료구조를 유지시키며 값을 꺼냄
int pop(Stack** top) {
	if (*top == NULL) return 0;
	else {
		Stack* tmp = *top;
		int data = (*top)->data;
		*top = (*top)->link;
		free(tmp);
		return data;
	}
}

// ETC : 자료구조 사용 편의성을 늘려줌
// 1) 자료구조에 보관된 값을 출력
void show_stack(Stack** top) {
	/*
	Stack* tmp = *top;
	printf("TOP ->");
	while (tmp != NULL) {
		printf("\t%d\n", tmp->data);
		tmp = tmp->link;
	}
	*/
	printf("TOP ->");
	while (*top != NULL) {
		printf("\t%d\n", (*top)->data);
		top = &(*top)->link;
	}
}
// +@) 재귀함수로 출력순서를 뒤집을 수 있음
void show_stack_r(Stack** top) {
	if (*top != NULL) {
		show_stack_r(&(*top)->link);
		printf("\t%d\n", (*top)->data);
	}
	else {
		printf("BOT ->");
		return;
	}
}
// 2) 보관된 자료를 모두 제거함
void clear_stack(Stack** top) {
	while (*top != NULL) pop(top);
}
// +@) 인덱싱은 몇번째 값을 반환?
int at_stack(Stack** top, int index) {
	while (index > 0) {
		top = &(*top)->link;
		if (*top == NULL) return 0;
		index -= 1;
	}
	return (*top)->data;
}
