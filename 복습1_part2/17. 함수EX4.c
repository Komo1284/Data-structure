#include <stdio.h>
int count_mod(int value) {
	int count = 0;
	if (value < 0) value *= -1;
	for (int i = 1; i <= value; i += 1) {
		if (value % i == 0) count += 1;
	} return count;
}
int sum_values(int start, int end, int mod) {
	int result = 0;
	if (mod > 0 && start <= end) {
		if (start <= 0 || start % 3 == 0) start = (start / mod) * mod;
		else start = ((start / mod) + 1) * mod;
		for (int i = start; i <= end; i += mod) {
			result += i;
		}
	}
	return result;
}

int main(void) {
	// �ǽ�����
	// 1) ������� ������ ����� ������ ���Ͽ� ��ȯ�ϴ� �Լ��� �����ϼ���.
	// - ������� ������ ��ȣ ������� ���밪�� �������� ���մϴ�.
	int result1 = count_mod(10);
	int result2 = count_mod(-10);
	printf("��� : %d, %d\n", result1, result2);

	// 2) �������� ���� ���ϴ� �Լ��� �����ϼ���.
	// - ������ ����� ����޾� ������ �� �ֽ��ϴ�.
	// - ������ ������ �۰ų� ���� �� ���� ���� �� �ֽ��ϴ�.
	printf("��1 : %d\n", sum_values(  1, 10,  2)); // 2 + 4 + 6 + 8 + 10 = 30
	printf("��2 : %d\n", sum_values(-10, -1,  1)); // - 10 + ~ + -1 = -55
	printf("��3 : %d\n", sum_values( 10,  1,  3)); // 0. ������ ������ ŭ
	printf("��4 : %d\n", sum_values( -1,-10,  2)); // 0. ������ ������ ŭ
	printf("��5 : %d\n", sum_values(  1, 10, -2)); // 0. ����� ������ ����θ� �Ǻ�
	printf("��6 : %d\n", sum_values( 10, 10,  3)); // 0. ���� ���� ����� ����
	
	return 0;
}