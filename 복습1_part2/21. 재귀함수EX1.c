#include <stdio.h>

// �Լ��� ������ �� ���ǻ���
// - �Ű������� �����ϰ� �غ��ϸ� �ȵ�
// - �Լ��� ��������
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