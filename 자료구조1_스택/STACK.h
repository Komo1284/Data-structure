#include "BASE.h"
typedef struct node Stack;

// �ڷᱸ���� ������ָ鼭 ���� ����
void push(Stack** top, int data) {
	Stack* tmp = *top;
	*top = getNode();
	if (*top != NULL) {
		(*top)->data = data;
		(*top)->link = tmp;
	}
	else return;
}

// �ڷᱸ���� ������Ű�� ���� ����
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

// ETC : �ڷᱸ�� ��� ���Ǽ��� �÷���
// 1) �ڷᱸ���� ������ ���� ���
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
// +@) ����Լ��� ��¼����� ������ �� ����
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
// 2) ������ �ڷḦ ��� ������
void clear_stack(Stack** top) {
	while (*top != NULL) pop(top);
}
// +@) �ε����� ���° ���� ��ȯ?
int at_stack(Stack** top, int index) {
	while (index > 0) {
		top = &(*top)->link;
		if (*top == NULL) return 0;
		index -= 1;
	}
	return (*top)->data;
}
