#include <stdio.h>

// 1. 메인함수에서 필요한 항목들 생략하지 말 것.
// 2. 생략하는 습관이 있을 경우 되도록 명시적으로 코드를 작성할 것.
// 3. 실수자료형은 double이고, 이를 위한 서식문자 %lf를 쓰니 주의.
// 4. scanf 안씀. scanf_s를 사용함.
//    scanf : 초창기부터 존재하는 입력함수
//    scanf_s : C11이후부터 표준함수로 규정된 입력함수
int main(void) {
	// float 입력/출력
	float fnum = 0;
	scanf_s("%f", &fnum);
	printf("%f\n", fnum);
	printf("%f\n", 3.14f);

	// double 입력/출력
	double dnum = 0;
	scanf_s("%lf", &dnum);
	printf("%lf\n", dnum);
	printf("%lf\n", 3.14);

	// 문자 입력
	char ch = 0;
	scanf_s("%c", &ch, 1);
	// scanf("%c", &ch);
	printf("%c\n", ch);

	// 문자열 입력
	char word[11] = "";
	scanf_s("%s", word, (int)sizeof(word));
	// scanf("%s", word);
	printf("%s\n", word);
	return 0;
}