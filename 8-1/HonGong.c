#include <stdio.h>

int main(void)
{
	// 8-2 : �迭�� �ݺ����� ����� ���� ó�� ���α׷�

	int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	printf("\n");

	int score1[5];
	int j;
	int total1 = 0;
	double avg1;
	int count;

	count = sizeof(score1) / sizeof(score1[0]);

	for (j = 0; j < count; j++)
	{
		scanf("%d", &score1[j]);
	}

	for (j = 0; j < count; j++)
	{
		total1 += score1[j];
	}
	avg1 = total1 / (double)count;

	for (j = 0; j < count; j++)
	{
		printf("%5d", score1[j]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg1);

	return 0;
}