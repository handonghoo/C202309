#include <stdio.h>

int main()
{// 변수를 정의합니다.
	int i = 0;
	// do while문을 활용해서 i에 1을 더해가며 반복문을 실행시킵니다. 
	do// 일단 1회 실행시킵니다
	{
		i += 1;
		if ((i%2==0)){// 해당 조건으로 홀수만 걸러냅니다
			continue;
		}
		printf(" %d Hello World\n",i);
	}while (i < 10);
	return 0;

}