#include <stdio.h>

// 기본형 외의 함수는 다 동사로 함수명을 설정함
double get_avg(void) {
	int num1 = 0;
	int num2 = 0;

	printf("정수 2개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	// 내부에서 제일 가치가 있는 것은 연산된 결과물
	return (num1 + num2) / 2.0;
}
// 반환형은 연산결과가 아니라, "상태값"을 반환시킬 수 있음
// - 정상동작 / 비정상동작 / 에러코드반환 등....
int program(void) {
	double result1 = get_avg();
	double result2 = get_avg();
	double result3 = result1 + result2;
	if (result3 == 0) return 1;
	else {
		printf("%.2lf + %.2lf = %.2lf\n", result1, result2, result1 + result2);
		return 0;
	}
}

int main(void) {
	// 반환형이 있는 함수
	// - 내부에서 "화면으로 출력"하지 않음
	// - 내부 저장공간에서 외부 저장공간으로 필요한 값을 출력함
	// - return은 하나밖에 안됨
	// - 제일 가치가 있는 것을 골라서 return시킴
	while (program() == 0);
	return 0;
}