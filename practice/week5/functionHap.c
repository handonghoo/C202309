#include <stdio.h>

int hapf(int value);
// 함수에 변수를 넣어 출력합니다. 
void main() {
    printf("1부터 10까지의 합은 %ld\n", hapf(10));
    printf("1부터 100까지의 합은 %ld\n", hapf(100));
    printf("1부터 1000까지의 합은 %ld\n", hapf(1000));
}
// 함수를 정의합니다. 
int hapf(int value) 
{
    int i=1;
    int hap = 0;
    while ( i <= value)// while문을 사용하여 반복
    {
        hap += i;
        i++;
    }
    return hap;
}

