#include <stdio.h>

int main(void)
{
	
	// 4-1 ����, ���ϱ�, ����, ���ϱ�, ���� ����
	
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;
	
	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� ���� ���� : %d\n", inv);

	printf("\n");

	// 4-2 ��� �������� ���ϴ� ����

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	printf("\n");

	// 4-3 ���� �������� ����

	int c = 10, d = 10;

	++c;
	--d;

	printf("a : %d\n", c);
	printf("b : %d\n", d);

	printf("\n");

	// 4-4 ���� ǥ��� ���� ǥ�⸦ ����� ���� ����
	
	int A = 5, B = 5;
	int pre, post;

	pre = (++A) * 3;
	post = (B++) * 3;
	
	printf("���� ���� �� �ʱ갪 A = %d, B = %d\n", A, B);
	printf("������: (++A) * 3 = %d, ������: (B++) * 3 = %d\n", pre, post);
	printf("%d\n", B);

	printf("\n");

	// 4-7 ������ ������� ����ϴ� ���

	int e = 10, f = 20, res;

	e + f;	// ���� ����� �������� ���â���� ����
	printf("%d + %d = %d\n", e, f, e + f);

	printf("\n");

	return 0;
}