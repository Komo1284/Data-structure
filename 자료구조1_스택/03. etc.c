// 파일명 : 3. etc.c
#include <stdio.h>
#include "STACK.h"

int main(void) {
	Stack* top = NULL;
	for (int i = 10; i <= 50; i += 10) {
		push(&top, i);
	}

	
	show_stack(&top);	// 스택기준 정방향
	show_stack_r(&top);	// 스택기준 역방향

	printf("1번인덱스 : %d\n", at_stack(&top, 1));
	clear_stack(&top);

	printf("TOP : %p\n", top);
	return 0;
}