#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;
	// x와 y의 사칙연산을 괄호를 이용해서 순차적으로 계산합니다.
	z = (x + y) * (x - y);
	printf("z = (x + y) * (x - y) = %d\n", z);
	z = (x *y) +(x / y);
	printf("z = (x * y) +(x / y) = %d\n", z);	
	z = x + y +2004;
	printf("z = x + y + 2004 = %d\n", z);

	return 0;
}