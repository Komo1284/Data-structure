#include <stdio.h>
#include "STACK.h"

int main(void) {
	// pop : ������ �Լ�
	// - �迭�� ������ ���� -> �ε����� �̿���
	// - "������"�� �Ұ���
	// - ������ ������ ���ָ� "������"�� ��
	// - �����Ҵ������� �ؾ� ��
	Stack* top = NULL;
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);
	printf("POP DATA : %d\n", pop(&top)); // 30
	printf("POP DATA : %d\n", pop(&top)); // 20
	printf("POP DATA : %d\n", pop(&top)); // 10

	// �ƹ��͵� ���� �� ����Ǹ� 0�� ��ȯ��
	printf("POP DATA : %d\n", pop(&top)); // 0
	return 0;
}