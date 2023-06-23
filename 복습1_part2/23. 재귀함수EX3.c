#include <stdio.h>

void show_values(int n1, int n2, int n3) {
	if (n2 == 0) return;
	else if (n3 == 0) return;
	else {
		int value = 0;
		if (n2 <= 0) value = -n2;
		else value = n2;
		if (value <= n1) {
			printf("%d ", n2);
			n2 *= n3;
			show_values(n1, n2, n3);
		}
		else return;
	}
}

int main(void) {
	// 절대값 기준으로 지정한 수 이하의 거듭제곱수를 출력하는 재귀함수를 정의하세요.
	show_values(500, 1, 2); printf("\n");	// 1 2 4 8 16 32 64 128
	show_values( 500, 1, -2); printf("\n");	// 1 -2 4 -8 16 -32 64 -128
	show_values(-100, 1,  2); printf("\n");	// 출력하는 내용 없음
	show_values( 500, 1,  3); printf("\n");	// 1 3 9 27 81 243
	show_values( 500, 1, -3); printf("\n");	// 1 -3 9 -27 81 -243
	return 0;
}