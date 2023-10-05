#include <stdio.h>

int main(void)
{
	//예제 3-9 : scanf 함수를 사용한 키보드 입력
	/*
	int a;

	scanf("%d", &a);
	printf("입력된 값 : %d\n", a);

	printf("\n");
	*/

	//예제 3-10 : scanf 함수를 사용한 연속 입력
	/*
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);

	printf("\n");
	
	scanf가 곂쳐서 실행 오류가 있는 것으로 보고 주석 처리
	
	*/
	//예제 3-11 : 문자와 문자열 입력

	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}