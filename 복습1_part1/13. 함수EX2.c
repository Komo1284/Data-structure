#include <stdio.h>

int get_count(void) {
	int num = 0;
	int count = 0;
	printf("���� �ϳ� �Է� >> "); scanf_s("%d", &num);
	for (int i = 1; i <= num; i += 1) {
		if (num % i == 0) count += 1;
	}
	return count;
}
int calculator(void) {
	int num1 = 0;
	int num2 = 0;
	printf("���� 2�� �Է� >> "); scanf_s("%d", &num1); scanf_s("%d", &num2);
	if (num2 == 0) {
		printf("���α׷��� �����մϴ�.\n");
		return 1;
	}
	else {
		printf("��� : %d\n", num1 / num2);
		return 0;
	}
}

int main(void) {
	// �ǽ�����1
	// ��� �ϳ��� �Է��� �޾� ����� ������ ���Ͽ� ��ȯ�ϴ� �Լ��� �����ϼ���.
	// - 0 ������ ���� ����� ������ �ʰ� 0�� ��ȯ�մϴ�.
	int result = get_count();
	printf("����� ���� : %d��\n", result);

	// �ǽ�����2
	// �� ������ �Է��� �޾� ���� ���Ͽ� ����ϴ� �Լ��� �����ϼ���.
	// �� �Լ��� ���°��� ��ȯ�մϴ�.
	// - ù��°�� ��������� �ι�°�� 0�̸� ���� ���� �� �����ϴ�.
	// - �ι�° ������ 0�̸� 1�� ��ȯ�ϰ�, �� �ܿ��� 0�� ��ȯ�մϴ�.
	while (1) {
		if (calculator() == 1) break;
	}
	return 0;
}