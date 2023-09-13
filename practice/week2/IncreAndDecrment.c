#include <stdio.h>

int main()
{
	int x = 1;
	// x를 여러번 더하고 빼기
	printf("x=%d\n", x++);
	printf("x=%d\n", x++);
	printf("x=%d\n", ++x);
	printf("x=%d\n", x--);
	printf("x=%d\n", x--);
	printf("x=%d\n", --x);
	

	return 0;
}