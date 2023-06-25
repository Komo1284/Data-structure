//  13. 포인터EX2.c
#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

void upgrade_hp(double* php) {
	// 구조체를 쓰게 되면 변수가 다발로 묶여서 넘어옴
	*php += 50;
}
void upgrade_physical(PC* that) {
	that->atk += 30;
	that->def += 30;
}

int main(void) {
	// 실습
	PC timo = { 150, 30, 10 };
	// 아래의 조건을 만족하는 함수를 정의하세요.
	upgrade_hp(&timo.hp); // 체력을 50 상승시키는 함수
	upgrade_physical(&timo); // 공격력과 방어력을 30씩 상승시키는 함수

	printf("%.1lf, %d, %.1lf\n", timo.hp, timo.atk, timo.def);
	return 0;
}