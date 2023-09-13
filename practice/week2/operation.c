#include <stdio.h>

int main()
{
	int x = 4;
	int y = 2;
	int z;
	// x와 y의 사칙연산
	z = x + y;
	printf("z = x + y = %d\n", z);
	z = x - y;
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);

	return 0;
}