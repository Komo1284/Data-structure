#include <stdio.h>

// �⺻�� ���� �Լ��� �� ����� �Լ����� ������
double get_avg(void) {
	int num1 = 0;
	int num2 = 0;

	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	// ���ο��� ���� ��ġ�� �ִ� ���� ����� �����
	return (num1 + num2) / 2.0;
}
// ��ȯ���� �������� �ƴ϶�, "���°�"�� ��ȯ��ų �� ����
// - ������ / �������� / �����ڵ��ȯ ��....
int program(void) {
	double result1 = get_avg();
	double result2 = get_avg();
	double result3 = result1 + result2;
	if (result3 == 0) return 1;
	else {
		printf("%.2lf + %.2lf = %.2lf\n", result1, result2, result1 + result2);
		return 0;
	}
}

int main(void) {
	// ��ȯ���� �ִ� �Լ�
	// - ���ο��� "ȭ������ ���"���� ����
	// - ���� ����������� �ܺ� ����������� �ʿ��� ���� �����
	// - return�� �ϳ��ۿ� �ȵ�
	// - ���� ��ġ�� �ִ� ���� ��� return��Ŵ
	while (program() == 0);
	return 0;
}