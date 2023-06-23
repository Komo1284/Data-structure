#include <stdio.h>
double make_avg(int num1, int num2) {
	return (num1 + num2) / 2.0;
}
int main(void) {
	// 둘 다 있는 함수
	// - 함수 내부에서 연산만 수행하는 구조
	// - 함수를 만들었을 때 가장 많이 만들어서 쓰게 되는 유형
	int n1 = 100;
	int n2 = 1;
	double result = make_avg(n1, n2);
	printf("결과 : %.2lf\n", result);
	
	// 둘 다 있기 때문에 두 특이사항이 조합됨
	// - 변수를 공유하여 쓴 다음, 그 결과가 올바른지 여부를 체크함
	// - scanf_s가 대표예시
	int value1 = 0;
	int value2 = 0;
	int result1 = 0;

	printf("정수 입력 >> ");
	// 매개변수는 포인터로 구성됨
	// - 필요한 값을 불러오고, 필요한 변수를 공유함
	result1 = scanf_s("%d %d", &value1, &value2);
	// return은 정수값
	// - 입력에 성공/성공한 수량/실패 여부를 판별할 수 있음

	printf("결과 : %d, %d, %d\n", value1, value2, result1);
	return 0;
}