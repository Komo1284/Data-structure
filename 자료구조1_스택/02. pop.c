#include <stdio.h>
#include "STACK.h"

int main(void) {
	// pop : 꺼내는 함수
	// - 배열은 변수의 묶음 -> 인덱싱을 이용함
	// - "꺼내기"는 불가능
	// - 복사후 원본을 없애면 "꺼내기"가 됨
	// - 동적할당해제를 해야 함
	Stack* top = NULL;
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);
	printf("POP DATA : %d\n", pop(&top)); // 30
	printf("POP DATA : %d\n", pop(&top)); // 20
	printf("POP DATA : %d\n", pop(&top)); // 10

	// 아무것도 없을 때 실행되면 0을 반환함
	printf("POP DATA : %d\n", pop(&top)); // 0
	return 0;
}