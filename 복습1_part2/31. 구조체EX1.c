#include <stdio.h>

struct stat {
	int hp;
	int mp;
	double atk;
	double def;
};
typedef struct stat Stat;

// �Է��Լ� : �Ź� scanf_s�� �� �� ����.
int input_int(void) {
	int data = 0;
	scanf_s("%d", &data);
	return data;
}
double input_double(void) {
	double data = 0;
	scanf_s("%lf", &data);
	return data;
}

int main(void) {
	// �ǽ�
	// ����ü�� Malphite ������ �����ϰ�
	// ������ ������ ��������� ���� �Է��� �޾�
	// �Ʒ��� ���� ������� ����ϼ���.
	Stat Malphite;
	printf("������Ʈ�� HP, HP, ATK, DEF\n>> ");
	Malphite.hp = input_int();
	Malphite.mp = input_int();
	Malphite.atk = input_double();
	Malphite.def = input_double();

	// �� �Էµ� �� ��� ����
	// ������Ʈ
	// HP : 1500 / MP : 50
	// ATK / DEF : 277.7 / 150.8
	printf("������Ʈ\nHP : %d / MP : %d\n", Malphite.hp, Malphite.mp);
	printf("ATK / DEF : %.1lf / %.1lf\n", Malphite.atk, Malphite.def);
	return 0;
}