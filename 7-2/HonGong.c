#include <stdio.h>

// 7-2 : �Ű������� ���� �Լ�

int get_num(void);

/*
int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;
}
*/

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("����� �Է��ϼ���!\n");
		printf("��� �Է� : ");
		scanf("%d", &num);
	}
	return num;
}

// 7-3 : ��ȯ���� ���� �Լ�

void print_char(char ch, int count);

/*
int main(void)
{
	print_char('@', 5);

	return 0;
}
*/

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}

// 7-4 : ��ȯ���� �Ű������� ��� ���� �Լ�

void print_line(void);

/*
int main(void)
{
	print_line();
	printf("�й�     �̸�     ����     ����\n");
	print_line();

	return 0;
}
*/

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

// 7-5 : ���ȣ�� �Լ�

void fruit(void);

/*
int main(void)
{
	fruit();

	return 0;
}
*/

void fruit(void)
{
	printf("apple\n");
	fruit();
}

// 7-6 : �� �� ����Ǵ� ���ȣ�� �Լ�

void fruit2(count);

/*
int main(void)
{
	fruit2(1);

	return 0;
}
*/

void fruit2(int count)
{
	printf("apple\n");
	if (count == 3) return;
	fruit2(count + 1);
}

// 7-7 �� �� ����Ǵ� ���ȣ�� �Լ� 2

void fruit3(int count);

int main(void)
{
	fruit3(1);

	return 0;
}

void fruit3(int count)
{
	printf("apple\n");
	if (count == 3)return;
	fruit3(count + 1);
	printf("jam\n");
}