// ���ϸ� : 3. etc.c
#include <stdio.h>
#include "STACK.h"

int main(void) {
	Stack* top = NULL;
	for (int i = 10; i <= 50; i += 10) {
		push(&top, i);
	}

	
	show_stack(&top);	// ���ñ��� ������
	show_stack_r(&top);	// ���ñ��� ������

	printf("1���ε��� : %d\n", at_stack(&top, 1));
	clear_stack(&top);

	printf("TOP : %p\n", top);
	return 0;
}