#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

int main(void) {
	// 포인터 변수 : 주소값을 이용해 대상을 지정하여 공유하는 변수
	// - 변수이기 때문에 대상(주소값)을 바꿀 수 있다.
	// - 변수이기 때문에 주소값을 연산해야 쓸 수 있다.
	// - 변수이기 때문에 자체 크기를 가진다.

	// 포인터변수는 어떻게 준비하나?
	// - 변수를 선언하며 대상 정보를 설정함
	PC* target = NULL;			// NULL : 주소값 0
	double* that_var1 = NULL;	// - 내부가 비어있음을 의미함
	int* that_var2 = NULL;		// - 항상 NULL로 초기화해주는 편이 좋음
	
	// 포인터는 대상이 있어야만 함
	PC timo = { 0, 0, 0 };

	// 복사방식은, "선언된 변수는 사라지지 않고" 남게 됨
	// - 캐릭터가 2개가 될 수 있음
	target = &timo;			// 구조체 변수 공유
	that_var1 = &timo.hp;	// 일반 변수 공유1
	that_var2 = &timo.atk;	// 일반 변수 공유2

	// 포인터는 항상 참조연산을 붙여 씀
	// - 변수의 모양이 바뀜. 바뀐 변수의 사용방식은 똑같음
	*that_var1 = 150;	// timo.hp = 150;
	*that_var2 = 30;	// timo.atk = 30;
	target->def = 0.24;	// timo.def = 0.24;
	printf("마우스포인터를 올렸을 때 : %.2lf\n", *that_var1);
	printf("보이지 않는 곳으로부터 공격당할 때 : %d\n", *that_var2);
	printf("나의 챔피언 정보\n%.2lf, %d, %.2lf\n",
		target->hp, target->atk, target->def);
	return 0;
}