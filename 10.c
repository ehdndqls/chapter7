#include<stdio.h>
int main() {
	int n, i;
	double r, result = 1;

	printf("실수의 값을 입력하시오: ");
	scanf_s("%lf", &r);
	printf("거듭제곱횟수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		result *= r;
	}
	printf("결과값은 %lf", result);

	return 0;
}