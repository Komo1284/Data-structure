#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

int main(void) {
	// ������ ���� : �ּҰ��� �̿��� ����� �����Ͽ� �����ϴ� ����
	// - �����̱� ������ ���(�ּҰ�)�� �ٲ� �� �ִ�.
	// - �����̱� ������ �ּҰ��� �����ؾ� �� �� �ִ�.
	// - �����̱� ������ ��ü ũ�⸦ ������.

	// �����ͺ����� ��� �غ��ϳ�?
	// - ������ �����ϸ� ��� ������ ������
	PC* target = NULL;			// NULL : �ּҰ� 0
	double* that_var1 = NULL;	// - ���ΰ� ��������� �ǹ���
	int* that_var2 = NULL;		// - �׻� NULL�� �ʱ�ȭ���ִ� ���� ����
	
	// �����ʹ� ����� �־�߸� ��
	PC timo = { 0, 0, 0 };

	// ��������, "����� ������ ������� �ʰ�" ���� ��
	// - ĳ���Ͱ� 2���� �� �� ����
	target = &timo;			// ����ü ���� ����
	that_var1 = &timo.hp;	// �Ϲ� ���� ����1
	that_var2 = &timo.atk;	// �Ϲ� ���� ����2

	// �����ʹ� �׻� ���������� �ٿ� ��
	// - ������ ����� �ٲ�. �ٲ� ������ ������� �Ȱ���
	*that_var1 = 150;	// timo.hp = 150;
	*that_var2 = 30;	// timo.atk = 30;
	target->def = 0.24;	// timo.def = 0.24;
	printf("���콺�����͸� �÷��� �� : %.2lf\n", *that_var1);
	printf("������ �ʴ� �����κ��� ���ݴ��� �� : %d\n", *that_var2);
	printf("���� è�Ǿ� ����\n%.2lf, %d, %.2lf\n",
		target->hp, target->atk, target->def);
	return 0;
}