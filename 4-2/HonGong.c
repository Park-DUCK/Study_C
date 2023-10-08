#include <stdio.h>

int main(void)
{
	// 4-8  형 변환 연산자가 필요한 경우
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res; // 소수점 값은 무조건 버림
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	printf("\n");

	// 4-9 sizeof 연산자의 사용 예
	int c = 10;
	double d = 3.4;

	printf("int : %zd\n", sizeof(c));
	printf("double : %zd\n", sizeof(d));
	printf("정수형 상수 크기 : %zd\n", sizeof(10));
	printf("수식 결괏값 크기 : %zd\n", sizeof(1.5 + 4.5));
	printf("char 자료형 크기 : %zd\n", sizeof(char));

	printf("\n");

	// 4-10 복합대입 연산자
	int e = 10, f = 20;
	int res2 = 2;

	res2 *= f + 10;

	printf("res2 = %d\n", res2);

	printf("\n");

	// 4-11 콤마 연산자
	int g = 10, h = 20;
	int i = 10, j = 20;
	int res3, res4;

	res3 = (++g, ++h);
	res4 = ++i, ++j;

	printf("g:%d, h:%d\n", g, h);
	printf("i:%d, j:%d\n", i, j);
	printf("res3:%d\n", res3);
	printf("res4:%d\n", res4);

	printf("\n");

	// 4-12 조건 연산자
	int k = 10, l = 20, res5;

	res5 = (k > l) ? k : l; // k, l 중 큰 값이 res5에 저장
	printf("큰 값 : %d\n", res5);

	return 0;
}