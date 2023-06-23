#include <stdio.h>

struct stat {
	int hp;		// ※ 멤버변수
	int mp;		// - 공간을 나눠쓰기 위한 변수명
	double atk;	// - 선언이 아님. 목록준비과정
	double def; // - 초기화 및 값의 저장 불가
};
typedef struct stat Stat; // typedef A B; B를 A로 바꿔서 인식시켜주는 명령어
// 너무 길기 때문에 붙여줌

void EX1(void) {
	// 변수는 다양한 것을 위해 준비되지만 체계적인 관리가 필요함
	// - 다른 종류의 변수들이 하나의 카테고리로 엮여서 관리되어야 함

	// 구조체 : 필요한 변수들을 만들어서 관리할 수 있도록 해주는 사용자정의 자료형
	// - 자료형이고, 변수가 아님
	// - 변수를 만들어야 작동함

	// 구조체를 정의하기 - ※ 함수 외부에서 정의함

	// 구조체를 사용하기 - 변수의 자료형으로써 사용됨
	// 1) typedef가 없을 경우
	struct stat Timo;
	// 2) typedef가 있을 경우
	Stat Timosi;

	// 구조체 변수의 사용 - 멤버연산자를 이용해 멤버변수를 이용함
	Timo.hp = 1000;		// 구조체 변수는 값을 저장/불러오는 것을 못함
	Timosi.hp = 1500;	// 멤버변수를 정확하게 지정해서 저장/불러오기를 함

	// ※ 구조체의 멤버변수 자체는 평범한 정수/실수/문자/문자열 변수이다.
	// -> 각 변수의 사용법을 알고 있으면 그대로 사용하면 됨
	printf("티모의 ATK, DEF >> ");
	scanf_s("%lf", &Timo.atk);
	scanf_s("%lf", &Timo.def);
	printf("티모의 ATK, DEF : %.1lf, %.1lf\n", Timo.atk, Timo.def);
	Timosi.def = 100;
	printf("예상 데미지 : %.1lf\n", Timo.atk - Timosi.def);
}

int main(void) {

	return 0;
}