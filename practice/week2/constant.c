#include <stdio.h>
// 전역적으로 상수를 지정합니다.
#define X	   1
#define PI   3.141592
// 결과출력 => 여러번 상수를 쓸때 효율 상승
int main()
{
	double z;

	z = X + PI;

	printf("%f", z);

	return 0;
}