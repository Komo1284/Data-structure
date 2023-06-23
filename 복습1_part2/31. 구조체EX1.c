#include <stdio.h>

struct stat {
	int hp;
	int mp;
	double atk;
	double def;
};
typedef struct stat Stat;

// 입력함수 : 매번 scanf_s를 쓸 수 없다.
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
	// 실습
	// 구조체로 Malphite 변수를 선언하고
	// 선언한 변수의 멤버변수에 값을 입력을 받아
	// 아래와 같은 양식으로 출력하세요.
	Stat Malphite;
	printf("말파이트의 HP, HP, ATK, DEF\n>> ");
	Malphite.hp = input_int();
	Malphite.mp = input_int();
	Malphite.atk = input_double();
	Malphite.def = input_double();

	// ※ 입력된 값 출력 예시
	// 말파이트
	// HP : 1500 / MP : 50
	// ATK / DEF : 277.7 / 150.8
	printf("말파이트\nHP : %d / MP : %d\n", Malphite.hp, Malphite.mp);
	printf("ATK / DEF : %.1lf / %.1lf\n", Malphite.atk, Malphite.def);
	return 0;
}