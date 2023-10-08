#include <stdio.h>

int main(void)
{
	
	// 4-1 대입, 더하기, 빼기, 곱하기, 음수 연산
	
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;
	
	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수 연산 : %d\n", inv);

	printf("\n");

	// 4-2 몫과 나머지를 구하는 연산

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

	// 4-3 증감 연산자의 연산

	int c = 10, d = 10;

	++c;
	--d;

	printf("a : %d\n", c);
	printf("b : %d\n", d);

	printf("\n");

	// 4-4 전위 표기와 후위 표기를 사용한 증감 연산
	
	int A = 5, B = 5;
	int pre, post;

	pre = (++A) * 3;
	post = (B++) * 3;
	
	printf("증감 연산 후 초깃값 A = %d, B = %d\n", A, B);
	printf("전위형: (++A) * 3 = %d, 후위형: (B++) * 3 = %d\n", pre, post);
	printf("%d\n", B);

	printf("\n");

	// 4-7 연산의 결과값을 사용하는 방법

	int e = 10, f = 20, res;

	e + f;	// 연산 결과는 버려지고 출력창에서 설명
	printf("%d + %d = %d\n", e, f, e + f);

	printf("\n");

	return 0;
}