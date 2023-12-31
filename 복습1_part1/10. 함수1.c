#include <stdio.h>

void function1(void) {
	// 함수 내부에는 "프로그램"을 저장하여 씀
	// - 프로그램은 절차. 절차는 [자료 -> 처리 -> 정보] 라는 과정을 의미함.
	// - 거대한 과정이 아니라 그 과정 내부에서 발생하는 일부분이 함수가 됨.
	int num1 = 0;
	int num2 = 0;
	double avg = 0;

	printf("정수 2개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	avg = (num1 + num2) / 2.0;

	printf("평균 : %.1lf\n", avg);
	printf("첫번째 값과의 차이 : %.1lf\n", num1 - avg);
	printf("두번째 값과의 차이 : %.1lf\n", num2 - avg);
	// 기본형의 주 사용처
	// - 프로그램 내부에 서로 다른 프로그램을 저장하여 사용할 때
	//   이를 분리하여 관리하기 위한 것
	// - 여러개가 준비되는게 아니면 잘 쓰이지 않음
	// ex) LoL에서 맵마다 다른 규칙으로 게임이 진행됨
}

int main(void) {
	// 함수 : 코드를 변수에 저장하기 위한 문법
	// - 매개변수 : 외부에서 값을 복사받아 초기화되는 변수
	// - 반환형 : 내부에 있던 값을 외부로 복사하여 전달하기 위한 설정
	//           return이 반드시 붙어야 함

	// 기본형 함수 : 매개변수와 반환형이 모두 없는 함수
	function1();
	return 0;
}