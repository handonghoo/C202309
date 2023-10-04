#include <stdio.h>

long multif(long value);
// 함수를 이용해 변수를 넣어 출력합니다. 
void main() {
    printf("1부터 2까지의 곱은 %d\n", multif(2));
    printf("1부터 3까지의 곱은 %d\n", multif(3));
    printf("1부터 5까지의 곱은 %d\n", multif(5));
}
// 함수를 정의합니다. 
long multif(long value)
{
    long i = 1;
    long multif = 1;

    while (i <= value)// while 문을 사용하여 반복
    {
        multif *= i;
        i++ ;
    }
    return multif;
}

