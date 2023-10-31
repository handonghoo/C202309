#include <stdio.h>

int main()
{// 숫자를 입력받습니다.
	int  num = 0;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);
	// 입력받은 숫자에 따라 조건문을 통해 다른 값을 출력합니다. 
	if (num == 0)
		printf("zero");
	else if (num == 1)
		printf("one");
	else if (num == 2)
		printf("two");
	else
		printf("not 0 ~ 2");


	return 0;
}