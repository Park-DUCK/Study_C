#include <stdio.h>

int sum(int x, int y);

int main(void)
{
	// 7-1 : 2���� �Լ��� ���� ���α׷�

	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;
}