#include <stdio.h>

int main(void)
{	
	// 2-2
	printf("Be happy\n");
	printf("Cow\rW\a\n");

	printf("\n");
	// 2-4 정수와 실수의 출력

	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("\n");
	// 2-7 문자와 문자열 데이터의 출력

	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");

	return 0;
}