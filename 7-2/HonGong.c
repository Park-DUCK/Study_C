#include <stdio.h>

// 7-2 : 매개변수가 없는 함수

int get_num(void);

/*
int main(void)
{
	int result;

	result = get_num();
	printf("반환값 : %d\n", result);
	return 0;
}
*/

int get_num(void)
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("양수를 입력하세요!\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}
	return num;
}

// 7-3 : 반환값이 없는 함수

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

// 7-4 : 반환값과 매개변수가 모두 없는 함수

void print_line(void);

/*
int main(void)
{
	print_line();
	printf("학번     이름     전공     학점\n");
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

// 7-5 : 재귀호출 함수

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

// 7-6 : 세 번 실행되는 재귀호출 함수

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

// 7-7 세 번 실행되는 재귀호출 함수 2

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