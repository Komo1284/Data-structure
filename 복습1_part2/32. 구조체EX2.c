#include <stdio.h>

struct stat {
	int hp;
	int mp;
	double atk;
	double def;
};
typedef struct stat Stat;

void ANSWER(void) {
	Stat Malphite = { 644, 280, 62, 37 };
	// �ʱ�ȭ�� ����ü ������ ���� ����Ǿ� �ֽ��ϴ�.
	// ���⼭ hp�� mp�� 100�� ������Ű��
	// atk�� def�� 37.1�� �������� �����ϰ�
	Malphite.hp += 100;
	Malphite.mp += 100;
	Malphite.atk += 37.1;
	Malphite.def += 37.1;

	// �� ����� ����ؼ� Ȯ���ϼ���.
	printf("������Ʈ\nHP : %d / MP : %d\n", Malphite.hp, Malphite.mp);
	printf("ATK / DEF : %.1lf / %.1lf\n", Malphite.atk, Malphite.def);
}

// ����ü�� ���� �ڷ����� ������ ���������� ���� ��°�� ������ �� ����
// - ���縦 ���� �޾Ƽ� �����ϴ� ������ �ʹ� ��ȿ�����̶� ���� ����
Stat add_value(Stat that) {
	that.hp += 100;
	that.mp += 100;
	that.atk += 37.1;
	that.def += 37.1;
	return that;
}
// ������ ����� ���� �Է�/���� �Լ��� �غ�Ǿ�����
// ����ü������ �̸� ��� ����ü�� ���� �Է��Լ��� �غ��ϰ� �Ǵµ�...
// �����ϸ� �����̱� ������ �����͸� �̿���

int main(void) {
	Stat Malphite = { 644, 280, 62, 37 };

	Malphite = add_value(Malphite);

	printf("������Ʈ\nHP : %d / MP : %d\n", Malphite.hp, Malphite.mp);
	printf("ATK / DEF : %.1lf / %.1lf\n", Malphite.atk, Malphite.def);
	return 0;
}