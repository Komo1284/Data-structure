#include <stdio.h>

// 1. �����Լ����� �ʿ��� �׸�� �������� �� ��.
// 2. �����ϴ� ������ ���� ��� �ǵ��� ��������� �ڵ带 �ۼ��� ��.
// 3. �Ǽ��ڷ����� double�̰�, �̸� ���� ���Ĺ��� %lf�� ���� ����.
// 4. scanf �Ⱦ�. scanf_s�� �����.
//    scanf : ��â����� �����ϴ� �Է��Լ�
//    scanf_s : C11���ĺ��� ǥ���Լ��� ������ �Է��Լ�
int main(void) {
	// float �Է�/���
	float fnum = 0;
	scanf_s("%f", &fnum);
	printf("%f\n", fnum);
	printf("%f\n", 3.14f);

	// double �Է�/���
	double dnum = 0;
	scanf_s("%lf", &dnum);
	printf("%lf\n", dnum);
	printf("%lf\n", 3.14);

	// ���� �Է�
	char ch = 0;
	scanf_s("%c", &ch, 1);
	// scanf("%c", &ch);
	printf("%c\n", ch);

	// ���ڿ� �Է�
	char word[11] = "";
	scanf_s("%s", word, (int)sizeof(word));
	// scanf("%s", word);
	printf("%s\n", word);
	return 0;
}