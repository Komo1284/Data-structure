#include <stdio.h>
void function1(void) {
	int num1 = 0, num2 = 0, result = 0;
	printf("시작과 끝 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	while (num1 <= num2) {
			result += num1;
			num1 += 1;
	}
	printf("합 : %d\n", result);
}
void function2(void) {
	int num1 = 0, num2 = 0, num3 = 0;
	double avg = 0;
	printf("정수 3개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	avg = (double)(num1 + num2 + num3) / 3;
	printf("1번 차이 : %.2lf\n", num1 - avg);
	printf("2번 차이 : %.2lf\n", num2 - avg);
	printf("3번 차이 : %.2lf\n", num3 - avg);
}
int main(void) {
	// 기본형 함수 실습문제
	// 1) 두 정수를 입력을 받아 그 사이에 있는 정수들의 합을 구하여 출력하는
	//    함수를 정의하세요.
	//    - 첫번째 정수가 시작, 두번째 정수가 끝입니다.
	//    - 1씩 증가하는 정수이고, 시작과 끝을 포함합니다.
	//    - 첫번째가 두번째보다 클 경우 합은 0이 나옵니다.
	function1();

	// 2) 3개의 정수를 입력을 받아 그 평균을 구하여 각각의 값들과의 차이를
	//    출력하는 함수를 정의하세요.
	//    평균은 출력하지 않습니다.
	//    - 평균보다 얼마나 크거나 작은지를 출력합니다.
	//    - 소수점은 2자리까지만 출력합니다.
	function2();
	return 0;
}