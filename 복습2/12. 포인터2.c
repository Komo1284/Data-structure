#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

void show_stat(PC* pstat) {
	printf("정보\nHP : %.1lf\nATK : %d\nDEF : %.1lf\n",
		pstat->hp, pstat->atk, pstat->def);
}
void show_hp(double* php) {
	printf("체력 : %.1lf\n", *php);
}

int main(void) {
	// 포인터 사용시점 - 다른 공간에서 쓰는 것을 전제로 함
	// - 같은 공간에서는, 이를 사용할 수 있는 변수명이 있는데 뭐하러?
	// - 포인터의 변수 크기가 큰 이점을 가짐
	/*
	PC* pstat = NULL;
	int* pvalue1 = NULL;
	double* pvalue2 = NULL;
	printf("%d %d %d\n", sizeof(pstat), sizeof(pvalue1), sizeof(pvalue2));
	*/
	// 정수/실수/문자변수 - 실시간으로 갱신하는게 아니면, 복사가 유리함
	// 구조체같이 거대한 것 - 무조건 포인터 쓰는게 유리함

	// 포인터는 함수에서 매개변수자리에 주로 준비가 됨
	// - 호출할 때 주소값을 넣어주면, 이를 이용해서 작동하도록 만듬
	PC stat = { 100, 10, 1 };
	show_stat(&stat);
	show_hp(&stat.hp);
	return 0;
}