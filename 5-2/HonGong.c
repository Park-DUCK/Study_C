#include <stdio.h>

int main(void)
{
	// 5-4 : ��ø�� if��

	int a = 20, b = 10;
	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a : %d, b : %d\n", a, b);
	
	printf("\n");

	// 5-6 : switch ~ case���� ���

	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	printf("\n");

	return 0;
}