#include <stdio.h>
#include <string.h> // 3-7���� ����

int main(void)
{
	//���� 3-1

	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %d\n", ch);

	printf("\n");

	//���� 3-2

	char ch1 = 'A';
	char ch2 = 65;

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch2);
	
	printf("\n");

	//���� 3-4 : unsigned�� �߸� ����� ���

	unsigned int ua;

	ua = 4294967295;
	printf("%d\n", ua);
	ua = -1;
	printf("%u\n", ua);

	printf("\n");

	//���� 3-6 char �迭�� ���ڿ� ����

	char fruit[20] = "strawberry";

	printf("���� : %s\n", fruit);
	printf("������ : %s %s\n", fruit, "jam");

	printf("\n");

	//���� 3-7 char �迭�� ���ڿ� ����

	// char fruit[20] = "strawberry"; 3-6���� �ʱ�ȭ �߱� ������ ����

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	printf("\n");

	//���� 3-8 const�� ����� ����

	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;
}