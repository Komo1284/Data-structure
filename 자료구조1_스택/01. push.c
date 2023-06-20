// 파일명 : 01. push.c
#include <stdio.h>
#include "STACK.h"

int main(void) {
	// push : 값을 보관시켜주는 함수
	// - 동적할당을 진행하여 새로운 값을 보관
	// - 새로운 값은 기존의 top을 대체
	// - 기존 top은 사라지면 안됨

	// 자료구조 관리변수
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