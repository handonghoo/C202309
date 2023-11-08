#include <stdio.h>

void summation(double* a, double* b, double* result);
void subtraction(double* a, double* b, double* result);
void multiplication(double* a, double* b, double* result);
void division(double* a, double* b, double* result);


int main() {
	double a;
	double b;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	double result;

	// 두 수의 합을 구하는 함수 호출
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf\n",a,b, result);

	// 두 수의 차를 구하는 함수 호출
	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf\n",a,b, result);

	// 두 수의 곱을 구하는 함수 호출
	multiplication(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf\n",a,b, result);

	// 두 수의 나눗셈을 구하는 함수 호출
	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf\n",a,b, result);

	return 0;
}

// 두 수의 합을 구하는 함수
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// 두 수의 차를 구하는 함수
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// 두 수의 곱을 구하는 함수
void multiplication(double* a, double* b, double* result) {
	*result = *a * *b;
}

// 두 수의 나눗셈을 구하는 함수
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}
