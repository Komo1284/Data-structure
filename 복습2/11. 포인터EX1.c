#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

int main(void) {
	// �ǽ�����
	// ĳ���� ������ ��Ÿ���� ���� stat�� �����մϴ�.
	// stat ������ �̿��Ͽ� �Ʒ� ������ �޼��ϼ���. 
	// 1) ĳ������ hp, atk, def�� ���� 131.7, 30, 10.9�� �����ϰ�
	//    �̸� ����ϱ� ���� ������ ������ �غ��ؼ�
	//    �����ϰ� ����ϼ���.
	// 2) ĳ������ atk�� def�� �̿��Ͽ� ���ط��� ����ϱ� ���� �����ͺ�����
	//    �غ��Ͽ� ����ϰ� ����ϼ���. �ܼ� ���������Դϴ�.
	// 3) ����� ü���� �б� ���� ������ ������ �غ��Ͽ� ����ϼ���.

	// ������ ������ "���"�� �����ϱ� ���� ����
	// - ����� �����ΰ��� ���� �޶���
	// - ����ü�� ��� ����ü�� �����ϸ� ��.

	PC stat = { 0, 0, 0 };
	// 1��
	PC* pstat = &stat;
	pstat->hp = 131.7;
	pstat->atk = 30;
	pstat->def = 10.9;
	printf("������ ���� : %.1lf, %d, %.1lf\n", pstat->hp, pstat->atk, pstat->def);
	// 2��
	int* patk = &stat.atk;
	double* pdef = &stat.def;
	printf("���� ���ط� : %.1lf\n", *patk - *pdef);
	// 3��
	double* php = &stat.hp;
	printf("���� ü�� : %.1lf\n", *php);
	return 0;
}