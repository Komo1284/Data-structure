// 04. test.c
#include <stdio.h>
#include "STACK.h"

int main(void) {
	// �ǽ�����
	// Stack �ڷᱸ���� �̿��Ͽ�
	// 0�̿��� �Է��� ������ ��� �����ϰ�
	// 0�� �Է��ϸ� �Է��� �����մϴ�.
	// Stack �ڷᱸ���� ������ ���� ����ϰ�
	// ������ ������ ���� ������ ���� ���Ͽ� ����ϼ���.
	// �� ���� ���ϸ鼭 �����Ҵ������� ���� �����ϼ���.
	// �� 0�� ���� �ڷᱸ���� �������� �ʽ��ϴ�.
	Stack* top = NULL;
	int result = 0;
	while (1) {
		int tmp = 0;
		printf("0 �̿��� ���� �Է� >> "); scanf_s("%d", &tmp);
		if (tmp != 0) push(&top, tmp);
		else break;
	}
	show_stack_r(&top);
	while (top != NULL) {
		result += pop(&top);
	}
	printf("������ �� : %d\n", result);
	return 0;
}