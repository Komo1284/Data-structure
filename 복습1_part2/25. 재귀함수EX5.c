#include <stdio.h>

// 재귀함수에서 종료 조건들이 추가되는 시점
// 1) 기본적인 반복 실행과 종료
// 2) 그 이후에 실행되면 안되는 것에 대한 예외처리 추가
// 3) 대부분의 경우 종료조건이 최초의 잘못된 값을 이용한 호출 통제도 겸함
int get_min(int value, int num) {
	if (value <= 1 || num > value) return 1;
	else if (value % num == 0) return num;
	else return get_min(value, num + 1);
}

int main(void) {
	// 실습
	// - 제일 작은 약수를 반환하는 재귀함수를 정의하세요.
	// - 제일 작은 약수를 구하는 수로 1이하의 수는 제외이고
	//   이 경우에만 1을 반환합니다.
	// - 그 외에는 1보다 큰 최소 약수만 반환합니다.
	printf("결과1 : %d\n", get_min(15, 2));	// 제일 작은 약수는 3
	printf("결과2 : %d\n", get_min(12, 2));	// 제일 작은 약수는 2
	printf("결과3 : %d\n", get_min(17, 2));	// 제일 작은 약수는 17
	printf("결과4 : %d\n", get_min(8, 2));	// 제일 작은 약수는 2
	printf("%d %d\n", get_min(-100, 2), get_min(1, 2)); // 조건이 안맞으니 1 1
	return 0;
}