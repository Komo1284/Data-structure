#include <stdio.h>

void show_parted(double value) {
	int num = (int)value;
	printf("정수부 : %d, ", num);
	printf("실수부 : %.2lf\n", value - num);
}
void show_prime(int value) {
	int count = 0;
	if (value < 2) printf("%d는 소수가 아닙니다.\n", value);
	else {
		for (int i = 2; i <= value; i += 1) {
			if (value % i == 0) {
				count += 1;
				if (count == 2) break;
			}
		}
		if (count == 1) printf("%d는 소수입니다.\n", value);
		else printf("%d는 소수가 아닙니다.\n", value);
	}
}

int main(void) {
	// 실습문제
	// 1) 실수값 하나를 복사받아 정수부와 실수부를 따로 분리해서
	//    출력하는 함수를 정의하세요.
	show_parted(3.14);	// 정수부 : 3, 실수부 0.14
	show_parted(9.97);	// 정수부 : 9, 실수부 0.97
	show_parted(9.977);	// 정수부 : 9, 실수부 0.98

	// 2) 정수값 하나를 복사받아 해당 정수가 소수인지 여부를 출력하세요.
	//    - 1이하의 정수(음수포함)는 소수가 아닙니다.
	//    - 2이상의 양수중 약수가 2개(1과 자기자신)인 것만 소수입니다.
	show_prime(111);	// 111은(/는) 소수가 아닙니다.
	show_prime(-111);	// -111은(/는) 소수가 아닙니다.
	show_prime(2);		// 2은(/는) 소수입니다.
	show_prime(10);		// 10은(/는) 소수가 아닙니다.
	return 0;
}