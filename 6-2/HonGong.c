#include <stdio.h>

int main(void)
{
	// 6-4 : ��ø �ݺ����� ����� �� ���

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

	// 6-5 : break�� ����� �ݺ��� ����
	int c;
	int sum = 0;

	for (c = 1; c <= 10; c++)
	{
		sum += c;
		if (sum > 30) break;
	}

	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", c);

	printf("\n");

	return 0;
}