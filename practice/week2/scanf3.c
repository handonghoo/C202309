
#include <stdio.h>

int main(void)
{
	char one, two, three;
	printf("문자 3개를 입력하세요 : ");
	scanf_s("%c%c%c", &one, &two, &three);
	printf("첫번째값 : %c\n", one);
	printf("두번째값 : %c\n", two);
	printf("세번째값 : %c\n", three);
	return 0;
}