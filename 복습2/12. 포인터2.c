#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

void show_stat(PC* pstat) {
	printf("����\nHP : %.1lf\nATK : %d\nDEF : %.1lf\n",
		pstat->hp, pstat->atk, pstat->def);
}
void show_hp(double* php) {
	printf("ü�� : %.1lf\n", *php);
}

int main(void) {
	// ������ ������ - �ٸ� �������� ���� ���� ������ ��
	// - ���� ����������, �̸� ����� �� �ִ� �������� �ִµ� ���Ϸ�?
	// - �������� ���� ũ�Ⱑ ū ������ ����
	/*
	PC* pstat = NULL;
	int* pvalue1 = NULL;
	double* pvalue2 = NULL;
	printf("%d %d %d\n", sizeof(pstat), sizeof(pvalue1), sizeof(pvalue2));
	*/
	// ����/�Ǽ�/���ں��� - �ǽð����� �����ϴ°� �ƴϸ�, ���簡 ������
	// ����ü���� �Ŵ��� �� - ������ ������ ���°� ������

	// �����ʹ� �Լ����� �Ű������ڸ��� �ַ� �غ� ��
	// - ȣ���� �� �ּҰ��� �־��ָ�, �̸� �̿��ؼ� �۵��ϵ��� ����
	PC stat = { 100, 10, 1 };
	show_stat(&stat);
	show_hp(&stat.hp);
	return 0;
}