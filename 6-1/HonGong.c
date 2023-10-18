#include <stdio.h>

int main(void)
{
	// 6-1 : while문을 사용한 반복문

	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	printf("\n");

	// 6-2 for문을 사용한 반복문

	int b = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		b = b * 2;
	}
	printf("b : %d\n", b);

	printf("\n");

	// 6-3 do ~ while문을 사용한 반복문

	int c = 1;
	int d = 1;

	do
	{
		c = c * 2;
	} while (c < 10);
	printf("c : %d\n", c);

	do d = d * 2; while (d < 10);
	printf("d : %d\n", d);

	printf("\n");

	return 0;
}