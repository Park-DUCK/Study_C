#include <stdio.h>

int main(void)
{
	// 8-4 : ���ڿ��� �����ϴ� char�� �迭
	/*
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	printf("\n");
	
	// 8-6 : ��ĭ�� ������ ���ڿ� �Է�

	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	*/

	// 8-7 : �� ���ڰ� ���� ���ڿ�

	char str[5];

	str[0] = '0';
	str[1] = 'K';
	printf("%s\n", str);

	return 0;
}