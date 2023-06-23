#include <stdio.h>
int count_mod(int value) {
	int count = 0;
	if (value < 0) value *= -1;
	for (int i = 1; i <= value; i += 1) {
		if (value % i == 0) count += 1;
	} return count;
}
int sum_values(int start, int end, int mod) {
	int result = 0;
	if (mod > 0 && start <= end) {
		if (start <= 0 || start % 3 == 0) start = (start / mod) * mod;
		else start = ((start / mod) + 1) * mod;
		for (int i = start; i <= end; i += mod) {
			result += i;
		}
	}
	return result;
}

int main(void) {
	// 실습문제
	// 1) 복사받은 정수의 약수의 수량을 구하여 반환하는 함수를 정의하세요.
	// - 복사받은 정수의 부호 관계없이 절대값을 기준으로 구합니다.
	int result1 = count_mod(10);
	int result2 = count_mod(-10);
	printf("결과 : %d, %d\n", result1, result2);

	// 2) 정수들의 합을 구하는 함수를 정의하세요.
	// - 구간과 배수를 복사받아 지정할 수 있습니다.
	// - 시작은 끝보다 작거나 같을 때 합을 구할 수 있습니다.
	printf("합1 : %d\n", sum_values(  1, 10,  2)); // 2 + 4 + 6 + 8 + 10 = 30
	printf("합2 : %d\n", sum_values(-10, -1,  1)); // - 10 + ~ + -1 = -55
	printf("합3 : %d\n", sum_values( 10,  1,  3)); // 0. 시작이 끝보다 큼
	printf("합4 : %d\n", sum_values( -1,-10,  2)); // 0. 시작이 끝보다 큼
	printf("합5 : %d\n", sum_values(  1, 10, -2)); // 0. 배수는 무조건 양수로만 판별
	printf("합6 : %d\n", sum_values( 10, 10,  3)); // 0. 구간 내에 배수가 없음
	
	return 0;
}