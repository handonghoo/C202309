#include <stdio.h>

int main(void)
{
	int one, two, three;
	printf("정수3개를 입력하세요 : ");
	scanf_s("%d%d%d", &one, &two ,&three);
	printf("첫번째값 : %d\n",one );
	printf("두번째값 : %d\n", two);
	printf("세번째값 : %d\n", three);
	return 0;
}