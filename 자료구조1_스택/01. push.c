// ���ϸ� : 01. push.c
#include <stdio.h>
#include "STACK.h"

int main(void) {
	// push : ���� ���������ִ� �Լ�
	// - �����Ҵ��� �����Ͽ� ���ο� ���� ����
	// - ���ο� ���� ������ top�� ��ü
	// - ���� top�� ������� �ȵ�

	// �ڷᱸ�� ��������
	Stack* top = NULL;
	push(&top, 10);
	printf("TOP ->\t %d\n", top->data);	// TOP ->  10

	push(&top, 20);
	printf("TOP ->\t %d\n", top->data);	// TOP ->  20

	push(&top, 30);
	printf("TOP ->\t %d\n", top->data);			// TOP -> 30
	printf("\t %d\n", top->link->data);			//        20
	printf("\t %d\n", top->link->link->data);	//		  10
	return 0;
}