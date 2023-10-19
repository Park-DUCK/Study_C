#include <stdio.h>

int main(void)
{
	// 8-4 : 문자열을 저장하는 char형 배열
	/*
	char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	printf("\n");
	
	// 8-6 : 빈칸을 포함한 문자열 입력

	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);

	*/

	// 8-7 : 널 문자가 없는 문자열

	char str[5];

	str[0] = '0';
	str[1] = 'K';
	printf("%s\n", str);

	return 0;
}