#include <stdio.h>

// 재귀함수는 매번 새롭게 만들어 쓰는 것
// - 재귀함수 자체는 설계도이고, 실행될 때마다 변수가 생성되고
//   새로운 변수에 값이 복사되어 이용하는 방식
void show_binary(int value) {
	if (value == 0) return;
	else {
		show_binary(value / 2);
		printf("%d", value % 2);
	}
}

int main(void) {
	// 14
	// % 2 == 0
	// 7(14 / 2)
	// % 2 == 1
	// 3(7 / 2)
	// % 2 == 1
	// 1(3 / 2)
	// % 2 == 1
	// 0(1 / 2) // 원본값이 0이 되어 반복종료
	show_binary(31); printf("\n");	// 11111
	show_binary(15); printf("\n");	// 1111
	show_binary(8); printf("\n");	// 1000
	show_binary(6); printf("\n");	// 110
	show_binary(5); printf("\n");	// 101
	// 원본
	/*
	int main_num = 14;
	int f1_num = main_num;
	if (f1_num != 0) {
		int f2_num = f1_num / 2;
		if (f2_num != 0) {
			int f3_num = f2_num / 2;
			if (f3_num != 0) {
				int f4_num = f3_num / 2;
				if (f4_num != 0) {
					int f5_num = f4_num / 2;
					if (f5_num != 0) {
						printf("%d", f5_num % 2);
					}
					printf("%d", f4_num % 2);
				}
				printf("%d", f3_num % 2);
			}
			printf("%d", f2_num % 2);
		}
		printf("%d", f1_num % 2);
	}
	*/
	return 0;
}