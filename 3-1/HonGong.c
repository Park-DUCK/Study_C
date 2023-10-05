#include <stdio.h>
#include <string.h> // 3-7에서 선언

int main(void)
{
	//예제 3-1

	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %d\n", ch);

	printf("\n");

	//예제 3-2

	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);
	
	printf("\n");

	//예제 3-4 : unsigned를 잘못 사용한 경우

	unsigned int ua;

	ua = 4294967295;
	printf("%d\n", ua);
	ua = -1;
	printf("%u\n", ua);

	printf("\n");

	//예제 3-6 char 배열에 문자열 저장

	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기잼 : %s %s\n", fruit, "jam");

	printf("\n");

	//예제 3-7 char 배열에 문자열 복사

	// char fruit[20] = "strawberry"; 3-6에서 초기화 했기 때문에 생략

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	printf("\n");

	//예제 3-8 const를 사용한 변수

	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}