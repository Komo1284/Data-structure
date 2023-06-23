#include <stdio.h>

void HELLO(int num) {
	if (num >= 1) {
		// 반복이 중첩되는 구조인 경우 할 수 없음
		// 내부 반복은 다른 재귀함수를 준비해야 함
		for (int x = num; x >= 1; x -= 1) {
			printf("HELLO! ");
		} printf("\n");
		HELLO(num - 1);
	}
	else return;
}
void HELLO1(int num) {
	if (num >= 1) {
		printf("HELLO! ");
		HELLO1(num - 1);
	}
	else return;
}
void HELLO2(int num) {
	if (num >= 1) {
		HELLO1(num);
		HELLO2(num - 1);
	}
	else return;
}

int main(void) {
	HELLO(4);
	HELLO(3);
	HELLO(5);
	return 0;
}