#include <stdio.h>

void HELLO(int num) {
	if (num >= 1) {
		// �ݺ��� ��ø�Ǵ� ������ ��� �� �� ����
		// ���� �ݺ��� �ٸ� ����Լ��� �غ��ؾ� ��
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