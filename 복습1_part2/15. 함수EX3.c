#include <stdio.h>

void show_parted(double value) {
	int num = (int)value;
	printf("������ : %d, ", num);
	printf("�Ǽ��� : %.2lf\n", value - num);
}
void show_prime(int value) {
	int count = 0;
	if (value < 2) printf("%d�� �Ҽ��� �ƴմϴ�.\n", value);
	else {
		for (int i = 2; i <= value; i += 1) {
			if (value % i == 0) {
				count += 1;
				if (count == 2) break;
			}
		}
		if (count == 1) printf("%d�� �Ҽ��Դϴ�.\n", value);
		else printf("%d�� �Ҽ��� �ƴմϴ�.\n", value);
	}
}

int main(void) {
	// �ǽ�����
	// 1) �Ǽ��� �ϳ��� ����޾� �����ο� �Ǽ��θ� ���� �и��ؼ�
	//    ����ϴ� �Լ��� �����ϼ���.
	show_parted(3.14);	// ������ : 3, �Ǽ��� 0.14
	show_parted(9.97);	// ������ : 9, �Ǽ��� 0.97
	show_parted(9.977);	// ������ : 9, �Ǽ��� 0.98

	// 2) ������ �ϳ��� ����޾� �ش� ������ �Ҽ����� ���θ� ����ϼ���.
	//    - 1������ ����(��������)�� �Ҽ��� �ƴմϴ�.
	//    - 2�̻��� ����� ����� 2��(1�� �ڱ��ڽ�)�� �͸� �Ҽ��Դϴ�.
	show_prime(111);	// 111��(/��) �Ҽ��� �ƴմϴ�.
	show_prime(-111);	// -111��(/��) �Ҽ��� �ƴմϴ�.
	show_prime(2);		// 2��(/��) �Ҽ��Դϴ�.
	show_prime(10);		// 10��(/��) �Ҽ��� �ƴմϴ�.
	return 0;
}