#include <stdio.h>

int main(void)
{
	//���� 3-9 : scanf �Լ��� ����� Ű���� �Է�
	/*
	int a;

	scanf("%d", &a);
	printf("�Էµ� �� : %d\n", a);

	printf("\n");
	*/

	//���� 3-10 : scanf �Լ��� ����� ���� �Է�
	/*
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height);

	printf("\n");
	
	scanf�� ���ļ� ���� ������ �ִ� ������ ���� �ּ� ó��
	
	*/
	//���� 3-11 : ���ڿ� ���ڿ� �Է�

	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}