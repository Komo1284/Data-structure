#include <stdio.h>

struct player {
	double hp;
	int atk;
	double def;
};
typedef struct player PC;

int main(void) {
	// 실습문제
	// 캐릭터 정보를 나타내는 변수 stat를 선언합니다.
	// stat 변수를 이용하여 아래 조건을 달성하세요. 
	// 1) 캐릭터의 hp, atk, def를 각각 131.7, 30, 10.9로 저장하고
	//    이를 출력하기 위한 포인터 변수를 준비해서
	//    저장하고 출력하세요.
	// 2) 캐릭터의 atk와 def를 이용하여 피해량을 계산하기 위한 포인터변수를
	//    준비하여 계산하고 출력하세요. 단순 뺄셈연산입니다.
	// 3) 대상의 체력을 읽기 위한 포인터 변수를 준비하여 출력하세요.

	// 포인터 변수는 "대상"을 공유하기 위한 변수
	// - 대상이 무엇인가에 따라 달라짐
	// - 구조체일 경우 구조체만 공유하면 끝.

	PC stat = { 0, 0, 0 };
	// 1번
	PC* pstat = &stat;
	pstat->hp = 131.7;
	pstat->atk = 30;
	pstat->def = 10.9;
	printf("설정된 정보 : %.1lf, %d, %.1lf\n", pstat->hp, pstat->atk, pstat->def);
	// 2번
	int* patk = &stat.atk;
	double* pdef = &stat.def;
	printf("예상 피해량 : %.1lf\n", *patk - *pdef);
	// 3번
	double* php = &stat.hp;
	printf("현재 체력 : %.1lf\n", *php);
	return 0;
}