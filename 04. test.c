// 04. test.c
#include <stdio.h>
#include "STACK.h"

int main(void) {
	// 실습문제
	// Stack 자료구조를 이용하여
	// 0이외의 입력한 정수는 모두 저장하고
	// 0을 입력하면 입력을 종료합니다.
	// Stack 자료구조에 보관된 값을 출력하고
	// 보관된 값들을 전부 꺼내서 합을 구하여 출력하세요.
	// ※ 합을 구하면서 동적할당해제를 같이 진행하세요.
	// ※ 0은 스택 자료구조에 보관되지 않습니다.
	Stack* top = NULL;
	int result = 0;
	while (1) {
		int tmp = 0;
		printf("0 이외의 정수 입력 >> "); scanf_s("%d", &tmp);
		if (tmp != 0) push(&top, tmp);
		else break;
	}
	show_stack_r(&top);
	while (top != NULL) {
		result += pop(&top);
	}
	printf("값들의 합 : %d\n", result);
	return 0;
}