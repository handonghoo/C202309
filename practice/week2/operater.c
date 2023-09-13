#include <stdio.h>

int main()
{ // x와 y값에 부호를 붙여서 연산
	int x = +4;
	int y = -2;

	printf("x+(-y) =%d\n", x + (-y));
	printf("-x+(+y) =%d\n",-x + (+y));

	return 0;
}