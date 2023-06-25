//  13. ������EX2.c
#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

void upgrade_hp(double* php) {
	// ����ü�� ���� �Ǹ� ������ �ٹ߷� ������ �Ѿ��
	*php += 50;
}
void upgrade_physical(PC* that) {
	that->atk += 30;
	that->def += 30;
}

int main(void) {
	// �ǽ�
	PC timo = { 150, 30, 10 };
	// �Ʒ��� ������ �����ϴ� �Լ��� �����ϼ���.
	upgrade_hp(&timo.hp); // ü���� 50 ��½�Ű�� �Լ�
	upgrade_physical(&timo); // ���ݷ°� ������ 30�� ��½�Ű�� �Լ�

	printf("%.1lf, %d, %.1lf\n", timo.hp, timo.atk, timo.def);
	return 0;
}