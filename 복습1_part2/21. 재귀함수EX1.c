#include <stdio.h>

// 함수를 주의할 때 주의사항
// - 매개변수는 과도하게 준비하면 안됨
// - 함수가 복잡해짐
void HELLO(int num) {
	if (num >= 1) {
		printf("HELLO! ");
		HELLO(num - 1);
	}
	else return;
}

int main(void) {

	HELLO(1); printf("\n");
	HELLO(2); printf("\n");
	HELLO(3); printf("\n");
	HELLO(0); printf("\n");

	return 0;
}