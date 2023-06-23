#include <stdio.h>

// 재귀함수의 이점 : <논리> 를 펼칠 수 있다.
void show_reverse(int num) {
	// 실행
	if (num > 0) {
		printf("%d ", num);
		show_reverse(num - 1); // 저장된 코드를 이용해서 계속 자기자신의 설계도대로 작동함
	}
	// 종료
	else return;
}
// 함수를 호출하고 함수가 호출되고, 이전에 호출된 함수가 종료되지 않은 상태가 됨
// - 코드 실행을 예약할 수 있음
void show_numbers(int num) {
	// 실행
	if (num > 0) {
		show_numbers(num - 1); // 함수가 호출되면 그 함수가 종료될 때까지 모든 동작이 멈춤
		printf("%d ", num);	   // 원래 실행할 예정이었던 내용이 예약된 상태가 됨
	}
	// 종료
	else return;
}

void EX1(void) {
	// 함수 : 코드를 저장한 변수
	// - 코드는 매번 실행될 때 마다 새로운 것을 만들어내게 됨
	// - 코드를 이용해서 계속 실행시킬 수 없을까?

	// 재귀함수
	// - 실행 : 조건을 만족하기 때문에 계속 실행시킬 내용
	// - 종료 : 조건을 만족하지 않기 때문에 반복이 되지 않도록 해주는 실행코드

	// 주의 - 조건문으로 판단해야 함
	// 예시1)
	int num = 10;
	show_reverse(num); printf("\n");
	show_numbers(num); printf("\n");
}

int return_value(int num) {
	printf("%d ", num);
	if (num > 0) {
		return return_value(num - 1);
	}
	else return 9999;
}

int main(void) {
	// 예시2) return이 있는 재귀함수
	// - 마지막에 대충 return시키는 방식으로는 작동하지 않는다.
	// - 재귀함수는 코드를 늘려주는 방식이 아님
	// - 별개 코드가 실행되어 결과물이 나오는 구조
	// - 중간에 값이 잘못 선택되어 return을 예방하려면 반드시..
	//   함수 호출과정에서 return이 붙어야 함
	int result = return_value(5);
	printf("\nRESULT : %d\n", result);
	return 0;
}