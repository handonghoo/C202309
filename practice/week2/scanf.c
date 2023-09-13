#include <stdio.h>

int main(void)
{
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);
	return 0;
}