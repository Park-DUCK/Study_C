#include <stdio.h>

int main(void)
{
	// 6-4 : 중첩 반복문을 사용한 별 출력

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	int a, b;
	
	for (a = 2; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			printf("%d * %d = %d\n", a, b, a * b);
		}
	}
	printf("\n");

	// 6-5 : break를 사용한 반복문 종료
	int c;
	int sum = 0;

	for (c = 1; c <= 10; c++)
	{
		sum += c;
		if (sum > 30) break;
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", c);

	printf("\n");

	return 0;
}