#include <stdio.h>

int main(void)
{
	// 5-1 : if문의 기본 형식
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}

	printf("a : %d, b : %d\n", a, b);

	printf("\n");

	// 5-2 : if ~ else문의 사용
	int c = 10;

	if (c >= 10)
	{
		c = 1;
	}
	else
	{
		c = -1;
	}

	printf("c : %d\n", c);

	printf("\n");

	// 5-3 if ~ else if ~ else문 사용

	int d = 0, e = 0;

	if (d > 0)
	{
		e = 1;
	}
	else if (d == 0)
	{
		e = 2;
	}
	else
	{
		e = 3;
	}

	printf("e : %d\n", e);
	
	printf("\n");

	return 0;
}