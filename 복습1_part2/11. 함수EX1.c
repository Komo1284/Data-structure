#include <stdio.h>
void function1(void) {
	int num1 = 0, num2 = 0, result = 0;
	printf("���۰� �� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	while (num1 <= num2) {
			result += num1;
			num1 += 1;
	}
	printf("�� : %d\n", result);
}
void function2(void) {
	int num1 = 0, num2 = 0, num3 = 0;
	double avg = 0;
	printf("���� 3�� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	avg = (double)(num1 + num2 + num3) / 3;
	printf("1�� ���� : %.2lf\n", num1 - avg);
	printf("2�� ���� : %.2lf\n", num2 - avg);
	printf("3�� ���� : %.2lf\n", num3 - avg);
}
int main(void) {
	// �⺻�� �Լ� �ǽ�����
	// 1) �� ������ �Է��� �޾� �� ���̿� �ִ� �������� ���� ���Ͽ� ����ϴ�
	//    �Լ��� �����ϼ���.
	//    - ù��° ������ ����, �ι�° ������ ���Դϴ�.
	//    - 1�� �����ϴ� �����̰�, ���۰� ���� �����մϴ�.
	//    - ù��°�� �ι�°���� Ŭ ��� ���� 0�� ���ɴϴ�.
	function1();

	// 2) 3���� ������ �Է��� �޾� �� ����� ���Ͽ� ������ ������� ���̸�
	//    ����ϴ� �Լ��� �����ϼ���.
	//    ����� ������� �ʽ��ϴ�.
	//    - ��պ��� �󸶳� ũ�ų� �������� ����մϴ�.
	//    - �Ҽ����� 2�ڸ������� ����մϴ�.
	function2();
	return 0;
}