#include <stdio.h>

int main(void)
{
	// 4-8  �� ��ȯ �����ڰ� �ʿ��� ���
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res; // �Ҽ��� ���� ������ ����
	printf("(int) %.1lf�� ��� : %d\n", res, a);

	printf("\n");

	// 4-9 sizeof �������� ��� ��
	int c = 10;
	double d = 3.4;

	printf("int : %zd\n", sizeof(c));
	printf("double : %zd\n", sizeof(d));
	printf("������ ��� ũ�� : %zd\n", sizeof(10));
	printf("���� �ᱣ�� ũ�� : %zd\n", sizeof(1.5 + 4.5));
	printf("char �ڷ��� ũ�� : %zd\n", sizeof(char));

	printf("\n");

	// 4-10 ���մ��� ������
	int e = 10, f = 20;
	int res2 = 2;

	res2 *= f + 10;

	printf("res2 = %d\n", res2);

	printf("\n");

	// 4-11 �޸� ������
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

	// 4-12 ���� ������
	int k = 10, l = 20, res5;

	res5 = (k > l) ? k : l; // k, l �� ū ���� res5�� ����
	printf("ū �� : %d\n", res5);

	return 0;
}