#include <stdio.h>
double make_avg(int num1, int num2) {
	return (num1 + num2) / 2.0;
}
int main(void) {
	// �� �� �ִ� �Լ�
	// - �Լ� ���ο��� ���길 �����ϴ� ����
	// - �Լ��� ������� �� ���� ���� ���� ���� �Ǵ� ����
	int n1 = 100;
	int n2 = 1;
	double result = make_avg(n1, n2);
	printf("��� : %.2lf\n", result);
	
	// �� �� �ֱ� ������ �� Ư�̻����� ���յ�
	// - ������ �����Ͽ� �� ����, �� ����� �ùٸ��� ���θ� üũ��
	// - scanf_s�� ��ǥ����
	int value1 = 0;
	int value2 = 0;
	int result1 = 0;

	printf("���� �Է� >> ");
	// �Ű������� �����ͷ� ������
	// - �ʿ��� ���� �ҷ�����, �ʿ��� ������ ������
	result1 = scanf_s("%d %d", &value1, &value2);
	// return�� ������
	// - �Է¿� ����/������ ����/���� ���θ� �Ǻ��� �� ����

	printf("��� : %d, %d, %d\n", value1, value2, result1);
	return 0;
}