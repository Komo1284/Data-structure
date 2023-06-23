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
	// 초기화된 구조체 변수에 값이 저장되어 있습니다.
	// 여기서 hp와 mp는 100씩 증가시키고
	// atk와 def는 37.1씩 증가시켜 저장하고
	Malphite.hp += 100;
	Malphite.mp += 100;
	Malphite.atk += 37.1;
	Malphite.def += 37.1;

	// 그 결과를 출력해서 확인하세요.
	printf("말파이트\nHP : %d / MP : %d\n", Malphite.hp, Malphite.mp);
	printf("ATK / DEF : %.1lf / %.1lf\n", Malphite.atk, Malphite.def);
}

// 구조체는 같은 자료형을 가지는 변수끼리는 값을 통째로 복사할 수 있음
// - 복사를 통해 받아서 전달하는 과정은 너무 비효율적이라서 하지 않음
Stat add_value(Stat that) {
	that.hp += 100;
	that.mp += 100;
	that.atk += 37.1;
	that.def += 37.1;
	return that;
}
// 각각의 멤버에 대한 입력/연산 함수가 준비되었으면
// 구조체변수는 이를 묶어서 구조체에 대한 입력함수를 준비하게 되는데...
// 복사하면 낭비이기 때문에 포인터를 이용함

int main(void) {
	Stat Malphite = { 644, 280, 62, 37 };

	Malphite = add_value(Malphite);

	printf("말파이트\nHP : %d / MP : %d\n", Malphite.hp, Malphite.mp);
	printf("ATK / DEF : %.1lf / %.1lf\n", Malphite.atk, Malphite.def);
	return 0;
}