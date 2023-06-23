#include <stdio.h>

int get_count(void) {
	int num = 0;
	int count = 0;
	printf("정수 하나 입력 >> "); scanf_s("%d", &num);
	for (int i = 1; i <= num; i += 1) {
		if (num % i == 0) count += 1;
	}
	return count;
}
int calculator(void) {
	int num1 = 0;
	int num2 = 0;
	printf("정수 2개 입력 >> "); scanf_s("%d", &num1); scanf_s("%d", &num2);
	if (num2 == 0) {
		printf("프로그램을 종료합니다.\n");
		return 1;
	}
	else {
		printf("결과 : %d\n", num1 / num2);
		return 0;
	}
}

int main(void) {
	// 실습문제1
	// 양수 하나를 입력을 받아 약수의 수량을 구하여 반환하는 함수를 정의하세요.
	// - 0 이하의 값은 약수를 구하지 않고 0을 반환합니다.
	int result = get_count();
	printf("약수의 수량 : %d개\n", result);

	// 실습문제2
	// 두 정수를 입력을 받아 몫을 구하여 출력하는 함수를 정의하세요.
	// 이 함수는 상태값을 반환합니다.
	// - 첫번째는 상관없으나 두번째가 0이면 몫을 구할 수 없습니다.
	// - 두번째 정수가 0이면 1을 반환하고, 그 외에는 0을 반환합니다.
	while (1) {
		if (calculator() == 1) break;
	}
	return 0;
}